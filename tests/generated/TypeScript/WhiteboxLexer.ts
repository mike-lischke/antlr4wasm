// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.1
// noinspection ES6UnusedImports,JSUnusedGlobalSymbols,JSUnusedLocalSymbols
import {
	ATN,
	ATNDeserializer,
	CharStream,
	DecisionState, DFA,
	Lexer,
	LexerATNSimulator,
	RuleContext,
	PredictionContextCache,
	Token
} from "antlr4";
export default class WhiteboxLexer extends Lexer {
	public static readonly LOREM = 1;
	public static readonly IPSUM = 2;
	public static readonly DOLOR = 3;
	public static readonly SIT = 4;
	public static readonly AMET = 5;
	public static readonly CONSECTETUR = 6;
	public static readonly ADIPISCING = 7;
	public static readonly WS = 8;
	public static readonly EOF = Token.EOF;

	public static readonly channelNames: string[] = [ "DEFAULT_TOKEN_CHANNEL", "HIDDEN" ];
	public static readonly literalNames: (string | null)[] = [ null, "'LOREM'", 
                                                            "'IPSUM'", "'DOLOR'", 
                                                            "'SIT'", "'AMET'", 
                                                            "'CONSECTETUR'", 
                                                            "'ADIPISCING'" ];
	public static readonly symbolicNames: (string | null)[] = [ null, "LOREM", 
                                                             "IPSUM", "DOLOR", 
                                                             "SIT", "AMET", 
                                                             "CONSECTETUR", 
                                                             "ADIPISCING", 
                                                             "WS" ];
	public static readonly modeNames: string[] = [ "DEFAULT_MODE", ];

	public static readonly ruleNames: string[] = [
		"LOREM", "IPSUM", "DOLOR", "SIT", "AMET", "CONSECTETUR", "ADIPISCING", 
		"WS",
	];


	constructor(input: CharStream) {
		super(input);
		this._interp = new LexerATNSimulator(this, WhiteboxLexer._ATN, WhiteboxLexer.DecisionsToDFA, new PredictionContextCache());
	}

	public get grammarFileName(): string { return "Whitebox.g4"; }

	public get literalNames(): (string | null)[] { return WhiteboxLexer.literalNames; }
	public get symbolicNames(): (string | null)[] { return WhiteboxLexer.symbolicNames; }
	public get ruleNames(): string[] { return WhiteboxLexer.ruleNames; }

	public get serializedATN(): number[] { return WhiteboxLexer._serializedATN; }

	public get channelNames(): string[] { return WhiteboxLexer.channelNames; }

	public get modeNames(): string[] { return WhiteboxLexer.modeNames; }

	public static readonly _serializedATN: number[] = [4,0,8,71,6,-1,2,0,7,
	0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,7,7,1,0,1,0,1,0,1,
	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,
	3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,0,0,8,1,1,3,2,
	5,3,7,4,9,5,11,6,13,7,15,8,1,0,1,3,0,9,10,13,13,32,32,70,0,1,1,0,0,0,0,
	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
	0,15,1,0,0,0,1,17,1,0,0,0,3,23,1,0,0,0,5,29,1,0,0,0,7,35,1,0,0,0,9,39,1,
	0,0,0,11,44,1,0,0,0,13,56,1,0,0,0,15,67,1,0,0,0,17,18,5,76,0,0,18,19,5,
	79,0,0,19,20,5,82,0,0,20,21,5,69,0,0,21,22,5,77,0,0,22,2,1,0,0,0,23,24,
	5,73,0,0,24,25,5,80,0,0,25,26,5,83,0,0,26,27,5,85,0,0,27,28,5,77,0,0,28,
	4,1,0,0,0,29,30,5,68,0,0,30,31,5,79,0,0,31,32,5,76,0,0,32,33,5,79,0,0,33,
	34,5,82,0,0,34,6,1,0,0,0,35,36,5,83,0,0,36,37,5,73,0,0,37,38,5,84,0,0,38,
	8,1,0,0,0,39,40,5,65,0,0,40,41,5,77,0,0,41,42,5,69,0,0,42,43,5,84,0,0,43,
	10,1,0,0,0,44,45,5,67,0,0,45,46,5,79,0,0,46,47,5,78,0,0,47,48,5,83,0,0,
	48,49,5,69,0,0,49,50,5,67,0,0,50,51,5,84,0,0,51,52,5,69,0,0,52,53,5,84,
	0,0,53,54,5,85,0,0,54,55,5,82,0,0,55,12,1,0,0,0,56,57,5,65,0,0,57,58,5,
	68,0,0,58,59,5,73,0,0,59,60,5,80,0,0,60,61,5,73,0,0,61,62,5,83,0,0,62,63,
	5,67,0,0,63,64,5,73,0,0,64,65,5,78,0,0,65,66,5,71,0,0,66,14,1,0,0,0,67,
	68,7,0,0,0,68,69,1,0,0,0,69,70,6,7,0,0,70,16,1,0,0,0,1,0,1,6,0,0];

	private static __ATN: ATN;
	public static get _ATN(): ATN {
		if (!WhiteboxLexer.__ATN) {
			WhiteboxLexer.__ATN = new ATNDeserializer().deserialize(WhiteboxLexer._serializedATN);
		}

		return WhiteboxLexer.__ATN;
	}


	static DecisionsToDFA = WhiteboxLexer._ATN.decisionToState.map( (ds: DecisionState, index: number) => new DFA(ds, index) );
}