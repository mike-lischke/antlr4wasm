
// Generated from tests/grammars/Expr.g4 by ANTLR 4.13.0



#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "expression", "assignment", "simpleExpression", "variableRef", "functionRef", 
      "identifier"
    },
    std::vector<std::string>{
      "", "", "", "'+'", "'-'", "'*'", "'/'", "'='", "'('", "')'"
    },
    std::vector<std::string>{
      "", "VAR", "LET", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EQUAL", 
      "OPEN_PAR", "CLOSE_PAR", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,11,46,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,3,0,
  	15,8,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,3,2,25,8,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,5,2,33,8,2,10,2,12,2,36,9,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,0,
  	1,4,6,0,2,4,6,8,10,0,3,1,0,1,2,1,0,3,4,1,0,5,6,43,0,14,1,0,0,0,2,16,1,
  	0,0,0,4,24,1,0,0,0,6,37,1,0,0,0,8,39,1,0,0,0,10,43,1,0,0,0,12,15,3,2,
  	1,0,13,15,3,4,2,0,14,12,1,0,0,0,14,13,1,0,0,0,15,1,1,0,0,0,16,17,7,0,
  	0,0,17,18,5,10,0,0,18,19,5,7,0,0,19,20,3,4,2,0,20,3,1,0,0,0,21,22,6,2,
  	-1,0,22,25,3,6,3,0,23,25,3,8,4,0,24,21,1,0,0,0,24,23,1,0,0,0,25,34,1,
  	0,0,0,26,27,10,4,0,0,27,28,7,1,0,0,28,33,3,4,2,5,29,30,10,3,0,0,30,31,
  	7,2,0,0,31,33,3,4,2,4,32,26,1,0,0,0,32,29,1,0,0,0,33,36,1,0,0,0,34,32,
  	1,0,0,0,34,35,1,0,0,0,35,5,1,0,0,0,36,34,1,0,0,0,37,38,3,10,5,0,38,7,
  	1,0,0,0,39,40,3,10,5,0,40,41,5,8,0,0,41,42,5,9,0,0,42,9,1,0,0,0,43,44,
  	5,10,0,0,44,11,1,0,0,0,4,14,24,32,34
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::AssignmentContext* ExprParser::ExpressionContext::assignment() {
  return getRuleContext<ExprParser::AssignmentContext>(0);
}

ExprParser::SimpleExpressionContext* ExprParser::ExpressionContext::simpleExpression() {
  return getRuleContext<ExprParser::SimpleExpressionContext>(0);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}


ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(14);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::VAR:
      case ExprParser::LET: {
        enterOuterAlt(_localctx, 1);
        setState(12);
        assignment();
        break;
      }

      case ExprParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(13);
        simpleExpression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ExprParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::AssignmentContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::AssignmentContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

ExprParser::SimpleExpressionContext* ExprParser::AssignmentContext::simpleExpression() {
  return getRuleContext<ExprParser::SimpleExpressionContext>(0);
}

tree::TerminalNode* ExprParser::AssignmentContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

tree::TerminalNode* ExprParser::AssignmentContext::LET() {
  return getToken(ExprParser::LET, 0);
}


size_t ExprParser::AssignmentContext::getRuleIndex() const {
  return ExprParser::RuleAssignment;
}


ExprParser::AssignmentContext* ExprParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    _la = _input->LA(1);
    if (!(_la == ExprParser::VAR

    || _la == ExprParser::LET)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(17);
    match(ExprParser::ID);
    setState(18);
    match(ExprParser::EQUAL);
    setState(19);
    simpleExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

ExprParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableRefContext* ExprParser::SimpleExpressionContext::variableRef() {
  return getRuleContext<ExprParser::VariableRefContext>(0);
}

ExprParser::FunctionRefContext* ExprParser::SimpleExpressionContext::functionRef() {
  return getRuleContext<ExprParser::FunctionRefContext>(0);
}

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::SimpleExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::SimpleExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::PLUS() {
  return getToken(ExprParser::PLUS, 0);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::MINUS() {
  return getToken(ExprParser::MINUS, 0);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::MULTIPLY() {
  return getToken(ExprParser::MULTIPLY, 0);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::DIVIDE() {
  return getToken(ExprParser::DIVIDE, 0);
}


size_t ExprParser::SimpleExpressionContext::getRuleIndex() const {
  return ExprParser::RuleSimpleExpression;
}



ExprParser::SimpleExpressionContext* ExprParser::simpleExpression() {
   return simpleExpression(0);
}

ExprParser::SimpleExpressionContext* ExprParser::simpleExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, parentState);
  ExprParser::SimpleExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExprParser::RuleSimpleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(24);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(22);
      variableRef();
      break;
    }

    case 2: {
      setState(23);
      functionRef();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(34);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(32);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<SimpleExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleSimpleExpression);
          setState(26);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(27);
          _la = _input->LA(1);
          if (!(_la == ExprParser::PLUS

          || _la == ExprParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(28);
          simpleExpression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<SimpleExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleSimpleExpression);
          setState(29);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(30);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MULTIPLY

          || _la == ExprParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(31);
          simpleExpression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(36);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableRefContext ------------------------------------------------------------------

ExprParser::VariableRefContext::VariableRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::IdentifierContext* ExprParser::VariableRefContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}


size_t ExprParser::VariableRefContext::getRuleIndex() const {
  return ExprParser::RuleVariableRef;
}


ExprParser::VariableRefContext* ExprParser::variableRef() {
  VariableRefContext *_localctx = _tracker.createInstance<VariableRefContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleVariableRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionRefContext ------------------------------------------------------------------

ExprParser::FunctionRefContext::FunctionRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::IdentifierContext* ExprParser::FunctionRefContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::FunctionRefContext::OPEN_PAR() {
  return getToken(ExprParser::OPEN_PAR, 0);
}

tree::TerminalNode* ExprParser::FunctionRefContext::CLOSE_PAR() {
  return getToken(ExprParser::CLOSE_PAR, 0);
}


size_t ExprParser::FunctionRefContext::getRuleIndex() const {
  return ExprParser::RuleFunctionRef;
}


ExprParser::FunctionRefContext* ExprParser::functionRef() {
  FunctionRefContext *_localctx = _tracker.createInstance<FunctionRefContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleFunctionRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    identifier();
    setState(40);
    match(ExprParser::OPEN_PAR);
    setState(41);
    match(ExprParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ExprParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IdentifierContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::IdentifierContext::getRuleIndex() const {
  return ExprParser::RuleIdentifier;
}


ExprParser::IdentifierContext* ExprParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return simpleExpressionSempred(antlrcpp::downCast<SimpleExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::simpleExpressionSempred(SimpleExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprParserInitialize();
#else
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
#endif
}
