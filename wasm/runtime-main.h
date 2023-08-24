/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for
 * license information.
 */

#pragma once

#include "helpers.h"

class ANTLRErrorListenerHelper : public ANTLRErrorListener {
public:
  virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine,
                           const std::string &msg, const RecognitionException &e) override {
  }

  virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                               const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override {
  }

  virtual void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                           const BitSet &conflictingAlts, atn::ATNConfigSet *configs) override {
  }

  virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                        size_t prediction, atn::ATNConfigSet *configs) override {
  }
};

class ANTLRErrorListenerWrapper : public wrapper<ANTLRErrorListenerHelper> {
public:
  EMSCRIPTEN_WRAPPER(ANTLRErrorListenerWrapper);

  virtual ~ANTLRErrorListenerWrapper() noexcept override {
  }

  virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine,
                           const std::string &msg, const RecognitionException &e) override {
    call<void>("syntaxError", recognizer, offendingSymbol, line, charPositionInLine, msg, e);
  }

  /*
  virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool
exact, const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override { call<void>("reportAmbiguity",
recognizer, dfa, startIndex, stopIndex, exact, ambigAlts, configs);
}

virtual void
reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                            const BitSet &conflictingAlts, atn::ATNConfigSet *configs) override {
  call<void>("reportAttemptingFullContext", recognizer, dfa, startIndex, stopIndex, conflictingAlts, configs);
}

virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                      size_t prediction, atn::ATNConfigSet *configs) override {
  call<void>("reportContextSensitivity", recognizer, dfa, startIndex, stopIndex, prediction, configs);

}*/
};

class ANTLRErrorStrategyWrapper : public wrapper<ANTLRErrorStrategy> {
public:
  EMSCRIPTEN_WRAPPER(ANTLRErrorStrategyWrapper);

  virtual ~ANTLRErrorStrategyWrapper() noexcept override {
  }

  virtual void reset(Parser *recognizer) override {
    call<void>("reset", recognizer);
  }

  virtual Token *recoverInline(Parser *recognizer) override {
    return nullptr; // call<Token *>("recoverInline", recognizer);
  }

  virtual void recover(Parser *recognizer, std::exception_ptr e) override {
    call<void>("recover", recognizer, e);
  }

  virtual void recover(Parser *recognizer, RecognitionException *e) override {
    call<void>("recover", recognizer, e);
  }

  virtual void sync(Parser *recognizer) override {
    call<void>("sync", recognizer);
  }

  virtual bool inErrorRecoveryMode(Parser *recognizer) override {
    return call<bool>("inErrorRecoveryMode", recognizer);
  }

  virtual void reportMatch(Parser *recognizer) override {
    call<void>("reportMatch", recognizer);
  }

  virtual void reportError(Parser *recognizer, const RecognitionException &e) override {
    call<void>("reportError", recognizer, std::cref(e));
  }
};

class CharStreamWrapper : public wrapper<CharStream> {
public:
  EMSCRIPTEN_WRAPPER(CharStreamWrapper);

  virtual ~CharStreamWrapper() noexcept override {
  }

  virtual void consume() override {
    call<void>("consume");
  }

  virtual size_t LA(ssize_t i) override {
    return call<size_t>("LA", i);
  }

  virtual ssize_t mark() override {
    return call<ssize_t>("mark");
  }

  virtual void release(ssize_t marker) override {
    call<void>("release", marker);
  }

  virtual size_t index() override {
    return call<size_t>("index");
  }

  virtual void seek(size_t index) override {
    call<void>("seek", index);
  }

  virtual size_t size() override {
    return call<size_t>("size");
  }

  virtual std::string getSourceName() const override {
    return call<std::string>("getSourceName");
  }

  virtual std::string getText(const misc::Interval &interval) override {
    return call<std::string>("getText", interval);
  }

  virtual std::string toString() const override {
    return call<std::string>("toString");
  }
};

class CommonTokenStreamHelper : public CommonTokenStream {
public:
  /**
   * Need to provide a different API for the token source. Emscripten does not support multiple inheritance.
   * The `Lexer` class derives from `Recognizer` and `TokenSource`, but we can only specify one of them as
   * base class for the wrapper (and picked Recognizer). So we need to provide APIs that work with a lexer pointer
   * instead of a token source pointer.
   */

  CommonTokenStreamHelper(Lexer *tokenSource) : CommonTokenStream(tokenSource) {
  }

  CommonTokenStreamHelper(Lexer *tokenSource, size_t channel) : CommonTokenStream(tokenSource, channel) {
  }

  virtual void setLexerTokenSource(Lexer *tokenSource) {
    BufferedTokenStream::setTokenSource(tokenSource);
  }
};

class IntStreamWrapper : public wrapper<IntStream> {
public:
  EMSCRIPTEN_WRAPPER(IntStreamWrapper);

  virtual ~IntStreamWrapper() noexcept override {
  }

  virtual void consume() override {
    call<void>("consume");
  }

  virtual size_t LA(ssize_t i) override {
    return call<size_t>("LA", i);
  }

  virtual ssize_t mark() override {
    return call<ssize_t>("mark");
  }

  virtual void release(ssize_t marker) override {
    call<void>("release", marker);
  }

  virtual size_t index() override {
    return call<size_t>("index");
  }

  virtual void seek(size_t index) override {
    call<void>("seek", index);
  }

  virtual size_t size() override {
    return call<size_t>("size");
  }

  virtual std::string getSourceName() const override {
    return call<std::string>("getSourceName");
  }
};

class LexerHelper : public Lexer {
public:
  LexerHelper(CharStream *input) : Lexer(input) {
  }

  virtual ~LexerHelper() noexcept override {
  }

  // GETTER_UNIQUE_PTR(Token, token)

  virtual const std::vector<std::string> &getChannelNames() const override {
    return _empty;
  }

  virtual const std::vector<std::string> &getModeNames() const override {
    return _empty;
  }

  virtual const std::vector<std::string> &getRuleNames() const override {
    return _empty;
  }

  virtual const dfa::Vocabulary &getVocabulary() const override {
    return _vocabulary;
  }

  virtual std::string getGrammarFileName() const override {
    return "";
  }

  virtual const atn::ATN &getATN() const override {
    return _atn;
  }

  virtual size_t getLine() const override {
    return 0;
  }

  virtual size_t getCharPositionInLine() override {
    return 0;
  }

  virtual CharStream *getInputStream() override {
    return nullptr;
  }

  virtual std::string getSourceName() override {
    return "";
  }

private:
  atn::ATN _atn;
  dfa::Vocabulary _vocabulary;
  std::vector<std::string> _empty;
};

class LexerWrapper : public wrapper<LexerHelper> {
public:
  EMSCRIPTEN_WRAPPER(LexerWrapper);

  virtual ~LexerWrapper() noexcept override {
  }

  virtual const std::vector<std::string> &getChannelNames() const override {
    return call<const std::vector<std::string> &>("getChannelNames");
  }

  virtual const std::vector<std::string> &getModeNames() const override {
    return call<const std::vector<std::string> &>("getModeNames");
  }

  virtual std::vector<std::string> const &getRuleNames() const override {
    return call<std::vector<std::string> const &>("getRuleNames");
  }

  virtual dfa::Vocabulary const &getVocabulary() const override {
    return call<dfa::Vocabulary const &>("getVocabulary");
  }

  virtual std::string getGrammarFileName() const override {
    return call<std::string>("getGrammarFileName");
  }

  virtual const atn::ATN &getATN() const override {
    return call<const atn::ATN &>("getATN");
  }

  virtual std::unique_ptr<Token> nextToken() override {
    return call<std::unique_ptr<Token>>("nextToken");
  }

  virtual bool sempred(RuleContext *localctx, size_t ruleIndex, size_t actionIndex) override {
    return call<bool>("sempred", localctx, ruleIndex, actionIndex);
  }

  virtual bool precpred(RuleContext *localctx, int precedence) override {
    return call<bool>("precpred", localctx, precedence);
  }

  virtual void action(RuleContext *localctx, size_t ruleIndex, size_t actionIndex) override {
    call<void>("action", localctx, ruleIndex, actionIndex);
  }
};

class ParserHelper : public Parser {
public:
  ParserHelper(TokenStream *input) : Parser(input) {
  }

  virtual ~ParserHelper() noexcept override {
  }

  virtual std::vector<std::string> const &getRuleNames() const override {
    return _empty;
  }

  virtual dfa::Vocabulary const &getVocabulary() const override {
    return _vocabulary;
  }

  virtual std::string getGrammarFileName() const override {
    return "";
  }

  virtual const atn::ATN &getATN() const override {
    return _atn;
  }

  /**
   * Cannot pass a strategy instance allocated in JS to `setErrorHandler`, as that expects a shared pointer.
   */
  void setErrorHandlerRaw(ANTLRErrorStrategy *newHandler) {
    _errHandler = std::shared_ptr<ANTLRErrorStrategy>(newHandler);
  }

  ANTLRErrorStrategy *getErrorHandlerRaw() {
    return _errHandler.get();
  }

  TokenStream *input() {
    return _input;
  }

private:
  atn::ATN _atn;
  dfa::Vocabulary _vocabulary;
  std::vector<std::string> _empty;
};

class ParserWrapper : public wrapper<ParserHelper> {
public:
  EMSCRIPTEN_WRAPPER(ParserWrapper);

  virtual ~ParserWrapper() noexcept override {
  }

  virtual std::vector<std::string> const &getRuleNames() const override {
    return call<std::vector<std::string> const &>("getRuleNames");
  }

  virtual dfa::Vocabulary const &getVocabulary() const override {
    return call<dfa::Vocabulary const &>("getVocabulary");
  }

  virtual std::string getGrammarFileName() const override {
    return call<std::string>("getGrammarFileName");
  }

  virtual const atn::ATN &getATN() const override {
    return call<const atn::ATN &>("getATN");
  }
};

class ParserRuleContextHelper : public ParserRuleContext {
public:
  ParserRuleContextHelper() : ParserRuleContext() {
  }

  ParserRuleContextHelper(ParserRuleContext *parent, size_t invokingStateNumber)
    : ParserRuleContext(parent, invokingStateNumber) {
  }

  GETTER(std::vector<tree::ParseTree *>, children)
  GETTER(tree::ParseTree *, parent)

  std::exception_ptr captureException() {
    exception = std::current_exception();

    return exception;
  }
};

class ParserRuleContextWrapper : public wrapper<ParserRuleContextHelper> {
public:
  EMSCRIPTEN_WRAPPER(ParserRuleContextWrapper);

  virtual ~ParserRuleContextWrapper() noexcept override {
  }

  virtual size_t getRuleIndex() const override {
    return call<size_t>("getRuleIndex");
  }
};

class RecognizerHelper : public Recognizer {
public:
  virtual std::vector<std::string> const &getRuleNames() const override {
    return _empty;
  }

  virtual dfa::Vocabulary const &getVocabulary() const override {
    return _vocabulary;
  }

  virtual std::string getGrammarFileName() const override {
    return "";
  }

  virtual const atn::ATN &getATN() const override {
    return _atn;
  }

  virtual IntStream *getInputStream() override {
    return nullptr;
  }

  virtual void setInputStream(IntStream *input) override {
  }

  virtual TokenFactory<CommonToken> *getTokenFactory() override {
    return nullptr;
  }

private:
  std::vector<std::string> _empty;
  dfa::Vocabulary _vocabulary;
  atn::ATN _atn;
};

class RecognizerWrapper : public wrapper<RecognizerHelper> {
public:
  EMSCRIPTEN_WRAPPER(RecognizerWrapper);

  virtual ~RecognizerWrapper() noexcept override {
  }

  virtual std::vector<std::string> const &getRuleNames() const override {
    return call<std::vector<std::string> const &>("getRuleNames");
  }

  virtual dfa::Vocabulary const &getVocabulary() const override {
    return call<dfa::Vocabulary const &>("getVocabulary");
  }

  virtual std::string getGrammarFileName() const override {
    return call<std::string>("getGrammarFileName");
  }

  virtual const atn::ATN &getATN() const override {
    return call<const atn::ATN &>("getATN");
  }

  virtual IntStream *getInputStream() override {
    return nullptr; // call<IntStream *>("getInputStream");
  }

  virtual void setInputStream(IntStream *input) override {
    call<void>("setInputStream", input);
  }

  virtual atn::SerializedATNView getSerializedATN() const override {
    return call<atn::SerializedATNView>("getSerializedATN");
  }

  virtual bool sempred(RuleContext *localctx, size_t ruleIndex, size_t actionIndex) override {
    return call<bool>("sempred", localctx, ruleIndex, actionIndex);
  }

  virtual bool precpred(RuleContext *localctx, int precedence) override {
    return call<bool>("precpred", localctx, precedence);
  }

  virtual void action(RuleContext *localctx, size_t ruleIndex, size_t actionIndex) override {
    call<void>("action", localctx, ruleIndex, actionIndex);
  }
};

class RuleContextHelper : public RuleContext {
public:
  RuleContextHelper() : RuleContext() {
  }

  RuleContextHelper(RuleContext *parent, size_t invokingState) : RuleContext(parent, invokingState) {
  }

  GETTER(std::vector<tree::ParseTree *>, children)
  GETTER(tree::ParseTree *, parent)
};

class RuleContextWrapper : public wrapper<RuleContextHelper> {
public:
  EMSCRIPTEN_WRAPPER(RuleContextWrapper);

  virtual ~RuleContextWrapper() noexcept override {
  }

  virtual size_t getRuleIndex() const override {
    return call<size_t>("getRuleIndex");
  }
};

class TokenFactoryWrapper : public wrapper<TokenFactory<CommonToken>> {
public:
  EMSCRIPTEN_WRAPPER(TokenFactoryWrapper);

  virtual ~TokenFactoryWrapper() noexcept override {
  }

  virtual std::unique_ptr<CommonToken> create(std::pair<TokenSource *, CharStream *> source, size_t type,
                                              std::string const &text, size_t channel, size_t start, size_t stop,
                                              size_t line, size_t charPositionInLine) override {
    return call<std::unique_ptr<CommonToken>>("create", source, type, text, channel, start, stop, line,
                                              charPositionInLine);
  }

  virtual std::unique_ptr<CommonToken> create(size_t type, std::string const &text) override {
    return call<std::unique_ptr<CommonToken>>("create", type, text);
  }
};

class TokenSourceWrapper : public wrapper<TokenSource> {
public:
  EMSCRIPTEN_WRAPPER(TokenSourceWrapper);

  virtual ~TokenSourceWrapper() noexcept override {
  }

  virtual std::unique_ptr<Token> nextToken() override {
    return call<std::unique_ptr<Token>>("nextToken");
  }

  virtual size_t getLine() const override {
    return call<size_t>("getLine");
  }

  virtual size_t getCharPositionInLine() override {
    return call<size_t>("getCharPositionInLine");
  }

  virtual CharStream *getInputStream() override {
    return nullptr; // call<CharStream *>("getInputStream");
  }

  virtual std::string getSourceName() override {
    return call<std::string>("getSourceName");
  }
};

class TokenStreamWrapper : public wrapper<TokenStream> {
public:
  EMSCRIPTEN_WRAPPER(TokenStreamWrapper);

  virtual ~TokenStreamWrapper() noexcept override {
  }

  virtual Token *LT(ssize_t k) override {
    return nullptr; // call<Token *>("LT", k);
  }

  virtual Token *get(size_t index) const override {
    return nullptr; // call<Token *>("get", index);
  }

  virtual TokenSource *getTokenSource() const override {
    return nullptr; // call<TokenSource *>("getTokenSource");
  }

  virtual std::string getText(const misc::Interval &interval) override {
    return call<std::string>("getText", interval);
  }

  virtual std::string getText() override {
    return call<std::string>("getText");
  }

  virtual std::string getText(RuleContext *ctx) override {
    return call<std::string>("getText", ctx);
  }

  virtual std::string getText(Token *start, Token *stop) override {
    return call<std::string>("getText", start, stop);
  }

  virtual void consume() override {
    call<void>("consume");
  }

  virtual size_t LA(ssize_t i) override {
    return call<size_t>("LA", i);
  }

  virtual ssize_t mark() override {
    return call<ssize_t>("mark");
  }

  virtual void release(ssize_t marker) override {
    call<void>("release", marker);
  }

  virtual size_t index() override {
    return call<size_t>("index");
  }

  virtual void seek(size_t index) override {
    call<void>("seek", index);
  }

  virtual size_t size() override {
    return call<size_t>("size");
  }

  virtual std::string getSourceName() const override {
    return call<std::string>("getSourceName");
  }
};

class TokenWrapper : public wrapper<Token> {
public:
  EMSCRIPTEN_WRAPPER(TokenWrapper);

  virtual ~TokenWrapper() noexcept override {
    Token::~Token();
  }

  virtual std::string getText() const override {
    return call<std::string>("getText");
  }

  virtual size_t getType() const override {
    return call<size_t>("getType");
  }

  virtual size_t getLine() const override {
    return call<size_t>("getLine");
  }

  virtual size_t getCharPositionInLine() const override {
    return call<size_t>("getCharPositionInLine");
  }

  virtual size_t getChannel() const override {
    return call<size_t>("getChannel");
  }

  virtual size_t getTokenIndex() const override {
    return call<size_t>("getTokenIndex");
  }

  virtual size_t getStartIndex() const override {
    return call<size_t>("getStartIndex");
  }

  virtual size_t getStopIndex() const override {
    return call<size_t>("getStopIndex");
  }

  virtual TokenSource *getTokenSource() const override {
    return nullptr; // call<TokenSource *>("getTokenSource");
  };

  virtual CharStream *getInputStream() const override {
    return nullptr; // call<CharStream *>("getInputStream");
  };

  virtual std::string toString() const override {
    return call<std::string>("toString");
  }
};

class WritableTokenWrapper : public wrapper<WritableToken> {
public:
  EMSCRIPTEN_WRAPPER(WritableTokenWrapper);

  virtual ~WritableTokenWrapper() noexcept override {
  }

  virtual void setText(std::string const &text) override {
    call<void>("setText", text);
  }

  virtual void setType(size_t ttype) override {
    call<void>("setType", ttype);
  }

  virtual void setLine(size_t line) override {
    call<void>("setLine", line);
  }

  virtual void setCharPositionInLine(size_t pos) override {
    call<void>("setCharPositionInLine", pos);
  }

  virtual void setChannel(size_t channel) override {
    call<void>("setChannel", channel);
  }

  virtual void setTokenIndex(size_t index) override {
    call<void>("setTokenIndex", index);
  }
};

EMSCRIPTEN_BINDINGS(main1) {
  // Exception support.
  class_<std::exception>("std::exception")
    //
    .function("what", &std::exception::what, allow_raw_pointers());
  class_<std::exception_ptr>("std::exception_ptr");

  constant("ANTLRCPP_VERSION_MAJOR", ANTLRCPP_VERSION_MAJOR);
  constant("ANTLRCPP_VERSION_MINOR", ANTLRCPP_VERSION_MINOR);
  constant("ANTLRCPP_VERSION_PATCH", ANTLRCPP_VERSION_PATCH);
  constant("ANTLRCPP_VERSION", ANTLRCPP_VERSION);

  class_<ANTLRErrorListener>("ANTLRErrorListener$Internal");

  class_<ANTLRErrorListenerHelper, base<ANTLRErrorListener>>("ANTLRErrorListener")
    .function(
      "syntaxError",
      optional_override([](ANTLRErrorListenerHelper &self, Recognizer *recognizer, Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg, const RecognitionException &e) {
        return self.ANTLRErrorListenerHelper::syntaxError(recognizer, offendingSymbol, line, charPositionInLine, msg,
                                                          e);
      }),
      allow_raw_pointers())
    /*.function("reportAmbiguity", &ANTLRErrorListener::reportAmbiguity, pure_virtual(), allow_raw_pointers())
    .function("reportAttemptingFullContext", &ANTLRErrorListener::reportAttemptingFullContext, pure_virtual(),
              allow_raw_pointers())*/
    .allow_subclass<ANTLRErrorListenerWrapper>("ANTLRErrorListenerWrapper");

  class_<ANTLRErrorStrategy>("ANTLRErrorStrategy")
    .smart_ptr<Ref<ANTLRErrorStrategy>>("ANTLRErrorStrategyRef")

    .function("reset", &ANTLRErrorStrategy::reset, pure_virtual(), allow_raw_pointers())
    .function("recoverInline", &ANTLRErrorStrategy::recoverInline, pure_virtual(), allow_raw_pointers(),
              allow_raw_pointer<Token *>())
    .function("recover", select_overload<void(Parser *, RecognitionException *)>(&ANTLRErrorStrategy::recover),
              pure_virtual(), allow_raw_pointers())
    .function("sync", &ANTLRErrorStrategy::sync, pure_virtual(), allow_raw_pointers())
    .function("inErrorRecoveryMode", &ANTLRErrorStrategy::inErrorRecoveryMode, pure_virtual(), allow_raw_pointers())
    .function("reportMatch", &ANTLRErrorStrategy::reportMatch, pure_virtual(), allow_raw_pointers())
    .function("reportError", &ANTLRErrorStrategy::reportError, pure_virtual(), allow_raw_pointers())
    .allow_subclass<ANTLRErrorStrategyWrapper>("ANTLRErrorStrategyWrapper");

  class_<ANTLRFileStream, base<ANTLRInputStream>>("ANTLRFileStream")
    .constructor<>()
    .function("loadFromFile", &ANTLRFileStream::loadFromFile)
    .function("getSourceName", &ANTLRFileStream::getSourceName);

  class_<ANTLRInputStream, base<CharStream>>("ANTLRInputStream")
    .property("name", &ANTLRInputStream::name)

    .constructor<>()

    .function("load", select_overload<void(const std::string &, bool)>(&ANTLRInputStream::load))
    .function("load", select_overload<void(const char *, size_t, bool)>(&ANTLRInputStream::load), allow_raw_pointers())
    .function("load", select_overload<void(const std::string &)>(&ANTLRInputStream::load))
    .function("load", select_overload<void(const char *, size_t)>(&ANTLRInputStream::load), allow_raw_pointers())
    .function("reset", &ANTLRInputStream::reset)
    .function("consume", &ANTLRInputStream::consume)
    .function("LA", &ANTLRInputStream::LA)
    .function("LT", &ANTLRInputStream::LT)
    .function("index", &ANTLRInputStream::index)
    .function("size", &ANTLRInputStream::size)
    .function("mark", &ANTLRInputStream::mark)
    .function("release", &ANTLRInputStream::release)
    .function("seek", &ANTLRInputStream::seek)
    .function("getText", &ANTLRInputStream::getText)
    .function("getSourceName", &ANTLRInputStream::getSourceName)
    .function("toString", &ANTLRInputStream::toString);

  class_<BailErrorStrategy, base<DefaultErrorStrategy>>("BailErrorStrategy")
    .constructor<>()

    .function("recover", select_overload<void(Parser *, RecognitionException *)>(&BailErrorStrategy::recover),
              allow_raw_pointers())

    .function("recoverInline", &BailErrorStrategy::recoverInline, allow_raw_pointers(), allow_raw_pointer<Token *>())
    .function("sync", &BailErrorStrategy::sync, allow_raw_pointers());

  class_<BaseErrorListener, base<ANTLRErrorListener>>("BaseErrorListener")
    .function("syntaxError", &BaseErrorListener::syntaxError, allow_raw_pointers())
    .function("reportAmbiguity", &BaseErrorListener::reportAmbiguity, allow_raw_pointers())
    .function("reportAttemptingFullContext", &BaseErrorListener::reportAttemptingFullContext, allow_raw_pointers())
    .function("reportContextSensitivity", &BaseErrorListener::reportContextSensitivity, allow_raw_pointers());

  class_<BufferedTokenStream, base<TokenStream>>("BufferedTokenStream")
    .constructor<Lexer *>()

    .function("getTokenSource", &BufferedTokenStream::getTokenSource, allow_raw_pointers())
    .function("setTokenSource", &BufferedTokenStream::setTokenSource, allow_raw_pointers())

    .function("index", &BufferedTokenStream::index)
    .function("mark", &BufferedTokenStream::mark)
    .function("release", &BufferedTokenStream::release)
    .function("reset", &BufferedTokenStream::reset)
    .function("seek", &BufferedTokenStream::seek)
    .function("size", &BufferedTokenStream::size)
    .function("consume", &BufferedTokenStream::consume)
    .function("get", select_overload<Token *(size_t i) const>(&BufferedTokenStream::get), allow_raw_pointers())
    .function("get", select_overload<std::vector<Token *>(size_t i, size_t j)>(&BufferedTokenStream::get),
              allow_raw_pointers())
    .function("LA", &BufferedTokenStream::LA, allow_raw_pointers())
    .function("LT", &BufferedTokenStream::LT, allow_raw_pointers())
    .function("getTokens", select_overload<std::vector<Token *>()>(&BufferedTokenStream::getTokens))
    .function("getTokens", select_overload<std::vector<Token *>(size_t, size_t)>(&BufferedTokenStream::getTokens))
    .function("getTokens", select_overload<std::vector<Token *>(size_t, size_t, const std::vector<size_t> &)>(
                             &BufferedTokenStream::getTokens))
    /*.function("getTokens",
              select_overload<std::vector<Token *>(size_t, size_t, size_t)>(&BufferedTokenStream::getTokens),
              allow_raw_pointers())*/
    .function("getHiddenTokensToRight",
              select_overload<std::vector<Token *>(size_t, ssize_t)>(&BufferedTokenStream::getHiddenTokensToRight),
              allow_raw_pointers())
    .function("getHiddenTokensToRight",
              select_overload<std::vector<Token *>(size_t)>(&BufferedTokenStream::getHiddenTokensToRight),
              allow_raw_pointers())
    .function("getHiddenTokensToLeft",
              select_overload<std::vector<Token *>(size_t, ssize_t)>(&BufferedTokenStream::getHiddenTokensToLeft),
              allow_raw_pointers())
    .function("getHiddenTokensToLeft",
              select_overload<std::vector<Token *>(size_t)>(&BufferedTokenStream::getHiddenTokensToLeft),
              allow_raw_pointers())
    .function("getSourceName", &BufferedTokenStream::getSourceName)
    .function("getText", select_overload<std::string()>(&BufferedTokenStream::getText))
    .function("getText", select_overload<std::string(const misc::Interval &)>(&BufferedTokenStream::getText))
    .function("getText", select_overload<std::string(RuleContext *)>(&BufferedTokenStream::getText),
              allow_raw_pointers())
    .function("getText", select_overload<std::string(Token *, Token *)>(&BufferedTokenStream::getText),
              allow_raw_pointers())
    .function("fill", &BufferedTokenStream::fill);

  class_<CancellationException, base<IllegalStateException>>("CancellationException")
    //
    .constructor<std::string>();
}

EMSCRIPTEN_BINDINGS(main2) {
  class_<CharStream, base<IntStream>>("CharStream")
    .function("getText", &CharStream::getText, pure_virtual())
    .function("toString", &CharStream::toString, pure_virtual())
    .function("getSourceName", &CharStream::getSourceName)
    .allow_subclass<CharStreamWrapper>("CharStreamWrapper");

  class_<CommonToken, base<WritableToken>>("CommonToken")
    .constructor<size_t>()
    .constructor<std::pair<TokenSource *, CharStream *>, size_t, size_t, size_t, size_t>()
    .constructor<size_t, std::string>()
    //.constructor<Token *>() Constructor overloads with the same number of
    // arguments are not supported currently.

    .function("getType", &CommonToken::getType)
    .function("setText", &CommonToken::setText)
    .function("getText", &CommonToken::getText)
    .function("setLine", &CommonToken::setLine)
    .function("getLine", &CommonToken::getLine)
    .function("getCharPositionInLine", &CommonToken::getCharPositionInLine)
    .function("setCharPositionInLine", &CommonToken::setCharPositionInLine)
    .function("getChannel", &CommonToken::getChannel)
    .function("setChannel", &CommonToken::setChannel)
    .function("setType", &CommonToken::setType)
    .function("getStartIndex", &CommonToken::getStartIndex)
    .function("setStartIndex", &CommonToken::setStartIndex)
    .function("getStopIndex", &CommonToken::getStopIndex)
    .function("setStopIndex", &CommonToken::setStopIndex)
    .function("getTokenIndex", &CommonToken::getTokenIndex)
    .function("setTokenIndex", &CommonToken::setTokenIndex)
    .function("getTokenSource", &CommonToken::getTokenSource, allow_raw_pointers())
    .function("getInputStream", &CommonToken::getInputStream, allow_raw_pointers())
    .function("toString", select_overload<std::string() const>(&CommonToken::toString))
    .function("toString", select_overload<std::string(Recognizer *) const>(&CommonToken::toString),
              allow_raw_pointers());

  class_<CommonTokenFactory>("CommonTokenFactory")
    .constructor<>()
    .constructor<bool>()

    // Gives error: call to implicitly-deleted copy constructor of 'std::unique_ptr<TokenFactory<CommonToken>>'
    // .class_property("DEFAULT", &CommonTokenFactory::DEFAULT)

    .function(
      "create",
      select_overload<std::unique_ptr<CommonToken>(std::pair<TokenSource *, CharStream *>, size_t, const std::string &,
                                                   size_t, size_t, size_t, size_t, size_t)>(
        &CommonTokenFactory::create))
    .function("create", select_overload<std::unique_ptr<CommonToken>(size_t type, const std::string &text)>(
                          &CommonTokenFactory::create));

  class_<CommonTokenStream, base<BufferedTokenStream>>("CommonTokenStream$Internal");

  class_<CommonTokenStreamHelper, base<BufferedTokenStream>>("CommonTokenStream")
    // The library code expects a TokenSource* here, but we can't pass a Lexer* in JS, because it uses multiple
    // inheritance, which we cannot model in emscripten.
    .constructor<Lexer *>()
    .constructor<Lexer *, size_t>()

    .function("setTokenSource", &CommonTokenStreamHelper::setLexerTokenSource, allow_raw_pointers())

    .function("LT", &CommonTokenStream::LT, allow_raw_pointers())
    .function("getNumberOfOnChannelTokens", &CommonTokenStream::getNumberOfOnChannelTokens);

  class_<ConsoleErrorListener, base<BaseErrorListener>>("ConsoleErrorListener")
    .class_property("INSTANCE", &ConsoleErrorListener::INSTANCE)

    .constructor<>()

    .function("syntaxError", &ConsoleErrorListener::syntaxError, allow_raw_pointers());

  class_<DefaultErrorStrategy, base<ANTLRErrorStrategy>>("DefaultErrorStrategy")
    .constructor<>()

    .function("reset", &DefaultErrorStrategy::reset, allow_raw_pointers())
    .function("inErrorRecoveryMode", &DefaultErrorStrategy::inErrorRecoveryMode, allow_raw_pointers())
    .function("reportMatch", &DefaultErrorStrategy::reportMatch, allow_raw_pointers())
    .function("reportError", &DefaultErrorStrategy::reportError, allow_raw_pointers())

    .function("recover", select_overload<void(Parser *, RecognitionException *)>(&DefaultErrorStrategy::recover),
              allow_raw_pointers())

    .function("sync", &DefaultErrorStrategy::sync, allow_raw_pointers())
    .function("recoverInline", &DefaultErrorStrategy::recoverInline, allow_raw_pointers());

  class_<DiagnosticErrorListener, base<BaseErrorListener>>("DiagnosticErrorListener")
    .constructor<>()
    .constructor<bool>()

    .function("reportAmbiguity", &DiagnosticErrorListener::reportAmbiguity, allow_raw_pointers())
    .function("reportAttemptingFullContext", &DiagnosticErrorListener::reportAttemptingFullContext,
              allow_raw_pointers())
    .function("reportContextSensitivity", &DiagnosticErrorListener::reportContextSensitivity, allow_raw_pointers());

  class_<EmptyStackException, base<RuntimeException>>("EmptyStackException")
    //
    .constructor<std::string>();

  class_<FailedPredicateException, base<RecognitionException>>("FailedPredicateException")
    .constructor<Parser *>()
    .constructor<Parser *, const std::string &>()
    .constructor<Parser *, const std::string &, const std::string &>()

    .function("getRuleIndex", &FailedPredicateException::getRuleIndex)
    .function("getPredicateIndex", &FailedPredicateException::getPredIndex)
    .function("getPredicate", &FailedPredicateException::getPredicate);

  class_<IllegalArgumentException, base<RuntimeException>>("IllegalArgumentException")
    //
    .constructor<std::string>();

  class_<IllegalStateException, base<RuntimeException>>("IllegalStateException")
    //
    .constructor<std::string>();

  class_<IndexOutOfBoundsException, base<RuntimeException>>("IndexOutOfBoundsException")
    //
    .constructor<std::string>();

  class_<InputMismatchException, base<RecognitionException>>("InputMismatchException")
    //
    .constructor<Parser *>();
  ;

  class_<IOException, base<std::exception>>("IOException")
    .constructor<std::string>()

    .function("what", &IOException::what, allow_raw_pointers());

  class_<InterpreterRuleContext, base<ParserRuleContext>>("InterpreterRuleContext")
    .constructor<>()
    .constructor<ParserRuleContext *, size_t, size_t>()

    .function("getRuleIndex", &InterpreterRuleContext::getRuleIndex);
}

EMSCRIPTEN_BINDINGS(main3) {
  class_<IntStream>("IntStream")
    .class_property("EOF", &IntStream::EOF)
    .class_property("UNKNOWN_SOURCE_NAME", &IntStream::UNKNOWN_SOURCE_NAME)

    .function("consume", &IntStream::consume, pure_virtual())
    .function("LA", &IntStream::LA, pure_virtual(), allow_raw_pointers())
    .function("mark", &IntStream::mark, pure_virtual())
    .function("release", &IntStream::release, pure_virtual())
    .function("index", &IntStream::index, pure_virtual())
    .function("seek", &IntStream::seek, pure_virtual())
    .function("size", &IntStream::size, pure_virtual())
    .function("getSourceName", &IntStream::getSourceName, pure_virtual())
    .allow_subclass<IntStreamWrapper>("IntStreamWrapper");

  class_<Lexer, base<Recognizer>>("Lexer$Internal")
    .property("tokenStartCharIndex", &Lexer::tokenStartCharIndex)
    .property("tokenStartLine", &Lexer::tokenStartLine)
    .property("tokenStartCharPositionInLine", &Lexer::tokenStartCharPositionInLine)
    .property("hitEOF", &Lexer::hitEOF)
    .property("channel", &Lexer::channel)
    .property("type", &Lexer::type)
    .property("modeStack", &Lexer::modeStack)
    .property("mode", &Lexer::mode);

  class_<LexerHelper, base<Lexer>>("Lexer")
    .class_property("DEFAULT_MODE", &Lexer::DEFAULT_MODE)
    .class_property("MORE", &Lexer::MORE)
    .class_property("SKIP", &Lexer::SKIP)
    .class_property("DEFAULT_TOKEN_CHANNEL", &Lexer::DEFAULT_TOKEN_CHANNEL)
    .class_property("HIDDEN", &Lexer::HIDDEN)
    .class_property("MIN_CHAR_VALUE", &Lexer::MIN_CHAR_VALUE)
    .class_property("MAX_CHAR_VALUE", &Lexer::MAX_CHAR_VALUE)

    .constructor<CharStream *>()

    .function("reset", &Lexer::reset)
    .function("nextToken", optional_override([](LexerHelper &self) { return self.LexerHelper::nextToken(); }))

    .function("skip", &Lexer::skip)
    .function("more", &Lexer::more)
    .function("setMode", &Lexer::setMode)
    .function("pushMode", &Lexer::pushMode)
    .function("popMode", &Lexer::popMode)

    .function("getTokenFactory", &Lexer::getTokenFactory, allow_raw_pointers())

    .function("setInputStream", &Lexer::setInputStream, allow_raw_pointers())
    .function("getSourceName", &Lexer::getSourceName)
    .function("getInputStream", &Lexer::getInputStream, allow_raw_pointers())
    .function("getLine", &Lexer::getLine)
    .function("getCharPositionInLine", &Lexer::getCharPositionInLine)
    .function("setLine", &Lexer::setLine)
    .function("setCharPositionInLine", &Lexer::setCharPositionInLine)
    .function("getCharIndex", &Lexer::getCharIndex)
    .function("getText", &Lexer::getText)
    .function("setText", &Lexer::setText)
    .function("setType", &Lexer::setType)
    .function("getType", &Lexer::getType)
    .function("setChannel", &Lexer::setChannel)
    .function("getChannel", &Lexer::getChannel)

    .function("getChannelNames",
              optional_override([](LexerHelper &self) { return self.LexerHelper::getChannelNames(); }))
    .function("getModeNames", optional_override([](LexerHelper &self) { return self.LexerHelper::getModeNames(); }))
    .function("getRuleNames", optional_override([](LexerHelper &self) { return self.LexerHelper::getRuleNames(); }))
    .function("getVocabulary", optional_override([](LexerHelper &self) { return self.LexerHelper::getVocabulary(); }))
    .function("getGrammarFileName",
              optional_override([](LexerHelper &self) { return self.LexerHelper::getGrammarFileName(); }))
    .function("getATN", optional_override([](LexerHelper &self) { return std::cref(self.LexerHelper::getATN()); }))

    .function("sempred",
              optional_override([](LexerHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
                return self.LexerHelper::sempred(localctx, ruleIndex, actionIndex);
              }),
              allow_raw_pointers())
    .function("precpred", optional_override([](LexerHelper &self, RuleContext *localctx, int precedence) {
                return self.LexerHelper::precpred(localctx, precedence);
              }),
              allow_raw_pointers())
    .function("action",
              optional_override([](LexerHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
                self.LexerHelper::action(localctx, ruleIndex, actionIndex);
              }),
              allow_raw_pointers())

    .function("getErrorDisplay", &Lexer::getErrorDisplay)
    .function("getNumberOfSyntaxErrors", &Lexer::getNumberOfSyntaxErrors)

    .function("createToken", &Lexer::createToken, allow_raw_pointers())

    .allow_subclass<LexerWrapper>("LexerWrapper", constructor<CharStream *>());

  class_<LexerInterpreter, base<Lexer>>("LexerInterpreter")
    .constructor<const std::string &, const dfa::Vocabulary &, const std::vector<std::string> &,
                 const std::vector<std::string> &, const std::vector<std::string> &, const atn::ATN &, CharStream *>()

    //.function("getATN", &LexerInterpreter::getATN)
    .function("getGrammarFileName", &LexerInterpreter::getGrammarFileName)
    .function("getRuleNames", &LexerInterpreter::getRuleNames)
    .function("getChannelNames", &LexerInterpreter::getChannelNames)
    .function("getModeNames", &LexerInterpreter::getModeNames)
    .function("getVocabulary", &LexerInterpreter::getVocabulary);

  class_<LexerNoViableAltException, base<RecognitionException>>("LexerNoViableAltException")
    .constructor<Lexer *, CharStream *, size_t, atn::ATNConfigSet *>()

    .function("getStartIndex", &LexerNoViableAltException::getStartIndex)
    .function("getDeadEndConfigs", &LexerNoViableAltException::getDeadEndConfigs, allow_raw_pointers())
    .function("toString", &LexerNoViableAltException::toString);

  class_<ListTokenSource, base<TokenSource>>("ListTokenSource")
    //.constructor<std::vector<std::unique_ptr<Token>>>()
    //.constructor<std::vector<std::unique_ptr<Token>>, const std::string &>()

    .function("getCharPositionInLine", &ListTokenSource::getCharPositionInLine)
    .function("nextToken", &ListTokenSource::nextToken)
    .function("getLine", &ListTokenSource::getLine)
    .function("getInputStream", &ListTokenSource::getInputStream, allow_raw_pointers())
    .function("getSourceName", &ListTokenSource::getSourceName);

  class_<NoViableAltException, base<RecognitionException>>("NoViableAltException")
    .constructor<Parser *>()
    .constructor<Parser *, TokenStream *, Token *, Token *, atn::ATNConfigSet *, ParserRuleContext *, bool>()

    .function("getStartToken", &NoViableAltException::getStartToken, allow_raw_pointers())
    .function("getDeadEndConfigs", &NoViableAltException::getDeadEndConfigs, allow_raw_pointers());

  class_<NullPointerException, base<RuntimeException>>("NullPointerException")
    //
    .constructor<std::string>();

  class_<ParseCancellationException, base<CancellationException>>("ParseCancellationException")
    //
    .constructor<std::string>();
}

EMSCRIPTEN_BINDINGS(main4) {
  class_<Parser, base<Recognizer>>("Parser$Internal");

  class_<ParserHelper, base<Parser>>("Parser")
    .constructor<TokenStream *>()

    // Pure virtual methods from Recognizer.
    .function("getRuleNames", select_overload<const std::vector<std::string> &() const>(&Parser::getRuleNames))
    .function("getVocabulary", select_overload<const dfa::Vocabulary &() const>(&Parser::getVocabulary))
    .function("getGrammarFileName", select_overload<std::string() const>(&Parser::getGrammarFileName))
    //.function("getATN", &Parser::getATN, select_overload<const atn::ATN &() const>(&Parser::getATN))

    .function("input", &ParserHelper::input, allow_raw_pointers())

    .function("reset", &Parser::reset)
    .function("match", &Parser::match, allow_raw_pointers())
    .function("matchWildcard", &Parser::matchWildcard, allow_raw_pointers())
    .function("setBuildParseTree", &Parser::setBuildParseTree)
    .function("getBuildParseTree", &Parser::getBuildParseTree)
    .function("setTrimParseTree", &Parser::setTrimParseTree)
    .function("getTrimParseTree", &Parser::getTrimParseTree)
    .function("getParseListeners", &Parser::getParseListeners, allow_raw_pointers())
    .function("addParseListener", &Parser::addParseListener, allow_raw_pointers())
    .function("removeParseListener", &Parser::removeParseListener, allow_raw_pointers())
    .function("removeParseListeners", &Parser::removeParseListeners)
    .function("triggerEnterRuleEvent", &Parser::triggerEnterRuleEvent)
    .function("triggerExitRuleEvent", &Parser::triggerExitRuleEvent)
    .function("getNumberOfSyntaxErrors", &Parser::getNumberOfSyntaxErrors)
    //.function("getATNWithBypassAlts", &Parser::getATNWithBypassAlts)
    .function(
      "compileParseTreePattern",
      select_overload<tree::pattern::ParseTreePattern(const std::string &, int)>(&Parser::compileParseTreePattern),
      allow_raw_pointers())
    .function("compileParseTreePattern",
              select_overload<tree::pattern::ParseTreePattern(const std::string &, int, Lexer *)>(
                &Parser::compileParseTreePattern),
              allow_raw_pointers())
    .function("getErrorHandler", &ParserHelper::getErrorHandlerRaw, allow_raw_pointers())
    .function("setErrorHandler", &ParserHelper::setErrorHandlerRaw, allow_raw_pointers())
    .function("getInputStream", &Parser::getInputStream, allow_raw_pointers())
    .function("setInputStream", &Parser::setInputStream, allow_raw_pointers())
    .function("getTokenStream", &Parser::getTokenStream, allow_raw_pointers())
    .function("setTokenStream", &Parser::setTokenStream, allow_raw_pointers())
    .function("getCurrentToken", &Parser::getCurrentToken, allow_raw_pointers())
    .function("notifyErrorListeners", select_overload<void(const std::string &)>(&Parser::notifyErrorListeners))
    .function(
      "notifyErrorListeners",
      select_overload<void(Token *, const std::string &, const RecognitionException *)>(&Parser::notifyErrorListeners),
      allow_raw_pointers())
    .function("consume", &Parser::consume, allow_raw_pointers())
    .function("enterRule", &Parser::enterRule, allow_raw_pointers())
    .function("exitRule", &Parser::exitRule)
    .function("enterOuterAlt", &Parser::enterOuterAlt, allow_raw_pointers())
    .function("getPrecedence", &Parser::getPrecedence)
    /*.function("enterRecursionRule", select_overload<void(ParserRuleContext *, size_t)>(&Parser::enterRecursionRule),
              allow_raw_pointers())*/
    .function("enterRecursionRule",
              select_overload<void(ParserRuleContext *, size_t, size_t, int)>(&Parser::enterRecursionRule),
              allow_raw_pointers())
    .function("pushNewRecursionContext", &Parser::pushNewRecursionContext, allow_raw_pointers())
    .function("unrollRecursionContexts", &Parser::unrollRecursionContexts, allow_raw_pointers())
    .function("getInvokingContext", &Parser::getInvokingContext, allow_raw_pointers())
    .function("getContext", &Parser::getContext, allow_raw_pointers())
    .function("setContext", &Parser::setContext, allow_raw_pointers())

    .function("sempred",
              optional_override([](ParserHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
                return self.ParserHelper::sempred(localctx, ruleIndex, actionIndex);
              }),
              allow_raw_pointers())
    .function("precpred", optional_override([](ParserHelper &self, RuleContext *localctx, int precedence) {
                return self.ParserHelper::precpred(localctx, precedence);
              }),
              allow_raw_pointers())
    .function("action",
              optional_override([](ParserHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
                self.ParserHelper::action(localctx, ruleIndex, actionIndex);
              }),
              allow_raw_pointers())

    .function("inContext", &Parser::inContext)
    .function("isExpectedToken", &Parser::isExpectedToken)
    .function("isMatchedEOF", &Parser::isMatchedEOF)
    .function("getExpectedTokens", &Parser::getExpectedTokens)
    .function("getExpectedTokensWithinCurrentRule", &Parser::getExpectedTokensWithinCurrentRule)
    .function("getRuleIndexMap", &Parser::getRuleIndexMap)
    .function("getRuleContext", &Parser::getRuleContext, allow_raw_pointers())
    .function("getRuleInvocationStack", select_overload<std::vector<std::string>()>(&Parser::getRuleInvocationStack),
              allow_raw_pointers())
    .function("getRuleInvocationStack",
              select_overload<std::vector<std::string>(RuleContext *)>(&Parser::getRuleInvocationStack),
              allow_raw_pointers())
    .function("getDFAStrings", &Parser::getDFAStrings)
    .function("dumpDFA", &Parser::dumpDFA)
    .function("getSourceName", &Parser::getSourceName)
    .function("getParseInfo", &Parser::getParseInfo)
    .function("setProfile", &Parser::setProfile)
    .function("setTrace", &Parser::setTrace)
    .function("isTrace", &Parser::isTrace)
    .function("getTreeTracker", &Parser::getTreeTracker)
    .function("createTerminalNode", &Parser::createTerminalNode, allow_raw_pointers())
    .function("createErrorNode", &Parser::createErrorNode, allow_raw_pointers())
    .allow_subclass<ParserWrapper>("ParserWrapper", constructor<TokenStream *>());

  class_<ParserInterpreter, base<Parser>>("ParserInterpreter")
    .constructor<const std::string &, const dfa::Vocabulary &, const std::vector<std::string> &, const atn::ATN &,
                 TokenStream *>()

    .function("reset", &ParserInterpreter::reset)
    // .function("getATN", &ParserInterpreter::getATN)
    .function("getVocabulary", &ParserInterpreter::getVocabulary)
    .function("getRuleNames", &ParserInterpreter::getRuleNames)
    .function("getGrammarFileName", &ParserInterpreter::getGrammarFileName)
    .function("parse", &ParserInterpreter::parse, allow_raw_pointers())
    .function("enterRecursionRule", &ParserInterpreter::enterRecursionRule, allow_raw_pointers())
    .function("addDecisionOverride", &ParserInterpreter::addDecisionOverride)
    .function("getOverrideDecisionRoot", &ParserInterpreter::getOverrideDecisionRoot)
    .function("getRootContext", &ParserInterpreter::getRootContext, allow_raw_pointers());

  class_<ParserRuleContext, base<RuleContext>>("ParserRuleContext$Internal");

  class_<ParserRuleContextHelper, base<ParserRuleContext>>("ParserRuleContext")
    // .class_property("EMPTY", &ParserRuleContext::EMPTY) copy constructor is deleted

    // .property("start", &ParserRuleContext::start)
    // .property("stop", &ParserRuleContext::stop)

    .constructor<>()
    .constructor<ParserRuleContext *, size_t>()

    .function("captureException", &ParserRuleContextHelper::captureException)
    .function("getChildren", &ParserRuleContextHelper::childrenGet, allow_raw_pointers())
    .function("getParent", &ParserRuleContextHelper::parentGet, allow_raw_pointers())

    .function("copyFrom", &ParserRuleContext::copyFrom, allow_raw_pointers())
    .function("enterRule", &ParserRuleContext::enterRule, allow_raw_pointers())
    .function("exitRule", &ParserRuleContext::exitRule, allow_raw_pointers())
    .function("addChild", select_overload<tree::TerminalNode *(tree::TerminalNode *)>(&ParserRuleContext::addChild),
              allow_raw_pointers())
    .function("addChild", select_overload<RuleContext *(RuleContext *)>(&ParserRuleContext::addChild),
              allow_raw_pointers())
    .function("removeLastChild", &ParserRuleContext::removeLastChild)
    .function("getToken", &ParserRuleContext::getToken, allow_raw_pointers())
    .function("getTokens", &ParserRuleContext::getTokens, allow_raw_pointers())
    .function("getRuleContext", &ParserRuleContext::getContext, allow_raw_pointers())
    .function("getRuleContexts", &ParserRuleContext::getContexts, allow_raw_pointers())
    .function("getSourceInterval", &ParserRuleContext::getSourceInterval)

    .function("getStart", &ParserRuleContext::getStart, allow_raw_pointers())
    .function("setStart", &ParserRuleContext::setStart, allow_raw_pointers())

    .function("getStop", &ParserRuleContext::getStop, allow_raw_pointers())
    .function("setStop", &ParserRuleContext::setStop, allow_raw_pointers())

    .function("toInfoString", &ParserRuleContext::toInfoString, allow_raw_pointers())

    //.allow_subclass<ParserRuleContextWrapper>("ParserRuleContextWrapper", constructor<>())
    .allow_subclass<ParserRuleContextWrapper>("ParserRuleContextWrapper", constructor<ParserRuleContext *, size_t>());

  class_<ProxyErrorListener, base<antlr4::ANTLRErrorListener>>("ProxyErrorListener")
    .function("addErrorListener", &ProxyErrorListener::addErrorListener, allow_raw_pointers())
    .function("removeErrorListener", &ProxyErrorListener::removeErrorListener, allow_raw_pointers())
    .function("removeErrorListeners", &ProxyErrorListener::removeErrorListeners)
    .function("syntaxError", &ProxyErrorListener::syntaxError, allow_raw_pointers())
    .function("reportAmbiguity", &ProxyErrorListener::reportAmbiguity, allow_raw_pointers())
    .function("reportAttemptingFullContext", &ProxyErrorListener::reportAttemptingFullContext, allow_raw_pointers())
    .function("reportContextSensitivity", &ProxyErrorListener::reportContextSensitivity, allow_raw_pointers());
}

EMSCRIPTEN_BINDINGS(main5) {
  class_<RecognitionException, base<RuntimeException>>("RecognitionException")
    .constructor<Recognizer *, IntStream *, ParserRuleContext *, Token *>()
    .constructor<const std::string &, Recognizer *, IntStream *, ParserRuleContext *, Token *>()

    .function("getOffendingState", &RecognitionException::getOffendingState)
    .function("getExpectedTokens", &RecognitionException::getExpectedTokens)
    .function("getCtx", &RecognitionException::getCtx, allow_raw_pointers())
    .function("getInputStream", &RecognitionException::getInputStream, allow_raw_pointers())
    .function("getOffendingToken", &RecognitionException::getOffendingToken, allow_raw_pointers())
    .function("getRecognizer", &RecognitionException::getRecognizer, allow_raw_pointers());

  class_<Recognizer>("Recognizer$Internal");

  class_<RecognizerHelper, base<Recognizer>>("Recognizer")
    .constructor<>()

    .function("getState", &Recognizer::getState)
    .function("setState", &Recognizer::setState)

    .function("getRuleNames", &Recognizer::getRuleNames, pure_virtual())
    .function("getVocabulary", &Recognizer::getVocabulary, pure_virtual())
    .function("getTokenTypeMap", &Recognizer::getTokenTypeMap)
    .function("getRuleIndexMap", &Recognizer::getRuleIndexMap)
    .function("getTokenType", &Recognizer::getTokenType)
    .function("getSerializedATN",
              optional_override([](RecognizerWrapper &self) { return self.RecognizerWrapper::getSerializedATN(); }))

    .function("getGrammarFileName", &Recognizer::getGrammarFileName, pure_virtual())
    .function("getInterpreter", &Recognizer::getInterpreter<atn::ParserATNSimulator>, allow_raw_pointers())
    .function("setInterpreter", &Recognizer::setInterpreter, allow_raw_pointers())
    .function("getErrorHeader", &Recognizer::getErrorHeader, allow_raw_pointers())
    .function("getTokenErrorDisplay", &Recognizer::getTokenErrorDisplay, allow_raw_pointers())
    .function("addErrorListener", &Recognizer::addErrorListener, allow_raw_pointers())
    .function("removeErrorListener", &Recognizer::removeErrorListener, allow_raw_pointers())
    .function("removeErrorListeners", &Recognizer::removeErrorListeners)
    .function("getErrorListenerDispatch", &Recognizer::getErrorListenerDispatch, allow_raw_pointers())

    .function(
      "sempred",
      optional_override([](RecognizerHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
        return self.RecognizerHelper::sempred(localctx, ruleIndex, actionIndex);
      }),
      allow_raw_pointers())
    .function("precpred", optional_override([](RecognizerHelper &self, RuleContext *localctx, int precedence) {
                return self.RecognizerHelper::precpred(localctx, precedence);
              }),
              allow_raw_pointers())
    .function(
      "action",
      optional_override([](RecognizerHelper &self, RuleContext *localctx, size_t ruleIndex, size_t actionIndex) {
        self.RecognizerHelper::action(localctx, ruleIndex, actionIndex);
      }),
      allow_raw_pointers())

    //.function("getATN", &Recognizer::getATN, pure_virtual())
    .function("getInputStream", &Recognizer::getInputStream, pure_virtual(), allow_raw_pointers())
    .function("setInputStream", &Recognizer::setInputStream, pure_virtual(), allow_raw_pointers())
    .allow_subclass<RecognizerWrapper>("RecognizerWrapper");

  class_<RuleContextWithAltNum, base<tree::ParseTree>>("RuleContextWithAltNum")
    .property("altNum", &RuleContextWithAltNum::altNum)

    .constructor<>()
    .constructor<ParserRuleContext *, int>()

    .function("getAltNumber", &RuleContextWithAltNum::getAltNumber)
    .function("setAltNumber", &RuleContextWithAltNum::setAltNumber);

  class_<RuleContext, base<tree::ParseTree>>("RuleContext$Internal")
    .property("invokingState", &RuleContext::invokingState);

  class_<RuleContextHelper, base<RuleContext>>("RuleContext")
    .class_function("is", select_overload<bool(const tree::ParseTree &)>(&RuleContext::is))
    .class_function("is", select_overload<bool(const tree::ParseTree *)>(&RuleContext::is), allow_raw_pointers())

    .constructor<>()
    .constructor<RuleContext *, size_t>()

    .function("getChildren", &RuleContextHelper::childrenGet, allow_raw_pointers())
    .function("getParent", &RuleContextHelper::parentGet, allow_raw_pointers())

    .function("depth", &RuleContext::depth)
    .function("isEmpty", &RuleContext::isEmpty)
    .function("getSourceInterval", &RuleContext::getSourceInterval)
    .function("getText", &RuleContext::getText)
    .function("getRuleIndex", select_overload<size_t() const>(&RuleContext::getRuleIndex))
    .function("getAltNumber", &RuleContext::getAltNumber)
    .function("setAltNumber", &RuleContext::setAltNumber)
    .function("accept", &RuleContext::accept, allow_raw_pointers())
    .function("toStringTree", select_overload<std::string(Parser *, bool)>(&RuleContext::toStringTree),
              allow_raw_pointers())
    /*.function("toStringTree",
              select_overload<std::string(std::vector<std::string> &, bool)>(&RuleContext::toStringTree))*/
    .function("toStringTree", select_overload<std::string(bool)>(&RuleContext::toStringTree))
    .function("toString", select_overload<std::string()>(&RuleContext::toString))
    .function("toString", select_overload<std::string(Recognizer *)>(&RuleContext::toString), allow_raw_pointers())
    .function("toString", select_overload<std::string(const std::vector<std::string> &)>(&RuleContext::toString))
    .function("toString", select_overload<std::string(Recognizer *, RuleContext *)>(&RuleContext::toString),
              allow_raw_pointers())
    .function("toString",
              select_overload<std::string(const std::vector<std::string> &, RuleContext *)>(&RuleContext::toString),
              allow_raw_pointers())
    .allow_subclass<RuleContextWrapper>("RuleContextWrapper");

  class_<RuntimeException, base<std::exception>>("RuntimeException")
    .constructor<std::string>()

    .function("what", &RuntimeException::what, allow_raw_pointers());

  class_<RuntimeMetaData>("RuntimeMetaData")
    .class_property("VERSION", &RuntimeMetaData::VERSION)
    .class_function("getRuntimeVersion", &RuntimeMetaData::getRuntimeVersion)
    .class_function("checkVersion", &RuntimeMetaData::checkVersion)
    .class_function("getMajorMinorVersion", &RuntimeMetaData::getMajorMinorVersion);

  class_<Token>("Token")
    .class_property("INVALID_TYPE", &Token::INVALID_TYPE)
    .class_property("EPSILON", &Token::EPSILON)
    .class_property("MIN_USER_TOKEN_TYPE", &Token::MIN_USER_TOKEN_TYPE)
    .class_property("EOF", &Token::EOF)
    .class_property("DEFAULT_CHANNEL", &Token::DEFAULT_CHANNEL)
    .class_property("HIDDEN_CHANNEL", &Token::HIDDEN_CHANNEL)
    .class_property("MIN_USER_CHANNEL_VALUE", &Token::MIN_USER_CHANNEL_VALUE)

    .function("getText", &Token::getText, pure_virtual())
    .function("getType", &Token::getType, pure_virtual())
    .function("getLine", &Token::getLine, pure_virtual())
    .function("getCharPositionInLine", &Token::getCharPositionInLine, pure_virtual())
    .function("getChannel", &Token::getChannel, pure_virtual())
    .function("getTokenIndex", &Token::getTokenIndex, pure_virtual())
    .function("getStartIndex", &Token::getStartIndex, pure_virtual())
    .function("getStopIndex", &Token::getStopIndex, pure_virtual())
    .function("getTokenSource", &Token::getTokenSource, pure_virtual(), allow_raw_pointers())
    .function("getInputStream", &Token::getInputStream, pure_virtual(), allow_raw_pointers())
    .function("toString", &Token::toString, pure_virtual())
    .allow_subclass<TokenWrapper>("TokenWrapper");

  class_<TokenFactory<CommonToken>>("TokenFactory")
    .function(
      "create",
      select_overload<std::unique_ptr<CommonToken>(std::pair<TokenSource *, CharStream *>, size_t, const std::string &,
                                                   size_t, size_t, size_t, size_t, size_t)>(
        &TokenFactory<CommonToken>::create),
      pure_virtual(), allow_raw_pointers())
    .function(
      "create",
      select_overload<std::unique_ptr<CommonToken>(size_t, const std::string &)>(&TokenFactory<CommonToken>::create),
      pure_virtual(), allow_raw_pointers());
}

EMSCRIPTEN_BINDINGS(main6) {
  class_<TokenSource>("TokenSource")
    .function("nextToken", &TokenSource::nextToken, pure_virtual())
    .function("getLine", &TokenSource::getLine, pure_virtual())
    .function("getCharPositionInLine", &TokenSource::getCharPositionInLine, pure_virtual())
    .function("getInputStream", &TokenSource::getInputStream, pure_virtual(), allow_raw_pointers())
    .function("getSourceName", &TokenSource::getSourceName, pure_virtual());

  class_<TokenStream, base<IntStream>>("TokenStream")
    .function("LT", &TokenStream::LT, pure_virtual(), allow_raw_pointers())
    .function("get", &TokenStream::get, pure_virtual(), allow_raw_pointers())
    .function("getTokenSource", &TokenStream::getTokenSource, pure_virtual(), allow_raw_pointers())
    .function("getText", select_overload<std::string(const misc::Interval &)>(&TokenStream::getText), pure_virtual())
    .function("getText", select_overload<std::string()>(&TokenStream::getText), pure_virtual())
    .function("getText", select_overload<std::string(RuleContext *)>(&TokenStream::getText), pure_virtual(),
              allow_raw_pointers())
    .function("getText", select_overload<std::string(Token *, Token *)>(&TokenStream::getText), pure_virtual(),
              allow_raw_pointers())
    .allow_subclass<TokenStreamWrapper>("TokenStreamWrapper");

  class_<TokenStreamRewriter>("TokenStreamRewriter")
    .class_property("DEFAULT_PROGRAM_NAME", &TokenStreamRewriter::DEFAULT_PROGRAM_NAME)
    .class_property("PROGRAM_INIT_SIZE", &TokenStreamRewriter::PROGRAM_INIT_SIZE)
    .class_property("MIN_TOKEN_INDEX", &TokenStreamRewriter::MIN_TOKEN_INDEX)

    .constructor<TokenStream *>()

    .function("getTokenStream", &TokenStreamRewriter::getTokenStream, allow_raw_pointers())
    .function("rollback", select_overload<void(size_t)>(&TokenStreamRewriter::rollback))
    .function("rollback", select_overload<void(const std::string &, size_t)>(&TokenStreamRewriter::rollback))
    .function("deleteProgram", select_overload<void()>(&TokenStreamRewriter::deleteProgram))
    .function("deleteProgram", select_overload<void(const std::string &)>(&TokenStreamRewriter::deleteProgram))
    .function("insertAfter", select_overload<void(Token *, const std::string &)>(&TokenStreamRewriter::insertAfter),
              allow_raw_pointers())
    .function("insertAfter", select_overload<void(size_t, const std::string &)>(&TokenStreamRewriter::insertAfter))
    .function(
      "insertAfter",
      select_overload<void(const std::string &, Token *, const std::string &)>(&TokenStreamRewriter::insertAfter),
      allow_raw_pointers())
    .function("insertAfter", select_overload<void(const std::string &, size_t, const std::string &)>(
                               &TokenStreamRewriter::insertAfter))
    .function("insertBefore", select_overload<void(Token *, const std::string &)>(&TokenStreamRewriter::insertBefore),
              allow_raw_pointers())
    .function("insertBefore", select_overload<void(size_t, const std::string &)>(&TokenStreamRewriter::insertBefore))
    .function(
      "insertBefore",
      select_overload<void(const std::string &, Token *, const std::string &)>(&TokenStreamRewriter::insertBefore),
      allow_raw_pointers())
    .function("insertBefore", select_overload<void(const std::string &, size_t, const std::string &)>(
                                &TokenStreamRewriter::insertBefore))
    .function("replace", select_overload<void(size_t, const std::string &)>(&TokenStreamRewriter::replace))
    .function("replace", select_overload<void(size_t, size_t, const std::string &)>(&TokenStreamRewriter::replace))
    .function("replace", select_overload<void(Token *, const std::string &)>(&TokenStreamRewriter::replace),
              allow_raw_pointers())
    .function("replace", select_overload<void(Token *, Token *, const std::string &)>(&TokenStreamRewriter::replace),
              allow_raw_pointers())
    .function("replace", select_overload<void(const std::string &, size_t, size_t, const std::string &)>(
                           &TokenStreamRewriter::replace))
    .function(
      "replace",
      select_overload<void(const std::string &, Token *, Token *, const std::string &)>(&TokenStreamRewriter::replace),
      allow_raw_pointers())
    .function("Delete", select_overload<void(size_t)>(&TokenStreamRewriter::Delete))
    .function("Delete", select_overload<void(size_t, size_t)>(&TokenStreamRewriter::Delete))
    .function("Delete", select_overload<void(Token *)>(&TokenStreamRewriter::Delete), allow_raw_pointers())
    .function("Delete", select_overload<void(Token *, Token *)>(&TokenStreamRewriter::Delete), allow_raw_pointers())
    .function("Delete", select_overload<void(const std::string &, size_t, size_t)>(&TokenStreamRewriter::Delete))
    .function("Delete", select_overload<void(const std::string &, Token *, Token *)>(&TokenStreamRewriter::Delete),
              allow_raw_pointers())
    .function("getLastRewriteTokenIndex", select_overload<size_t()>(&TokenStreamRewriter::getLastRewriteTokenIndex))
    .function("getText", select_overload<std::string()>(&TokenStreamRewriter::getText))
    .function("getText", select_overload<std::string(std::string)>(&TokenStreamRewriter::getText))
    .function("getText", select_overload<std::string(const misc::Interval &)>(&TokenStreamRewriter::getText))
    .function("getText",
              select_overload<std::string(const std::string &, const misc::Interval &)>(&TokenStreamRewriter::getText));

  class_<UnbufferedCharStream, base<CharStream>>("UnbufferedCharStream")
    .property("name", &UnbufferedCharStream::name)

    .constructor<std::wistream &>()

    .function("consume", &UnbufferedCharStream::consume)
    .function("LA", &UnbufferedCharStream::LA)
    .function("mark", &UnbufferedCharStream::mark)
    .function("release", &UnbufferedCharStream::release)
    .function("index", &UnbufferedCharStream::index)
    .function("seek", &UnbufferedCharStream::seek)
    .function("size", &UnbufferedCharStream::size)
    .function("getSourceName", &UnbufferedCharStream::getSourceName)
    .function("getText", &UnbufferedCharStream::getText)
    .function("toString", &UnbufferedCharStream::toString);

  class_<UnbufferedTokenStream, base<TokenStream>>("UnbufferedTokenStream")
    .constructor<TokenSource *>()
    .constructor<TokenSource *, int>()

    .function("get", &UnbufferedTokenStream::get, allow_raw_pointers())
    .function("LT", &UnbufferedTokenStream::LT, allow_raw_pointers())
    .function("LA", &UnbufferedTokenStream::LA)
    .function("getTokenSource", &UnbufferedTokenStream::getTokenSource, allow_raw_pointers())
    .function("getText", select_overload<std::string(const misc::Interval &)>(&UnbufferedTokenStream::getText))
    .function("getText", select_overload<std::string()>(&UnbufferedTokenStream::getText))
    .function("getText", select_overload<std::string(RuleContext *)>(&UnbufferedTokenStream::getText),
              allow_raw_pointers())
    .function("getText", select_overload<std::string(Token *, Token *)>(&UnbufferedTokenStream::getText),
              allow_raw_pointers())
    .function("consume", &UnbufferedTokenStream::consume)
    .function("mark", &UnbufferedTokenStream::mark)
    .function("release", &UnbufferedTokenStream::release)
    .function("index", &UnbufferedTokenStream::index)
    .function("seek", &UnbufferedTokenStream::seek)
    .function("size", &UnbufferedTokenStream::size)
    .function("getSourceName", &UnbufferedTokenStream::getSourceName);

  class_<UnsupportedOperationException, base<RuntimeException>>("UnsupportedOperationException")
    .constructor<std::string>();

  class_<WritableToken, base<Token>>("WritableToken")
    .function("setText", &WritableToken::setText, pure_virtual())
    .function("setType", &WritableToken::setType, pure_virtual())
    .function("setLine", &WritableToken::setLine, pure_virtual())
    .function("setCharPositionInLine", &WritableToken::setCharPositionInLine, pure_virtual())
    .function("setChannel", &WritableToken::setChannel, pure_virtual())
    .function("setTokenIndex", &WritableToken::setTokenIndex, pure_virtual());
}
