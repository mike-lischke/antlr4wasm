
// Generated from tests/grammars/Whitebox.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlr4 {


class  WhiteboxParser : public antlr4::Parser {
public:
  enum {
    LOREM = 1, IPSUM = 2, DOLOR = 3, SIT = 4, AMET = 5, CONSECTETUR = 6, 
    ADIPISCING = 7, WS = 8
  };

  enum {
    RuleTest1 = 0, RuleRule1 = 1, RuleRule2 = 2, RuleRule3 = 3, RuleRule4 = 4, 
    RuleRule5 = 5, RuleTest2 = 6, RuleRule7 = 7, RuleRule8 = 8, RuleRule9 = 9, 
    RuleRule10 = 10, RuleRule11 = 11, RuleTest3 = 12, RuleRule13 = 13
  };

  explicit WhiteboxParser(antlr4::TokenStream *input);

  WhiteboxParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~WhiteboxParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Test1Context;
  class Rule1Context;
  class Rule2Context;
  class Rule3Context;
  class Rule4Context;
  class Rule5Context;
  class Test2Context;
  class Rule7Context;
  class Rule8Context;
  class Rule9Context;
  class Rule10Context;
  class Rule11Context;
  class Test3Context;
  class Rule13Context; 

  class  Test1Context : public antlr4::ParserRuleContext {
  public:
    Test1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule1Context *rule1();
    antlr4::tree::TerminalNode *ADIPISCING();

   
  };

  Test1Context* test1();

  class  Rule1Context : public antlr4::ParserRuleContext {
  public:
    Rule1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule2Context *rule2();
    antlr4::tree::TerminalNode *CONSECTETUR();

   
  };

  Rule1Context* rule1();

  class  Rule2Context : public antlr4::ParserRuleContext {
  public:
    Rule2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOREM();
    Rule3Context *rule3();
    Rule5Context *rule5();
    std::vector<antlr4::tree::TerminalNode *> SIT();
    antlr4::tree::TerminalNode* SIT(size_t i);
    antlr4::tree::TerminalNode *AMET();

   
  };

  Rule2Context* rule2();

  class  Rule3Context : public antlr4::ParserRuleContext {
  public:
    Rule3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule4Context *rule4();
    antlr4::tree::TerminalNode *DOLOR();

   
  };

  Rule3Context* rule3();

  class  Rule4Context : public antlr4::ParserRuleContext {
  public:
    Rule4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IPSUM();

   
  };

  Rule4Context* rule4();

  class  Rule5Context : public antlr4::ParserRuleContext {
  public:
    Rule5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Rule5Context* rule5();

  class  Test2Context : public antlr4::ParserRuleContext {
  public:
    Test2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule7Context *rule7();
    antlr4::tree::TerminalNode *ADIPISCING();

   
  };

  Test2Context* test2();

  class  Rule7Context : public antlr4::ParserRuleContext {
  public:
    Rule7Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule8Context *rule8();
    antlr4::tree::TerminalNode *CONSECTETUR();

   
  };

  Rule7Context* rule7();

  class  Rule8Context : public antlr4::ParserRuleContext {
  public:
    Rule8Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOREM();
    Rule11Context *rule11();
    Rule9Context *rule9();
    std::vector<antlr4::tree::TerminalNode *> SIT();
    antlr4::tree::TerminalNode* SIT(size_t i);
    antlr4::tree::TerminalNode *AMET();

   
  };

  Rule8Context* rule8();

  class  Rule9Context : public antlr4::ParserRuleContext {
  public:
    Rule9Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rule10Context *rule10();
    antlr4::tree::TerminalNode *DOLOR();

   
  };

  Rule9Context* rule9();

  class  Rule10Context : public antlr4::ParserRuleContext {
  public:
    Rule10Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IPSUM();

   
  };

  Rule10Context* rule10();

  class  Rule11Context : public antlr4::ParserRuleContext {
  public:
    Rule11Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Rule11Context* rule11();

  class  Test3Context : public antlr4::ParserRuleContext {
  public:
    Test3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOREM();
    Rule13Context *rule13();
    antlr4::tree::TerminalNode *CONSECTETUR();
    antlr4::tree::TerminalNode *IPSUM();
    std::vector<antlr4::tree::TerminalNode *> AMET();
    antlr4::tree::TerminalNode* AMET(size_t i);

   
  };

  Test3Context* test3();

  class  Rule13Context : public antlr4::ParserRuleContext {
  public:
    Rule13Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOLOR();
    antlr4::tree::TerminalNode* DOLOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SIT();
    antlr4::tree::TerminalNode* SIT(size_t i);

   
  };

  Rule13Context* rule13();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlr4
