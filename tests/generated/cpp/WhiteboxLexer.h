
// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace antlr4 {


class  WhiteboxLexer : public antlr4::Lexer {
public:
  enum {
    LOREM = 1, IPSUM = 2, DOLOR = 3, SIT = 4, AMET = 5, CONSECTETUR = 6, 
    ADIPISCING = 7, WS = 8
  };

  explicit WhiteboxLexer(antlr4::CharStream *input);

  ~WhiteboxLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlr4
