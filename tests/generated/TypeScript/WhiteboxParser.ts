// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.0
// noinspection ES6UnusedImports,JSUnusedGlobalSymbols,JSUnusedLocalSymbols

import {
    ATN, ATNDeserializer, DFA, FailedPredicateException, Parser, ParserATNSimulator, ParserRuleContext as PRC,
    PredictionContextCache, RecognitionException, SerializedATNView, TerminalNode, Token, TokenStream, StringVector,
    Vector, Vocabulary
} from "../../../src/antlr4-runtime.js";

const ParserExtender = Parser.extend<Parser>("Parser", {});
const ParserRuleContext = PRC.extend<PRC>("PRC", {});
type ParserRuleContext = InstanceType<typeof ParserRuleContext>;

export default class WhiteboxParser extends ParserExtender {
    public static readonly LOREM = 1;
    public static readonly IPSUM = 2;
    public static readonly DOLOR = 3;
    public static readonly SIT = 4;
    public static readonly AMET = 5;
    public static readonly CONSECTETUR = 6;
    public static readonly ADIPISCING = 7;
    public static readonly WS = 8;
    public static readonly EOF = Token.EOF;
    public static readonly RULE_test1 = 0;
    public static readonly RULE_rule1 = 1;
    public static readonly RULE_rule2 = 2;
    public static readonly RULE_rule3 = 3;
    public static readonly RULE_rule4 = 4;
    public static readonly RULE_rule5 = 5;
    public static readonly RULE_test2 = 6;
    public static readonly RULE_rule7 = 7;
    public static readonly RULE_rule8 = 8;
    public static readonly RULE_rule9 = 9;
    public static readonly RULE_rule10 = 10;
    public static readonly RULE_rule11 = 11;
    public static readonly RULE_test3 = 12;
    public static readonly RULE_rule13 = 13;
    public static readonly literalNames: string[] = ["", "'LOREM'",
        "'IPSUM'", "'DOLOR'",
        "'SIT'", "'AMET'",
        "'CONSECTETUR'",
        "'ADIPISCING'"];
    public static readonly symbolicNames: string[] = ["", "LOREM",
        "IPSUM", "DOLOR",
        "SIT", "AMET",
        "CONSECTETUR",
        "ADIPISCING",
        "WS"];

    public static readonly ruleNames: string[] = [
        "test1", "rule1", "rule2", "rule3", "rule4", "rule5", "test2", "rule7",
        "rule8", "rule9", "rule10", "rule11", "test3", "rule13",
    ];
    public override getGrammarFileName(): string { return "Whitebox.g4"; }
    public getLiteralNames(): string[] { return WhiteboxParser.literalNames; }
    public getSymbolicNames(): string[] { return WhiteboxParser.symbolicNames; }
    public override getRuleNames(): StringVector {
        const result = new StringVector();
        WhiteboxParser.ruleNames.forEach((ruleName) => { result.push_back(ruleName); });

        return result;
    }
    public override getSerializedATN(): SerializedATNView { return WhiteboxParser._serializedATN; }

    protected createFailedPredicateException(predicate?: string, message?: string): FailedPredicateException {
        return new FailedPredicateException(this, predicate, message);
    }

    constructor(input: TokenStream) {
        super(input);

        const atn = this.getATN();
        const decisionsToDFA: DFA[] = [];
        const vector = atn.decisionToState;
        for (let i = 0; i < vector.size(); i++) {
            decisionsToDFA.push(new DFA(vector.get(i), i));
        }

        this.setInterpreter(new ParserATNSimulator(this, atn, decisionsToDFA, new PredictionContextCache()));
    }

    // @RuleVersion(0)
    public test1(): Test1Context {
        let localctx: Test1Context = new Test1Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 0, WhiteboxParser.RULE_test1);
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(28);
                this.rule1();
                this.setState(29);
                this.match(WhiteboxParser.ADIPISCING);
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule1(): Rule1Context {
        let localctx: Rule1Context = new Rule1Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 2, WhiteboxParser.RULE_rule1);
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(31);
                this.rule2();
                this.setState(32);
                this.match(WhiteboxParser.CONSECTETUR);
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule2(): Rule2Context {
        let localctx: Rule2Context = new Rule2Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 4, WhiteboxParser.RULE_rule2);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(34);
                this.match(WhiteboxParser.LOREM);
                this.setState(35);
                this.rule3();
                this.setState(36);
                this.rule5();
                this.setState(40);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                while (_la === 4) {
                    {
                        {
                            this.setState(37);
                            this.match(WhiteboxParser.SIT);
                        }
                    }
                    this.setState(42);
                    this.getErrorHandler().sync(this);
                    _la = this.input().LA(1);
                }
                this.setState(44);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 5) {
                    {
                        this.setState(43);
                        this.match(WhiteboxParser.AMET);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule3(): Rule3Context {
        let localctx: Rule3Context = new Rule3Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 6, WhiteboxParser.RULE_rule3);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(46);
                this.rule4();
                this.setState(48);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 3) {
                    {
                        this.setState(47);
                        this.match(WhiteboxParser.DOLOR);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule4(): Rule4Context {
        let localctx: Rule4Context = new Rule4Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 8, WhiteboxParser.RULE_rule4);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(51);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 2) {
                    {
                        this.setState(50);
                        this.match(WhiteboxParser.IPSUM);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule5(): Rule5Context {
        let localctx: Rule5Context = new Rule5Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 10, WhiteboxParser.RULE_rule5);
        try {
            this.enterOuterAlt(localctx, 1);
            // tslint:disable-next-line:no-empty
            {
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public test2(): Test2Context {
        let localctx: Test2Context = new Test2Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 12, WhiteboxParser.RULE_test2);
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(55);
                this.rule7();
                this.setState(56);
                this.match(WhiteboxParser.ADIPISCING);
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule7(): Rule7Context {
        let localctx: Rule7Context = new Rule7Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 14, WhiteboxParser.RULE_rule7);
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(58);
                this.rule8();
                this.setState(59);
                this.match(WhiteboxParser.CONSECTETUR);
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule8(): Rule8Context {
        let localctx: Rule8Context = new Rule8Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 16, WhiteboxParser.RULE_rule8);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(61);
                this.match(WhiteboxParser.LOREM);
                this.setState(62);
                this.rule11();
                this.setState(63);
                this.rule9();
                this.setState(67);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                while (_la === 4) {
                    {
                        {
                            this.setState(64);
                            this.match(WhiteboxParser.SIT);
                        }
                    }
                    this.setState(69);
                    this.getErrorHandler().sync(this);
                    _la = this.input().LA(1);
                }
                this.setState(71);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 5) {
                    {
                        this.setState(70);
                        this.match(WhiteboxParser.AMET);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule9(): Rule9Context {
        let localctx: Rule9Context = new Rule9Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 18, WhiteboxParser.RULE_rule9);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(73);
                this.rule10();
                this.setState(75);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 3) {
                    {
                        this.setState(74);
                        this.match(WhiteboxParser.DOLOR);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule10(): Rule10Context {
        let localctx: Rule10Context = new Rule10Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 20, WhiteboxParser.RULE_rule10);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(78);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 2) {
                    {
                        this.setState(77);
                        this.match(WhiteboxParser.IPSUM);
                    }
                }

            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule11(): Rule11Context {
        let localctx: Rule11Context = new Rule11Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 22, WhiteboxParser.RULE_rule11);
        try {
            this.enterOuterAlt(localctx, 1);
            // tslint:disable-next-line:no-empty
            {
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public test3(): Test3Context {
        let localctx: Test3Context = new Test3Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 24, WhiteboxParser.RULE_test3);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(82);
                this.match(WhiteboxParser.LOREM);
                this.setState(84);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                if (_la === 2) {
                    {
                        this.setState(83);
                        this.match(WhiteboxParser.IPSUM);
                    }
                }

                this.setState(86);
                this.rule13();
                this.setState(88);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                do {
                    {
                        {
                            this.setState(87);
                            this.match(WhiteboxParser.AMET);
                        }
                    }
                    this.setState(90);
                    this.getErrorHandler().sync(this);
                    _la = this.input().LA(1);
                } while (_la === 5);
                this.setState(92);
                this.match(WhiteboxParser.CONSECTETUR);
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }
    // @RuleVersion(0)
    public rule13(): Rule13Context {
        let localctx: Rule13Context = new Rule13Context(this.getCtx(), this.getState());
        this.enterRule(localctx, 26, WhiteboxParser.RULE_rule13);
        let _la: number;
        try {
            this.enterOuterAlt(localctx, 1);
            {
                this.setState(97);
                this.getErrorHandler().sync(this);
                _la = this.input().LA(1);
                while (_la === 3 || _la === 4) {
                    {
                        {
                            this.setState(94);
                            _la = this.input().LA(1);
                            if (!(_la === 3 || _la === 4)) {
                                this.getErrorHandler().recoverInline(this);
                            }
                            else {
                                this.getErrorHandler().reportMatch(this);
                                this.consume();
                            }
                        }
                    }
                    this.setState(99);
                    this.getErrorHandler().sync(this);
                    _la = this.input().LA(1);
                }
            }
        }
        catch (re) {
            if (re instanceof RecognitionException) {
                localctx.captureException();
                this.getErrorHandler().reportError(this, re);
                this.getErrorHandler().recover(this, re);
            } else {
                throw re;
            }
        }
        finally {
            this.exitRule();
        }
        return localctx;
    }

    public static readonly _serializedATN = new SerializedATNView([4, 1, 8, 101, 2, 0, 7, 0, 2,
        1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7, 4, 2, 5, 7, 5, 2, 6, 7, 6, 2, 7, 7, 7, 2, 8, 7, 8, 2, 9, 7, 9, 2,
        10, 7, 10, 2, 11, 7, 11, 2, 12, 7, 12, 2, 13, 7, 13, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1,
        2, 1, 2, 5, 2, 39, 8, 2, 10, 2, 12, 2, 42, 9, 2, 1, 2, 3, 2, 45, 8, 2, 1, 3, 1, 3, 3, 3, 49, 8, 3, 1, 4,
        3, 4, 52, 8, 4, 1, 5, 1, 5, 1, 6, 1, 6, 1, 6, 1, 7, 1, 7, 1, 7, 1, 8, 1, 8, 1, 8, 1, 8, 5, 8, 66, 8, 8, 10,
        8, 12, 8, 69, 9, 8, 1, 8, 3, 8, 72, 8, 8, 1, 9, 1, 9, 3, 9, 76, 8, 9, 1, 10, 3, 10, 79, 8, 10, 1, 11,
        1, 11, 1, 12, 1, 12, 3, 12, 85, 8, 12, 1, 12, 1, 12, 4, 12, 89, 8, 12, 11, 12, 12, 12, 90, 1, 12,
        1, 12, 1, 13, 5, 13, 96, 8, 13, 10, 13, 12, 13, 99, 9, 13, 1, 13, 0, 0, 14, 0, 2, 4, 6, 8, 10, 12,
        14, 16, 18, 20, 22, 24, 26, 0, 1, 1, 0, 3, 4, 97, 0, 28, 1, 0, 0, 0, 2, 31, 1, 0, 0, 0, 4, 34, 1, 0,
        0, 0, 6, 46, 1, 0, 0, 0, 8, 51, 1, 0, 0, 0, 10, 53, 1, 0, 0, 0, 12, 55, 1, 0, 0, 0, 14, 58, 1, 0, 0, 0,
        16, 61, 1, 0, 0, 0, 18, 73, 1, 0, 0, 0, 20, 78, 1, 0, 0, 0, 22, 80, 1, 0, 0, 0, 24, 82, 1, 0, 0, 0, 26,
        97, 1, 0, 0, 0, 28, 29, 3, 2, 1, 0, 29, 30, 5, 7, 0, 0, 30, 1, 1, 0, 0, 0, 31, 32, 3, 4, 2, 0, 32, 33,
        5, 6, 0, 0, 33, 3, 1, 0, 0, 0, 34, 35, 5, 1, 0, 0, 35, 36, 3, 6, 3, 0, 36, 40, 3, 10, 5, 0, 37, 39, 5,
        4, 0, 0, 38, 37, 1, 0, 0, 0, 39, 42, 1, 0, 0, 0, 40, 38, 1, 0, 0, 0, 40, 41, 1, 0, 0, 0, 41, 44, 1, 0,
        0, 0, 42, 40, 1, 0, 0, 0, 43, 45, 5, 5, 0, 0, 44, 43, 1, 0, 0, 0, 44, 45, 1, 0, 0, 0, 45, 5, 1, 0, 0,
        0, 46, 48, 3, 8, 4, 0, 47, 49, 5, 3, 0, 0, 48, 47, 1, 0, 0, 0, 48, 49, 1, 0, 0, 0, 49, 7, 1, 0, 0, 0,
        50, 52, 5, 2, 0, 0, 51, 50, 1, 0, 0, 0, 51, 52, 1, 0, 0, 0, 52, 9, 1, 0, 0, 0, 53, 54, 1, 0, 0, 0, 54,
        11, 1, 0, 0, 0, 55, 56, 3, 14, 7, 0, 56, 57, 5, 7, 0, 0, 57, 13, 1, 0, 0, 0, 58, 59, 3, 16, 8, 0, 59,
        60, 5, 6, 0, 0, 60, 15, 1, 0, 0, 0, 61, 62, 5, 1, 0, 0, 62, 63, 3, 22, 11, 0, 63, 67, 3, 18, 9, 0, 64,
        66, 5, 4, 0, 0, 65, 64, 1, 0, 0, 0, 66, 69, 1, 0, 0, 0, 67, 65, 1, 0, 0, 0, 67, 68, 1, 0, 0, 0, 68, 71,
        1, 0, 0, 0, 69, 67, 1, 0, 0, 0, 70, 72, 5, 5, 0, 0, 71, 70, 1, 0, 0, 0, 71, 72, 1, 0, 0, 0, 72, 17, 1,
        0, 0, 0, 73, 75, 3, 20, 10, 0, 74, 76, 5, 3, 0, 0, 75, 74, 1, 0, 0, 0, 75, 76, 1, 0, 0, 0, 76, 19, 1,
        0, 0, 0, 77, 79, 5, 2, 0, 0, 78, 77, 1, 0, 0, 0, 78, 79, 1, 0, 0, 0, 79, 21, 1, 0, 0, 0, 80, 81, 1, 0,
        0, 0, 81, 23, 1, 0, 0, 0, 82, 84, 5, 1, 0, 0, 83, 85, 5, 2, 0, 0, 84, 83, 1, 0, 0, 0, 84, 85, 1, 0, 0,
        0, 85, 86, 1, 0, 0, 0, 86, 88, 3, 26, 13, 0, 87, 89, 5, 5, 0, 0, 88, 87, 1, 0, 0, 0, 89, 90, 1, 0, 0,
        0, 90, 88, 1, 0, 0, 0, 90, 91, 1, 0, 0, 0, 91, 92, 1, 0, 0, 0, 92, 93, 5, 6, 0, 0, 93, 25, 1, 0, 0, 0,
        94, 96, 7, 0, 0, 0, 95, 94, 1, 0, 0, 0, 96, 99, 1, 0, 0, 0, 97, 95, 1, 0, 0, 0, 97, 98, 1, 0, 0, 0, 98,
        27, 1, 0, 0, 0, 99, 97, 1, 0, 0, 0, 11, 40, 44, 48, 51, 67, 71, 75, 78, 84, 90, 97]);

    private static readonly vocabulary = new Vocabulary(WhiteboxParser.literalNames, WhiteboxParser.symbolicNames, []);

    public override getVocabulary(): Vocabulary {
        return WhiteboxParser.vocabulary;
    }

    private static __ATN: ATN;
    public getATN(): ATN {
        if (!WhiteboxParser.__ATN) {
            WhiteboxParser.__ATN = new ATNDeserializer().deserialize(WhiteboxParser._serializedATN);
        }

        return WhiteboxParser.__ATN;
    }
}

export class Test1Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule1(): Rule1Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule1, 0) as Rule1Context;
    }
    public ADIPISCING(): TerminalNode | null {
        return this.getToken(WhiteboxParser.ADIPISCING, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_test1;
    }
}


export class Rule1Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule2(): Rule2Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule2, 0) as Rule2Context;
    }
    public CONSECTETUR(): TerminalNode | null {
        return this.getToken(WhiteboxParser.CONSECTETUR, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule1;
    }
}


export class Rule2Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public LOREM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.LOREM, 0);
    }
    public rule3(): Rule3Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule3, 0) as Rule3Context;
    }
    public rule5(): Rule5Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule5, 0) as Rule5Context;
    }
    public SIT_list(): Vector<TerminalNode> {
        return this.getTokens(WhiteboxParser.SIT);
    }
    public SIT(i: number): TerminalNode | null {
        return this.getToken(WhiteboxParser.SIT, i);
    }
    public AMET(): TerminalNode | null {
        return this.getToken(WhiteboxParser.AMET, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule2;
    }
}


export class Rule3Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule4(): Rule4Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule4, 0) as Rule4Context;
    }
    public DOLOR(): TerminalNode | null {
        return this.getToken(WhiteboxParser.DOLOR, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule3;
    }
}


export class Rule4Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public IPSUM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.IPSUM, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule4;
    }
}


export class Rule5Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule5;
    }
}


export class Test2Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule7(): Rule7Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule7, 0) as Rule7Context;
    }
    public ADIPISCING(): TerminalNode | null {
        return this.getToken(WhiteboxParser.ADIPISCING, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_test2;
    }
}


export class Rule7Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule8(): Rule8Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule8, 0) as Rule8Context;
    }
    public CONSECTETUR(): TerminalNode | null {
        return this.getToken(WhiteboxParser.CONSECTETUR, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule7;
    }
}


export class Rule8Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public LOREM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.LOREM, 0);
    }
    public rule11(): Rule11Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule11, 0) as Rule11Context;
    }
    public rule9(): Rule9Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule9, 0) as Rule9Context;
    }
    public SIT_list(): Vector<TerminalNode> {
        return this.getTokens(WhiteboxParser.SIT);
    }
    public SIT(i: number): TerminalNode | null {
        return this.getToken(WhiteboxParser.SIT, i);
    }
    public AMET(): TerminalNode | null {
        return this.getToken(WhiteboxParser.AMET, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule8;
    }
}


export class Rule9Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public rule10(): Rule10Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule10, 0) as Rule10Context;
    }
    public DOLOR(): TerminalNode | null {
        return this.getToken(WhiteboxParser.DOLOR, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule9;
    }
}


export class Rule10Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public IPSUM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.IPSUM, 0);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule10;
    }
}


export class Rule11Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule11;
    }
}


export class Test3Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public LOREM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.LOREM, 0);
    }
    public rule13(): Rule13Context {
        return this.getRuleContext(WhiteboxParser.RULE_rule13, 0) as Rule13Context;
    }
    public CONSECTETUR(): TerminalNode | null {
        return this.getToken(WhiteboxParser.CONSECTETUR, 0);
    }
    public IPSUM(): TerminalNode | null {
        return this.getToken(WhiteboxParser.IPSUM, 0);
    }
    public AMET_list(): Vector<TerminalNode> {
        return this.getTokens(WhiteboxParser.AMET);
    }
    public AMET(i: number): TerminalNode | null {
        return this.getToken(WhiteboxParser.AMET, i);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_test3;
    }
}


export class Rule13Context extends ParserRuleContext {
    public constructor(parent: ParserRuleContext | null, invokingState: number) {
        super(parent, invokingState);

    }
    public DOLOR_list(): Vector<TerminalNode> {
        return this.getTokens(WhiteboxParser.DOLOR);
    }
    public DOLOR(i: number): TerminalNode | null {
        return this.getToken(WhiteboxParser.DOLOR, i);
    }
    public SIT_list(): Vector<TerminalNode> {
        return this.getTokens(WhiteboxParser.SIT);
    }
    public SIT(i: number): TerminalNode | null {
        return this.getToken(WhiteboxParser.SIT, i);
    }
    public override getRuleIndex(): number {
        return WhiteboxParser.RULE_rule13;
    }
}
