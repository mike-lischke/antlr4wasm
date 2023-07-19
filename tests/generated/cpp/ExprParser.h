
// Generated from tests/grammars/Expr.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace antlr4 {


class  ExprParser : public antlr4::Parser {
public:
  enum {
    VAR = 1, LET = 2, PLUS = 3, MINUS = 4, MULTIPLY = 5, DIVIDE = 6, EQUAL = 7, 
    OPEN_PAR = 8, CLOSE_PAR = 9, ID = 10, WS = 11
  };

  enum {
    RuleExpression = 0, RuleAssignment = 1, RuleSimpleExpression = 2, RuleVariableRef = 3, 
    RuleFunctionRef = 4, RuleIdentifier = 5
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ExpressionContext;
  class AssignmentContext;
  class SimpleExpressionContext;
  class VariableRefContext;
  class FunctionRefContext;
  class IdentifierContext; 

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    SimpleExpressionContext *simpleExpression();

   
  };

  ExpressionContext* expression();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *LET();

   
  };

  AssignmentContext* assignment();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableRefContext *variableRef();
    FunctionRefContext *functionRef();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();

   
  };

  SimpleExpressionContext* simpleExpression();
  SimpleExpressionContext* simpleExpression(int precedence);
  class  VariableRefContext : public antlr4::ParserRuleContext {
  public:
    VariableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  VariableRefContext* variableRef();

  class  FunctionRefContext : public antlr4::ParserRuleContext {
  public:
    FunctionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *CLOSE_PAR();

   
  };

  FunctionRefContext* functionRef();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

   
  };

  IdentifierContext* identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool simpleExpressionSempred(SimpleExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlr4
