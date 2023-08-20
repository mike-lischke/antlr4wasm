/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import fs from "fs";
import path from "path";
import assert from "assert";
import { fileURLToPath } from 'url';

import {
    ANTLRInputStream, BailErrorStrategy, CommonTokenStream, std$$exception, PredictionMode
} from "../../src/antlr4-runtime.js";
import MySQLLexer from "./generated/TypeScript/MySQLLexer.js";
import MySQLParser from "./generated/TypeScript/MySQLParser.js";

import { MySQLParseUnit, MySQLParsingServices, StatementFinishState } from "./parse-helper.js";

const __filename = fileURLToPath(import.meta.url);

const services = new MySQLParsingServices();

interface ITestFile {
    name: string;
    initialDelimiter: string;
}

/** Information about a statement with version information. */
interface IVersionCheckResult {
    /** True if the version in the statement matched a given version. */
    matched: boolean;

    /** The statement with stripped version information. */
    statement: string;

    /** The found version. Can be 0 if the statement contains no version. */
    version: number;
}

const versionPattern = /^\[(<|<=|>|>=|=)(\d{5})\]/;
const relationMap = new Map<string, number>([
    ["<", 0], ["<=", 1], ["=", 2], [">=", 3], [">", 4],
]);

/**
 * Similar like checkStatementVersion, but only extracts the statement version and checks that against the given
 * minimum version. Relational operators are only used to adjust the extracted version.
 *
 * @param statement The statement with an optional version part at the beginning.
 * @param minimumVersion The server version to match the version part against.
 *
 * @returns The check result.
 */
export const checkMinStatementVersion = (statement: string, minimumVersion: number): IVersionCheckResult => {
    const result: IVersionCheckResult = {
        matched: true,
        statement,
        version: minimumVersion,
    };

    const matches = statement.match(versionPattern);
    if (matches) {
        result.statement = statement.replace(versionPattern, "");

        const relation = matches[1];
        result.version = parseInt(matches[2], 10);

        switch (relationMap.get(relation)) {
            case 0: { // Less than the given version.
                --result.version;

                break;
            }

            case 4: { // Greater than the given version.
                ++result.version;

                break;
            }

            default:
        }
    }

    result.matched = result.version >= minimumVersion;

    return result;
};

const splitterTest = () => {
    const data = fs.readFileSync(path.join(path.dirname(__filename), "/data/sakila-db/sakila-data.sql"), { encoding: "utf-8" });
    assert(data.length === 3231413);

    let ranges = services.determineStatementRanges(data, ";");
    assert(ranges.length === 57);

    const r1 = ranges[0];

    // A range includes all whitespaces/comments before it. The file starts with a copyright notice so all of it
    // is part of the first range.
    assert(r1.contentStart - r1.span.start === 1533);
    const s1 = data.substring(r1.contentStart, r1.span.start + r1.span.length);
    assert(s1 === "SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;");

    const r2 = ranges[56];
    const s2 = data.substring(r2.contentStart, r2.span.start + r2.span.length);
    assert(s2 === "SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;");

    const statement = fs.readFileSync(path.join(path.dirname(__filename), "./data/sakila-db/single_statement.sql"), { encoding: "utf-8" });
    assert(statement.length === 30349);

    const r3 = ranges[30];
    const s3 = data.substring(r3.contentStart, r3.span.start + r3.span.length);
    assert(s3 === statement);

    const schema = fs.readFileSync(path.join(path.dirname(__filename), "./data/sakila-db/sakila-schema.sql"), { encoding: "utf-8" });
    assert(schema.length === 23219);

    ranges = services.determineStatementRanges(schema, ";");
    assert(ranges.length === 56);

    const r4 = ranges[43];
    const s4 = schema.substring(r4.contentStart, r4.span.start + r4.span.length);
    assert(r4.state === StatementFinishState.DelimiterChange);
    assert(s4 === "DELIMITER $$");
    assert(r4.delimiter === "$$");
};

const parseFiles = () => {
    const testFiles: ITestFile[] = [
        // Large set of all possible query types in different combinations and versions.
        { name: "./data/statements.txt", initialDelimiter: "$$" },

        // Not so many, but some very long insert statements.
        { name: "./data/sakila-db/sakila-data.sql", initialDelimiter: ";" },
    ];

    testFiles.forEach((entry) => {
        const sql = fs.readFileSync(path.join(path.dirname(__filename), entry.name), { encoding: "utf-8" });

        const ranges = services.determineStatementRanges(sql, entry.initialDelimiter);
        ranges.forEach((range, index) => {
            // The delimiter is considered part of the statement (e.g. for editing purposes)
            // but must be ignored for parsing.
            const end = range.span.start + range.span.length - (range.delimiter?.length ?? 0);
            const statement = sql.substring(range.span.start, end).trim();

            // The parser only supports syntax from 8.0 onwards. So we expect errors for older statements.
            const checkResult = checkMinStatementVersion(statement, 80000);
            if (checkResult.matched) {
                const result = services.errorCheck(checkResult.statement, MySQLParseUnit.Generic,
                    checkResult.version, "ANSI_QUOTES");
                if (!result) {
                    const errors = services.errorsWithOffset(0);
                    const error = errors[0];
                    assert(false, `This query failed to parse (${index}: ${checkResult.version}):\n${statement}\n` +
                        `with error: ${error.message}, line: ${error.line - 1}, column: ${error.offset}`);
                }
            } else {
                // Ignore all other statements. Since we don't check for versions below 8.0 in the grammar they
                // may unexpectedly succeed.
            }
        });
    });
};

try {
    // 1. Start with splitter tests.
    splitterTest();

    // 2. Now parse the content of some files of various complexity and size.
    parseFiles();

    /*
        const stream = new ANTLRInputStream();
        stream.load("select * from sakila.actor", true);

        const lexer = new MySQLLexer(stream);
        const tokenStream = new CommonTokenStream(lexer);

        tokenStream.fill();
        const tokens = tokenStream.getTokens();

        for (let i = 0; i < tokens.size(); ++i) {
            console.log(tokens.get(i).toString());
        }
        tokens.delete();

        const parser = new MySQLParser(tokenStream);
        const strategy = new BailErrorStrategy();
        parser.setErrorHandler(strategy); // Takes ownership of the strategy. Don't delete it manually!
        parser.getInterpreter().setPredictionMode(PredictionMode.SLL);
        const tree = parser.query();

        const names = parser.getRuleNames();
        //console.log(tree.toStringTree(names, true));
        console.log(tree.toStringTree(parser, true));
        names.delete();

        tree.delete();
        parser.delete();
        lexer.delete();
        stream.delete();*/
} catch (e) {
    if (e instanceof std$$exception) {
        console.log(e.what());
    } else if (e.stack) {
        console.error(e.stack);
    } else {
        console.error(e.toString());
    }
} finally {
    console.log("Done");
}
