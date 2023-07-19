/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import {
    ANTLRInputStream, std$$exception
} from "../src/antlr4-runtime.js";
import WhiteboxLexer from "./generated/WhiteboxLexer.js";

try {
    const stream = new ANTLRInputStream();
    stream.load("LO", true);

    const lexer = new WhiteboxLexer(stream);
    const token = lexer.nextToken();
    console.log(token.toString());

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
