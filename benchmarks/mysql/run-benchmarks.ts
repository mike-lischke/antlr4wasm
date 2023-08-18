/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import {
    ANTLRInputStream, BailErrorStrategy, CommonTokenStream, std$$exception, PredictionMode
} from "../../src/antlr4-runtime.js";
import MySQLLexer from "./generated/TypeScript/MySQLLexer.js";
import MySQLParser from "./generated/TypeScript/MySQLParser.js";

try {
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
    stream.delete();
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
