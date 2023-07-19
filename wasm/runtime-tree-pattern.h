/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

EMSCRIPTEN_BINDINGS(tree_pattern) {
  class_<tree::pattern::Chunk>("Chunk")
    .constructor<>()
    .constructor<tree::pattern::Chunk const &>()

    // Comment to avoid format issue.
    .function("toString", &tree::pattern::Chunk::toString);

  class_<tree::pattern::ParseTreeMatch>("ParseTreeMatch")
    .constructor<tree::ParseTree *, tree::pattern::ParseTreePattern const &,
                 const std::map<std::string, std::vector<tree::ParseTree *>> &, tree::ParseTree *>()
    .constructor<tree::pattern::ParseTreeMatch const &>()

    .function("get", &tree::pattern::ParseTreeMatch::get, allow_raw_pointers())
    .function("getAll", &tree::pattern::ParseTreeMatch::getAll, allow_raw_pointers())
    .function("getLabels", &tree::pattern::ParseTreeMatch::getLabels)
    .function("getMismatchedNode", &tree::pattern::ParseTreeMatch::getMismatchedNode, allow_raw_pointers())
    .function("succeeded", &tree::pattern::ParseTreeMatch::succeeded)
    .function("getPattern", &tree::pattern::ParseTreeMatch::getPattern, allow_raw_pointers())
    .function("getTree", &tree::pattern::ParseTreeMatch::getTree, allow_raw_pointers())
    .function("toString", &tree::pattern::ParseTreeMatch::toString);

  class_<tree::pattern::ParseTreePattern>("ParseTreePattern")
    .constructor<tree::pattern::ParseTreePatternMatcher *, const std::string &, int, tree::ParseTree *>()
    .constructor<tree::pattern::ParseTreePattern const &>()

    .function("match", &tree::pattern::ParseTreePattern::match, allow_raw_pointers())
    .function("matches", &tree::pattern::ParseTreePattern::matches, allow_raw_pointers())
    .function("findAll", &tree::pattern::ParseTreePattern::findAll, allow_raw_pointers())
    .function("getMatcher", &tree::pattern::ParseTreePattern::getMatcher, allow_raw_pointers())
    .function("getPattern", &tree::pattern::ParseTreePattern::getPattern)
    .function("getPatternRuleIndex", &tree::pattern::ParseTreePattern::getPatternRuleIndex)
    .function("getPatternTree", &tree::pattern::ParseTreePattern::getPatternTree, allow_raw_pointers());

  class_<tree::pattern::ParseTreePatternMatcher>("ParseTreePatternMatcher")
    .constructor<Lexer *, Parser *>()
    .function("setDelimiters", &tree::pattern::ParseTreePatternMatcher::setDelimiters)
    .function("matches",
              select_overload<bool(tree::ParseTree *, const std::string &, int)>(
                &tree::pattern::ParseTreePatternMatcher::matches),
              allow_raw_pointers())
    .function("matches",
              select_overload<bool(tree::ParseTree *, const tree::pattern::ParseTreePattern &)>(
                &tree::pattern::ParseTreePatternMatcher::matches),
              allow_raw_pointers())
    .function(
      "match",
      select_overload<tree::pattern::ParseTreeMatch(tree::ParseTree *, const tree::pattern::ParseTreePattern &)>(
        &tree::pattern::ParseTreePatternMatcher::match),
      allow_raw_pointers())
    .function("match",
              select_overload<tree::pattern::ParseTreeMatch(tree::ParseTree *, const std::string &, int)>(
                &tree::pattern::ParseTreePatternMatcher::match),
              allow_raw_pointers())
    .function("compile", &tree::pattern::ParseTreePatternMatcher::compile)
    .function("getLexer", &tree::pattern::ParseTreePatternMatcher::getLexer, allow_raw_pointers())
    .function("getParser", &tree::pattern::ParseTreePatternMatcher::getParser, allow_raw_pointers())
    // .function("tokenize", &tree::pattern::ParseTreePatternMatcher::tokenize)
    .function("split", &tree::pattern::ParseTreePatternMatcher::split);
}
