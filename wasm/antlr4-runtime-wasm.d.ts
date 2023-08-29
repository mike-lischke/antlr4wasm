/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

/**
 * Some of the functionality of the C++ std::vector class, declared as interface. There's no way to bind a generic
 * class with emscripten. Instead use the concrete classes below.
 */
export declare interface Vector<T> {
    size(): number;
    push_back(value: T): void;
    resize(size: number): void;
    get(index: number): T;
    set(index: number, value: T): void;

    delete(): void;

    // Disallow indexed access.
    [key: number]: never;
}

export declare class Deletable {
    public delete(): void;
    public deleteLater(): void;
    public clone(): this;
}

export declare class StringVector extends Deletable implements Vector<string> {
    size(): number;
    push_back(value: string): void;
    resize(size: number): void;
    get(index: number): string;
    set(index: number, value: string): void;

    // Disallow indexed access.
    [key: number]: never;
}

export declare class TerminalNodeVector extends Deletable implements Vector<TerminalNode> {
    size(): number;
    push_back(value: TerminalNode): void;
    resize(size: number): void;
    get(index: number): TerminalNode;
    set(index: number, value: TerminalNode): void;

    // Disallow indexed access.
    [key: number]: never;
}

type Constructor<T> = new (...args: unknown[]) => T;

type Extender = {
    __construct: () => void;
    __destruct: () => void;
};

export declare class Extendable extends Deletable {
    public static extend<T>(name: string, o: { [key in keyof T & Extender]?: T[key]; }): Constructor<T>;
    public static implement<T>(o: object): T;
}

// ===== STL =====

export declare class std$$exception extends Deletable {
    // Useful to test if an exception came from ANTLR4 or is a native JS exception.
    public what(): string;
}

export declare class std$$exception_ptr extends Deletable {

}

// ===== main =====

export declare abstract class ANTLRErrorListener extends Extendable {
    public abstract syntaxError(recognizer: Recognizer<ATNSimulator>, offendingSymbol: Token | null, line: number,
        charPositionInLine: number, msg: string, e: RecognitionException | null): void;
    public abstract reportAmbiguity(recognizer: Parser, /*dfa: DFA,*/ startIndex: number, stopIndex: number, exact: boolean,
        ambigAlts: BitSet, configs: ATNConfigSet): void;
    public abstract reportAttemptingFullContext(recognizer: Parser, /*dfa: DFA,*/ startIndex: number, stopIndex: number,
        conflictingAlts: BitSet, configs: ATNConfigSet): void;
    public abstract reportContextSensitivity(recognizer: Parser, /*dfa: DFA,*/ startIndex: number, stopIndex: number,
        prediction: number, configs: ATNConfigSet): void;
}

export declare abstract class ANTLRErrorStrategy extends Extendable {
    /**
     * Reset the error handler state for the specified `recognizer`.
     *
     * @param {Object} recognizer - the parser instance
     * @returns {void}
     */
    public abstract reset(recognizer: Parser): void;

    /**
     * This method is called when an unexpected symbol is encountered during an
     * inline match operation, such as {@link Parser#match}. If the error
     * strategy successfully recovers from the match failure, this method
     * returns the {@link Token} instance which should be treated as the
     * successful result of the match.
     *
     * <p>This method handles the consumption of any tokens - the caller should
     * <b>not</b> call {@link Parser#consume} after a successful recovery.</p>
     *
     * <p>Note that the calling code will not report an error if this method
     * returns successfully. The error strategy implementation is responsible
     * for calling {@link Parser#notifyErrorListeners} as appropriate.</p>
     *
     * @param recognizer the parser instance
     * @throws RecognitionException if the error strategy was not able to
     * recover from the unexpected input symbol
     */
    public abstract recoverInline(recognizer: Parser): Token;

    /**
     * This method is called to recover from exception `e`. This method is called after
     * {@link #reportError} by the default exception handler generated for a rule method.
     *
     * @see {@link #reportError}
     * @param {Object} recognizer - the parser instance
     * @param e - the recognition exception to recover from
     * @throws {RecognitionException} - if the error strategy could not recover from the recognition exception
     */
    public abstract recover(recognizer: Parser, e: RecognitionException): void;

    public abstract recover(recognizer: Parser): void;

    /**
     * This method provides the error handler with an opportunity to handle
     * syntactic or semantic errors in the input stream before they result in a
     * {@link RecognitionException}.
     *
     * The generated code currently contains calls to {@link #sync} after entering the decision state of a closure
     * block (`(...)*}`or `(...)+}).`     *
     * For an implementation based on Jim Idle's "magic sync" mechanism, see {@link DefaultErrorStrategy#sync}.
     *
     * @param {Object} recognizer - the parser instance
     * @throws {RecognitionException} - if an error is detected by the error strategy but cannot be automatically
     * recovered at the current state in the parsing process
     * @see {@link DefaultErrorStrategy#sync}
     */
    public abstract sync(recognizer: Parser): void;

    /**
     * Tests whether or not `recognizer` is in the process of recovering from an error.
     *
     * In error recovery mode, {@link Parser#consume} adds symbols to the parse tree by calling
     * {@link Parser#createErrorNode(ParserRuleContext, Token)} then {@link ParserRuleContext#addErrorNode(ErrorNode)} instead
     * of {@link Parser#createTerminalNode(ParserRuleContext, Token)}.
     *
     * @param {Object} recognizer - the parser instance
     * @returns {boolean} - `true` if the parser is currently recovering from a parse error, otherwise `false`
     */
    public abstract inErrorRecoveryMode(recognizer: Parser): boolean;

    /**
     * This method is called by when the parser successfully matches an input symbol.
     *
     * @param {Object} recognizer - the parser instance
     */
    public abstract reportMatch(recognizer: Parser): void;

    /**
     * Report any kind of RecognitionException. This method is called by
     * the default exception handler generated for a rule method.
     *
     * @param {Object} recognizer - the parser instance
     * @param {RecognitionException} e - the recognition exception to report
     * @returns {void}
     */
    public abstract reportError(recognizer: Parser, e: RecognitionException): void;
}

export declare class ANTLRInputStream extends CharStream {
    public constructor();

    public load(input: string, lenient?: boolean): void;
    //load: (input: void, size: number, lenient?: boolean) => void;
    public reset(): void;
    public consume(): string;
    public LA(i: number): number;
    public LT(i: number): number;

    /** Return the current input symbol index 0..n where n indicates the
     *  last symbol has been read.  The index is the index of char to
     *  be returned from LA(1).
     */
    public index(): number;
    public size(): number;

    /** mark/release do nothing; we have entire buffer */
    public mark(): number;
    public release(marker: number): void;

    /** consume() ahead until p==index; can't just set p=index as we must
     *  update line and charPositionInLine. If we seek backwards, just set p
     */
    public seek(index: number): void;
    public getSourceName(): string;

    public getText(interval: Interval): string;
    public toString(): string;
}

export declare class BailErrorStrategy extends DefaultErrorStrategy {
    public recover(recognizer: Parser): void;
    public recoverInline(recognizer: Parser): Token;
    public sync(recognizer: Parser): void;
}

export declare class BufferedTokenStream extends TokenStream {
    constructor(source: Lexer);

    public getTokenSource(): TokenSource;
    public index(): number;
    public mark(): number;
    public release(marker: number): void;
    public reset(): void;
    public seek(index: number): void;
    public size(): number;
    public consume(): void;
    public get(i: number): Token;
    public get(start: number, stop: number): Vector<Token>;
    public LA(k: number): number;
    public LT(i: number): Token;
    public setTokenSource(source: TokenSource): void;
    public getTokens(): Vector<Token>;
    public getTokens(start: number, stop: number): Vector<Token>;
    public getTokens(start: number, stop: number, types: Vector<number>): Vector<Token>;
    public getTokens(start: number, stop: number, type: number): Vector<Token>;
    public getHiddenTokensToRight(tokenIndex: number, channel: number): Vector<Token>;
    public getHiddenTokensToRight(tokenIndex: number): Vector<Token>;
    public getHiddenTokensToLeft(tokenIndex: number, channel: number): Vector<Token>;
    public getHiddenTokensToLeft(tokenIndex: number): Vector<Token>;
    public getSourceName(): string;
    public getText(): string;
    public getText(interval: Interval): string;
    public getText(ctx: RuleContext): string;
    public getText(tokenStart: Token, tokenStop: Token): string;
    public fill(): void;
}

export declare class CancellationException extends IllegalStateException {
    public constructor(msg: string);
}

export abstract class CharStream extends IntStream {
    /**
     * This method returns the text for a range of characters within this input
     * stream. This method is guaranteed to not throw an exception if the
     * specified `interval` lies entirely within a marked range. For more
     * information about marked ranges, see {@link IntStream#mark}.
     *
     * @param interval an interval within the stream
     * @returns the text of the specified interval
     *
     * @throws NullPointerException if `interval` is `undefined`
     * @throws IllegalArgumentException if `interval.a < 0`, or if
     * `interval.b < interval.a - 1`, or if `interval.b` lies at or
     * past the end of the stream
     * @throws UnsupportedOperationException if the stream does not support
     * getting the text of the specified interval
     */
    public abstract getText(interval: Interval): string;

    public abstract toString(): string;
}

export declare class CommonToken extends WritableToken {
    public constructor(type: number);
    public constructor(source: [TokenSource, CharStream], type: number, channel: number, start: number, stop: number);
    public constructor(type: number, text: string);

    public getType(): number;
    public setText(text: string): void;
    public getText(): string;
    public setLine(line: number): void;
    public getLine(): number;
    public getCharPositionInLine(): number;
    public setCharPositionInLine(charPositionInLine: number): void;
    public getChannel(): number;
    public setChannel(channel: number): void;
    public setType(type: number): void;
    public getStartIndex(): number;
    public setStartIndex(startIndex: number): void;
    public getStopIndex(): number;
    public setStopIndex(stopIndex: number): void;
    public getTokenIndex(): number;
    public setTokenIndex(tokenIndex: number): void;
    public getTokenSource(): TokenSource;
    public getInputStream(): CharStream;
    public toString(recognizer?: Recognizer<ATNSimulator>): string;
}

export declare class CommonTokenStream extends BufferedTokenStream {
    public constructor(tokenSource: Lexer, channel?: number);

    public setTokenSource(tokenSource: Lexer): void;

    public LT(k: number): Token;
    public getNumberOfOnChannelTokens(): number;
}

export declare class DefaultErrorStrategy extends ANTLRErrorStrategy {
    public reset(recognizer: Parser | null): void;
    public inErrorRecoveryMode(recognizer: Parser | null): boolean;
    public reportMatch(recognizer: Parser | null): void;
    public reportError(recognizer: Parser | null, e: RecognitionException): void;

    public recover(recognizer: Parser | null, e: RecognitionException): void;
    public recover(recognizer: Parser): void;

    public sync(recognizer: Parser | null): void;
    public recoverInline(recognizer: Parser | null): Token;
}

/**
 * A semantic predicate failed during validation.  Validation of predicates
 * occurs when normally parsing the alternative just like matching a token.
 * Disambiguating predicate evaluation occurs when we test a predicate during
 * prediction.
 */
export declare class FailedPredicateException extends RecognitionException {
    public constructor(recognizer: Parser);
    public constructor(recognizer: Parser, predicate: string);
    public constructor(recognizer: Parser, predicate: string, message: string);

    public getRuleIndex(): number;
    public getPredicateIndex(): number;
    public getPredicate(): string;
}

export declare class IllegalStateException extends RuntimeException {
}

export declare class InputMismatchException extends RecognitionException {
}

/**
 * A simple stream of symbols whose values are represented as integers. This
 * interface provides *marked ranges* with support for a minimum level
 * of buffering necessary to implement arbitrary lookahead during prediction.
 * For more information on marked ranges, see {@link #mark}.
 *
 * **Initializing Methods:** Some methods in this interface have
 * unspecified behavior if no call to an initializing method has occurred after
 * the stream was constructed. The following is a list of initializing methods:
 *
 * * {@link #LA}
 * * {@link #consume}
 * * {@link #size}
 */
export declare abstract class IntStream extends Deletable {
    /**
     * The value returned by {@link #LA LA()} when the end of the stream is
     * reached.
     */
    public static readonly EOF: number;

    /**
     * The value returned by {@link #getSourceName} when the actual name of the
     * underlying source is not known.
     */
    public static readonly UNKNOWN_SOURCE_NAME: string;

    /**
     * Consumes the current symbol in the stream. This method has the following
     * effects:
     *
     * * **Forward movement:** The value of `index`
     *   before calling this method is less than the value of `index`
     *   after calling this method.
     * * **Ordered lookahead:** The value of `LA(1)` before
     *   calling this method becomes the value of `LA(-1)` after calling
     *   this method.
     *
     * Note that calling this method does not guarantee that `index` is
     * incremented by exactly 1, as that would preclude the ability to implement
     * filtering streams (e.g. {@link CommonTokenStream} which distinguishes
     * between "on-channel" and "off-channel" tokens).
     *
     * @throws IllegalStateException if an attempt is made to consume the
     * end of the stream (i.e. if `LA(1)==`{@link #EOF EOF} before calling
     * `consume`).
     */
    public abstract consume(): void;

    /**
     * Gets the value of the symbol at offset `i` from the current
     * position. When `i==1`, this method returns the value of the current
     * symbol in the stream (which is the next symbol to be consumed). When
     * `i==-1`, this method returns the value of the previously read
     * symbol in the stream. It is not valid to call this method with
     * `i==0`, but the specific behavior is unspecified because this
     * method is frequently called from performance-critical code.
     *
     * This method is guaranteed to succeed if any of the following are true:
     *
     * * `i>0`
     * * `i==-1` and `index` returns a value greater
     *   than the value of `index` after the stream was constructed
     *   and `LA(1)` was called in that order. Specifying the current
     *   `index` relative to the index after the stream was created
     *   allows for filtering implementations that do not return every symbol
     *   from the underlying source. Specifying the call to `LA(1)`
     *   allows for lazily initialized streams.
     * * `LA(i)` refers to a symbol consumed within a marked region
     *   that has not yet been released.
     *
     * If `i` represents a position at or beyond the end of the stream,
     * this method returns {@link #EOF}.
     *
     * The return value is unspecified if `i<0` and fewer than `-i`
     * calls to {@link #consume consume()} have occurred from the beginning of
     * the stream before calling this method.
     *
     * @throws UnsupportedOperationException if the stream does not support
     * retrieving the value of the specified symbol
     */
    public abstract LA(i: number): number;

    /**
     * A mark provides a guarantee that {@link #seek seek()} operations will be
     * valid over a "marked range" extending from the index where `mark()`
     * was called to the current `index`. This allows the use of
     * streaming input sources by specifying the minimum buffering requirements
     * to support arbitrary lookahead during prediction.
     *
     * The returned mark is an opaque handle (type `int`) which is passed
     * to {@link #release release()} when the guarantees provided by the marked
     * range are no longer necessary. When calls to
     * `mark()`/`release()` are nested, the marks must be released
     * in reverse order of which they were obtained. Since marked regions are
     * used during performance-critical sections of prediction, the specific
     * behavior of invalid usage is unspecified (i.e. a mark is not released, or
     * a mark is released twice, or marks are not released in reverse order from
     * which they were created).
     *
     * The behavior of this method is unspecified if no call to an
     * {@link IntStream initializing method} has occurred after this stream was
     * constructed.
     *
     * This method does not change the current position in the input stream.
     *
     * The following example shows the use of {@link #mark mark()},
     * {@link #release release(mark)}, `index`, and
     * {@link #seek seek(index)} as part of an operation to safely work within a
     * marked region, then restore the stream position to its original value and
     * release the mark.
     *
     * ```
     * IntStream stream = ...;
     * int index = -1;
     * int mark = stream.mark();
     * try {
     *   index = stream.index;
     *   // perform work here...
     * } finally {
     *   if (index != -1) {
     *     stream.seek(index);
     *   }
     *   stream.release(mark);
     * }
     * ```
     *
     * @returns An opaque marker which should be passed to
     * {@link #release release()} when the marked range is no longer required.
     */
    public abstract mark(): number;

    /**
     * This method releases a marked range created by a call to
     * {@link #mark mark()}. Calls to `release()` must appear in the
     * reverse order of the corresponding calls to `mark()`. If a mark is
     * released twice, or if marks are not released in reverse order of the
     * corresponding calls to `mark()`, the behavior is unspecified.
     *
     * For more information and an example, see {@link #mark}.
     *
     * @param marker A marker returned by a call to `mark()`.
     * @see #mark
     */
    public abstract release(marker: number): void;

    /**
     * Return the index into the stream of the input symbol referred to by
     * `LA(1)`.
     *
     * The behavior of this method is unspecified if no call to an
     * {@link IntStream initializing method} has occurred after this stream was
     * constructed.
     */
    public abstract index(): number;

    /**
     * Set the input cursor to the position indicated by `index`. If the
     * specified index lies past the end of the stream, the operation behaves as
     * though `index` was the index of the EOF symbol. After this method
     * returns without throwing an exception, then at least one of the following
     * will be true.
     *
     * * `index` will return the index of the first symbol
     *   appearing at or after the specified `index`. Specifically,
     *   implementations which filter their sources should automatically
     *   adjust `index` forward the minimum amount required for the
     *   operation to target a non-ignored symbol.
     * * `LA(1)` returns {@link #EOF}
     *
     * This operation is guaranteed to not throw an exception if `index`
     * lies within a marked region. For more information on marked regions, see
     * {@link #mark}. The behavior of this method is unspecified if no call to
     * an {@link IntStream initializing method} has occurred after this stream
     * was constructed.
     *
     * @param index The absolute index to seek to.
     *
     * @throws IllegalArgumentException if `index` is less than 0
     * @throws UnsupportedOperationException if the stream does not support
     * seeking to the specified index
     */
    public abstract seek(index: number): void;

    /**
     * Returns the total number of symbols in the stream, including a single EOF
     * symbol.
     *
     * @throws UnsupportedOperationException if the size of the stream is
     * unknown.
     */
    public abstract size(): number;

    /**
     * Gets the name of the underlying symbol source. This method returns a
     * non-undefined, non-empty string. If such a name is not known, this method
     * returns {@link #UNKNOWN_SOURCE_NAME}.
     */
    public abstract getSourceName(): string;
}

export declare class LexerNoViableAltException extends RecognitionException {
    public constructor(lexer: Lexer, input: CharStream, startIndex: number, deadEndConfigs: ATNConfigSet);

    public getStartIndex(): number;
    public getDeadEndConfigs(): ATNConfigSet;
    public toString(): string;
}

export declare class NoViableAltException extends RecognitionException {
    public constructor(recognizer: Parser);
    public constructor(recognizer: Parser, input: TokenStream, startToken: Token, offendingToken: Token,
        message: string, ctx: ParserRuleContext);

    public getStartToken(): Token;
    public getDeadEndConfigs(): ATNConfigSet;
}

export declare class ParseCancellationException extends CancellationException {
}

export declare abstract class Parser extends Recognizer<ParserATNSimulator> {
    public constructor(input: TokenStream);

    public input(): TokenStream;

    public reset(): void;
    public match(tokenType: number): Token;
    public matchWildcard(): Token;
    public setBuildParseTree(buildParseTrees: boolean): void;
    public getBuildParseTree(): boolean;
    public setTrimParseTree(trimParseTrees: boolean): void;
    public getTrimParseTree(): boolean;
    public getParseListeners(): Vector<ParseTreeListener>;
    public addParseListener(listener: ParseTreeListener): void;
    public removeParseListener(listener: ParseTreeListener): void;
    public removeParseListeners(): void;
    public triggerEnterRuleEvent(): void;
    public triggerExitRuleEvent(): void;
    public getNumberOfSyntaxErrors(): number;
    public compileParseTreePattern(pattern: string, patternIndex: number, lexer?: Lexer): ParseTreePattern;
    public getErrorHandler(): ANTLRErrorStrategy;
    public setErrorHandler(handler: ANTLRErrorStrategy): void;
    public getInputStream(): TokenStream;
    public setInputStream(input: TokenStream): void;
    public getTokenStream(): TokenStream;
    public setTokenStream(input: TokenStream): void;
    public getCurrentToken(): Token;
    public notifyErrorListeners(msg: string): void;
    public notifyErrorListeners(token: Token, msg: string, e: Error): void;
    public consume(): Token;
    public enterRule(localctx: ParserRuleContext, state: number, ruleIndex: number): void;
    public exitRule(): void;
    public enterOuterAlt(localctx: ParserRuleContext, altNum: number): void;
    public getPrecedence(): number;
    public enterRecursionRule(localctx: ParserRuleContext, state: number, ruleIndex: number, precedence: number): void;
    public enterRecursionRule(localctx: ParserRuleContext, ruleIndex: number): void;
    public pushNewRecursionContext(localctx: ParserRuleContext, state: number, ruleIndex: number): void;
    public unrollRecursionContexts(parentCtx: ParserRuleContext | null): void;
    public getInvokingContext(ruleIndex: number): ParserRuleContext;
    public getContext(): ParserRuleContext | null;
    public setContext(ctx: ParserRuleContext | null): void;

    public precpred(localctx: ParserRuleContext | null, precedence: number): boolean;

    public inContext(context: string): boolean;
    public isExpectedToken(symbol: number): boolean;
    public isMatchedEOF(): boolean;
    public getExpectedTokens(): IntervalSet;
    public getExpectedTokensWithinCurrentRule(): IntervalSet;
    public getRuleIndexMap(): Map<string, number>;
    public getRuleContext<T extends ParserRuleContext>(): T;
    public getRuleInvocationStack(p?: RuleContext): Vector<string>;
    public getDFAStrings(): Vector<string>;
    public dumpDFA(): void;
    public getSourceName(): string;
    public getParseInfo(): string;
    public setProfile(profile: boolean): void;
    public setTrace(trace: boolean): void;
    public isTrace(): boolean;
    public createTerminalNode(token: Token): TerminalNode;
    public createErrorNode(parent: ParserRuleContext, token: Token): ErrorNode;
}

export declare class ParserRuleContext extends RuleContext {
    public constructor();
    public constructor(parent: ParserRuleContext | null, invokingStateNumber: number);

    /**
     * Triggers capturing the last thrown exception in C++. It should be called only in a catch block.
     */
    public captureException(): std$$exception_ptr;

    public copyFrom(ctx: ParserRuleContext): void;
    public enterRule(listener: ParseTreeListener): void;
    public exitRule(listener: ParseTreeListener): void;
    public addChild(t: TerminalNode): TerminalNode;
    public addChild(ruleInvocation: RuleContext): RuleContext;
    public removeLastChild(): void;
    public getToken(tokenType: number, i: number): TerminalNode | null;
    public getTokens(tokenType: number): Vector<TerminalNode>;

    /**
     * Returns the ith ParserRuleContext which matches the specified rule index.
     *
     * @param ruleIndex The index of the rule whose ParserRuleContext we are interested in.
     * @param i The ith value of the specific rule in the child list.
     */
    public getRuleContext<T extends ParserRuleContext>(ruleIndex: number, i: number): T | null;

    /**
     * Returns a list of ParserRuleContext objects matching the specified rule index.
     * @param ruleIndex The rule whose ParserRuleContext objects we are interested in.
     */
    public getRuleContexts<T extends ParserRuleContext>(ruleIndex: number): Vector<T>;

    public getSourceInterval(): Interval;

    public getStart(): Token;
    public setStart(start: Token): void;

    public getStop(): Token;
    public setStop(stop: Token): void;

    public toInfoString(recognizer: Parser): string;
}

export declare class RecognitionException extends RuntimeException {
    public constructor(recognizer: Recognizer<ATNSimulator>, input: IntStream, ctx: ParserRuleContext,
        offendingToken: Token | null);
    public constructor(message: string, recognizer: Recognizer<ATNSimulator>, input: IntStream, ctx: ParserRuleContext,
        offendingToken: Token | null);

    public getOffendingState(): number;
    public getExpectedTokens(): IntervalSet;
    public getCtx(): ParserRuleContext;
    public getInputStream(): IntStream;
    public getOffendingToken(): Token;
    public getRecognizer(): Recognizer<ATNSimulator>;
}

export declare abstract class Recognizer<ATNInterpreter extends ATNSimulator> extends Extendable {
    public abstract getRuleNames(): Vector<string>;

    /**
     * Get the vocabulary used by the recognizer.
     *
     * @return A {@link Vocabulary} instance providing information about the
     * vocabulary used by the grammar.
     */
    public abstract getVocabulary(): Vocabulary;

    /**
     * <summary>
    * Get a map from token names to token types.
    * <p/>
    * Used for XPath and tree pattern compilation.
    * </summary>
    */
    public getTokenTypeMap(): Map<string, number>;
    public getRuleIndexMap(): Map<string, number>;
    public getTokenType(tokenName: string): number;
    public getSerializedATN(): SerializedATNView;
    public abstract getGrammarFileName(): string;
    public getInterpreter(): ATNInterpreter;

    /**
     * Set the ATN interpreter used by the recognizer for prediction.
     *
     * @param interpreter The ATN interpreter used by the recognizer for
     * prediction.
     */
    public setInterpreter(interpreter: ATNSimulator): void;
    public getErrorHeader(e: RecognitionException): string;

    /**
     * How should a token be displayed in an error message? The default
     *  is to display just the text, but during development you might
     *  want to have a lot of information spit out.  Override in that case
     *  to use t.toString() (which, for CommonToken, dumps everything about
     *  the token). This is better than forcing you to override a method in
     *  your token objects because you don't have to go modify your lexer
     *  so that it creates a new Java type.
     *
     * @deprecated This method is not called by the ANTLR 4 Runtime. Specific
     * implementations of {@link ANTLRErrorStrategy} may provide a similar
     * feature when necessary. For example, see
     * {@link DefaultErrorStrategy#getTokenErrorDisplay}.
     */
    public getTokenErrorDisplay(t: Token): string;
    public addErrorListener(listener: ANTLRErrorListener): void;
    public removeErrorListener(listener: ANTLRErrorListener): void;
    public removeErrorListeners(): void;
    public getErrorListenersDispatch(): Vector<ANTLRErrorListener>;
    public sempred(localctx: RuleContext, ruleIndex: number, actionIndex: number): boolean;
    public precpred(localctx: RuleContext | null, precedence: number): boolean;
    public action(localctx: RuleContext, ruleIndex: number, actionIndex: number): void;

    public getState(): number;
    public setState(atnState: number): void;

    public getInputStream(): IntStream;
    public setInputStream(input: IntStream): void;
}

export declare class RuleContext extends ParseTree {
    public static is(tree: ParseTree): boolean;

    public readonly invokingState: number;

    public constructor();
    public constructor(parent: RuleContext, invokingStateNumber: number);

    public depth(): number;
    public isEmpty(): boolean;
    public getSourceInterval(): Interval;

    public getText(): string;
    public getRuleIndex(): number;
    public getAltNumber(): number;
    public setAltNumber(altNumber: number): void;

    public accept<T>(visitor: ParseTreeVisitor<T>): T;

    public toStringTree(recognizer: Parser, pretty: boolean): string;
    //public toStringTree(ruleNames: Vector<string>, pretty: boolean): string;
    public toStringTree(pretty: boolean): string;

    public toString(ruleNames?: string[]): string;
    public toString(recognizer: Recognizer<ATNSimulator>): string;
    public toString(recognizer: Recognizer<ATNSimulator>, stop: RuleContext): string;
    public toString(ruleNames: string[], stop: RuleContext): string;

}

/**
 * A token has properties: text, type, line, character position in the line
 * (so we can ignore tabs), token channel, index, and source from which
 * we obtained this token.
 */
export declare abstract class Token extends Deletable {
    public abstract getText(): string;
    public abstract getType(): number;
    public abstract getLine(): number;
    public abstract getCharPositionInLine(): number;
    public abstract getChannel(): number;
    public abstract getTokenIndex(): number;
    public abstract getStartIndex(): number;
    public abstract getStopIndex(): number;
    public abstract getTokenSource(): TokenSource;
    public abstract getInputStream(): CharStream;
    public abstract toString(): string;
}

export declare namespace Token {
    const INVALID_TYPE: number;
    const EPSILON: number;
    const MIN_USER_TOKEN_TYPE: number;
    const EOF: number;
    const DEFAULT_CHANNEL: number;
    const HIDDEN_CHANNEL: number;
    const MIN_USER_CHANNEL_VALUE: number;
}

/**
 * The default mechanism for creating tokens. It's used by default in Lexer and
 * the error handling strategy (to create missing tokens).  Notifying the parser
 * of a new factory means that it notifies its token source and error strategy.
 */
export declare abstract class TokenFactory {
    /**
     * This is the method used to create tokens in the lexer and in the
     * error handling strategy. If text!=undefined, than the start and stop positions
     * are wiped to -1 in the text override is set in the CommonToken.
     */
    public abstract create(source: [TokenSource, CharStream], type: number, text: string, channel: number,
        start: number, stop: number, line: number, charPositionInLine: number): CommonToken;
    public abstract createSimple(type: number, text: string): CommonToken;
}

/**
 * A source of tokens must provide a sequence of tokens via {@link #nextToken()}
 * and also must reveal it's source of characters; {@link CommonToken}'s text is
 * computed from a {@link CharStream}; it only store indices into the char
 * stream.
 *
 * Errors from the lexer are never passed to the parser. Either you want to keep
 * going or you do not upon token recognition error. If you do not want to
 * continue lexing then you do not want to continue parsing. Just throw an
 * exception not under {@link RecognitionException} and Java will naturally toss
 * you all the way out of the recognizers. If you want to continue lexing then
 * you should not throw an exception to the parser--it has already requested a
 * token. Keep lexing until you get a valid one. Just report errors and keep
 * going, looking for a valid token.
 */
export declare abstract class TokenSource {
    /**
     * Return a {@link Token} object from your input stream (usually a
     * {@link CharStream}). Do not fail/return upon lexing error; keep chewing
     * on the characters until you get a good one; errors are not passed through
     * to the parser.
     */
    public abstract nextToken(): Token;

    /**
     * Get the line number for the current position in the input stream. The
     * first line in the input is line 1.
     *
     * @returns The line number for the current position in the input stream, or
     * 0 if the current token source does not track line numbers.
     */
    public abstract getLine(): number;

    /**
     * Get the index into the current line for the current position in the input
     * stream. The first character on a line has position 0.
     *
     * @returns The line number for the current position in the input stream, or
     * -1 if the current token source does not track character positions.
     */
    public abstract getCharPositionInLine(): number;

    /**
     * Get the {@link CharStream} from which this token source is currently
     * providing tokens.
     *
     * @returns The {@link CharStream} associated with the current position in
     * the input, or `undefined` if no input stream is available for the token
     * source.
     */
    public abstract getInputStream(): CharStream;

    /**
     * Gets the name of the underlying input source. This method returns a
     * non-undefined, non-empty string. If such a name is not known, this method
     * returns {@link IntStream#UNKNOWN_SOURCE_NAME}.
     */
    public abstract getSourceName(): string;
}

/**
 * An {@link IntStream} whose symbols are {@link Token} instances.
 */
export declare abstract class TokenStream extends IntStream {
    /**
     * Get the `Token` instance associated with the value returned by `LA(k)`. This method has the same pre- and
     * post-conditions as `IntStream.LA`. In addition, when the preconditions of this method are met, the return value
     * is non-undefined and the value of `LT(k).type === LA(k)`.
     *
     * A `RangeError` is thrown if `k<0` and fewer than `-k` calls to `consume()` have occurred from the beginning of
     * the stream before calling this method.
     *
     * See `IntStream.LA`
     */
    public abstract LT(k: number): Token;

    /**
     * Gets the {@link Token} at the specified `index` in the stream. When
     * the preconditions of this method are met, the return value is non-undefined.
     *
     * The preconditions for this method are the same as the preconditions of
     * {@link IntStream#seek}. If the behavior of `seek(index)` is
     * unspecified for the current state and given `index`, then the
     * behavior of this method is also unspecified.
     *
     * The symbol referred to by `index` differs from `seek()` only
     * in the case of filtering streams where `index` lies before the end
     * of the stream. Unlike `seek()`, this method does not adjust
     * `index` to point to a non-ignored symbol.
     *
     * @throws IllegalArgumentException if {code index} is less than 0
     * @throws UnsupportedOperationException if the stream does not support
     * retrieving the token at the specified index
     */
    get(index: number): Token;

    /**
     * Gets the underlying {@link TokenSource} which provides tokens for this
     * stream.
     */
    getTokenSource(): TokenSource;

    /**
     * Return the text of all tokens within the specified `interval`. This
     * method behaves like the following code (including potential exceptions
     * for violating preconditions of {@link #get}, but may be optimized by the
     * specific implementation.
     *
     * ```
     * TokenStream stream = ...;
     * String text = "";
     * for (int i = interval.a; i <= interval.b; i++) {
     *   text += stream.get(i).text;
     * }
     * ```
     *
     * @param interval The interval of tokens within this stream to get text
     * for.
     * @returns The text of all tokens within the specified interval in this
     * stream.
     *
     * @throws NullPointerException if `interval` is `undefined`
     */
    getText(interval: Interval): string;

    /**
     * Return the text of all tokens in the stream. This method behaves like the
     * following code, including potential exceptions from the calls to
     * {@link IntStream#size} and {@link #getText(Interval)}, but may be
     * optimized by the specific implementation.
     *
     * ```
     * TokenStream stream = ...;
     * String text = stream.getText(new Interval(0, stream.size));
     * ```
     *
     * @returns The text of all tokens in the stream.
     */
    getText(): string;

    /**
     * Return the text of all tokens in the source interval of the specified
     * context. This method behaves like the following code, including potential
     * exceptions from the call to {@link #getText(Interval)}, but may be
     * optimized by the specific implementation.
     *
     * If `ctx.sourceInterval` does not return a valid interval of
     * tokens provided by this stream, the behavior is unspecified.
     *
     * ```
     * TokenStream stream = ...;
     * String text = stream.getText(ctx.sourceInterval);
     * ```
     *
     * @param ctx The context providing the source interval of tokens to get
     * text for.
     * @returns The text of all tokens within the source interval of `ctx`.
     */
    getText(ctx: RuleContext): string;

    /**
     * Return the text of all tokens in this stream between `start` and
     * `stop` (inclusive).
     *
     * If the specified `start` or `stop` token was not provided by
     * this stream, or if the `stop` occurred before the `start`
     * token, the behavior is unspecified.
     *
     * For streams which ensure that the `Token.tokenIndex` method is
     * accurate for all of its provided tokens, this method behaves like the
     * following code. Other streams may implement this method in other ways
     * provided the behavior is consistent with this at a high level.
     *
     * ```
     * TokenStream stream = ...;
     * String text = "";
     * for (int i = start.tokenIndex; i <= stop.tokenIndex; i++) {
     *   text += stream.get(i).text;
     * }
     * ```
     *
     * @param start The first token in the interval to get text for.
     * @param stop The last token in the interval to get text for (inclusive).
     * @returns The text of all tokens lying between the specified `start`
     * and `stop` tokens.
     *
     * @throws UnsupportedOperationException if this stream does not support
     * this method for the specified tokens
     */
    getText(start: Token, stop: Token): string;
}

export declare abstract class WritableToken extends Token {
    setText(text: string): void;
    setType(type: number): void;
    setLine(line: number): void;
    setCharPositionInLine(charPositionInLine: number): void;
    setChannel(channel: number): void;
    setTokenIndex(index: number): void;
}

// ===== ATN =====

export declare class ATN extends Deletable {
    public static readonly INVALID_ALT_NUMBER: number;

    public constructor();

    /** Used for runtime deserialization of ATNs from strings */
    public constructor(grammarType: ATNType, maxTokenType: number);

    public readonly states: Vector<ATNState>;

    /** Each subrule/rule is a decision point and we must track them so we
     *  can go back later and build DFA predictors for them.  This includes
     *  all the rules, subrules, optional blocks, ()+, ()* etc...
     */
    public readonly decisionToState: Vector<DecisionState>;

    /**
     * Maps from rule index to starting state number.
     */
    public readonly ruleToStartState: Vector<RuleStartState>;

    /**
     * Maps from rule index to stop state number.
     */
    public readonly ruleToStopState: Vector<RuleStopState>;

    public readonly modeNameToStartState: Vector<TokensStartState>;

    /**
     * The type of the ATN.
     */
    public grammarType: ATNType;

    /**
     * The maximum value for any symbol recognized by a transition in the ATN.
     */
    public maxTokenType: number;

    /**
     * For lexer ATNs, this maps the rule index to the resulting token type.
     * For parser ATNs, this maps the rule index to the generated bypass token
     * type if the
     * {@link ATNDeserializationOptions#isGenerateRuleBypassTransitions}
     * deserialization option was specified; otherwise, this is `undefined`.
     */
    public ruleToTokenType: Vector<number>;

    /**
     * For lexer ATNs, this is an array of {@link LexerAction} objects which may
     * be referenced by action transitions in the ATN.
     */
    public lexerActions: Vector<LexerAction>;

    public readonly modeToStartState: Vector<TokensStartState>;
    public readonly modeToDFA: Vector<DFA>;

    /** Compute the set of valid tokens that can occur starting in state `s`.
     *  If `ctx` is {@link PredictionContext#EMPTY_LOCAL}, the set of tokens will not include what can follow
     *  the rule surrounding `s`. In other words, the set will be
     *  restricted to tokens reachable staying within `s`'s rule.
     */
    public nextTokens(s: ATNState, ctx: PredictionContext): IntervalSet;

    /**
     * Compute the set of valid tokens that can occur starting in `s` and
     * staying in same rule. {@link Token#EPSILON} is in set if we reach end of
     * rule.
     */
    public nextTokens(s: ATNState): IntervalSet;

    public addState(state: ATNState): void;
    public removeState(state: ATNState): void;
    public defineDecisionState(s: DecisionState): number;
    public getDecisionState(decision: number): DecisionState | undefined;
    public getNumberOfDecisions(): number;

    /**
     * Computes the set of input symbols which could follow ATN state number
     * `stateNumber` in the specified full `context`. This method
     * considers the complete parser context, but does not evaluate semantic
     * predicates (i.e. all predicates encountered during the calculation are
     * assumed true). If a path in the ATN exists from the starting state to the
     * {@link RuleStopState} of the outermost context without matching any
     * symbols, {@link Token#EOF} is added to the returned set.
     *
     * If `context` is `undefined`, it is treated as
     * {@link ParserRuleContext#EMPTY}.
     *
     * Note that this does NOT give you the set of all tokens that could
     * appear at a given token position in the input phrase.  In other words, it
     * does not answer:
     *
     * > Given a specific partial input phrase, return the set of all
     * > tokens that can follow the last token in the input phrase.
     *
     * The big difference is that with just the input, the parser could land
     * right in the middle of a lookahead decision. Getting all
     * *possible* tokens given a partial input stream is a separate
     * computation. See https://github.com/antlr/antlr4/issues/1428
     *
     * For this function, we are specifying an ATN state and call stack to
     * compute what token(s) can come next and specifically: outside of a
     * lookahead decision. That is what you want for error reporting and
     * recovery upon parse error.
     *
     * @param stateNumber the ATN state number
     * @param context the full parse context
     * @returns The set of potentially valid input symbols which could follow the
     * specified state in the specified context.
     * @ if the ATN does not contain a state with
     * number `stateNumber`
     */
    public getExpectedTokens(stateNumber: number, context: RuleContext | undefined): IntervalSet;
    public toString(): string;
}

export declare class ATNConfig extends Deletable {
    public readonly alt: number;
    public readonly context: PredictionContext;
    public readonly reachesIntoOuterContext: number;
    public readonly semanticContext: SemanticContext;

    constructor(other: ATNConfig, state?: ATNState);
    constructor(other: ATNConfig, state: ATNState | undefined, semanticContext: SemanticContext);
    constructor(other: ATNConfig, state: ATNState | undefined, semanticContext: SemanticContext, context: PredictionContext);
    constructor(other: ATNConfig);

    public hashCode(): number;
    public getOuterContextDepth(): number;
    public isPrecedenceFilterSuppressed(): boolean;
    public setPrecedenceFilterSuppressed(value: boolean): void;
    public toString(pretty?: boolean): string;
}

export declare class ATNConfigSet extends Deletable {
    public readonly configs: Vector<ATNConfig>;
    public readonly uniqueAlt: number;
    //public readonly conflictingAlts: BitSet;
    public readonly hasSemanticContext: boolean;
    public readonly dipsIntoOuterContext: boolean;
    public readonly fullCtx: boolean;

    constructor();
    constructor(other: ATNConfigSet);

    public add(config: ATNConfig, mergeCache?: Map<PredictionContext, PredictionContext>): boolean;
    public addAll(other: ATNConfigSet): boolean;
    public getStates(): Vector<ATNState>;
    // public getAlts(): BitSet;
    public getPredicates(): Vector<SemanticContext>;
    public get(i: number): ATNConfig;
    public optimizeConfigs(interpreter: ATNSimulator): void;
    public size(): number;
    public isEmpty(): boolean;
    public clear(): void;
    public isReadonly(): boolean;
    public setReadonly(readOnly: boolean): void;
    public hashCode(): number;
    public equals(o: unknown): boolean;
    public toString(): string;
}

export declare class ATNDeserializer extends Deletable {
    public static readonly SERIALIZED_VERSION: number;

    public constructor();
    public constructor(options: ATNDeserializationOptions);

    public deserialize(data: SerializedATNView): ATN;
}

export declare class ATNDeserializationOptions extends Deletable {
    public constructor(options?: ATNDeserializationOptions);

    public static getDefaultOptions: ATNDeserializationOptions;

    public isReadOnly(): boolean;
    public makeReadOnly(readOnly: boolean): void;
    public isVerifyATN(): boolean;
    public setVerifyATN(verifyATN: boolean): void;
    public isGenerateRuleBypassTransitions(): boolean;
    public setGenerateRuleBypassTransitions(generateRuleBypassTransitions: boolean): void;
}

export declare abstract class ATNSimulator extends Deletable {
    public static readonly ERROR: DFAState;

    public abstract reset(): void;
    public clearDFA(): void;
    public getCachedContext(context: PredictionContext): PredictionContext;
    getATN(): ATN;
}

/**
 * The following images show the relation of states and
 * {@link ATNState#transitions} for various grammar constructs.
 *
 * * Solid edges marked with an &#0949; indicate a required
 *   {@link EpsilonTransition}.
 *
 * * Dashed edges indicate locations where any transition derived from
 *   {@link Transition} might appear.
 *
 * * Dashed nodes are place holders for either a sequence of linked
 *   {@link BasicState} states or the inclusion of a block representing a nested
 *   construct in one of the forms below.
 *
 * * Nodes showing multiple outgoing alternatives with a `...` support
 *   any number of alternatives (one or more). Nodes without the `...` only
 *   support the exact number of alternatives shown in the diagram.
 *
 * <h2>Basic Blocks</h2>
 *
 * <h3>Rule</h3>
 *
 * <embed src="images/Rule.svg" type="image/svg+xml"/>
 *
 * <h3>Block of 1 or more alternatives</h3>
 *
 * <embed src="images/Block.svg" type="image/svg+xml"/>
 *
 * <h2>Greedy Loops</h2>
 *
 * <h3>Greedy Closure: `(...)*`</h3>
 *
 * <embed src="images/ClosureGreedy.svg" type="image/svg+xml"/>
 *
 * <h3>Greedy Positive Closure: `(...)+`</h3>
 *
 * <embed src="images/PositiveClosureGreedy.svg" type="image/svg+xml"/>
 *
 * <h3>Greedy Optional: `(...)?`</h3>
 *
 * <embed src="images/OptionalGreedy.svg" type="image/svg+xml"/>
 *
 * <h2>Non-Greedy Loops</h2>
 *
 * <h3>Non-Greedy Closure: `(...)*?`</h3>
 *
 * <embed src="images/ClosureNonGreedy.svg" type="image/svg+xml"/>
 *
 * <h3>Non-Greedy Positive Closure: `(...)+?`</h3>
 *
 * <embed src="images/PositiveClosureNonGreedy.svg" type="image/svg+xml"/>
 *
 * <h3>Non-Greedy Optional: `(...)??`</h3>
 *
 * <embed src="images/OptionalNonGreedy.svg" type="image/svg+xml"/>
 */
export declare class ATNState extends Deletable {
    public static readonly INITIAL_NUM_TRANSITIONS: number;
    public static readonly INVALID_STATE_NUMBER: number;

    public readonly stateNumber: number;
    public readonly ruleIndex: number;
    public readonly epsilonOnlyTransitions: boolean;

    public getTransitions(): Vector<Transition>;
    public addTransition(e: Transition): void;
    public addTransition(index: number, e: Transition): void;
    public removeTransition(index: number): Transition;
    public hashCode(): number;
    public equals(o: unknown): boolean;
    public isNonGreedyExitState(): boolean;
    public toString(): string;
    public getStateType(): ATNStateType;
}

/**
 * Note: with embind the enum values are actually objects with the shape `{ value: number, constructor: f }`.
 */
export declare enum ATNStateType {
    INVALID_TYPE,
    BASIC,
    RULE_START,
    BLOCK_START,
    PLUS_BLOCK_START,
    STAR_BLOCK_START,
    TOKEN_START,
    RULE_STOP,
    BLOCK_END,
    STAR_LOOP_BACK,
    STAR_LOOP_ENTRY,
    PLUS_LOOP_BACK,
    LOOP_END
}

export declare enum ATNType {
    LEXER,
    PARSER
}

export declare class DecisionState extends ATNState {
    public static is(candidate: ATNState): boolean;

    public readonly decision: number;
    public readonly nonGreedy: boolean;

    public toString(): string;
}

export declare abstract class Lexer extends Recognizer<LexerATNSimulator> implements TokenSource {
    public static readonly DEFAULT_MODE: number;
    public static readonly MORE: number;
    public static readonly SKIP: number;
    public static readonly DEFAULT_TOKEN_CHANNEL: number;
    public static readonly HIDDEN: number;
    public static readonly MIN_CHAR_VALUE: number;
    public static readonly MAX_CHAR_VALUE: number;

    public tokenStartCharIndex: number;
    public tokenStartLine: number;
    public tokenStartCharPositionInLine: number;
    public hitEOF: boolean;
    public channel: number;
    public type: number;
    public readonly modeStack: Vector<number>;
    public mode: number;

    public constructor(input: CharStream);

    public reset(): void;
    public nextToken(): Token;

    public skip(): void;
    public more(): void;
    public setMode(m: number): void;
    public pushMode(m: number): void;
    public popMode(): number;

    public getTokenFactory(): TokenFactory;

    public setInputStream(input: CharStream): void;
    public getSourceName(): string;
    public getInputStream(): CharStream;
    public getLine(): number;
    public getCharPositionInLine(): number;
    public setLine(line: number): void;
    public setCharPositionInLine(charPositionInLine: number): void;
    public getCharIndex(): number;
    public getText(): string;
    public setText(text: string): void;
    public setType(type: number): void;
    public getType(): number;
    public setChannel(channel: number): void;
    public getChannel(): number;

    public abstract getChannelNames(): string[];
    public abstract getModeNames(): string[];
    public abstract getRuleNames(): Vector<string>;
    public abstract getVocabulary(): Vocabulary;
    public abstract getGrammarFileName(): string;
    public abstract getATN(): ATN;

    public getErrorDisplay(s: string): string;
    public getNumberOfSyntaxErrors(): number;

    public createToken(type: number, text: string): CommonToken;
}

export declare class LexerAction extends Deletable {
    public getActionType(): LexerActionType;
    public isPositionDependent(): boolean;
    public execute(lexer: Lexer): void;
    public hashCode(): number;
    public equals(o: unknown): boolean;
    public toString(): string;
}

export declare enum LexerActionType {
    CHANNEL,
    CUSTOM,
    MODE,
    MORE,
    POP_MODE,
    PUSH_MODE,
    SKIP,
    TYPE
}

export declare class LexerActionExecutor extends Deletable {
    public constructor(lexerActions: Vector<LexerAction>);

    public append(lexerActionExecutor: LexerActionExecutor, lexerAction: LexerAction): LexerActionExecutor;
    public fixOffsetBeforeMatch(offset: number): void;
    public getLexerActions(): Vector<LexerAction>;
    public execute(lexer: Lexer, input: string, startIndex: number): number;
    public hashCode(): number;
    public equals(o: unknown): boolean;
}

/** "dup" of ParserInterpreter */
export declare class LexerATNSimulator extends ATNSimulator {
    public static readonly MIN_DFA_EDGE: number;
    public static readonly MAX_DFA_EDGE: number;

    public constructor(recognizer: Lexer, atn: ATN, decisionToDFA: DFA[], sharedContextCache: PredictionContextCache);
    // public constructor(atn: ATN, decisionToDFA: DFA[], sharedContextCache: PredictionContextCache);

    public copyState(): LexerATNSimulator;
    public match(input: CharStream, mode: number): void;
    public override reset(): void;
    public override clearDFA(): number;

    public getDFA(mode: number): DFA;

    public getText(): string;
    public getLine(): number;
    public setLine(line: number): void;
    public getCharPositionInLine(): number;
    public setCharPositionInLine(charPositionInLine: number): void;
    public consume(input: CharStream): void;
    public getTokenName(t: number): string;
}

export declare class ParserATNSimulatorOptions {
    public setPredictionContextMergeCacheOptions(predictionContextMergeCacheOptions: PredictionContextMergeCacheOptions): void;
    public getPredictionContextMergeCacheOptions(): PredictionContextMergeCacheOptions;
}

export declare class ParserATNSimulator extends ATNSimulator {
    public static readonly TURN_OFF_LR_LOOP_ENTRY_BRANCH_OPT: boolean;

    public constructor(parser: Parser, atn: ATN, decisionToDFA: DFA[], sharedContextCache: PredictionContextCache);
    public constructor(parser: Parser, atn: ATN, decisionToDFA: DFA[], sharedContextCache: PredictionContextCache,
        options: ParserATNSimulatorOptions);

    public override reset(): void;
    public override clearDFA(): number;
    public adaptivePredict(input: TokenStream, decision: number, outerContext: ParserRuleContext | null): number;
    public canDropLoopEntryEdgeInLeftRecursiveRule(config: ATNConfig): boolean;
    public getRuleName(index: number): string;
    public setPredictionMode(mode: PredictionMode): void;
    public getPredictionMode(): PredictionMode;
    public getParser(): Parser;
    public getTokenName(t: number): string;
    public getLookaheadName(input: TokenStream): string;
    public dumpDeadEndConfigs(nvae: NoViableAltException): void;
}

/**
  * This enumeration defines the prediction modes available in ANTLR 4 along with
  * utility methods for analyzing configuration sets for conflicts and/or
  * ambiguities.
  */
export declare enum PredictionMode {
    /**
     * The SLL(*) prediction mode. This prediction mode ignores the current
     * parser context when making predictions. This is the fastest prediction
     * mode, and provides correct results for many grammars. This prediction
     * mode is more powerful than the prediction mode provided by ANTLR 3, but
     * may result in syntax errors for grammar and input combinations which are
     * not SLL.
     *
     * <p>
     * When using this prediction mode, the parser will either return a correct
     * parse tree (i.e. the same parse tree that would be returned with the
     * {@link #LL} prediction mode), or it will report a syntax error. If a
     * syntax error is encountered when using the {@link #SLL} prediction mode,
     * it may be due to either an actual syntax error in the input or indicate
     * that the particular combination of grammar and input requires the more
     * powerful {@link #LL} prediction abilities to complete successfully.</p>
     *
     * <p>
     * This prediction mode does not provide any guarantees for prediction
     * behavior for syntactically-incorrect inputs.</p>
     */
    SLL,

    /**
     * The LL(*) prediction mode. This prediction mode allows the current parser
     * context to be used for resolving SLL conflicts that occur during
     * prediction. This is the fastest prediction mode that guarantees correct
     * parse results for all combinations of grammars with syntactically correct
     * inputs.
     *
     * <p>
     * When using this prediction mode, the parser will make correct decisions
     * for all syntactically-correct grammar and input combinations. However, in
     * cases where the grammar is truly ambiguous this prediction mode might not
     * report a precise answer for <em>exactly which</em> alternatives are
     * ambiguous.</p>
     *
     * <p>
     * This prediction mode does not provide any guarantees for prediction
     * behavior for syntactically-incorrect inputs.</p>
     */
    LL,

    /**
     * The LL(*) prediction mode with exact ambiguity detection. In addition to
     * the correctness guarantees provided by the {@link #LL} prediction mode,
     * this prediction mode instructs the prediction algorithm to determine the
     * complete and exact set of ambiguous alternatives for every ambiguous
     * decision encountered while parsing.
     *
     * <p>
     * This prediction mode may be used for diagnosing ambiguities during
     * grammar development. Due to the performance overhead of calculating sets
     * of ambiguous alternatives, this prediction mode should be avoided when
     * the exact results are not necessary.</p>
     *
     * <p>
     * This prediction mode does not provide any guarantees for prediction
     * behavior for syntactically-incorrect inputs.</p>
     */
    LL_EXACT_AMBIG_DETECTION
}

export declare class RuleStartState extends ATNState {
    public readonly isPrecedenceRule: boolean;
    public readonly leftFactored: boolean;

    public getStateType(): ATNStateType;
    public stopState(): RuleStopState;
}

export declare class RuleStopState extends ATNState {
    public static is(candidate: ATNState): boolean;
}

export declare class RuntimeException extends std$$exception {
    public constructor(msg: string);

    public what(): string;
}

export declare class SerializedATNView extends Deletable {
    public constructor(data: number[]);

    public empty(): boolean;
    public size(): number;

    public print(): void;
}

export declare class TokensStartState extends DecisionState {
    public constructor();
}

/** An ATN transition between any two ATN states.  Subclasses define
 *  atom, set, epsilon, action, predicate, rule transitions.
 *
 *  This is a one way link.  It emanates from a state (usually via a list of
 *  transitions) and has a target state.
 *
 *  Since we never have to change the ATN transitions once we construct it,
 *  we can fix these transitions as specific classes. The DFA transitions
 *  on the other hand need to update the labels as it adds transitions to
 *  the states. We'll use the term Edge for the DFA to distinguish them from
 *  ATN transitions.
 */
export declare abstract class Transition extends Deletable {
    static readonly serializationNames: Vector<string>;

    /** The target of this transition. */
    target(): ATNState;

    getTransitionType(): TransitionType;

    /**
     * Determines if the transition is an "epsilon" transition.
     *
     * The default implementation returns `false`.
     *
     * @returns `true` if traversing this transition in the ATN does not
     * consume an input symbol; otherwise, `false` if traversing this
     * transition consumes (matches) an input symbol.
     */
    public isEpsilon(): boolean;
    public label(): IntervalSet | undefined;
    public toString(): string;

    public abstract matches(symbol: number, minVocabSymbol: number, maxVocabSymbol: number): boolean;
}

export declare enum TransitionType {
    EPSILON,
    RANGE,
    RULE,
    PREDICATE,
    ATOM,
    ACTION,
    SET,
    NOT_SET,
    WILDCARD,
    PRECEDENCE
}

export declare class PredictionContext extends Deletable {
    public static readonly EMPTY: PredictionContext;
    public static readonly EMPTY_RETURN_STATE: number;

    public static merge(a: PredictionContext, b: PredictionContext, rootIsWildcard: boolean,
        mergeCache?: PredictionContextMergeCache): PredictionContext;
    public static mergeSingletons(a: PredictionContext, b: PredictionContext, rootIsWildcard: boolean,
        mergeCache?: PredictionContextMergeCache): PredictionContext;
    public static mergeRoot(a: PredictionContext, b: PredictionContext, rootIsWildcard: boolean): PredictionContext;
    public static mergeArrays(a: PredictionContext[], b: PredictionContext[], rootIsWildcard: boolean,
        mergeCache?: PredictionContextMergeCache): PredictionContext;
    public static toDotString(context: PredictionContext, parser: Parser): string;
    public static getCachedContext(context: PredictionContext, contextCache: PredictionContextCache,
        visited: PredictionContext[]): PredictionContext;
    public static getAllContextNodes(context: PredictionContext): PredictionContext[];
    public static fromRuleContext(atn: ATN, outerContext: RuleContext): PredictionContext;

    public getContextType(): PredictionContextType;
    public size(): number;
    public getReturnState(index: number): number;
    public isEmpty(): boolean;
    public hasEmptyPath(): boolean;
    public hashCode(): number;
    public equals(o: unknown): boolean;
    public toString(): string;
    public toStrings(recognizer: Recognizer<ATNSimulator>, currentState: number): Vector<string>;
    public toStrings(recognizer: Recognizer<ATNSimulator>, currentState: number, stop: PredictionContext): Vector<string>;
}

export declare class PredictionContextCache extends Deletable {
    public put(context: PredictionContext): void;
    public get(context: PredictionContext): PredictionContext;
}

export declare class PredictionContextMergeCache extends Deletable {
    public constructor(options?: PredictionContextMergeCacheOptions);

    public put(key1: PredictionContext, key2: PredictionContext, value: PredictionContext): void;
    public get(key1: PredictionContext, key2: PredictionContext): PredictionContext | undefined;
    public getOptions(): PredictionContextMergeCacheOptions;
    public clear(): void;
}

export declare class PredictionContextMergeCacheOptions extends Deletable {
    public constructor(options?: PredictionContextMergeCacheOptions);

    public getMaxSize(): number;
    public hasMaxSize(): boolean;
    public setMaxSize(maxSize: number): void;
    public getClearEveryN(): number;
    public hasClearEveryN(): boolean;
    public setClearEveryN(clearEveryN: number): void;
    public neverClear(): boolean;
}

export declare abstract class SemanticContext extends Deletable {
    public static andContext(a: SemanticContext, b: SemanticContext): SemanticContext;
    public static orContext(a: SemanticContext, b: SemanticContext): SemanticContext;

    public getContextType(): SemanticContextType;
    public abstract eval(parser: Parser, parserCallStack: RuleContext): boolean;
    public evalPrecedence(parser: Parser, parserCallStack: RuleContext): boolean;
    public abstract hashCode(): number;
    public abstract equals(o: unknown): boolean;
    public abstract toString(): string;
}

export declare enum SemanticContextType {
    PREDICATE,
    PRECEDENCE,
    AND,
    OR,
}

export declare enum PredictionContextType {
    SINGLETON,
    ARRAY,
}

// ===== DFA =====

export declare class DFA extends Deletable {
    public readonly decision: number;

    public constructor(atnStartState: DecisionState);
    public constructor(atnStartState: DecisionState, decision: number);

    /**
     * Gets whether this DFA is a precedence DFA. Precedence DFAs use a special
     * start state {@link #s0} which is not stored in {@link #states}. The
     * {@link DFAState#edges} array for this start state contains outgoing edges
     * supplying individual start states corresponding to specific precedence
     * values.
     *
     * @return `true` if this is a precedence DFA; otherwise `false`.
     * @see Parser#getPrecedence()
     */
    public isPrecedenceDfa(): boolean;

    /**
     * Get the start state for a specific precedence value.
     *
     * @param precedence The current precedence.
     * @return The start state corresponding to the specified precedence, or
     * {@code null} if no start state exists for the specified precedence.
     *
     * @throws IllegalStateException if this is not a precedence DFA.
     * @see #isPrecedenceDfa()
     */
    public getPrecedenceStartState(precedence: number): DFAState;
    public setPrecedenceStartState(precedence: number, startState: DFAState): void;
    public getStates(precedence: number): Vector<DFAState>;
    public toString(vocabulary: Vocabulary): string;
    public toLexerString(): string;
    public atnStartState(): DecisionState;
    public s0(): DFAState;
}

export declare class DFAState extends Deletable {
    public readonly configs: ATNConfigSet;
    public readonly edges: Map<number, DFAState>;
    public readonly prediction: number;
    public readonly lexerActionExecutor: LexerActionExecutor | undefined;
    // public readonly predicates: Vector<PredPrediction>;
    public readonly stateNumber: number;
    public readonly isAcceptState: boolean;
    public readonly requiresFullContext: boolean;

    public constructor();
    public constructor(stateNumber: number);
    public constructor(configs: ATNConfigSet);

    public getAltSet(): Set<number>;
    public hashCode(): number;
    public equals(o: DFAState): boolean;
    public toString(): string;
}

export declare class Vocabulary extends Deletable {
    public constructor();
    public constructor(vocabulary: Vocabulary);
    public constructor(literalNames: string[], symbolicNames: string[]);
    public constructor(literalNames: string[], symbolicNames: string[], displayNames: string[]);
    /**
     * Returns the highest token type value. It can be used to iterate from
     * zero to that number, inclusively, thus querying all stored entries.
     * @returns the highest token type value
     */
    public getMaxTokenType(): number;

    /**
     * Gets the string literal associated with a token type. The string returned
     * by this method, when not `undefined`, can be used unaltered in a parser
     * grammar to represent this token type.
     *
     * The following table shows examples of lexer rules and the literal
     * names assigned to the corresponding token types.
     *
     * <table>
     *  <tr>
     *   <th>Rule</th>
     *   <th>Literal Name</th>
     *   <th>Java String Literal</th>
     *  </tr>
     *  <tr>
     *   <td>`THIS : 'this';`</td>
     *   <td>`'this'`</td>
     *   <td>`"'this'"`</td>
     *  </tr>
     *  <tr>
     *   <td>`SQUOTE : '\'';`</td>
     *   <td>`'\''`</td>
     *   <td>`"'\\''"`</td>
     *  </tr>
     *  <tr>
     *   <td>`ID : [A-Z]+;`</td>
     *   <td>n/a</td>
     *   <td>`undefined`</td>
     *  </tr>
     * </table>
     *
     * @param tokenType The token type.
     *
     * @returns The string literal associated with the specified token type, or
     * `undefined` if no string literal is associated with the type.
     */
    public getLiteralName(tokenType: number): string | undefined;

    /**
     * Gets the symbolic name associated with a token type. The string returned
     * by this method, when not `undefined`, can be used unaltered in a parser
     * grammar to represent this token type.
     *
     * This method supports token types defined by any of the following
     * methods:
     *
     * * Tokens created by lexer rules.
     * * Tokens defined in a `tokens{}` block in a lexer or parser
     *   grammar.
     * * The implicitly defined `EOF` token, which has the token type
     *   {@link Token#EOF}.
     *
     * The following table shows examples of lexer rules and the literal
     * names assigned to the corresponding token types.
     *
     * <table>
     *  <tr>
     *   <th>Rule</th>
     *   <th>Symbolic Name</th>
     *  </tr>
     *  <tr>
     *   <td>`THIS : 'this';`</td>
     *   <td>`THIS`</td>
     *  </tr>
     *  <tr>
     *   <td>`SQUOTE : '\'';`</td>
     *   <td>`SQUOTE`</td>
     *  </tr>
     *  <tr>
     *   <td>`ID : [A-Z]+;`</td>
     *   <td>`ID`</td>
     *  </tr>
     * </table>
     *
     * @param tokenType The token type.
     *
     * @returns The symbolic name associated with the specified token type, or
     * `undefined` if no symbolic name is associated with the type.
     */
    public getSymbolicName(tokenType: number): string | undefined;

    /**
     * Gets the display name of a token type.
     *
     * ANTLR provides a default implementation of this method, but
     * applications are free to override the behavior in any manner which makes
     * sense for the application. The default implementation returns the first
     * result from the following list which produces a non-`undefined`
     * result.
     *
     * 1. The result of {@link #getLiteralName}
     * 1. The result of {@link #getSymbolicName}
     * 1. The result of {@link Integer#toString}
     *
     * @param tokenType The token type.
     *
     * @returns The display name of the token type, for use in error reporting or
     * other user-visible messages which reference specific token types.
     */
    public getDisplayName(tokenType: number): string;
}

// ===== MISC =====

export declare class Interval extends Deletable {
    public static readonly INVALID: Interval;

    public a: number;
    public b: number;

    constructor();
    /**
     * @param a The start of the interval
     * @param b The end of the interval (inclusive)
     */
    public constructor(a: number, b: number);

    /** Interval objects are used readonly so share all with the
     *  same single value a==b up to some max size.  Use an array as a perfect hash.
     *  Return shared object for 0..INTERVAL_POOL_MAX_VALUE or a new
     *  Interval object with a..a in it.  On Java.g4, 218623 IntervalSets
     *  have a..a (set with 1 element).
     */

    /** return number of elements between a and b inclusively. x..x is length 1.
     *  if b &lt; a, then length is 0.  9..10 has length 2.
     */
    public length(): number;
    public equals(o: unknown): boolean;

    public hashCode(): number;

    /** Does this start completely before other? Disjoint */
    public startsBeforeDisjoint(other: Interval): boolean;

    /** Does this start at or before other? Non-disjoint */
    public startsBeforeNonDisjoint(other: Interval): boolean;

    /** Does this.a start after other.b? May or may not be disjoint */
    public startsAfter(other: Interval): boolean;

    /** Does this start completely after other? Disjoint */
    public startsAfterDisjoint(other: Interval): boolean;

    /** Does this start after other? NonDisjoint */
    public startsAfterNonDisjoint(other: Interval): boolean;

    /** Are both ranges disjoint? I.e., no overlap? */
    public disjoint(other: Interval): boolean;

    /** Are two intervals adjacent such as 0..41 and 42..42? */
    public adjacent(other: Interval): boolean;

    public properlyContains(other: Interval): boolean;

    /** Return the interval computed from combining this and other */
    public union(other: Interval): Interval;

    /** Return the interval in common between this and o */
    public intersection(other: Interval): Interval;

    public toString(): string;
}

/**
 * This class implements the {@link IntervalSet} backed by a sorted array of
 * non-overlapping intervals. It is particularly efficient for representing
 * large collections of numbers, where the majority of elements appear as part
 * of a sequential range of numbers that are all part of the set. For example,
 * the set { 1, 2, 3, 4, 7, 8 } may be represented as { [1, 4], [7, 8] }.
 *
 * This class is able to represent sets containing any combination of values in
 * the range {@link Integer#MIN_VALUE} to {@link Integer#MAX_VALUE}
 * (inclusive).
 */
export declare class IntervalSet extends Deletable {
    public static COMPLETE_CHAR_SET: IntervalSet;
    public static EMPTY_SET: IntervalSet;

    public constructor();
    public constructor(set: IntervalSet);

    /**
     * Create a set with all ints within range [a..b] (inclusive). If b is omitted, the set contains the single element
     * a.
     */
    public static of(a: number, b?: number): IntervalSet;

    /** combine all sets in the array returned the or'd value */
    public static or(sets: IntervalSet[]): IntervalSet;

    /**
     * Compute the set difference between two interval sets. The specific
     * operation is `left - right`.
     */
    public static subtract(left: IntervalSet, right: IntervalSet): IntervalSet;

    public clear(): void;

    /** Add interval; i.e., add all integers from a to b to set.
     *  If b&lt;a, do nothing.
     *  Keep list in sorted order (by left range value).
     *  If overlap, combine ranges.  For example,
     *  If this is {1..5, 10..20}, adding 6..7 yields
     *  {1..5, 6..7, 10..20}.  Adding 4..8 yields {1..8, 10..20}.
     */
    public add(a: number, b?: number): void;
    public add(set: IntervalSet): void;

    public addAll(set: IntervalSet): IntervalSet;
    public complement(minElement: number, maxElement: number): IntervalSet;
    public complement(vocabulary: IntervalSet): IntervalSet;
    public subtract(a: IntervalSet): IntervalSet;

    public or(a: IntervalSet): IntervalSet;
    public and(other: IntervalSet): IntervalSet;
    public contains(el: number): boolean;

    public isEmpty(): boolean;

    public getSingleElement(): number;

    /**
     * Returns the maximum value contained in the set if not isNil.
     *
     * @return the maximum value contained in the set.
     * @throws RangeError if set is empty
     */
    public getMaxElement(): number;

    /**
     * Returns the minimum value contained in the set if not isNil.
     *
     * @return the minimum value contained in the set.
     * @throws RangeError if set is empty
     */
    public getMinElement(): number;

    /** Return a list of Interval objects. */
    public getIntervals(): Vector<Interval>;
    public hashCode(): number;

    /** Are two IntervalSets equal?  Because all intervals are sorted
     *  and disjoint, equals is a simple linear walk over both lists
     *  to make sure they are the same.  Interval.equals() is used
     *  by the List.equals() method to check the ranges.
     */
    public equals(o: unknown): boolean;

    public toString(elemAreChar?: boolean): string;
    public toString(vocabulary: Vocabulary): string;

    public size(): number;
    public toList(): Vector<number>;
    public toSet(): Set<number>;

    /** Get the ith element of ordered set. */
    public get(index: number): number;
    public remove(el: number): void;
}

// ===== SUPPORT =====

export declare class BitSet extends Deletable {
    public nextSetBit(pos: number): number;
    public toString(): string;
}

// ===== TREE =====

/**
 * A chunk is either a token tag, a rule tag, or a span of literal text within a
 * tree pattern.
 *
 * The method {@link ParseTreePatternMatcher#split(String)} returns a list of
 * chunks in preparation for creating a token stream by
 * {@link ParseTreePatternMatcher#tokenize(String)}. From there, we get a parse
 * tree from with {@link ParseTreePatternMatcher#compile(String, int)}. These
 * chunks are converted to {@link RuleTagToken}, {@link TokenTagToken}, or the
 * regular tokens of the text surrounding the tags.
 */
export declare class Chunk extends Deletable {
    public constructor();
    public constructor(chunk: Chunk);

    /**
     * This method returns a text representation of the tag chunk. Labeled tags
     * are returned in the form {@code label:tag}, and unlabeled tags are
     * returned as just the tag name.
     */
    public toString(): string;
}

/**
 * Represents a token that was consumed during resynchronization
 * rather than during a valid match operation. For example,
 * we will create this kind of a node during single token insertion
 * and deletion as well as during "consume until error recovery set"
 * upon no viable alternative exceptions.
 */
export declare abstract class ErrorNode extends TerminalNode {
}

/**
 * An interface to access the tree of {@link RuleContext} objects created
 * during a parse that makes the data structure look like a simple parse tree.
 * This node represents both internal nodes, rule invocations,
 * and leaf nodes, token matches.
 *
 * The payload is either a {@link Token} or a {@link RuleContext} object.
 */
export declare abstract class ParseTree extends Extendable {
    public getChildren(): Vector<ParseTree>;
    public getParent(): ParseTree | null;

    public abstract toStringTree(pretty: boolean): string;

    /**
     * Specialize toStringTree so that it can print out more information
     * 	based upon the parser.
     */
    public abstract toStringTree(parser: Parser, pretty: boolean): string;

    public abstract toString(): string;
    public equals(obj: unknown): boolean;

    public abstract accept<T>(visitor: ParseTreeVisitor<T>): unknown;

    /** Return the combined text of all leaf nodes. Does not get any
     *  off-channel tokens (if any) so won't return whitespace and
     *  comments if they are sent to parser on hidden channel.
     */
    public abstract getText(): string;
    public abstract getSourceInterval(): Interval;

    public getTreeType(): ParseTreeType;
}

export declare abstract class ParseTreeListener {
    visitTerminal(node: TerminalNode): void;
    visitErrorNode(node: ErrorNode): void;
    enterEveryRule(ctx: ParserRuleContext): void;
    exitEveryRule(ctx: ParserRuleContext): void;
}

/**
 * Represents the result of matching a {@link ParseTree} against a tree pattern.
 */
export declare class ParseTreeMatch {
    /**
     * Constructs a new instance of {@link ParseTreeMatch} from the specified
     * parse tree and pattern.
     *
     * @param tree The parse tree to match against the pattern.
     * @param pattern The parse tree pattern.
     * @param labels A mapping from label names to collections of
     * {@link ParseTree} objects located by the tree pattern matching process.
     * @param mismatchedNode The first node which failed to match the tree
     * pattern during the matching process.
     *
     * @throws {@link Error} if `tree` is not defined
     * @throws {@link Error} if `pattern` is not defined
     * @throws {@link Error} if `labels` is not defined
     */
    public constructor(tree: ParseTree, pattern: ParseTreePattern, labels: Map<string, ParseTree>, mismatchedNode: ParseTree | undefined);

    /**
     * Get the last node associated with a specific `label`.
     *
     * For example, for pattern `<id:ID>`, `get("id")` returns the
     * node matched for that `ID`. If more than one node
     * matched the specified label, only the last is returned. If there is
     * no node associated with the label, this returns `undefined`.
     *
     * Pattern tags like `<ID>` and `<expr>` without labels are
     * considered to be labeled with `ID` and `expr`, respectively.
     *
     * @param label The label to check.
     *
     * @returns The last {@link ParseTree} to match a tag with the specified
     * label, or `undefined` if no parse tree matched a tag with the label.
     */
    public get(label: string): ParseTree | undefined;

    /**
     * Return all nodes matching a rule or token tag with the specified label.
     *
     * If the `label` is the name of a parser rule or token in the
     * grammar, the resulting list will contain both the parse trees matching
     * rule or tags explicitly labeled with the label and the complete set of
     * parse trees matching the labeled and unlabeled tags in the pattern for
     * the parser rule or token. For example, if `label` is `"foo"`,
     * the result will contain *all* of the following.
     *
     * * Parse tree nodes matching tags of the form `<foo:anyRuleName>` and
     *   `<foo:AnyTokenName>`.
     * * Parse tree nodes matching tags of the form `<anyLabel:foo>`.
     * * Parse tree nodes matching tags of the form `<foo>`.
     *
     * @param label The label.
     *
     * @returns A collection of all {@link ParseTree} nodes matching tags with
     * the specified `label`. If no nodes matched the label, an empty list
     * is returned.
     */
    public getAll(label: string): Vector<ParseTree>;

    /**
     * Return a mapping from label -> [list of nodes].
     *
     * The map includes special entries corresponding to the names of rules and
     * tokens referenced in tags in the original pattern. For additional
     * information, see the description of {@link #getAll(String)}.
     *
     * @returns A mapping from labels to parse tree nodes. If the parse tree
     * pattern did not contain any rule or token tags, this map will be empty.
     */
    public getLabels(): Map<string, ParseTree>;

    /**
     * Get the node at which we first detected a mismatch.
     *
     * @returns the node at which we first detected a mismatch, or `undefined`
     * if the match was successful.
     */
    public getMismatchedNode(): ParseTree | undefined;

    /**
     * Gets a value indicating whether the match operation succeeded.
     *
     * @returns `true` if the match operation succeeded; otherwise,
     * `false`.
     */
    public succeeded(): boolean;

    /**
     * Get the tree pattern we are matching against.
     *
     * @returns The tree pattern we are matching against.
     */
    public getPattern(): ParseTreePattern;

    /**
     * Get the parse tree we are trying to match to a pattern.
     *
     * @returns The {@link ParseTree} we are trying to match to a pattern.
     */
    public getTree(): ParseTree;

    /**
     * Get the parse tree we are trying to match to a pattern.
     *
     * @returns {ParseTree} The parse tree we are trying to match to a pattern.
     */
    public toString(): string;
}

/**
 * A pattern like `<`D> = <expr>;} converted to a {@link ParseTree} by
 * {@link ParseTreePatternMatcher#compile}.
 */
export declare class ParseTreePattern {
    /**
     * Constructs a new instance of the {@link ParseTreePattern} class.
     *
     * @param {ParseTreePatternMatcher} matcher - The {@link ParseTreePatternMatcher} which created
     *     this tree pattern.
     * @param {string} pattern - The tree pattern in concrete syntax form.
     * @param {number} patternRuleIndex - The parser rule which serves as the root of the tree pattern.
     * @param {ParseTree} patternTree - The tree pattern in {@link ParseTree} form.
     */
    public constructor(matcher: ParseTreePatternMatcher, pattern: string, patternRuleIndex: number, patternTree: ParseTree);
    public constructor(pattern: ParseTreePattern);

    /**
     * Match a specific parse tree against this tree pattern.
     * @param {ParseTree} tree - The parse tree to match against this tree pattern.
     * @returns {ParseTreeMatch} A {@link ParseTreeMatch} object describing the result of the
     * match operation. The {@link ParseTreeMatch#succeeded} method can be used to determine
     * whether or not the match was successful.
     */
    public match(tree: ParseTree): ParseTreeMatch;

    /**
     * Determines whether or not a parse tree matches this tree pattern.
     * @param {ParseTree} tree - The parse tree to match against this tree pattern.
     * @returns {boolean} `true` if `tree` is a match for the current tree
     * pattern; otherwise, `false`.
     */
    public matches(tree: ParseTree): boolean;

    /**
     * Find all nodes using XPath and then try to match those subtrees against
     * this tree pattern.
     * @param {ParseTree} tree - The ParseTree to match against this pattern.
     * @param {string} xpath - An expression matching the nodes.
     * @returns {Array<ParseTreeMatch>} A collection of {@link ParseTreeMatch} objects
     * describing the successful matches. Unsuccessful matches are omitted from the result,
     * regardless of the reason for the failure.
     */
    public findAll(tree: ParseTree, xpath: string): Vector<ParseTreeMatch>;

    /**
     * Get the {@link ParseTreePatternMatcher} which created this tree pattern.
     * @returns {ParseTreePatternMatcher} The {@link ParseTreePatternMatcher} which created
     * this tree pattern.
     */
    public getMatcher(): ParseTreePatternMatcher;

    /**
     * Get the tree pattern in concrete syntax form.
     * @returns {string} The tree pattern in concrete syntax form.
     */
    public getPattern(): string;

    /**
     * Get the parser rule which serves as the outermost rule for the tree pattern.
     * @returns { ParserRule; } The parser rule which serves as the outermost rule for
     * the tree pattern.
     */
    public getPatternRuleIndex(): number;

    /**
     * Get the tree pattern as a {@link ParseTree}. The rule and token tags from
     * the pattern are present in the parse tree as terminal nodes with a symbol
     * of type {@link RuleTagToken} or {@link TokenTagToken}.
     * @returns {ParseTree} The tree pattern as a {@link ParseTree}.
     */
    public getPatternTree(): ParseTree;
}

/**
 * A tree pattern matching mechanism for ANTLR {@link ParseTree}s.
 *
 * Patterns are strings of source input text with special tags representing
 * token or rule references such as:
 *
 * ```
 * <ID> = <expr>;
 * ```
 *
 * Given a pattern start rule such as `statement`, this object constructs
 * a {@link ParseTree} with placeholders for the `ID` and `expr`
 * subtree. Then the {@link #match} routines can compare an actual
 * {@link ParseTree} from a parse with this pattern. Tag `<ID>` matches
 * any `ID` token and tag `<expr>` references the result of the
 * `expr` rule (generally an instance of `ExprContext`.
 *
 * Pattern `x = 0;` is a similar pattern that matches the same pattern
 * except that it requires the identifier to be `x` and the expression to
 * be `0`.
 *
 * The {@link #matches} routines return `true` or `false` based
 * upon a match for the tree rooted at the parameter sent in. The
 * {@link #match} routines return a {@link ParseTreeMatch} object that
 * contains the parse tree, the parse tree pattern, and a map from tag name to
 * matched nodes (more below). A subtree that fails to match, returns with
 * {@link ParseTreeMatch#mismatchedNode} set to the first tree node that did not
 * match.
 *
 * For efficiency, you can compile a tree pattern in string form to a
 * {@link ParseTreePattern} object.
 *
 * See `TestParseTreeMatcher` for lots of examples.
 * {@link ParseTreePattern} has two static helper methods:
 * {@link ParseTreePattern#findAll} and {@link ParseTreePattern#match} that
 * are easy to use but not super efficient because they create new
 * {@link ParseTreePatternMatcher} objects each time and have to compile the
 * pattern in string form before using it.
 *
 * The lexer and parser that you pass into the {@link ParseTreePatternMatcher}
 * constructor are used to parse the pattern in string form. The lexer converts
 * the `<ID> = <expr>;` into a sequence of four tokens (assuming lexer
 * throws out whitespace or puts it on a hidden channel). Be aware that the
 * input stream is reset for the lexer (but not the parser; a
 * {@link ParserInterpreter} is created to parse the input.). Any user-defined
 * fields you have put into the lexer might get changed when this mechanism asks
 * it to scan the pattern string.
 *
 * Normally a parser does not accept token `<expr>` as a valid
 * `expr` but, from the parser passed in, we create a special version of
 * the underlying grammar representation (an {@link ATN}) that allows imaginary
 * tokens representing rules (`<expr>`) to match entire rules. We call
 * these *bypass alternatives*.
 *
 * Delimiters are `<`} and `>`}, with `\` as the escape string
 * by default, but you can set them to whatever you want using
 * {@link #setDelimiters}. You must escape both start and stop strings
 * `\<` and `\>`.
 */
export declare class ParseTreePatternMatcher {
    /**
     * Constructs a {@link ParseTreePatternMatcher} or from a {@link Lexer} and
     * {@link Parser} object. The lexer input stream is altered for tokenizing
     * the tree patterns. The parser is used as a convenient mechanism to get
     * the grammar name, plus token, rule names.
     */
    public constructor(lexer: Lexer, parser: Parser);

    /**
     * Set the delimiters used for marking rule and token tags within concrete
     * syntax used by the tree pattern parser.
     *
     * @param {string} start - The start delimiter.
     * @param {string} stop - The stop delimiter.
     * @param {string} escapeLeft - The escape sequence to use for escaping a start or stop delimiter.
     *
     * @throws {IllegalArgumentException} If `start` is `null` or empty.
     * @throws {IllegalArgumentException} If `stop` is `null` or empty.
     */
    public setDelimiters(start: string, stop: string, escapeLeft: string): void;

    /** Does `pattern` matched as rule `patternRuleIndex` match `tree`? */
    public matches(tree: ParseTree, pattern: string, patternRuleIndex: number): boolean;

    /** Does `pattern` matched as rule patternRuleIndex match tree? Pass in a
     *  compiled pattern instead of a string representation of a tree pattern.
     */
    public matches(tree: ParseTree, pattern: ParseTreePattern): boolean;

    /**
      * Compare `pattern` matched as rule `patternRuleIndex` against
      * `tree` and return a {@link ParseTreeMatch} object that contains the
      * matched elements, or the node at which the match failed.
      */
    public match(tree: ParseTree, pattern: string, patternRuleIndex: number): ParseTreeMatch;

    /**
     * Compare `pattern` matched against `tree` and return a
     * {@link ParseTreeMatch} object that contains the matched elements, or the
     * node at which the match failed. Pass in a compiled pattern instead of a
     * string representation of a tree pattern.
     */
    public match(tree: ParseTree, pattern: ParseTreePattern): ParseTreeMatch;

    /**
     * For repeated use of a tree pattern, compile it to a
     * {@link ParseTreePattern} using this method.
     */
    public compile(pattern: string, patternRuleIndex: number): ParseTreePattern;

    /**
     * Used to convert the tree pattern string into a series of tokens. The
     * input stream is reset.
     */
    public getLexer(): Lexer;

    /**
     * Used to collect to the grammar file name, token names, rule names for
     * used to parse the pattern into a parse tree.
     */
    public getParser(): Parser;

    // public tokenize(pattern: string): Array<Token>;

    /** Split `<ID> = <e:expr> ;` into 4 chunks for tokenizing by {@link #tokenize}. */
    public split(pattern: string): Array<Chunk>;
}

export declare namespace ParseTreePatternMatcher {
    export class CannotInvokeStartRule extends RuntimeException {
        constructor(e: RuntimeException);
    }

    export class StartRuleDoesNotConsumeFullPattern extends RuntimeException {
        constructor();
    }
}

export enum ParseTreeType {
    TERMINAL,
    ERROR,
    RULE,
}

/**
 * This interface defines the basic notion of a parse tree visitor. Generated
 * visitors implement this interface and the `XVisitor` interface for
 * grammar `X`.
 *
 * @author Sam Harwell
 *
 * @param <Result> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
export declare abstract class ParseTreeVisitor<Result> {
    /**
     * Visit a parse tree, and return a user-defined result of the operation.
     *
     * @param tree The {@link ParseTree} to visit.
     * @returns The result of visiting the parse tree.
     */
    visit(tree: ParseTree): Result;

    /**
     * Visit the children of a node, and return a user-defined result
     * of the operation.
     *
     * @param node The {@link RuleNode} whose children should be visited.
     * @returns The result of visiting the children of the node.
     */
    visitChildren(node: ParseTree): Result;

    /**
     * Visit a terminal node, and return a user-defined result of the operation.
     *
     * @param node The {@link TerminalNode} to visit.
     * @returns The result of visiting the node.
     */
    visitTerminal(node: TerminalNode): Result;

    /**
     * Visit an error node, and return a user-defined result of the operation.
     *
     * @param node The {@link ErrorNode} to visit.
     * @returns The result of visiting the node.
     */
    visitErrorNode(node: ErrorNode): Result;
}

export declare abstract class TerminalNode extends ParseTree {
    public abstract getSymbol(): Token;
    public abstract setParent(parent: RuleContext): void;
}

/** This is the complete ANTLR4 WASM module definition. */
export declare interface ANTLR4Wasm extends EmscriptenModule {
    flushPendingDeletes(): void;

    // Exception handling
    std$$exception: typeof std$$exception;

    StringVector: typeof StringVector;
    TerminalNodeVector: typeof TerminalNodeVector;

    // ===== main =====
    readonly ANTLRCPP_VERSION_MAJOR: number;
    readonly ANTLRCPP_VERSION_MINOR: number;
    readonly ANTLRCPP_VERSION_PATCH: number;
    readonly ANTLRCPP_VERSION: number;

    ANTLRErrorListener: typeof ANTLRErrorListener;
    ANTLRErrorStrategy: typeof ANTLRErrorStrategy;
    ANTLRInputStream: typeof ANTLRInputStream;
    BailErrorStrategy: typeof BailErrorStrategy;
    BufferedTokenStream: typeof BufferedTokenStream;
    CancellationException: typeof CancellationException;
    CharStream: typeof CharStream;
    CommonToken: typeof CommonToken;
    CommonTokenStream: typeof CommonTokenStream;
    DefaultErrorStrategy: typeof DefaultErrorStrategy;
    FailedPredicateException: typeof FailedPredicateException;
    IllegalStateException: typeof IllegalStateException;
    InputMismatchException: typeof InputMismatchException;
    IntStream: typeof IntStream;
    LexerNoViableAltException: typeof LexerNoViableAltException;
    NoViableAltException: typeof NoViableAltException;
    ParseCancellationException: typeof ParseCancellationException;
    Parser: typeof Parser;
    ParserRuleContext: typeof ParserRuleContext;
    RecognitionException: typeof RecognitionException;
    Recognizer: new <T extends ATNSimulator>() => Recognizer<T>;
    RuleContext: typeof RuleContext;
    Token: typeof Token;
    TokenFactory: typeof TokenFactory;
    TokenSource: typeof TokenSource;
    TokenStream: typeof TokenStream;
    WritableToken: typeof WritableToken;

    // ===== ATN =====
    ATN: typeof ATN;
    ATNConfig: typeof ATNConfig;
    ATNConfigSet: typeof ATNConfigSet;
    ATNDeserializer: typeof ATNDeserializer;
    ATNSimulator: typeof ATNSimulator;
    ATNState: typeof ATNState;
    ATNStateType: typeof ATNStateType;
    ATNType: typeof ATNType;
    DecisionState: typeof DecisionState;
    Lexer: typeof Lexer;
    LexerATNSimulator: typeof LexerATNSimulator;
    LexerAction: typeof LexerAction;
    LexerActionType: typeof LexerActionType;
    LexerActionExecutor: typeof LexerActionExecutor;
    ParserATNSimulator: typeof ParserATNSimulator;
    PredictionMode: typeof PredictionMode;
    RuleStartState: typeof RuleStartState;
    RuleStopState: typeof RuleStopState;
    RuntimeException: typeof RuntimeException;
    SerializedATNView: typeof SerializedATNView;
    TokensStartState: typeof TokensStartState;
    Transition: typeof Transition;
    TransitionType: typeof TransitionType;
    PredictionContext: typeof PredictionContext;
    PredictionContextCache: typeof PredictionContextCache;
    PredictionContextMergeCache: typeof PredictionContextMergeCache;
    PredictionContextMergeCacheOptions: typeof PredictionContextMergeCacheOptions;
    SemanticContext: typeof SemanticContext;
    SemanticContextType: typeof SemanticContextType;
    PredictionContextType: typeof PredictionContextType;

    atnStateTypeName(stateType: ATNStateType): string;

    // ===== DFA =====
    DFA: typeof DFA;
    DFAState: typeof DFAState;
    Vocabulary: typeof Vocabulary;

    // ===== MISC =====
    Interval: typeof Interval;
    IntervalSet: typeof IntervalSet;

    // ===== SUPPORT =====
    BitSet: typeof BitSet;

    // ===== TREE =====
    Chunk: typeof Chunk;
    ErrorNode: typeof ErrorNode;
    ParseTree: typeof ParseTree;
    ParseTreeListener: typeof ParseTreeListener;
    ParseTreeMatch: typeof ParseTreeMatch;
    ParseTreePattern: typeof ParseTreePattern;
    ParseTreeType: typeof ParseTreeType;
    ParseTreeVisitor: new <T>() => ParseTreeVisitor<T>;
    TerminalNode: typeof TerminalNode;
}

export default function Module(): Promise<ANTLR4Wasm>;
