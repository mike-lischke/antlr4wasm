/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import {
    ANTLRInputStream, BailErrorStrategy, CommonTokenStream, DefaultErrorStrategy, ParseTree, PredictionMode,
} from "../../src/antlr4-runtime.js";
import { MySQLErrorListener } from "./MySQLErrorListener.js";

import MySQLLexer from "./targets/TypeScriptWasm/MySQLLexer.js";
import MySQLParser from "./targets/TypeScriptWasm/MySQLParser.js";
import { IParserErrorInfo, IStatementSpan, MySQLParseUnit } from "./helpers.js";


export class ParseServiceWasm {
    private stream = new ANTLRInputStream();
    private lexer = new MySQLLexer(this.stream);
    private tokenStream = new CommonTokenStream(this.lexer);
    private parser = new MySQLParser(this.tokenStream);
    private errors: IParserErrorInfo[] = [];

    private tree: ParseTree | undefined;

    private errorListener: MySQLErrorListener;

    public constructor(charSets: Set<string>) {
        this.errorListener = new MySQLErrorListener(
            (message: string, tokenType: number, startIndex: number, line: number, column: number,
                length: number): void => {

                if (length === 0) {
                    length = 1;
                }

                this.errors.push({ message, tokenType, charOffset: startIndex, line, offset: column, length });
            },
        );

        this.lexer.removeErrorListeners();
        this.lexer.addErrorListener(this.errorListener);

        this.parser.removeParseListeners();
        this.parser.removeErrorListeners();
        this.parser.addErrorListener(this.errorListener);

        this.lexer.charSets = charSets;
    }

    public cleanup(): void {
        this.parser.delete();
        this.tokenStream.delete();
        this.lexer.delete();
        this.stream.delete();
    }

    /**
     * Quick check for syntax errors.
     *
     * @param text The text to parse.
     * @param unit The type of input. Can be used to limit the available syntax to certain constructs.
     * @param serverVersion The version of MySQL to use for checking.
     * @param sqlMode The current SQL mode in the server.
     *
     * @returns True if no error was found, otherwise false.
     */
    public errorCheck(text: string, unit: MySQLParseUnit, serverVersion: number, sqlMode: string): boolean {
        this.applyServerDetails(serverVersion, sqlMode);
        const tree = this.startParsing(text, true, unit);
        tree?.delete();

        // Explicitly check for an unfinished multi-line comment and add this as an own error.
        const tokens = this.tokenStream.getTokens();
        if (tokens.size() > 1) { // There's always the EOF token at the end.
            const lastToken = tokens.get(tokens.size() - 2);
            if (lastToken.getType() === MySQLLexer.INVALID_BLOCK_COMMENT) {
                this.errors.splice(0, 0, {
                    message: "Unfinished multi line comment",
                    tokenType: MySQLLexer.INVALID_BLOCK_COMMENT,
                    charOffset: lastToken.getStartIndex(),
                    line: lastToken.getLine(),
                    offset: lastToken.getCharPositionInLine(),
                    length: 100,
                });
            }
        }

        tokens.delete();

        return this.errors.length === 0;
    }

    /**
     * Returns a collection of errors from the last parser run. The start position is offset by the given
     * value (used to adjust error position in a larger context).
     *
     * @param offset The character offset to add for each error.
     *
     * @returns The updated error list from the last parse run.
     */
    public errorsWithOffset(offset: number): IParserErrorInfo[] {
        const result: IParserErrorInfo[] = [...this.errors];
        result.forEach((error: IParserErrorInfo) => {
            error.charOffset += offset;
        });

        return result;
    }

    /**
     * This is the method to parse text. Depending on fast mode it creates a syntax tree and otherwise
     * bails out if an error was found, asap.
     *
     * @param text The text to parse.
     * @param fast If true use fast mode (no parse tree creation, fast bail out in case of errors).
     * @param unit The type of input to parse.
     *
     * @returns A parse tree if enabled.
     */
    private startParsing(text: string, fast: boolean, unit: MySQLParseUnit): ParseTree | undefined {
        this.errors = [];
        this.stream.load(text);
        this.lexer.setInputStream(this.stream);
        this.tokenStream.setTokenSource(this.lexer);

        this.parser.reset();
        this.parser.setBuildParseTree(!fast);

        // First parse with the bail error strategy to get quick feedback for correct queries.
        // Note: there's no need to delete the strategy instance. The error handler will take care.
        this.parser.setErrorHandler(new BailErrorStrategy());
        this.parser.getInterpreter().setPredictionMode(PredictionMode.SLL);

        try {
            this.tree = this.parseUnit(unit);
        } catch (e) {
            if (this.isCancellationException(e)) {
                // Even in fast mode we have to do a second run if we got no error yet (BailErrorStrategy
                // does not do full processing).
                if (fast && this.errors.length > 0) {
                    this.tree = undefined;
                } else {
                    // If parsing was canceled we either really have a syntax error or we need to do a second step,
                    // now with the default strategy and LL parsing.
                    this.tokenStream.seek(0);
                    this.parser.reset();
                    this.errors = [];
                    this.parser.setErrorHandler(new DefaultErrorStrategy());
                    this.parser.getInterpreter().setPredictionMode(PredictionMode.LL);
                    this.tree = this.parseUnit(unit);
                }
            } else {
                throw e;
            }
        }

        return this.tree;
    }

    /**
     * Starts a single parse run for a given input type.
     *
     * @param unit The type of input to parse.
     *
     * @returns A parse tree, if enabled.
     */
    private parseUnit(unit: MySQLParseUnit): ParseTree | undefined {
        switch (unit) {
            case MySQLParseUnit.CreateRoutine:
                return this.parser.createRoutine();

            case MySQLParseUnit.DataType:
                return this.parser.dataTypeDefinition();

            default: // Generic.
                return this.parser.query();
        }
    }

    private applyServerDetails(serverVersion: number, sqlMode: string): void {
        this.lexer.serverVersion = serverVersion;
        this.lexer.sqlModeFromString(sqlMode);
        this.parser.serverVersion = serverVersion;
        this.parser.sqlModes = this.lexer.sqlModes;
    }

    private isCancellationException(e: Error): boolean {
        return e.name === "std::__nested<antlr4::ParseCancellationException>";
    }
}
