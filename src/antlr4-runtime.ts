/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

import Module, { ANTLR4Wasm } from "../wasm/antlr4-runtime-wasm.js";

let antlr4: ANTLR4Wasm;
try {
    antlr4 = await Module();
} catch (e) {
    throw new Error("Could not initialize the ANTLR4 runtime:\n" + e);
}

const std$$exception = antlr4["std$$exception"];

const ANTLRCPP_VERSION_MAJOR = antlr4.ANTLRCPP_VERSION_MAJOR;
const ANTLRCPP_VERSION_MINOR = antlr4.ANTLRCPP_VERSION_MINOR;
const ANTLRCPP_VERSION_PATCH = antlr4.ANTLRCPP_VERSION_PATCH;
const ANTLRCPP_VERSION = antlr4.ANTLRCPP_VERSION;

type ANTLRErrorListener = InstanceType<typeof antlr4.ANTLRErrorListener>;
const ANTLRErrorListener = antlr4.ANTLRErrorListener;

type ANTLRErrorStrategy = InstanceType<typeof antlr4.ANTLRErrorStrategy>;
const ANTLRErrorStrategy = antlr4.ANTLRErrorStrategy;

type ANTLRInputStream = InstanceType<typeof antlr4.ANTLRInputStream>;
const ANTLRInputStream = antlr4.ANTLRInputStream;

const CancellationException = antlr4.CancellationException;

type CharStream = InstanceType<typeof antlr4.CharStream>;
const CharStream = antlr4.CharStream;

type CommonToken = InstanceType<typeof antlr4.CommonToken>;
const CommonToken = antlr4.CommonToken;

type IntStream = InstanceType<typeof antlr4.IntStream>;
const IntStream = antlr4.IntStream;

type LexerATNSimulator = InstanceType<typeof antlr4.LexerATNSimulator>;
const LexerATNSimulator = antlr4.LexerATNSimulator;

type LexerNoViableAltException = InstanceType<typeof antlr4.LexerNoViableAltException>;
const LexerNoViableAltException = antlr4.LexerNoViableAltException;

type Parser = InstanceType<typeof antlr4.Parser>;
const Parser = antlr4.Parser;

type ParserRuleContext = InstanceType<typeof antlr4.ParserRuleContext>;
const ParserRuleContext = antlr4.ParserRuleContext;

type RecognitionException = InstanceType<typeof antlr4.RecognitionException>;
const RecognitionException = antlr4.RecognitionException;

type Recognizer = InstanceType<typeof antlr4.Recognizer>;
const Recognizer = antlr4.Recognizer;

type RuleContext = InstanceType<typeof antlr4.RuleContext>;
const RuleContext = antlr4.RuleContext;

type Token = InstanceType<typeof antlr4.Token>;
const Token = antlr4.Token;

type TokenFactory = InstanceType<typeof antlr4.TokenFactory>;
const TokenFactory = antlr4.TokenFactory;

type TokenSource = InstanceType<typeof antlr4.TokenSource>;
const TokenSource = antlr4.TokenSource;

type TokenStream = InstanceType<typeof antlr4.TokenStream>;
const TokenStream = antlr4.TokenStream;

type WritableToken = InstanceType<typeof antlr4.WritableToken>;
const WritableToken = antlr4.WritableToken;


type ATN = InstanceType<typeof antlr4.ATN>;
const ATN = antlr4.ATN;

type ATNConfig = InstanceType<typeof antlr4.ATNConfig>;
const ATNConfig = antlr4.ATNConfig;

type ATNConfigSet = InstanceType<typeof antlr4.ATNConfigSet>;
const ATNConfigSet = antlr4.ATNConfigSet;

type ATNDeserializer = InstanceType<typeof antlr4.ATNDeserializer>;
const ATNDeserializer = antlr4.ATNDeserializer;

type ATNSimulator = InstanceType<typeof antlr4.ATNSimulator>;
const ATNSimulator = antlr4.ATNSimulator;

type ATNState = InstanceType<typeof antlr4.ATNState>;
const ATNState = antlr4.ATNState;

const ATNStateType = antlr4.ATNStateType;

const ATNType = antlr4.ATNType;

type DecisionState = InstanceType<typeof antlr4.DecisionState>;
const DecisionState = antlr4.DecisionState;

type Lexer = InstanceType<typeof antlr4.Lexer>;
const Lexer = antlr4.Lexer;

type LexerAction = InstanceType<typeof antlr4.LexerAction>;
const LexerAction = antlr4.LexerAction;

const LexerActionType = antlr4.LexerActionType;

type LexerActionExecutor = InstanceType<typeof antlr4.LexerActionExecutor>;
const LexerActionExecutor = antlr4.LexerActionExecutor;

type RuleStartState = InstanceType<typeof antlr4.RuleStartState>;
const RuleStartState = antlr4.RuleStartState;

type RuleStopState = InstanceType<typeof antlr4.RuleStopState>;
const RuleStopState = antlr4.RuleStopState;

type RuntimeException = InstanceType<typeof antlr4.RuntimeException>;
const RuntimeException = antlr4.RuntimeException;

type SerializedATNView = InstanceType<typeof antlr4.SerializedATNView>;
const SerializedATNView = antlr4.SerializedATNView;

type TokensStartState = InstanceType<typeof antlr4.TokensStartState>;
const TokensStartState = antlr4.TokensStartState;

type Transition = InstanceType<typeof antlr4.Transition>;
const Transition = antlr4.Transition;

const TransitionType = antlr4.TransitionType;

type PredictionContext = InstanceType<typeof antlr4.PredictionContext>;
const PredictionContext = antlr4.PredictionContext;

type PredictionContextCache = InstanceType<typeof antlr4.PredictionContextCache>;
const PredictionContextCache = antlr4.PredictionContextCache;

type PredictionContextMergeCache = InstanceType<typeof antlr4.PredictionContextMergeCache>;
const PredictionContextMergeCache = antlr4.PredictionContextMergeCache;

type PredictionContextMergeCacheOptions = InstanceType<typeof antlr4.PredictionContextMergeCacheOptions>;
const PredictionContextMergeCacheOptions = antlr4.PredictionContextMergeCacheOptions;

type SemanticContext = InstanceType<typeof antlr4.SemanticContext>;
const SemanticContext = antlr4.SemanticContext;

const SemanticContextType = antlr4.SemanticContextType;

const PredictionContextType = antlr4.PredictionContextType;

const atnStateTypeName = antlr4.atnStateTypeName;

type DFA = InstanceType<typeof antlr4.DFA>;
const DFA = antlr4.DFA;

type DFAState = InstanceType<typeof antlr4.DFAState>;
const DFAState = antlr4.DFAState;

type Vocabulary = InstanceType<typeof antlr4.Vocabulary>;
const Vocabulary = antlr4.Vocabulary;

type Interval = InstanceType<typeof antlr4.Interval>;
const Interval = antlr4.Interval;

type IntervalSet = InstanceType<typeof antlr4.IntervalSet>;
const IntervalSet = antlr4.IntervalSet;

type BitSet = InstanceType<typeof antlr4.BitSet>;
const BitSet = antlr4.BitSet;

type Chunk = InstanceType<typeof antlr4.Chunk>;
const Chunk = antlr4.Chunk;

type ErrorNode = InstanceType<typeof antlr4.ErrorNode>;
const ErrorNode = antlr4.ErrorNode;

type ParseTree = InstanceType<typeof antlr4.ParseTree>;
const ParseTree = antlr4.ParseTree;

type ParseTreeListener = InstanceType<typeof antlr4.ParseTreeListener>;
const ParseTreeListener = antlr4.ParseTreeListener;

type ParseTreeMatch = InstanceType<typeof antlr4.ParseTreeMatch>;
const ParseTreeMatch = antlr4.ParseTreeMatch;

type ParseTreePattern = InstanceType<typeof antlr4.ParseTreePattern>;
const ParseTreePattern = antlr4.ParseTreePattern;

const ParseTreeType = antlr4.ParseTreeType;

type ParseTreeVisitor = InstanceType<typeof antlr4.ParseTreeVisitor>;
const ParseTreeVisitor = antlr4.ParseTreeVisitor;

type TerminalNode = InstanceType<typeof antlr4.TerminalNode>;
const TerminalNode = antlr4.TerminalNode;

export {
    std$$exception,

    ANTLRCPP_VERSION_MAJOR,
    ANTLRCPP_VERSION_MINOR,
    ANTLRCPP_VERSION_PATCH,
    ANTLRCPP_VERSION,

    ANTLRErrorListener,
    ANTLRErrorStrategy,
    ANTLRInputStream,
    CancellationException,
    CharStream,
    CommonToken,
    IntStream,
    LexerATNSimulator,
    LexerNoViableAltException,
    Parser,
    ParserRuleContext,
    RecognitionException,
    Recognizer,
    RuleContext,
    Token,
    TokenFactory,
    TokenSource,
    TokenStream,
    WritableToken,

    ATN,
    ATNConfig,
    ATNConfigSet,
    ATNDeserializer,
    ATNSimulator,
    ATNState,
    ATNStateType,
    ATNType,
    DecisionState,
    Lexer,
    LexerAction,
    LexerActionType,
    LexerActionExecutor,
    RuleStartState,
    RuleStopState,
    RuntimeException,
    SerializedATNView,
    TokensStartState,
    Transition,
    TransitionType,
    PredictionContext,
    PredictionContextCache,
    PredictionContextMergeCache,
    PredictionContextMergeCacheOptions,
    SemanticContext,
    SemanticContextType,
    PredictionContextType,
    atnStateTypeName,

    DFA,
    DFAState,
    Vocabulary,
    Interval,
    IntervalSet,
    BitSet,
    Chunk,
    ErrorNode,
    ParseTree,
    ParseTreeListener,
    ParseTreeMatch,
    ParseTreePattern,
    ParseTreeType,
    ParseTreeVisitor,
    TerminalNode,
};