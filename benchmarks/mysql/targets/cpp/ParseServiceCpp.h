
#pragma once

#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "MySQLLexer.h"
#include "MySQLParser.h"

// Describes a single statement out of a list in a string.
struct StatementRange {
  size_t line;   // The line number of the statement.
  size_t start;  // The byte start offset of the statement.
  size_t length; // The length of the statements in bytes.
};

struct ParserErrorInfo {
  std::string message;
  size_t tokenType;
  size_t charOffset; // Offset (in bytes) from the beginning of the input to the error position.
  size_t line;       // Error line.
  size_t offset;     // Byte offset in the error line to the error start position.
  size_t length;
};

class TestErrorListener : public antlr4::BaseErrorListener {
public:
  std::string lastErrors;

  virtual void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override {
    // Here we use the message provided by the DefaultErrorStrategy class.
    if (!lastErrors.empty())
      lastErrors += "\n";
    lastErrors += "line " + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg;
  }
};

class ParseServiceCpp {
public:
  ParseServiceCpp(size_t serverVersion);

  bool errorCheck(const std::string &text);

  void determineStatementRanges(const char *sql, size_t length, const std::string &initialDelimiter,
                                std::vector<StatementRange> &ranges, const std::string &lineBreak = "\n");

private:
  std::vector<ParserErrorInfo> errors;

  antlr4::ANTLRInputStream input;
  parsers::MySQLLexer lexer;
  antlr4::CommonTokenStream tokens;
  parsers::MySQLParser parser;

  TestErrorListener errorListener;

  Ref<antlr4::BailErrorStrategy> bailOutErrorStrategy = std::make_shared<antlr4::BailErrorStrategy>();
  Ref<antlr4::DefaultErrorStrategy> defaultErrorStrategy = std::make_shared<antlr4::DefaultErrorStrategy>();

  antlr4::tree::ParseTree *startParsing(bool fast);
};
