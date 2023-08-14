/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import {
    ANTLRInputStream, CommonTokenStream, std$$exception, Token
} from "../src/antlr4-runtime.js";
import WhiteboxLexer from "./generated/TypeScript/WhiteboxLexer.js";

try {
    const stream = new ANTLRInputStream();
    stream.load("LOREM DOLOR SIT SIT SIT AMET CONSECTETUR ADIPISCING ADIPISCING1", true);

    const lexer = new WhiteboxLexer(stream);
    const tokenStream = new CommonTokenStream(lexer);
    tokenStream.fill();
    const tokens = tokenStream.getTokens();

    for (let i = 0; i < tokens.size(); ++i) {
        console.log(tokens.get(i).toString());
    }

    tokens.delete();
    lexer.delete();
    stream.delete();
} catch (e) {
    if (e instanceof std$$exception) {
        console.log(e.what());
    } else {
        console.error(e.stack);
    }
} finally {
    console.log("Done");
}
