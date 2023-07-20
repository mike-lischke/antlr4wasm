/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for
 * license information.
 */

#pragma once

#include <emscripten.h>
#include <emscripten/bind.h>

#include "../antlr4-cpp-runtime/antlr4-runtime.h"

using namespace emscripten;
using namespace antlr4;
using namespace antlrcpp;

EMSCRIPTEN_BINDINGS(default) {
  register_vector<size_t>("SizeTVector");
  register_vector<std::string>("StringVector");

  register_vector<atn::DecisionState *>("DecisionStateVector");
  register_vector<atn::ATNState *>("ATNStateVector");

  register_vector<dfa::DFA *>("DFAVector");

  register_vector<tree::ParseTree *>("ParseTreeVector");
};
