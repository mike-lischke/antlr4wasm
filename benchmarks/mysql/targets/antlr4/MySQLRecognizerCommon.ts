/*
 * Copyright (c) 2020, 2023, Oracle and/or its affiliates.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

import { ParseTree, ParserRuleContext, RuleContext, TerminalNode, Token } from "antlr4";

import MySQLParser, { TextLiteralContext } from "./MySQLParser.js";

/** This interface describes functionality found in both, lexer and parser classes. */
export interface IMySQLRecognizerCommon {
    /** To parameterize the parsing process. */
    serverVersion: number;
    sqlModes: Set<SqlMode>;

    /** Returns true if the given mode (one of the enums above) is set. */
    isSqlModeActive(mode: number): boolean;
    sqlModeFromString(modes: string): void;
}

/** SQL modes that control parsing behavior. */
export enum SqlMode {
    NoMode,
    AnsiQuotes,
    HighNotPrecedence,
    PipesAsConcat,
    IgnoreSpace,
    NoBackslashEscapes,
}

/**
 * Returns the text which the given context matched.
 *
 * @param context The parser context for which to return the text. If that is a text literal, some special
 *                processing takes place to replace escape sequences, double quotes etc.
 *
 * @param convertEscapes Indicates if escape sequences should be handled for text literals.
 *
 * @returns The text for the context.
 */
export const getText = (context: RuleContext, convertEscapes: boolean): string => {
    if (context instanceof TextLiteralContext) {
        // TODO: take the optional repertoire prefix into account.
        let result = "";

        for (let index = 0; index < (context.children ?? []).length; ++index) {
            const child = context.textStringLiteral(index)!;
            // eslint-disable-next-line no-underscore-dangle
            const token = child._value;
            if (token.type === MySQLParser.DOUBLE_QUOTED_TEXT || token.type === MySQLParser.SINGLE_QUOTED_TEXT) {
                let text = token.text || "''";
                const quoteChar = text[0];
                const doubledQuoteChar = quoteChar.repeat(2);
                text = text.substr(1, text.length - 2); // Remove outer quotes.
                text = text.replace(doubledQuoteChar, quoteChar); // Add replace double quote chars.

                result += text;

                break;
            }
        }

        if (convertEscapes) {
            const temp = result;
            result = "";

            let pendingEscape = false;
            for (let c of temp) {
                if (pendingEscape) {
                    pendingEscape = false;
                    switch (c) {
                        case "n": {
                            c = "\n";
                            break;
                        }
                        case "t": {
                            c = "\t";
                            break;
                        }
                        case "r": {
                            c = "\r";
                            break;
                        }
                        case "b": {
                            c = "\b";
                            break;
                        }
                        case "0": {
                            c = "\0";
                            break; // ASCII null
                        }
                        case "Z": {
                            c = "\u0032";
                            break; // Win32 end of file
                        }

                        default: {
                            break;
                        }
                    }
                } else if (c === "\\") {
                    pendingEscape = true;
                    continue;
                }
                result += c;
            }

            if (pendingEscape) { result += "\\"; }
        }

        return result;
    }

    return context.getText(); // In all other cases return the text unprocessed.
};
