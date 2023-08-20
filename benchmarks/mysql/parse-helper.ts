/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import {
    ANTLRInputStream, BailErrorStrategy, CommonTokenStream, DefaultErrorStrategy, ParseCancellationException, ParseTree,
    PredictionMode,
} from "../../src/antlr4-runtime.js";
import { MySQLErrorListener } from "./MySQLErrorListener.js";

import MySQLLexer from "./generated/TypeScript/MySQLLexer.js";
import MySQLParser from "./generated/TypeScript/MySQLParser.js";

/** Some code was taken from the MySQL Shell for VS Code extension. */

export type ErrorReportCallback = (message: string, tokenType: number, startIndex: number, line: number,
    column: number, length: number) => void;

export interface TextSpan {
    start: number;
    length: number;
}

/** Indicates how a statement ends. */
export enum StatementFinishState {
    /** Ends with a delimiter. */
    Complete,

    /** Ends with an open comment (multiline or single line w/o following new line). */
    OpenComment,

    /** A string (single, double or backtick quoted) wasn't closed. */
    OpenString,

    /** The delimiter is missing. */
    NoDelimiter,

    /** The statement changes the delimiter. */
    DelimiterChange,
}

export enum MySQLParseUnit {
    Generic,
    CreateSchema,
    CreateTable,
    CreateTrigger,
    CreateView,
    CreateFunction,
    CreateProcedure,
    CreateRoutine,
    CreateUdf,
    CreateEvent,
    CreateIndex,
    Grant,
    DataType,
    CreateLogfileGroup,
    CreateServer,
    CreateTablespace,
}

export interface IStatementSpan {
    /**
     * The delimiter with which this statement ended or undefined if no delimiter was found.
     */
    delimiter?: string;

    /** Start and length of the entire statement, including leading whitespaces. */
    span: TextSpan;

    contentStart: number;

    /** The offset where non-whitespace content starts. */
    state: StatementFinishState;
}

export interface IParserErrorInfo {
    message: string;
    tokenType: number;

    /** Offset from the beginning of the input to the error position. */
    charOffset: number;

    /** Error line. */
    line: number;

    /** Char offset in the error line to the error start position. */
    offset: number;
    length: number;
}

export class MySQLParsingServices {
    private static readonly delimiterKeyword = /delimiter /i;

    private stream = new ANTLRInputStream();
    private lexer = new MySQLLexer(this.stream);
    private tokenStream = new CommonTokenStream(this.lexer);
    private parser = new MySQLParser(this.tokenStream);
    private errors: IParserErrorInfo[] = [];

    private tree: ParseTree | undefined;

    private errorListener: MySQLErrorListener;

    public constructor() {
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
    }

    /**
     * Takes a block of SQL text and splits it into individual statements, by determining start position,
     * length and current delimiter for each. It is assumed the line break is a simple \n.
     * Note: the length includes anything up to (and including) the delimiter position.
     *
     * @param sql The SQL to split.
     * @param delimiter The initial delimiter to use.
     *
     * @returns A list of statement ranges.
     */
    public determineStatementRanges(sql: string, delimiter: string): IStatementSpan[] {

        const result: IStatementSpan[] = [];

        let start = 0;
        let head = start;
        let tail = head;
        const end = head + sql.length;

        let haveContent = false; // Set when anything else but comments were found for the current statement.

        /**
         * Checks the current tail position if that touches a delimiter. If that's the case then the current statement
         * is finished and a new one starts.
         *
         * @returns True if a delimiter was found, otherwise false.
         */
        const checkDelimiter = (): boolean => {
            if (sql[tail] === delimiter[0]) {
                // Found possible start of the delimiter. Check if it really is.
                if (delimiter.length === 1) {
                    // Most common case.
                    ++tail;
                    result.push({
                        delimiter,
                        span: { start, length: tail - start },
                        contentStart: haveContent ? head : start,
                        state: StatementFinishState.Complete,
                    });

                    head = tail;
                    start = head;
                    haveContent = false;

                    return true;
                } else {
                    // Multi character delimiter?
                    const candidate = sql.substring(tail, tail + delimiter.length);
                    if (candidate === delimiter) {
                        // Multi char delimiter is complete. Tail still points to the start of the delimiter.
                        tail += delimiter.length;
                        result.push({
                            delimiter,
                            span: { start, length: tail - start },
                            contentStart: haveContent ? head : start,
                            state: StatementFinishState.Complete,
                        });

                        head = tail;
                        start = head;
                        haveContent = false;

                        return true;
                    }
                }
            }

            return false;
        };

        while (tail < end) {
            if (!checkDelimiter()) {
                switch (sql[tail]) {
                    case "/": { // Possible multi line comment or hidden (conditional) command.
                        if (sql[tail + 1] === "*") {
                            if (sql[tail + 2] === "!") { // Hidden command.
                                if (!haveContent) {
                                    haveContent = true;
                                    head = tail;
                                }
                                ++tail;
                            }
                            tail += 2;

                            while (true) {
                                while (tail < end && sql[tail] !== "*") {
                                    ++tail;
                                }

                                if (tail === end) { // Unfinished multiline comment.
                                    result.push({
                                        delimiter,
                                        span: { start, length: tail - start },
                                        contentStart: haveContent ? head : start,
                                        state: StatementFinishState.OpenComment,
                                    });
                                    start = tail;
                                    head = tail;

                                    break;
                                } else {
                                    if (sql[++tail] === "/") {
                                        ++tail; // Skip the slash too.
                                        break;
                                    }
                                }
                            }

                            if (!haveContent) {
                                head = tail; // Skip over the comment.
                            }

                        } else {
                            ++tail;
                            haveContent = true;
                        }

                        break;
                    }

                    case "-": { // Possible single line comment.
                        const temp = tail + 2;
                        if (sql[tail + 1] === "-" && (sql[temp] === " " || sql[temp] === "\t" || sql[temp] === "\n")) {
                            // Skip everything until the end of the line.
                            tail += 2;
                            while (tail < end && sql[tail] !== "\n") {
                                ++tail;
                            }

                            if (tail === end) { // Unfinished single line comment.
                                result.push({
                                    delimiter,
                                    span: { start, length: tail - start },
                                    contentStart: haveContent ? head : start,
                                    state: StatementFinishState.OpenComment,
                                });
                                start = tail;
                                head = tail;

                                break;
                            }

                            if (!haveContent) {
                                head = tail;
                            }
                        } else {
                            ++tail;
                            haveContent = true;
                        }

                        break;
                    }

                    case "#": { // MySQL single line comment.
                        while (tail < end && sql[tail] !== "\n") {
                            ++tail;
                        }

                        if (tail === end) { // Unfinished single line comment.
                            result.push({
                                delimiter,
                                span: { start, length: tail - start },
                                contentStart: haveContent ? head : start,
                                state: StatementFinishState.OpenComment,
                            });
                            start = tail;
                            head = tail;

                            break;
                        }

                        if (!haveContent) {
                            head = tail;
                        }

                        break;
                    }

                    case '"':
                    case "'":
                    case "`": { // Quoted string/id. Skip this in a local loop.
                        haveContent = true;
                        const quote = sql[tail++];
                        while (tail < end && sql[tail] !== quote) {
                            // Skip any escaped character too.
                            if (sql[tail] === "\\") {
                                ++tail;
                            }
                            ++tail;
                        }

                        if (sql[tail] === quote) {
                            ++tail; // Skip trailing quote char if one was there.
                        } else { // Unfinished single string.
                            result.push({
                                delimiter,
                                span: { start, length: tail - start },
                                contentStart: haveContent ? head : start,
                                state: StatementFinishState.OpenString,
                            });
                            start = tail;
                            head = tail;
                        }

                        break;
                    }

                    case "d":
                    case "D": {
                        // Possible start of the DELIMITER word. Also consider the mandatory space char.
                        if (tail + 10 >= end) {
                            if (!haveContent) {
                                haveContent = true;
                                head = tail;
                            }
                            ++tail;
                            break; // Not enough input for that.
                        }

                        const candidate = sql.substring(tail, tail + 10);
                        if (candidate.match(MySQLParsingServices.delimiterKeyword)) {
                            // Delimiter keyword found - get the new delimiter (all consecutive letters).
                            // But first push anything we found so far and haven't pushed yet.
                            if (haveContent && tail > start) {
                                result.push({
                                    delimiter,
                                    span: { start, length: tail - start },
                                    contentStart: head,
                                    state: StatementFinishState.NoDelimiter,
                                });
                                start = tail;
                            }

                            head = tail;
                            tail += 10;
                            let run = tail;

                            // Skip leading spaces + tabs.
                            while (run < end && (sql[run] === " " || sql[run] === "\t")) {
                                ++run;
                            }
                            tail = run;

                            // Forward to the first whitespace after the current position (on this line).
                            while (run < end && sql[run] !== "\n" && sql[run] !== " " && sql[run] !== "\t") {
                                ++run;
                            }

                            delimiter = sql.substring(tail, run);
                            const length = delimiter.length;
                            if (length > 0) {
                                tail += length - delimiter.length;

                                result.push({
                                    delimiter,
                                    span: { start, length: run - start },
                                    contentStart: head,
                                    state: StatementFinishState.DelimiterChange,
                                });

                                tail = run;
                                head = tail;
                                start = head;
                                haveContent = false;
                            } else {
                                haveContent = true;
                                head = tail;
                            }
                        } else {
                            ++tail;

                            if (!haveContent) {
                                haveContent = true;
                                head = tail;
                            }
                        }

                        break;
                    }

                    default:
                        if (!haveContent && sql[tail] > " ") {
                            haveContent = true;
                            head = tail;
                        }
                        ++tail;

                        break;
                }
            }
        }

        // Add remaining text to the range list.
        if (head < end) {
            result.push({
                span: { start, length: end - start },
                contentStart: haveContent ? head : start - 1, // -1 to indicate no content
                state: StatementFinishState.NoDelimiter,
            });
        }

        return result;
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
        this.startParsing(text, true, unit);

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
        this.parser.setErrorHandler(new BailErrorStrategy());
        this.parser.getInterpreter().setPredictionMode(PredictionMode.SLL);

        try {
            this.tree = this.parseUnit(unit);
        } catch (e) {
            // The operator `instanceof` does not work here, so we have to check the class name.
            if (e.name === "antlr4::ParseCancellationException*") {
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

}
