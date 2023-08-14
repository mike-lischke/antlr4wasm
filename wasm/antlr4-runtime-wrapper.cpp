/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#include <emscripten.h>
#include <emscripten/bind.h>

using namespace emscripten;

#include "antlr4-runtime-wrapper.h"

using namespace antlr4;
using namespace antlrcpp;

#include "helpers.h"

#include "runtime-main.h"
#include "runtime-atn.h"
#include "runtime-dfa.h"
#include "runtime-internal.h"
#include "runtime-misc.h"
#include "runtime-support.h"
#include "runtime-tree.h"
#include "runtime-tree-pattern.h"
#include "runtime-tree-xpath.h"

EMSCRIPTEN_BINDINGS(default) {
  register_vector<size_t>("SizeTVector");
  register_vector<std::string>("StringVector");

  register_vector<Token *>("TokenVector");

  register_vector<atn::DecisionState *>("DecisionStateVector");
  register_vector<atn::ATNState *>("ATNStateVector");

  register_vector<dfa::DFA *>("DFAVector");

  register_vector<tree::ParseTree *>("ParseTreeVector");
};
