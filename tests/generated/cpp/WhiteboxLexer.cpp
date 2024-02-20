
// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.1


#include "WhiteboxLexer.h"


using namespace antlr4;

using namespace antlr4;


using namespace antlr4;

namespace {

struct WhiteboxLexerStaticData final {
  WhiteboxLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  WhiteboxLexerStaticData(const WhiteboxLexerStaticData&) = delete;
  WhiteboxLexerStaticData(WhiteboxLexerStaticData&&) = delete;
  WhiteboxLexerStaticData& operator=(const WhiteboxLexerStaticData&) = delete;
  WhiteboxLexerStaticData& operator=(WhiteboxLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag whiteboxlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
WhiteboxLexerStaticData *whiteboxlexerLexerStaticData = nullptr;

void whiteboxlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (whiteboxlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(whiteboxlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<WhiteboxLexerStaticData>(
    std::vector<std::string>{
      "LOREM", "IPSUM", "DOLOR", "SIT", "AMET", "CONSECTETUR", "ADIPISCING", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,8,71,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	7,1,7,1,7,1,7,0,0,8,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,1,0,1,3,0,9,10,
  	13,13,32,32,70,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,1,17,1,0,0,0,3,23,1,0,0,
  	0,5,29,1,0,0,0,7,35,1,0,0,0,9,39,1,0,0,0,11,44,1,0,0,0,13,56,1,0,0,0,
  	15,67,1,0,0,0,17,18,5,76,0,0,18,19,5,79,0,0,19,20,5,82,0,0,20,21,5,69,
  	0,0,21,22,5,77,0,0,22,2,1,0,0,0,23,24,5,73,0,0,24,25,5,80,0,0,25,26,5,
  	83,0,0,26,27,5,85,0,0,27,28,5,77,0,0,28,4,1,0,0,0,29,30,5,68,0,0,30,31,
  	5,79,0,0,31,32,5,76,0,0,32,33,5,79,0,0,33,34,5,82,0,0,34,6,1,0,0,0,35,
  	36,5,83,0,0,36,37,5,73,0,0,37,38,5,84,0,0,38,8,1,0,0,0,39,40,5,65,0,0,
  	40,41,5,77,0,0,41,42,5,69,0,0,42,43,5,84,0,0,43,10,1,0,0,0,44,45,5,67,
  	0,0,45,46,5,79,0,0,46,47,5,78,0,0,47,48,5,83,0,0,48,49,5,69,0,0,49,50,
  	5,67,0,0,50,51,5,84,0,0,51,52,5,69,0,0,52,53,5,84,0,0,53,54,5,85,0,0,
  	54,55,5,82,0,0,55,12,1,0,0,0,56,57,5,65,0,0,57,58,5,68,0,0,58,59,5,73,
  	0,0,59,60,5,80,0,0,60,61,5,73,0,0,61,62,5,83,0,0,62,63,5,67,0,0,63,64,
  	5,73,0,0,64,65,5,78,0,0,65,66,5,71,0,0,66,14,1,0,0,0,67,68,7,0,0,0,68,
  	69,1,0,0,0,69,70,6,7,0,0,70,16,1,0,0,0,1,0,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  whiteboxlexerLexerStaticData = staticData.release();
}

}

WhiteboxLexer::WhiteboxLexer(CharStream *input) : Lexer(input) {
  WhiteboxLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *whiteboxlexerLexerStaticData->atn, whiteboxlexerLexerStaticData->decisionToDFA, whiteboxlexerLexerStaticData->sharedContextCache);
}

WhiteboxLexer::~WhiteboxLexer() {
  delete _interpreter;
}

std::string WhiteboxLexer::getGrammarFileName() const {
  return "Whitebox.g4";
}

const std::vector<std::string>& WhiteboxLexer::getRuleNames() const {
  return whiteboxlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& WhiteboxLexer::getChannelNames() const {
  return whiteboxlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& WhiteboxLexer::getModeNames() const {
  return whiteboxlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& WhiteboxLexer::getVocabulary() const {
  return whiteboxlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView WhiteboxLexer::getSerializedATN() const {
  return whiteboxlexerLexerStaticData->serializedATN;
}

const atn::ATN& WhiteboxLexer::getATN() const {
  return *whiteboxlexerLexerStaticData->atn;
}




void WhiteboxLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  whiteboxlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(whiteboxlexerLexerOnceFlag, whiteboxlexerLexerInitialize);
#endif
}
