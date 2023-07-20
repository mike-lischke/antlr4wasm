/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

dfa::Vocabulary *createVocabulary(val literal, val symbolic, val display) {
  size_t length = literal["length"].as<size_t>();
  std::vector<std::string> literalNames;
  for (int i = 0; i < length; i++) {
    literalNames.push_back(literal[i].as<std::string>());
  }

  length = symbolic["length"].as<size_t>();
  std::vector<std::string> symbolicNames;
  for (int i = 0; i < length; i++) {
    symbolicNames.push_back(symbolic[i].as<std::string>());
  }

  length = display["length"].as<size_t>();
  std::vector<std::string> displayNames;
  for (int i = 0; i < length; i++) {
    displayNames.push_back(display[i].as<std::string>());
  }

  return new dfa::Vocabulary(literalNames, symbolicNames, displayNames);
}

class DFAHelper : public dfa::DFA {
public:
  explicit DFAHelper(atn::DecisionState *atnStartState) : dfa::DFA(atnStartState) {
  }

  DFAHelper(atn::DecisionState *atnStartState, size_t decision) : dfa::DFA(atnStartState, decision) {
  }

  GETTER(atn::DecisionState *, atnStartState)
  GETTER(dfa::DFAState *, s0)
};

EMSCRIPTEN_BINDINGS(dfa) {
  class_<dfa::DFA>("DFA$Internal");

  class_<DFAHelper, base<dfa::DFA>>("DFA")
    .constructor<atn::DecisionState *>()
    .constructor<atn::DecisionState *, size_t>()

    //.property("decision", &dfa::DFA::decision)

    .function("atnStartState", &DFAHelper::atnStartStateGet, allow_raw_pointers())
    .function("s0", &DFAHelper::s0Get, allow_raw_pointers())
    .function("isPrecedenceDfa", &dfa::DFA::isPrecedenceDfa)
    .function("getPrecedenceStartState", &dfa::DFA::getPrecedenceStartState, allow_raw_pointers())
    .function("setPrecedenceStartState", &dfa::DFA::setPrecedenceStartState, allow_raw_pointers())
    .function("getStates", &dfa::DFA::getStates, allow_raw_pointers())
    .function("toString", &dfa::DFA::toString)
    .function("toLexerString", &dfa::DFA::toLexerString);

  class_<dfa::DFAState>("DFAState")
    .constructor<>()
    // .constructor<int>()
    .constructor<std::unique_ptr<atn::ATNConfigSet>>()

    // .property("configs", &dfa::DFAState::configs)
    // .property("edges", &dfa::DFAState::edges)
    .property("prediction", &dfa::DFAState::prediction)
    .property("lexerActionExecutor", &dfa::DFAState::lexerActionExecutor)
    .property("predicates", &dfa::DFAState::predicates)
    .property("stateNumber", &dfa::DFAState::stateNumber)
    .property("isAcceptState", &dfa::DFAState::isAcceptState)
    .property("requiresFullContext", &dfa::DFAState::requiresFullContext)

    .function("getAltSet", &dfa::DFAState::getAltSet)
    .function("hashCode", &dfa::DFAState::hashCode)
    .function("equals", &dfa::DFAState::equals)
    .function("toString", &dfa::DFAState::toString);

  class_<dfa::Vocabulary>("Vocabulary")
    .constructor<>(&createVocabulary)
    .constructor<dfa::Vocabulary>()
    //.constructor<std::vector<std::string>, std::vector<std::string>>()
    //.constructor<std::vector<std::string>, std::vector<std::string>, std::vector<std::string>>()

    .function("getMaxTokenType", &dfa::Vocabulary::getMaxTokenType)
    .function("getLiteralName", optional_override([](dfa::Vocabulary &self, size_t tokenType) {
                std::string s(self.getLiteralName(tokenType));
                return s;
              }))
    .function("getSymbolicName", optional_override([](dfa::Vocabulary &self, size_t tokenType) {
                std::string s(self.getSymbolicName(tokenType));
                return s;
              }))
    .function("getDisplayName", &dfa::Vocabulary::getDisplayName);
}
