
// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.0



#include "WhiteboxParser.h"


using namespace antlrcpp;
using namespace antlr4;

using namespace antlr4;

namespace {

struct WhiteboxParserStaticData final {
  WhiteboxParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  WhiteboxParserStaticData(const WhiteboxParserStaticData&) = delete;
  WhiteboxParserStaticData(WhiteboxParserStaticData&&) = delete;
  WhiteboxParserStaticData& operator=(const WhiteboxParserStaticData&) = delete;
  WhiteboxParserStaticData& operator=(WhiteboxParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag whiteboxParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
WhiteboxParserStaticData *whiteboxParserStaticData = nullptr;

void whiteboxParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (whiteboxParserStaticData != nullptr) {
    return;
  }
#else
  assert(whiteboxParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<WhiteboxParserStaticData>(
    std::vector<std::string>{
      "test1", "rule1", "rule2", "rule3", "rule4", "rule5", "test2", "rule7", 
      "rule8", "rule9", "rule10", "rule11", "test3", "rule13"
    },
    std::vector<std::string>{
      "", "'LOREM'", "'IPSUM'", "'DOLOR'", "'SIT'", "'AMET'", "'CONSECTETUR'", 
      "'ADIPISCING'"
    },
    std::vector<std::string>{
      "", "LOREM", "IPSUM", "DOLOR", "SIT", "AMET", "CONSECTETUR", "ADIPISCING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,101,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,1,
  	0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,5,2,39,8,2,10,2,12,2,42,9,2,1,2,3,2,45,
  	8,2,1,3,1,3,3,3,49,8,3,1,4,3,4,52,8,4,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,5,8,66,8,8,10,8,12,8,69,9,8,1,8,3,8,72,8,8,1,9,1,9,3,
  	9,76,8,9,1,10,3,10,79,8,10,1,11,1,11,1,12,1,12,3,12,85,8,12,1,12,1,12,
  	4,12,89,8,12,11,12,12,12,90,1,12,1,12,1,13,5,13,96,8,13,10,13,12,13,99,
  	9,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,0,1,1,0,3,4,97,
  	0,28,1,0,0,0,2,31,1,0,0,0,4,34,1,0,0,0,6,46,1,0,0,0,8,51,1,0,0,0,10,53,
  	1,0,0,0,12,55,1,0,0,0,14,58,1,0,0,0,16,61,1,0,0,0,18,73,1,0,0,0,20,78,
  	1,0,0,0,22,80,1,0,0,0,24,82,1,0,0,0,26,97,1,0,0,0,28,29,3,2,1,0,29,30,
  	5,7,0,0,30,1,1,0,0,0,31,32,3,4,2,0,32,33,5,6,0,0,33,3,1,0,0,0,34,35,5,
  	1,0,0,35,36,3,6,3,0,36,40,3,10,5,0,37,39,5,4,0,0,38,37,1,0,0,0,39,42,
  	1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,44,1,0,0,0,42,40,1,0,0,0,43,45,
  	5,5,0,0,44,43,1,0,0,0,44,45,1,0,0,0,45,5,1,0,0,0,46,48,3,8,4,0,47,49,
  	5,3,0,0,48,47,1,0,0,0,48,49,1,0,0,0,49,7,1,0,0,0,50,52,5,2,0,0,51,50,
  	1,0,0,0,51,52,1,0,0,0,52,9,1,0,0,0,53,54,1,0,0,0,54,11,1,0,0,0,55,56,
  	3,14,7,0,56,57,5,7,0,0,57,13,1,0,0,0,58,59,3,16,8,0,59,60,5,6,0,0,60,
  	15,1,0,0,0,61,62,5,1,0,0,62,63,3,22,11,0,63,67,3,18,9,0,64,66,5,4,0,0,
  	65,64,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,71,1,0,0,0,
  	69,67,1,0,0,0,70,72,5,5,0,0,71,70,1,0,0,0,71,72,1,0,0,0,72,17,1,0,0,0,
  	73,75,3,20,10,0,74,76,5,3,0,0,75,74,1,0,0,0,75,76,1,0,0,0,76,19,1,0,0,
  	0,77,79,5,2,0,0,78,77,1,0,0,0,78,79,1,0,0,0,79,21,1,0,0,0,80,81,1,0,0,
  	0,81,23,1,0,0,0,82,84,5,1,0,0,83,85,5,2,0,0,84,83,1,0,0,0,84,85,1,0,0,
  	0,85,86,1,0,0,0,86,88,3,26,13,0,87,89,5,5,0,0,88,87,1,0,0,0,89,90,1,0,
  	0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,0,92,93,5,6,0,0,93,25,1,0,
  	0,0,94,96,7,0,0,0,95,94,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,
  	0,0,98,27,1,0,0,0,99,97,1,0,0,0,11,40,44,48,51,67,71,75,78,84,90,97
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  whiteboxParserStaticData = staticData.release();
}

}

WhiteboxParser::WhiteboxParser(TokenStream *input) : WhiteboxParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

WhiteboxParser::WhiteboxParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  WhiteboxParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *whiteboxParserStaticData->atn, whiteboxParserStaticData->decisionToDFA, whiteboxParserStaticData->sharedContextCache, options);
}

WhiteboxParser::~WhiteboxParser() {
  delete _interpreter;
}

const atn::ATN& WhiteboxParser::getATN() const {
  return *whiteboxParserStaticData->atn;
}

std::string WhiteboxParser::getGrammarFileName() const {
  return "Whitebox.g4";
}

const std::vector<std::string>& WhiteboxParser::getRuleNames() const {
  return whiteboxParserStaticData->ruleNames;
}

const dfa::Vocabulary& WhiteboxParser::getVocabulary() const {
  return whiteboxParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView WhiteboxParser::getSerializedATN() const {
  return whiteboxParserStaticData->serializedATN;
}


//----------------- Test1Context ------------------------------------------------------------------

WhiteboxParser::Test1Context::Test1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule1Context* WhiteboxParser::Test1Context::rule1() {
  return getRuleContext<WhiteboxParser::Rule1Context>(0);
}

tree::TerminalNode* WhiteboxParser::Test1Context::ADIPISCING() {
  return getToken(WhiteboxParser::ADIPISCING, 0);
}


size_t WhiteboxParser::Test1Context::getRuleIndex() const {
  return WhiteboxParser::RuleTest1;
}


WhiteboxParser::Test1Context* WhiteboxParser::test1() {
  Test1Context *_localctx = _tracker.createInstance<Test1Context>(_ctx, getState());
  enterRule(_localctx, 0, WhiteboxParser::RuleTest1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    rule1();
    setState(29);
    match(WhiteboxParser::ADIPISCING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule1Context ------------------------------------------------------------------

WhiteboxParser::Rule1Context::Rule1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule2Context* WhiteboxParser::Rule1Context::rule2() {
  return getRuleContext<WhiteboxParser::Rule2Context>(0);
}

tree::TerminalNode* WhiteboxParser::Rule1Context::CONSECTETUR() {
  return getToken(WhiteboxParser::CONSECTETUR, 0);
}


size_t WhiteboxParser::Rule1Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule1;
}


WhiteboxParser::Rule1Context* WhiteboxParser::rule1() {
  Rule1Context *_localctx = _tracker.createInstance<Rule1Context>(_ctx, getState());
  enterRule(_localctx, 2, WhiteboxParser::RuleRule1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    rule2();
    setState(32);
    match(WhiteboxParser::CONSECTETUR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule2Context ------------------------------------------------------------------

WhiteboxParser::Rule2Context::Rule2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WhiteboxParser::Rule2Context::LOREM() {
  return getToken(WhiteboxParser::LOREM, 0);
}

WhiteboxParser::Rule3Context* WhiteboxParser::Rule2Context::rule3() {
  return getRuleContext<WhiteboxParser::Rule3Context>(0);
}

WhiteboxParser::Rule5Context* WhiteboxParser::Rule2Context::rule5() {
  return getRuleContext<WhiteboxParser::Rule5Context>(0);
}

std::vector<tree::TerminalNode *> WhiteboxParser::Rule2Context::SIT() {
  return getTokens(WhiteboxParser::SIT);
}

tree::TerminalNode* WhiteboxParser::Rule2Context::SIT(size_t i) {
  return getToken(WhiteboxParser::SIT, i);
}

tree::TerminalNode* WhiteboxParser::Rule2Context::AMET() {
  return getToken(WhiteboxParser::AMET, 0);
}


size_t WhiteboxParser::Rule2Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule2;
}


WhiteboxParser::Rule2Context* WhiteboxParser::rule2() {
  Rule2Context *_localctx = _tracker.createInstance<Rule2Context>(_ctx, getState());
  enterRule(_localctx, 4, WhiteboxParser::RuleRule2);
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
    setState(34);
    match(WhiteboxParser::LOREM);
    setState(35);
    rule3();
    setState(36);
    rule5();
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WhiteboxParser::SIT) {
      setState(37);
      match(WhiteboxParser::SIT);
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::AMET) {
      setState(43);
      match(WhiteboxParser::AMET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule3Context ------------------------------------------------------------------

WhiteboxParser::Rule3Context::Rule3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule4Context* WhiteboxParser::Rule3Context::rule4() {
  return getRuleContext<WhiteboxParser::Rule4Context>(0);
}

tree::TerminalNode* WhiteboxParser::Rule3Context::DOLOR() {
  return getToken(WhiteboxParser::DOLOR, 0);
}


size_t WhiteboxParser::Rule3Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule3;
}


WhiteboxParser::Rule3Context* WhiteboxParser::rule3() {
  Rule3Context *_localctx = _tracker.createInstance<Rule3Context>(_ctx, getState());
  enterRule(_localctx, 6, WhiteboxParser::RuleRule3);
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
    setState(46);
    rule4();
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::DOLOR) {
      setState(47);
      match(WhiteboxParser::DOLOR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule4Context ------------------------------------------------------------------

WhiteboxParser::Rule4Context::Rule4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WhiteboxParser::Rule4Context::IPSUM() {
  return getToken(WhiteboxParser::IPSUM, 0);
}


size_t WhiteboxParser::Rule4Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule4;
}


WhiteboxParser::Rule4Context* WhiteboxParser::rule4() {
  Rule4Context *_localctx = _tracker.createInstance<Rule4Context>(_ctx, getState());
  enterRule(_localctx, 8, WhiteboxParser::RuleRule4);
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
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::IPSUM) {
      setState(50);
      match(WhiteboxParser::IPSUM);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule5Context ------------------------------------------------------------------

WhiteboxParser::Rule5Context::Rule5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t WhiteboxParser::Rule5Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule5;
}


WhiteboxParser::Rule5Context* WhiteboxParser::rule5() {
  Rule5Context *_localctx = _tracker.createInstance<Rule5Context>(_ctx, getState());
  enterRule(_localctx, 10, WhiteboxParser::RuleRule5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Test2Context ------------------------------------------------------------------

WhiteboxParser::Test2Context::Test2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule7Context* WhiteboxParser::Test2Context::rule7() {
  return getRuleContext<WhiteboxParser::Rule7Context>(0);
}

tree::TerminalNode* WhiteboxParser::Test2Context::ADIPISCING() {
  return getToken(WhiteboxParser::ADIPISCING, 0);
}


size_t WhiteboxParser::Test2Context::getRuleIndex() const {
  return WhiteboxParser::RuleTest2;
}


WhiteboxParser::Test2Context* WhiteboxParser::test2() {
  Test2Context *_localctx = _tracker.createInstance<Test2Context>(_ctx, getState());
  enterRule(_localctx, 12, WhiteboxParser::RuleTest2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    rule7();
    setState(56);
    match(WhiteboxParser::ADIPISCING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule7Context ------------------------------------------------------------------

WhiteboxParser::Rule7Context::Rule7Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule8Context* WhiteboxParser::Rule7Context::rule8() {
  return getRuleContext<WhiteboxParser::Rule8Context>(0);
}

tree::TerminalNode* WhiteboxParser::Rule7Context::CONSECTETUR() {
  return getToken(WhiteboxParser::CONSECTETUR, 0);
}


size_t WhiteboxParser::Rule7Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule7;
}


WhiteboxParser::Rule7Context* WhiteboxParser::rule7() {
  Rule7Context *_localctx = _tracker.createInstance<Rule7Context>(_ctx, getState());
  enterRule(_localctx, 14, WhiteboxParser::RuleRule7);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    rule8();
    setState(59);
    match(WhiteboxParser::CONSECTETUR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule8Context ------------------------------------------------------------------

WhiteboxParser::Rule8Context::Rule8Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WhiteboxParser::Rule8Context::LOREM() {
  return getToken(WhiteboxParser::LOREM, 0);
}

WhiteboxParser::Rule11Context* WhiteboxParser::Rule8Context::rule11() {
  return getRuleContext<WhiteboxParser::Rule11Context>(0);
}

WhiteboxParser::Rule9Context* WhiteboxParser::Rule8Context::rule9() {
  return getRuleContext<WhiteboxParser::Rule9Context>(0);
}

std::vector<tree::TerminalNode *> WhiteboxParser::Rule8Context::SIT() {
  return getTokens(WhiteboxParser::SIT);
}

tree::TerminalNode* WhiteboxParser::Rule8Context::SIT(size_t i) {
  return getToken(WhiteboxParser::SIT, i);
}

tree::TerminalNode* WhiteboxParser::Rule8Context::AMET() {
  return getToken(WhiteboxParser::AMET, 0);
}


size_t WhiteboxParser::Rule8Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule8;
}


WhiteboxParser::Rule8Context* WhiteboxParser::rule8() {
  Rule8Context *_localctx = _tracker.createInstance<Rule8Context>(_ctx, getState());
  enterRule(_localctx, 16, WhiteboxParser::RuleRule8);
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
    setState(61);
    match(WhiteboxParser::LOREM);
    setState(62);
    rule11();
    setState(63);
    rule9();
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WhiteboxParser::SIT) {
      setState(64);
      match(WhiteboxParser::SIT);
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::AMET) {
      setState(70);
      match(WhiteboxParser::AMET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule9Context ------------------------------------------------------------------

WhiteboxParser::Rule9Context::Rule9Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WhiteboxParser::Rule10Context* WhiteboxParser::Rule9Context::rule10() {
  return getRuleContext<WhiteboxParser::Rule10Context>(0);
}

tree::TerminalNode* WhiteboxParser::Rule9Context::DOLOR() {
  return getToken(WhiteboxParser::DOLOR, 0);
}


size_t WhiteboxParser::Rule9Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule9;
}


WhiteboxParser::Rule9Context* WhiteboxParser::rule9() {
  Rule9Context *_localctx = _tracker.createInstance<Rule9Context>(_ctx, getState());
  enterRule(_localctx, 18, WhiteboxParser::RuleRule9);
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
    setState(73);
    rule10();
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::DOLOR) {
      setState(74);
      match(WhiteboxParser::DOLOR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule10Context ------------------------------------------------------------------

WhiteboxParser::Rule10Context::Rule10Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WhiteboxParser::Rule10Context::IPSUM() {
  return getToken(WhiteboxParser::IPSUM, 0);
}


size_t WhiteboxParser::Rule10Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule10;
}


WhiteboxParser::Rule10Context* WhiteboxParser::rule10() {
  Rule10Context *_localctx = _tracker.createInstance<Rule10Context>(_ctx, getState());
  enterRule(_localctx, 20, WhiteboxParser::RuleRule10);
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
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::IPSUM) {
      setState(77);
      match(WhiteboxParser::IPSUM);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule11Context ------------------------------------------------------------------

WhiteboxParser::Rule11Context::Rule11Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t WhiteboxParser::Rule11Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule11;
}


WhiteboxParser::Rule11Context* WhiteboxParser::rule11() {
  Rule11Context *_localctx = _tracker.createInstance<Rule11Context>(_ctx, getState());
  enterRule(_localctx, 22, WhiteboxParser::RuleRule11);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Test3Context ------------------------------------------------------------------

WhiteboxParser::Test3Context::Test3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WhiteboxParser::Test3Context::LOREM() {
  return getToken(WhiteboxParser::LOREM, 0);
}

WhiteboxParser::Rule13Context* WhiteboxParser::Test3Context::rule13() {
  return getRuleContext<WhiteboxParser::Rule13Context>(0);
}

tree::TerminalNode* WhiteboxParser::Test3Context::CONSECTETUR() {
  return getToken(WhiteboxParser::CONSECTETUR, 0);
}

tree::TerminalNode* WhiteboxParser::Test3Context::IPSUM() {
  return getToken(WhiteboxParser::IPSUM, 0);
}

std::vector<tree::TerminalNode *> WhiteboxParser::Test3Context::AMET() {
  return getTokens(WhiteboxParser::AMET);
}

tree::TerminalNode* WhiteboxParser::Test3Context::AMET(size_t i) {
  return getToken(WhiteboxParser::AMET, i);
}


size_t WhiteboxParser::Test3Context::getRuleIndex() const {
  return WhiteboxParser::RuleTest3;
}


WhiteboxParser::Test3Context* WhiteboxParser::test3() {
  Test3Context *_localctx = _tracker.createInstance<Test3Context>(_ctx, getState());
  enterRule(_localctx, 24, WhiteboxParser::RuleTest3);
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
    setState(82);
    match(WhiteboxParser::LOREM);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WhiteboxParser::IPSUM) {
      setState(83);
      match(WhiteboxParser::IPSUM);
    }
    setState(86);
    rule13();
    setState(88); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(87);
      match(WhiteboxParser::AMET);
      setState(90); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == WhiteboxParser::AMET);
    setState(92);
    match(WhiteboxParser::CONSECTETUR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule13Context ------------------------------------------------------------------

WhiteboxParser::Rule13Context::Rule13Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> WhiteboxParser::Rule13Context::DOLOR() {
  return getTokens(WhiteboxParser::DOLOR);
}

tree::TerminalNode* WhiteboxParser::Rule13Context::DOLOR(size_t i) {
  return getToken(WhiteboxParser::DOLOR, i);
}

std::vector<tree::TerminalNode *> WhiteboxParser::Rule13Context::SIT() {
  return getTokens(WhiteboxParser::SIT);
}

tree::TerminalNode* WhiteboxParser::Rule13Context::SIT(size_t i) {
  return getToken(WhiteboxParser::SIT, i);
}


size_t WhiteboxParser::Rule13Context::getRuleIndex() const {
  return WhiteboxParser::RuleRule13;
}


WhiteboxParser::Rule13Context* WhiteboxParser::rule13() {
  Rule13Context *_localctx = _tracker.createInstance<Rule13Context>(_ctx, getState());
  enterRule(_localctx, 26, WhiteboxParser::RuleRule13);
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
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WhiteboxParser::DOLOR

    || _la == WhiteboxParser::SIT) {
      setState(94);
      _la = _input->LA(1);
      if (!(_la == WhiteboxParser::DOLOR

      || _la == WhiteboxParser::SIT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void WhiteboxParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  whiteboxParserInitialize();
#else
  ::antlr4::internal::call_once(whiteboxParserOnceFlag, whiteboxParserInitialize);
#endif
}
