/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

class ParseTreeWrapper : public wrapper<tree::ParseTree> {
public:
  EMSCRIPTEN_WRAPPER(ParseTreeWrapper);

  virtual ~ParseTreeWrapper() noexcept override {
  }

  virtual std::string toStringTree(bool pretty = false) override {
    return call<std::string>("toStringTree", pretty);
  }

  virtual std::string toString() override {
    return call<std::string>("toString");
  }

  virtual std::string toStringTree(Parser *parser, bool pretty = false) override {
    return call<std::string>("toStringTree", parser, pretty);
  }

  virtual std::any accept(tree::ParseTreeVisitor *visitor) override {
    return call<std::any>("accept", visitor);
  }

  virtual std::string getText() override {
    return call<std::string>("getText");
  }

  virtual misc::Interval getSourceInterval() override {
    return call<misc::Interval>("getSourceInterval");
  }
};

class ParseTreeListenerWrapper : public wrapper<tree::ParseTreeListener> {
public:
  EMSCRIPTEN_WRAPPER(ParseTreeListenerWrapper);

  virtual ~ParseTreeListenerWrapper() noexcept override {
  }

  virtual void visitTerminal(tree::TerminalNode *node) override {
    call<void>("visitTerminal", node);
  }

  virtual void visitErrorNode(tree::ErrorNode *node) override {
    call<void>("visitErrorNode", node);
  }

  virtual void enterEveryRule(ParserRuleContext *ctx) override {
    call<void>("enterEveryRule", ctx);
  }

  virtual void exitEveryRule(ParserRuleContext *ctx) override {
    call<void>("exitEveryRule", ctx);
  }
};

class ParseTreeVisitorWrapper : public wrapper<tree::ParseTreeVisitor> {
public:
  EMSCRIPTEN_WRAPPER(ParseTreeVisitorWrapper);

  virtual ~ParseTreeVisitorWrapper() noexcept override {
  }

  virtual std::any visit(tree::ParseTree *tree) override {
    return call<std::any>("visit", tree);
  }

  virtual std::any visitChildren(tree::ParseTree *tree) override {
    return call<std::any>("visitChildren", tree);
  }

  virtual std::any visitTerminal(tree::TerminalNode *node) override {
    return call<std::any>("visitTerminal", node);
  }

  virtual std::any visitErrorNode(tree::ErrorNode *node) override {
    return call<std::any>("visitErrorNode", node);
  }
};

class TerminalNodeWrapper : public wrapper<tree::TerminalNode> {
public:
  EMSCRIPTEN_WRAPPER(TerminalNodeWrapper);

  virtual ~TerminalNodeWrapper() noexcept override {
  }

  virtual Token *getSymbol() const override {
    return nullptr; // call<Token *>("getSymbol");
  }

  virtual void setParent(RuleContext *parent) override {
    call<void>("setParent", parent);
  }
};

EMSCRIPTEN_BINDINGS(tree) {
  class_<tree::ErrorNode, base<tree::TerminalNode>>("ErrorNode")
    .class_function("is", select_overload<bool(const tree::ParseTree &)>(&tree::ErrorNode::is))
    .class_function("is", select_overload<bool(const tree::ParseTree *)>(&tree::ErrorNode::is), allow_raw_pointers());

  class_<tree::ParseTree>("ParseTree")
    .function("getChildren", &tree::ParseTree::getChildren, allow_raw_pointers())
    .function("getParent", &tree::ParseTree::getParent, allow_raw_pointers())
    .function("toStringTree", select_overload<std::string(bool)>(&tree::ParseTree::toStringTree), pure_virtual())
    .function("toStringTree", select_overload<std::string(Parser *, bool)>(&tree::ParseTree::toStringTree),
              allow_raw_pointers(), pure_virtual())
    .function("toString", &tree::ParseTree::toString, pure_virtual())
    .function("equals", &tree::ParseTree::operator==)
    .function("accept", &tree::ParseTree::accept, allow_raw_pointers(), pure_virtual())
    .function("getText", &tree::ParseTree::getText, pure_virtual())
    .function("getSourceInterval", &tree::ParseTree::getSourceInterval, pure_virtual())
    .function("getTreeType", &tree::ParseTree::getTreeType)

    .allow_subclass<ParseTreeWrapper>("ParseTreeWrapper", constructor<tree::ParseTreeType>());

  class_<tree::ParseTreeListener>("ParseTreeListener")
    .function("visitTerminal", &tree::ParseTreeListener::visitTerminal, allow_raw_pointers(), pure_virtual())
    .function("visitErrorNode", &tree::ParseTreeListener::visitErrorNode, allow_raw_pointers(), pure_virtual())
    .function("enterEveryRule", &tree::ParseTreeListener::enterEveryRule, allow_raw_pointers(), pure_virtual())
    .function("exitEveryRule", &tree::ParseTreeListener::exitEveryRule, allow_raw_pointers(), pure_virtual())
    .allow_subclass<ParseTreeListenerWrapper>("ParseTreeListenerWrapper");

  enum_<tree::ParseTreeType>("ParseTreeType")
    .value("TERMINAL", tree::ParseTreeType::TERMINAL)
    .value("ERROR", tree::ParseTreeType::ERROR)
    .value("RULE", tree::ParseTreeType::RULE);

  class_<tree::ParseTreeVisitor>("ParseTreeVisitor")
    .function("visit", &tree::ParseTreeVisitor::visit, allow_raw_pointers(), pure_virtual())
    .function("visitChildren", &tree::ParseTreeVisitor::visitChildren, allow_raw_pointers(), pure_virtual())
    .function("visitTerminal", &tree::ParseTreeVisitor::visitTerminal, allow_raw_pointers(), pure_virtual())
    .function("visitErrorNode", &tree::ParseTreeVisitor::visitErrorNode, allow_raw_pointers(), pure_virtual());

  class_<tree::TerminalNode, base<tree::ParseTree>>("TerminalNode")
    .class_function("is", select_overload<bool(const tree::ParseTree &)>(&tree::TerminalNode::is))
    .class_function("is", select_overload<bool(const tree::ParseTree *)>(&tree::TerminalNode::is), allow_raw_pointers())
    .function("getSymbol", &tree::TerminalNode::getSymbol, allow_raw_pointers(), pure_virtual())
    .function("setParent", &tree::TerminalNode::setParent, allow_raw_pointers(), pure_virtual());
}
