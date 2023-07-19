
// Generated from tests/grammars/Expr.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace antlr4 {


class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    VAR = 1, LET = 2, PLUS = 3, MINUS = 4, MULTIPLY = 5, DIVIDE = 6, EQUAL = 7, 
    OPEN_PAR = 8, CLOSE_PAR = 9, ID = 10, WS = 11
  };

  explicit ExprLexer(antlr4::CharStream *input);

  ~ExprLexer() override;


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
