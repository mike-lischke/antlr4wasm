/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

atn::SerializedATNView *createSerializedATNView(val value) {
  int length = value["length"].as<int>();

  std::vector<int32_t> data;
  for (int i = 0; i < length; i++) {
    int element = value[i].as<int>();
    data.push_back(element);
  }

  return new atn::SerializedATNView(data);
}

atn::LexerATNSimulator *createLexerATNSimulator(val param1, val param2, val param3, val param4) {
  Lexer *recognizer = param1.as<LexerHelper *>(allow_raw_pointers());
  const atn::ATN *atn = param2.as<const atn::ATN *>(allow_raw_pointers());

  /*size_t length = param3["length"].as<size_t>();
  std::vector<dfa::DFA *> decisionToDFA;
  for (int i = 0; i < length; i++) {
    auto element = param3[i].as<dfa::DFA *>(allow_raw_pointers());
    decisionToDFA.push_back(element);
  }*/

  const size_t l = param3["length"].as<size_t>();
  std::vector<dfa::DFA> decisionToDFA;
  for (size_t i = 0; i < l; i++) {
    auto element = param3[i].as<dfa::DFA *>(allow_raw_pointers());
    decisionToDFA.push_back(std::move(*element));
  }
  /*auto source = param3.as<std::vector<dfa::DFA *>>();
  for (auto element : source) {
    decisionToDFA.push_back(std::move(*element));
  }*/

  atn::PredictionContextCache *sharedContextCache = param4.as<atn::PredictionContextCache *>(allow_raw_pointers());

  return new atn::LexerATNSimulator(recognizer, *atn, decisionToDFA, *sharedContextCache);
}

class ATNSimulatorWrapper : public wrapper<atn::ATNSimulator> {
public:
  EMSCRIPTEN_WRAPPER(ATNSimulatorWrapper);

  virtual ~ATNSimulatorWrapper() noexcept override {
  }

  void reset() override {
    return call<void>("reset");
  }
};

class SemanticContextWrapper : public wrapper<atn::SemanticContext> {
public:
  EMSCRIPTEN_WRAPPER(SemanticContextWrapper);

  virtual ~SemanticContextWrapper() noexcept override {
  }

  virtual bool eval(Recognizer *parser, RuleContext *parserCallStack) const override {
    return call<bool>("eval", parser, parserCallStack);
  }

  virtual size_t hashCode() const override {
    return call<size_t>("hashCode");
  }

  virtual bool equals(const SemanticContext &other) const override {
    return call<bool>("equals", static_cast<const SemanticContextWrapper &>(other));
  }

  virtual std::string toString() const override {
    return call<std::string>("toString");
  }
};

EMSCRIPTEN_BINDINGS(atn) {
  class_<atn::ActionTransition, base<atn::Transition>>("ActionTransition")
    .class_function("is", select_overload<bool(const atn::Transition &)>(&atn::ActionTransition::is))
    .class_function("is", select_overload<bool(const atn::Transition *)>(&atn::ActionTransition::is),
                    allow_raw_pointers())

    .constructor<atn::ATNState *, size_t>()
    .constructor<atn::ATNState *, size_t, size_t, bool>()

    .property("ruleIndex", &atn::ActionTransition::ruleIndex)
    .property("actionIndex", &atn::ActionTransition::actionIndex)
    .property("isCtxDependent", &atn::ActionTransition::isCtxDependent)

    .function("isEpsilon", &atn::ActionTransition::isEpsilon)
    .function("matches", &atn::ActionTransition::matches)
    .function("toString", &atn::ActionTransition::toString);

  class_<atn::AmbiguityInfo, base<atn::DecisionEventInfo>>("AmbiguityInfo")
    .constructor<size_t, atn::ATNConfigSet *, const antlrcpp::BitSet &, TokenStream *, size_t, size_t, bool>()

    .property("ambigAlts", &atn::AmbiguityInfo::ambigAlts);

  class_<atn::ArrayPredictionContext, base<atn::PredictionContext>>("ArrayPredictionContext")
    .class_function("is", select_overload<bool(const atn::PredictionContext &)>(&atn::ArrayPredictionContext::is))
    .class_function("is", select_overload<bool(const atn::PredictionContext *)>(&atn::ArrayPredictionContext::is),
                    allow_raw_pointers())

    .property("parents", &atn::ArrayPredictionContext::parents)
    .property("returnStates", &atn::ArrayPredictionContext::returnStates)

    .constructor<const atn::SingletonPredictionContext &>()
    // .constructor<std::vector<Ref<const PredictionContext>>, std::vector<size_t>>> ()
    // .constructor<atn::ArrayPredictionContext &&>()

    .function("isEmpty", &atn::ArrayPredictionContext::isEmpty)
    .function("size", &atn::ArrayPredictionContext::size)
    .function("getParent", &atn::ArrayPredictionContext::getParent)
    .function("getReturnState", &atn::ArrayPredictionContext::getReturnState)
    .function("equals", &atn::ArrayPredictionContext::equals)
    .function("toString", &atn::ArrayPredictionContext::toString);

  class_<atn::ATN>("ATN")
    .class_property("INVALID_ALT_NUMBER", &atn::ATN::INVALID_ALT_NUMBER)

    .property("states", &atn::ATN::states)
    .property("decisionToState", &atn::ATN::decisionToState)
    .property("ruleToStartState", &atn::ATN::ruleToStartState)
    .property("ruleToStopState", &atn::ATN::ruleToStopState)
    .property("modeToStartState", &atn::ATN::modeToStartState)
    .property("grammarType", &atn::ATN::grammarType)
    .property("maxTokenType", &atn::ATN::maxTokenType)
    .property("ruleToTokenType", &atn::ATN::ruleToTokenType)
    .property("lexerActions", &atn::ATN::lexerActions)

    .constructor<>()
    .constructor<atn::ATNType, size_t>()

    .function("nextTokens",
              select_overload<misc::IntervalSet const(atn::ATNState *, RuleContext *) const>(&atn::ATN::nextTokens),
              allow_raw_pointers())
    .function("nextTokens", select_overload<misc::IntervalSet const &(atn::ATNState *) const>(&atn::ATN::nextTokens),
              allow_raw_pointers())
    .function("addState", &atn::ATN::addState, allow_raw_pointers())
    .function("removeState", &atn::ATN::removeState, allow_raw_pointers())
    .function("defineDecisionState", &atn::ATN::defineDecisionState, allow_raw_pointers())
    .function("getDecisionState", &atn::ATN::getDecisionState, allow_raw_pointers())
    .function("getNumberOfDecisions", &atn::ATN::getNumberOfDecisions)
    .function("getExpectedTokens", &atn::ATN::getExpectedTokens, allow_raw_pointers())
    .function("toString", &atn::ATN::toString);

  class_<atn::ATNConfig>("ATNConfig")
    .property("alt", &atn::ATNConfig::alt)
    .property("context", &atn::ATNConfig::context)
    .property("reachesIntoOuterContext", &atn::ATNConfig::reachesIntoOuterContext)
    .property("semanticContext", &atn::ATNConfig::semanticContext)

    // embind limitation: overload resolution is based only on parameter count, not the types of the parameters.
    // .constructor<atn::ATNState *, size_t, Ref<const atn::PredictionContext>>()
    // .constructor<atn::ATNState *, size_t, Ref<const atn::PredictionContext>, Ref<const atn::SemanticContext>>()
    // .constructor<atn::ATNConfig const &, Ref<const atn::SemanticContext>>()
    .constructor<atn::ATNConfig const &, atn::ATNState *>()
    .constructor<atn::ATNConfig const &, atn::ATNState *, Ref<const atn::SemanticContext>>()
    // .constructor<atn::ATNConfig const &, atn::ATNState *, Ref<const atn::PredictionContext>>()
    .constructor<atn::ATNConfig const &, atn::ATNState *, Ref<const atn::PredictionContext>,
                 Ref<const atn::SemanticContext>>()
    .constructor<atn::ATNConfig const &>()

    .function("hashCode", &atn::ATNConfig::hashCode)
    .function("getOuterContextDepth", &atn::ATNConfig::getOuterContextDepth)
    .function("isPrecedenceFilterSuppressed", &atn::ATNConfig::isPrecedenceFilterSuppressed)
    .function("setPrecedenceFilterSuppressed", &atn::ATNConfig::setPrecedenceFilterSuppressed)
    .function("toString", select_overload<std::string() const>(&atn::ATNConfig::toString))
    .function("toString", select_overload<std::string(bool) const>(&atn::ATNConfig::toString));

  class_<atn::ATNConfigSet>("ATNConfigSet")
    .property("configs", &atn::ATNConfigSet::configs)
    .property("uniqueAlt", &atn::ATNConfigSet::uniqueAlt)
    .property("conflictingAlts", &atn::ATNConfigSet::conflictingAlts)
    .property("hasSemanticContext", &atn::ATNConfigSet::hasSemanticContext)
    .property("dipsIntoOuterContext", &atn::ATNConfigSet::dipsIntoOuterContext)
    .property("fullCtx", &atn::ATNConfigSet::fullCtx)

    .constructor<>()
    .constructor<const atn::ATNConfigSet &>()
    // .constructor<bool>()

    .function("add", select_overload<bool(const Ref<atn::ATNConfig> &)>(&atn::ATNConfigSet::add), allow_raw_pointers())
    .function(
      "add",
      select_overload<bool(const Ref<atn::ATNConfig> &, atn::PredictionContextMergeCache *)>(&atn::ATNConfigSet::add),
      allow_raw_pointers())
    .function("addAll", &atn::ATNConfigSet::addAll)
    .function("getStates", &atn::ATNConfigSet::getStates, allow_raw_pointers())
    .function("getAlts", &atn::ATNConfigSet::getAlts)
    .function("getPredicates", &atn::ATNConfigSet::getPredicates)
    .function("get", &atn::ATNConfigSet::get)
    .function("optimizeConfigs", &atn::ATNConfigSet::optimizeConfigs, allow_raw_pointers())
    .function("size", &atn::ATNConfigSet::size)
    .function("isEmpty", &atn::ATNConfigSet::isEmpty)
    .function("clear", &atn::ATNConfigSet::clear)
    .function("isReadonly", &atn::ATNConfigSet::isReadonly)
    .function("setReadonly", &atn::ATNConfigSet::setReadonly)
    .function("hashCode", select_overload<size_t() const>(&atn::ATNConfigSet::hashCode))
    .function("equals", select_overload<bool(const atn::ATNConfigSet &) const>(&atn::ATNConfigSet::equals))
    .function("toString", &atn::ATNConfigSet::toString);

  class_<atn::ATNDeserializer>("ATNDeserializer")
    .class_property("SERIALIZED_VERSION", &atn::ATNDeserializer::SERIALIZED_VERSION)

    .constructor<>()
    .constructor<atn::ATNDeserializationOptions>()

    .function("deserialize", &atn::ATNDeserializer::deserialize)
    .function("verifyATN", &atn::ATNDeserializer::verifyATN);

  class_<atn::ATNDeserializationOptions>("ATNDeserializationOptions")
    .constructor<>()
    .constructor<const atn::ATNDeserializationOptions &>()

    .class_function("getDefaultOptions", &atn::ATNDeserializationOptions::getDefaultOptions)

    .function("isReadOnly", &atn::ATNDeserializationOptions::isReadOnly)
    .function("makeReadOnly", &atn::ATNDeserializationOptions::makeReadOnly)
    .function("isVerifyATN", &atn::ATNDeserializationOptions::isVerifyATN)
    .function("setVerifyATN", &atn::ATNDeserializationOptions::setVerifyATN)
    .function("isGenerateRuleBypassTransitions", &atn::ATNDeserializationOptions::isGenerateRuleBypassTransitions)
    .function("setGenerateRuleBypassTransitions", &atn::ATNDeserializationOptions::setGenerateRuleBypassTransitions);

  class_<atn::ATNSimulator>("ATNSimulator")
    .class_property("ERROR", &atn::ATNSimulator::ERROR)

    // Cannot be instantiated directly.
    // .constructor<const atn::ATN &, atn::PredictionContextCache &>()

    .function("reset", &atn::ATNSimulator::reset, pure_virtual())
    .function("clearDFA", &atn::ATNSimulator::clearDFA)
    // .function("getSharedContextCache", &atn::ATNSimulator::getSharedContextCache)
    .function("getCachedContext", &atn::ATNSimulator::getCachedContext)
    .function("getATN", &atn::ATNSimulator::getATN, allow_raw_pointers())

    .allow_subclass<ATNSimulatorWrapper>("ATNSimulatorWrapper",
                                         constructor<const atn::ATN &, atn::PredictionContextCache &>());
  ;

  class_<atn::ATNState>("ATNState")
    .class_property("INITIAL_NUM_TRANSITIONS", &atn::ATNState::INITIAL_NUM_TRANSITIONS)
    .class_property("INVALID_STATE_NUMBER", &atn::ATNState::INVALID_STATE_NUMBER)

    .property("stateNumber", &atn::ATNState::stateNumber)
    .property("ruleIndex", &atn::ATNState::ruleIndex)
    .property("epsilonOnlyTransitions", &atn::ATNState::epsilonOnlyTransitions)

    .function("getTransitions", &atn::ATNState::getTransitions)

    .function("addTransition", select_overload<void(atn::ConstTransitionPtr)>(&atn::ATNState::addTransition))
    .function("addTransition", select_overload<void(size_t, atn::ConstTransitionPtr)>(&atn::ATNState::addTransition))
    .function("removeTransition", &atn::ATNState::removeTransition, allow_raw_pointers())
    .function("hashCode", &atn::ATNState::hashCode)
    .function("equals", &atn::ATNState::equals)
    .function("isNonGreedyExitState", &atn::ATNState::isNonGreedyExitState)
    .function("toString", &atn::ATNState::toString)
    .function("getStateType", &atn::ATNState::getStateType);

  enum_<atn::ATNStateType>("ATNStateType")
    .value("INVALID", atn::ATNStateType::INVALID)
    .value("BASIC", atn::ATNStateType::BASIC)
    .value("RULE_START", atn::ATNStateType::RULE_START)
    .value("BLOCK_START", atn::ATNStateType::BLOCK_START)
    .value("PLUS_BLOCK_START", atn::ATNStateType::PLUS_BLOCK_START)
    .value("STAR_BLOCK_START", atn::ATNStateType::STAR_BLOCK_START)
    .value("TOKEN_START", atn::ATNStateType::TOKEN_START)
    .value("RULE_STOP", atn::ATNStateType::RULE_STOP)
    .value("BLOCK_END", atn::ATNStateType::BLOCK_END)
    .value("STAR_LOOP_BACK", atn::ATNStateType::STAR_LOOP_BACK)
    .value("STAR_LOOP_ENTRY", atn::ATNStateType::STAR_LOOP_ENTRY)
    .value("PLUS_LOOP_BACK", atn::ATNStateType::PLUS_LOOP_BACK)
    .value("LOOP_END", atn::ATNStateType::LOOP_END);

  function("atnStateTypeName", &atn::atnStateTypeName);

  enum_<atn::ATNType>("ATNType")
    // Comment to avoid auto wrapping
    .value("LEXER", atn::ATNType::LEXER)
    .value("PARSER", atn::ATNType::PARSER);

  class_<atn::AtomTransition, base<atn::Transition>>("AtomTransition")
    .class_function("is", select_overload<bool(const atn::Transition &)>(&atn::AtomTransition::is))
    .class_function("is", select_overload<bool(const atn::Transition *)>(&atn::AtomTransition::is),
                    allow_raw_pointers())

    .constructor<atn::ATNState *, size_t>()

    .function("label", select_overload<misc::IntervalSet() const>(&atn::AtomTransition::label))
    .function("matches", select_overload<bool(size_t, size_t, size_t) const>(&atn::AtomTransition::matches))
    .function("toString", &atn::AtomTransition::toString);

  class_<atn::BasicState, base<atn::ATNState>>("BasicState")
    .constructor<>()
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::BasicState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::BasicState::is), allow_raw_pointers());

  class_<atn::BlockStartState, base<atn::DecisionState>>("BlockStartState")
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::BlockStartState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::BlockStartState::is), allow_raw_pointers())

    .function("endState", &atn::BlockStartState::getEndState, allow_raw_pointers());

  class_<atn::ContextSensitivityInfo>("ContextSensitivityInfo")
    // Comment to avoid auto wrapping.
    .constructor<size_t, atn::ATNConfigSet *, TokenStream *, size_t, size_t>();

  class_<atn::DecisionEventInfo>("DecisionEventInfo")
    .property("decision", &atn::DecisionEventInfo::decision)
    .property("startIndex", &atn::DecisionEventInfo::startIndex)
    .property("stopIndex", &atn::DecisionEventInfo::stopIndex)
    .property("fullCtx", &atn::DecisionEventInfo::fullCtx)

    .constructor<size_t, atn::ATNConfigSet *, TokenStream *, size_t, size_t, bool>()

    .function("configs", &atn::DecisionEventInfo::getConfigs, allow_raw_pointers())
    .function("input", &atn::DecisionEventInfo::getInput, allow_raw_pointers());

  // register_vector<atn::AmbiguityInfo>("AmbiguityInfoVector");

  class_<atn::DecisionInfo>("DecisionInfo")
    .property("decision", &atn::DecisionInfo::decision)
    .property("invocations", &atn::DecisionInfo::invocations)
    .property("timeInPrediction", &atn::DecisionInfo::timeInPrediction)
    .property("SLL_TotalLook", &atn::DecisionInfo::SLL_TotalLook)
    .property("SLL_MinLook", &atn::DecisionInfo::SLL_MinLook)
    .property("SLL_MaxLook", &atn::DecisionInfo::SLL_MaxLook)
    .property("SLL_MaxLookEvent", &atn::DecisionInfo::SLL_MaxLookEvent)
    .property("LL_TotalLook", &atn::DecisionInfo::LL_TotalLook)
    .property("LL_MinLook", &atn::DecisionInfo::LL_MinLook)
    .property("LL_MaxLook", &atn::DecisionInfo::LL_MaxLook)
    .property("LL_MaxLookEvent", &atn::DecisionInfo::LL_MaxLookEvent)
    // .property("contextSensitivities", &atn::DecisionInfo::contextSensitivities)
    // .property("errors", &atn::DecisionInfo::errors)
    //.property("ambiguities", &atn::DecisionInfo::ambiguities)
    //.property("predicateEvals", &atn::DecisionInfo::predicateEvals)
    .property("SLL_ATNTransitions", &atn::DecisionInfo::SLL_ATNTransitions)
    .property("SLL_DFATransitions", &atn::DecisionInfo::SLL_DFATransitions)
    .property("LL_Fallback", &atn::DecisionInfo::LL_Fallback)
    .property("LL_ATNTransitions", &atn::DecisionInfo::LL_ATNTransitions)
    .property("LL_DFATransitions", &atn::DecisionInfo::LL_DFATransitions)

    .constructor<size_t>()
    .function("toString", &atn::DecisionInfo::toString);

  class_<atn::DecisionState, base<atn::ATNState>>("DecisionState")
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::DecisionState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::DecisionState::is), allow_raw_pointers())

    .property("decision", &atn::DecisionState::decision)
    .property("nonGreedy", &atn::DecisionState::nonGreedy)

    .function("toString", &atn::DecisionState::toString);

  class_<atn::EpsilonTransition, base<atn::Transition>>("EpsilonTransition")
    .class_function("is", select_overload<bool(const atn::Transition &)>(&atn::EpsilonTransition::is))
    .class_function("is", select_overload<bool(const atn::Transition *)>(&atn::EpsilonTransition::is),
                    allow_raw_pointers())

    .constructor<atn::ATNState *>()
    .constructor<atn::ATNState *, size_t>()

    .function("outermostPrecedenceReturn", &atn::EpsilonTransition::outermostPrecedenceReturn)
    .function("isEpsilon", &atn::EpsilonTransition::isEpsilon)
    .function("matches", &atn::EpsilonTransition::matches)
    .function("toString", &atn::EpsilonTransition::toString);

  class_<atn::ErrorInfo, base<atn::DecisionEventInfo>>("ErrorInfo")
    .constructor<size_t, atn::ATNConfigSet *, TokenStream *, size_t, size_t, bool>();

  class_<atn::LexerAction>("LexerAction")
    .function("getActionType", &atn::LexerAction::getActionType)
    .function("isPositionDependent", &atn::LexerAction::isPositionDependent)
    .function("execute", &atn::LexerAction::execute, allow_raw_pointers())
    .function("hashCode", &atn::LexerAction::hashCode)
    .function("equals", &atn::LexerAction::equals)
    .function("toString", &atn::LexerAction::toString);

  class_<atn::LexerActionExecutor, base<std::enable_shared_from_this<atn::LexerActionExecutor>>>("LexerActionExecutor")
    .constructor<std::vector<Ref<const atn::LexerAction>>>()

    .function("append", &atn::LexerActionExecutor::append, allow_raw_pointers())
    .function("fixOffsetBeforeMatch", &atn::LexerActionExecutor::fixOffsetBeforeMatch)
    .function("getLexerActions", &atn::LexerActionExecutor::getLexerActions)
    .function("execute", &atn::LexerActionExecutor::execute, allow_raw_pointers())
    .function("hashCode", &atn::LexerActionExecutor::hashCode)
    .function("equals", &atn::LexerActionExecutor::equals);

  enum_<atn::LexerActionType>("LexerActionType")
    .value("CHANNEL", atn::LexerActionType::CHANNEL)
    .value("CUSTOM", atn::LexerActionType::CUSTOM)
    .value("MODE", atn::LexerActionType::MODE)
    .value("MORE", atn::LexerActionType::MORE)
    .value("POP_MODE", atn::LexerActionType::POP_MODE)
    .value("PUSH_MODE", atn::LexerActionType::PUSH_MODE)
    .value("SKIP", atn::LexerActionType::SKIP)
    .value("TYPE", atn::LexerActionType::TYPE);

  class_<atn::LexerATNConfig, base<atn::ATNConfig>>("LexerATNConfig")
    .constructor<atn::ATNState *, int, Ref<const atn::PredictionContext>>()
    // .constructor<atn::ATNState *, int, Ref<const atn::PredictionContext>, Ref<const atn::LexerActionExecutor>>()
    .constructor<atn::LexerATNConfig const &, atn::ATNState *>()
    // .constructor<atn::LexerATNConfig const &, atn::ATNState *, Ref<const atn::LexerActionExecutor>>()
    // .constructor<atn::LexerATNConfig const &, atn::ATNState *, Ref<const atn::PredictionContext>>()

    .function("getLexerActionExecutor", &atn::LexerATNConfig::getLexerActionExecutor)
    .function("hasPassedThroughNonGreedyDecision", &atn::LexerATNConfig::hasPassedThroughNonGreedyDecision)
    .function("hashCode", &atn::LexerATNConfig::hashCode);

  class_<atn::LexerATNSimulator, base<atn::ATNSimulator>>("LexerATNSimulator")
    .class_property("MIN_DFA_EDGE", &atn::LexerATNSimulator::MIN_DFA_EDGE)
    .class_property("MAX_DFA_EDGE", &atn::LexerATNSimulator::MAX_DFA_EDGE)

    //.constructor<const atn::ATN &, std::vector<dfa::DFA> &, atn::PredictionContextCache &>()
    //.constructor<atn::Lexer *, const atn::ATN &, std::vector<dfa::DFA> &, atn::PredictionContextCache &>()
    .constructor<>(&createLexerATNSimulator)

    .function("copyState", &atn::LexerATNSimulator::copyState, allow_raw_pointers())
    .function("match", &atn::LexerATNSimulator::match, allow_raw_pointers())
    .function("reset", &atn::LexerATNSimulator::reset)
    .function("clearDFA", &atn::LexerATNSimulator::clearDFA)

    // .function("getDFA", &atn::LexerATNSimulator::getDFA)
    .function("getText", &atn::LexerATNSimulator::getText, allow_raw_pointers())
    .function("getLine", &atn::LexerATNSimulator::getLine)
    .function("setLine", &atn::LexerATNSimulator::setLine)
    .function("getCharPositionInLine", &atn::LexerATNSimulator::getCharPositionInLine)
    .function("setCharPositionInLine", &atn::LexerATNSimulator::setCharPositionInLine)
    .function("consume", &atn::LexerATNSimulator::consume, allow_raw_pointers())
    .function("getTokenName", &atn::LexerATNSimulator::getTokenName);

  class_<atn::LexerChannelAction, base<atn::LexerAction>>("LexerChannelAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerChannelAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerChannelAction::is),
                    allow_raw_pointers())

    .constructor<int>()

    .function("getActionType", &atn::LexerChannelAction::getActionType)
    .function("execute", &atn::LexerChannelAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerChannelAction::equals)
    .function("toString", &atn::LexerChannelAction::toString);

  class_<atn::LexerCustomAction, base<atn::LexerAction>>("LexerCustomAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerCustomAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerCustomAction::is),
                    allow_raw_pointers())

    .constructor<size_t, size_t>()

    .function("getRuleIndex", &atn::LexerCustomAction::getRuleIndex)
    .function("getActionIndex", &atn::LexerCustomAction::getActionIndex)
    .function("execute", &atn::LexerCustomAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerCustomAction::equals)
    .function("toString", &atn::LexerCustomAction::toString);

  class_<atn::LexerIndexedCustomAction, base<atn ::LexerAction>>("LexerIndexedCustomAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerIndexedCustomAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerIndexedCustomAction::is),
                    allow_raw_pointers())

    .constructor<int, Ref<const atn::LexerAction>>()

    .function("getOffset", &atn::LexerIndexedCustomAction::getOffset)
    .function("getAction", &atn::LexerIndexedCustomAction::getAction)
    .function("execute", &atn::LexerIndexedCustomAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerIndexedCustomAction::equals)
    .function("toString", &atn::LexerIndexedCustomAction::toString);

  class_<atn::LexerModeAction, base<atn::LexerAction>>("LexerModeAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerModeAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerModeAction::is),
                    allow_raw_pointers())

    .constructor<int>()

    .function("execute", &atn::LexerModeAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerModeAction::equals)
    .function("toString", &atn::LexerModeAction::toString);

  class_<atn::LexerMoreAction, base<atn::LexerAction>>("LexerMoreAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerMoreAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerMoreAction::is),
                    allow_raw_pointers())
    .class_function("getInstance", &atn::LexerMoreAction::getInstance)

    .function("execute", &atn::LexerMoreAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerMoreAction::equals)
    .function("toString", &atn::LexerMoreAction::toString);

  class_<atn::LexerPopModeAction, base<atn::LexerAction>>("LexerPopModeAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerPopModeAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerPopModeAction::is),
                    allow_raw_pointers())
    .class_function("getInstance", &atn::LexerPopModeAction::getInstance)

    .function("execute", &atn::LexerPopModeAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerPopModeAction::equals)
    .function("toString", &atn::LexerPopModeAction::toString);

  class_<atn::LexerPushModeAction, base<atn::LexerAction>>("LexerPushModeAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerPushModeAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerPushModeAction::is),
                    allow_raw_pointers())

    .constructor<int>()

    .function("getMode", &atn::LexerPushModeAction::getMode)
    .function("execute", &atn::LexerPushModeAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerPushModeAction::equals)
    .function("toString", &atn::LexerPushModeAction::toString);

  class_<atn::LexerSkipAction, base<atn::LexerAction>>("LexerSkipAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerSkipAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerSkipAction::is),
                    allow_raw_pointers())
    .class_function("getInstance", &atn::LexerSkipAction::getInstance)

    .function("execute", &atn::LexerSkipAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerSkipAction::equals)
    .function("toString", &atn::LexerSkipAction::toString);

  class_<atn::LexerTypeAction, base<atn::LexerAction>>("LexerTypeAction")
    .class_function("is", select_overload<bool(const atn::LexerAction &)>(&atn::LexerTypeAction::is))
    .class_function("is", select_overload<bool(const atn::LexerAction *)>(&atn::LexerTypeAction::is),
                    allow_raw_pointers())

    .constructor<int>()

    .function("getType", &atn::LexerTypeAction::getType)
    .function("execute", &atn::LexerTypeAction::execute, allow_raw_pointers())
    .function("equals", &atn::LexerTypeAction::equals)
    .function("toString", &atn::LexerTypeAction::toString);

  class_<atn::ParserATNSimulator, base<atn::ATNSimulator>>("ParserATNSimulator")
    .class_property("TURN_OFF_LR_LOOP_ENTRY_BRANCH_OPT", &atn::ParserATNSimulator::TURN_OFF_LR_LOOP_ENTRY_BRANCH_OPT)

    // .constructor<Parser *, const ATN &, std::vector<dfa::DFA> &, PredictionContextCache &>()
    // .constructor<Parser *, const ATN &, std::vector<dfa::DFA> &,PredictionContextCache &, const
    // ParserATNSimulatorOptions &>()

    // .property("decisionToDFA", &atn::ParserATNSimulator::decisionToDFA)

    .function("reset", &atn::ParserATNSimulator::reset)
    .function("clearDFA", &atn::ParserATNSimulator::clearDFA)
    .function("adaptivePredict", &atn::ParserATNSimulator::adaptivePredict, allow_raw_pointers())
    .function("canDropLoopEntryEdgeInLeftRecursiveRule",
              &atn::ParserATNSimulator::canDropLoopEntryEdgeInLeftRecursiveRule, allow_raw_pointers())
    .function("getRuleName", &atn::ParserATNSimulator::getRuleName)
    .function("precedenceTransition", &atn::ParserATNSimulator::precedenceTransition, allow_raw_pointers())
    .function("setPredictionMode", &atn::ParserATNSimulator::setPredictionMode)
    .function("getPredictionMode", &atn::ParserATNSimulator::getPredictionMode)
    .function("getParser", &atn::ParserATNSimulator::getParser, allow_raw_pointers())
    .function("getTokenName", &atn::ParserATNSimulator::getTokenName)
    .function("getLookaheadName", &atn::ParserATNSimulator::getLookaheadName, allow_raw_pointers())
    .function("dumpDeadEndConfigs", &atn::ParserATNSimulator::dumpDeadEndConfigs);

  class_<atn::PredictionContext>("PredictionContext")
    .class_property("EMPTY", &atn::PredictionContext::EMPTY)
    .class_property("EMPTY_RETURN_STATE", &atn::PredictionContext::EMPTY_RETURN_STATE)

    .class_function("merge", &atn::PredictionContext::merge, allow_raw_pointers())
    .class_function("mergeSingletons", &atn::PredictionContext::mergeSingletons, allow_raw_pointers())
    .class_function("mergeRoot", &atn::PredictionContext::mergeRoot, allow_raw_pointers())
    .class_function("mergeArrays", &atn::PredictionContext::mergeArrays, allow_raw_pointers())
    .class_function("toDOTString", &atn::PredictionContext::toDOTString, allow_raw_pointers())
    .class_function("getCachedContext", &atn::PredictionContext::getCachedContext, allow_raw_pointers())
    .class_function("getAllContextNodes", &atn::PredictionContext::getAllContextNodes, allow_raw_pointers())
    .class_function("fromRuleContext", &atn::PredictionContext::fromRuleContext, allow_raw_pointers())

    .function("getContextType", &atn::PredictionContext::getContextType)
    .function("size", &atn::PredictionContext::size)
    .function("getParent", &atn::PredictionContext::getParent, allow_raw_pointers())
    .function("getReturnState", &atn::PredictionContext::getReturnState)
    .function("isEmpty", &atn::PredictionContext::isEmpty)
    .function("hasEmptyPath", &atn::PredictionContext::hasEmptyPath)
    .function("hashCode", &atn::PredictionContext::hashCode)
    .function("equals", &atn::PredictionContext::equals)
    .function("toString", &atn::PredictionContext::toString)
    .function("toStrings",
              select_overload<std::vector<std::string>(Recognizer *, int) const>(&atn::PredictionContext::toStrings),
              allow_raw_pointers())
    .function(
      "toStrings",
      select_overload<std::vector<std::string>(Recognizer *, const Ref<const atn::PredictionContext> &, int) const>(
        &atn::PredictionContext::toStrings),
      allow_raw_pointers());

  class_<atn::PredictionContextCache>("PredictionContextCache")
    .constructor<>()

    .function("put", &atn::PredictionContextCache::put, allow_raw_pointers())
    .function("get", &atn::PredictionContextCache::get, allow_raw_pointers());

  class_<atn::PredictionContextMergeCache>("PredictionContextMergeCache")
    .constructor<>()

    .constructor<const atn::PredictionContextMergeCacheOptions &>()
    .function("put", &atn::PredictionContextMergeCache::put, allow_raw_pointers())
    .function("get", &atn::PredictionContextMergeCache::get, allow_raw_pointers())
    .function("getOptions", &atn::PredictionContextMergeCache::getOptions)
    .function("clear", &atn::PredictionContextMergeCache::clear);

  class_<atn::PredictionContextMergeCacheOptions>("PredictionContextMergeCacheOptions")
    .function("getMaxSize", &atn::PredictionContextMergeCacheOptions::getMaxSize)
    .function("hasMaxSize", &atn::PredictionContextMergeCacheOptions::hasMaxSize)
    .function("setMaxSize", &atn::PredictionContextMergeCacheOptions::setMaxSize)
    .function("getClearEveryN", &atn::PredictionContextMergeCacheOptions::getClearEveryN)
    .function("hasClearEveryN", &atn::PredictionContextMergeCacheOptions::hasClearEveryN)
    .function("setClearEveryN", &atn::PredictionContextMergeCacheOptions::setClearEveryN)
    .function("neverClear", &atn::PredictionContextMergeCacheOptions::neverClear);

  enum_<atn::PredictionContextType>("PredictionContextType")
    .value("SINGLETON", atn::PredictionContextType::SINGLETON)
    .value("ARRAY", atn::PredictionContextType::ARRAY);

  enum_<atn::PredictionMode>("PredictionMode")
    .value("SLL", atn::PredictionMode::SLL)
    .value("LL", atn::PredictionMode::LL)
    .value("LL_EXACT_AMBIG_DETECTION", atn::PredictionMode::LL_EXACT_AMBIG_DETECTION);

  class_<atn::RuleStartState, base<atn::ATNState>>("RuleStartState")
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::RuleStartState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::RuleStartState::is), allow_raw_pointers())

    .constructor<>()

    .property("isLeftRecursiveRule", &atn::RuleStartState::isLeftRecursiveRule)
    .function("stopState", &atn::RuleStartState::getStopState, allow_raw_pointers());

  class_<atn::RuleStopState, base<atn::ATNState>>("RuleStopState")
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::RuleStopState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::RuleStopState::is), allow_raw_pointers())

    .constructor<>();

  class_<atn::SemanticContext>("SemanticContext")
    .class_function("and", &atn::SemanticContext::And)
    .class_function("or", &atn::SemanticContext::Or)

    .function("getContextType", &atn::SemanticContext::getContextType)
    .function("eval", &atn::SemanticContext::eval, pure_virtual(), allow_raw_pointers())
    .function("evalPrecedence", &atn::SemanticContext::evalPrecedence, allow_raw_pointers())
    .function("hashCode", &atn::SemanticContext::hashCode, pure_virtual())
    .function("equals", &atn::SemanticContext::equals, pure_virtual())
    .function("toString", &atn::SemanticContext::toString, pure_virtual())
    .allow_subclass<SemanticContextWrapper>("SemanticContextWrapper", constructor<atn::SemanticContextType>());

  enum_<atn::SemanticContextType>("SemanticContextType")
    .value("PREDICATE", atn::SemanticContextType::PREDICATE)
    .value("PRECEDENCE", atn::SemanticContextType::PRECEDENCE)
    .value("AND", atn::SemanticContextType::AND)
    .value("OR", atn::SemanticContextType::OR);

  register_vector<std::vector<int32_t>>("Int32Vector");

  class_<atn::SerializedATNView>("SerializedATNView")
    .constructor<>(&createSerializedATNView)

    .function("empty", &atn::SerializedATNView::empty)
    .function("size", &atn::SerializedATNView::size)
    .function("print", &atn::SerializedATNView::print);

  class_<atn::TokensStartState, base<atn::DecisionState>>("TokensStartState")
    .class_function("is", select_overload<bool(const atn::ATNState &)>(&atn::TokensStartState::is))
    .class_function("is", select_overload<bool(const atn::ATNState *)>(&atn::TokensStartState::is),
                    allow_raw_pointers())

    .constructor<>();

  class_<atn::Transition>("Transition")
    .function("getTransitionType", &atn::Transition::getTransitionType)
    .function("isEpsilon", &atn::Transition::isEpsilon)
    .function("label", &atn::Transition::label)
    .function("matches", &atn::Transition::matches)
    .function("toString", &atn::Transition::toString)
    .function("getTarget", &atn::Transition::getTarget, allow_raw_pointers());

  enum_<atn::TransitionType>("TransitionType")
    .value("EPSILON", atn::TransitionType::EPSILON)
    .value("RANGE", atn::TransitionType::RANGE)
    .value("RULE", atn::TransitionType::RULE)
    .value("PREDICATE", atn::TransitionType::PREDICATE)
    .value("ATOM", atn::TransitionType::ATOM)
    .value("ACTION", atn::TransitionType::ACTION)
    .value("SET", atn::TransitionType::SET)
    .value("NOT_SET", atn::TransitionType::NOT_SET)
    .value("WILDCARD", atn::TransitionType::WILDCARD)
    .value("PRECEDENCE", atn::TransitionType::PRECEDENCE);
}
