
/* cspell: disable */

#include <iostream>
#include <sstream>

#include "ParseServiceCpp.h"

using namespace antlr4;
using namespace antlr4::atn;
using namespace antlr4::tree;

static std::set<std::string> charSets{
  "_big5",   "_dec8",     "_cp850",  "_hp8",    "_koi8r",   "_latin1",  "_latin2",  "_swe7",     "_ascii",  "_ujis",
  "_sjis",   "_hebrew",   "_tis620", "_euckr",  "_koi8u",   "_gb18030", "_gb2312",  "_greek",    "_cp1250", "_gbk",
  "_latin5", "_armscii8", "_utf8",   "_ucs2",   "_cp866",   "_keybcs2", "_macce",   "_macroman", "_cp852",  "_latin7",
  "_cp1251", "_cp1256",   "_cp1257", "_binary", "_geostd8", "_cp932",   "_eucjpms", "_utf8mb4",  "_utf16",  "_utf32"
};

std::string trim_right(const std::string &s, const std::string &t) {
  std::string d(s);
  std::string::size_type i(d.find_last_not_of(t));
  if (i == std::string::npos)
    return "";
  else
    return d.erase(d.find_last_not_of(t) + 1);
}

std::string trim_left(const std::string &s, const std::string &t) {
  std::string d(s);
  return d.erase(0, s.find_first_not_of(t));
}

std::string trim(const std::string &s, const std::string &t = " \t\r\n") {
  std::string d(s);
  return trim_left(trim_right(d, t), t);
}

static const unsigned char *skipLeadingWhitespace(const unsigned char *head, const unsigned char *tail) {
  while (head < tail && *head <= ' ')
    head++;
  return head;
}

static bool isLineBreak(const unsigned char *head, const unsigned char *line_break) {
  if (*line_break == '\0')
    return false;

  while (*head != '\0' && *line_break != '\0' && *head == *line_break) {
    head++;
    line_break++;
  }
  return *line_break == '\0';
}

ParseServiceCpp::ParseServiceCpp(size_t serverVersion) : lexer(&input), tokens(&lexer), parser(&tokens) {
  lexer.charsets = charSets;
  lexer.serverVersion = serverVersion;
  parser.serverVersion = serverVersion;

  lexer.removeErrorListeners();
  lexer.addErrorListener(&errorListener);

  parser.removeParseListeners();
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListener);

  lexer.sqlModeFromString("ANSI_QUOTES");
  parser.sqlMode = lexer.sqlMode;
}

bool ParseServiceCpp::errorCheck(const std::string &text) {
  parser.removeParseListeners();
  input.load(text);
  startParsing(true);

  return errors.empty();
}

void ParseServiceCpp::determineStatementRanges(const char *sql, size_t length, const std::string &initialDelimiter,
                                               std::vector<StatementRange> &ranges, const std::string &lineBreak) {
  static const unsigned char keyword[] = "delimiter";

  std::string delimiter = initialDelimiter.empty() ? ";" : initialDelimiter;
  const unsigned char *delimiterHead = reinterpret_cast<const unsigned char *>(delimiter.c_str());

  const unsigned char *start = reinterpret_cast<const unsigned char *>(sql);
  const unsigned char *head = start;
  const unsigned char *tail = head;
  const unsigned char *end = head + length;
  const unsigned char *newLine = reinterpret_cast<const unsigned char *>(lineBreak.c_str());

  size_t currentLine = 0;
  size_t statementStart = 0;
  bool haveContent = false; // Set when anything else but comments were found for the current statement.

  while (tail < end) {
    switch (*tail) {
      case '/': { // Possible multi line comment or hidden (conditional) command.
        if (*(tail + 1) == '*') {
          tail += 2;
          bool isHiddenCommand = (*tail == '!');
          while (true) {
            while (tail < end && *tail != '*') {
              if (isLineBreak(tail, newLine))
                ++currentLine;
              tail++;
            }

            if (tail == end) // Unfinished comment.
              break;
            else {
              if (*++tail == '/') {
                tail++; // Skip the slash too.
                break;
              }
            }
          }

          if (isHiddenCommand)
            haveContent = true;
          if (!haveContent) {
            head = tail; // Skip over the comment.
            statementStart = currentLine;
          }

        } else
          tail++;

        break;
      }

      case '-': { // Possible single line comment.
        const unsigned char *end_char = tail + 2;
        if (*(tail + 1) == '-' && (*end_char == ' ' || *end_char == '\t' || isLineBreak(end_char, newLine))) {
          // Skip everything until the end of the line.
          tail += 2;
          while (tail < end && !isLineBreak(tail, newLine))
            tail++;

          if (!haveContent) {
            head = tail;
            statementStart = currentLine;
          }
        } else
          tail++;

        break;
      }

      case '#': { // MySQL single line comment.
        while (tail < end && !isLineBreak(tail, newLine))
          tail++;

        if (!haveContent) {
          head = tail;
          statementStart = currentLine;
        }

        break;
      }

      case '"':
      case '\'':
      case '`': { // Quoted string/id. Skip this in a local loop.
        haveContent = true;
        unsigned char quote = *tail++;
        while (tail < end && *tail != quote) {
          // Skip any escaped character too.
          if (*tail == '\\')
            tail++;
          tail++;
        }
        if (*tail == quote)
          tail++; // Skip trailing quote char if one was there.

        break;
      }

      case 'd':
      case 'D': {
        haveContent = true;

        // Possible start of the keyword DELIMITER. Must be at the start of the text or a character,
        // which is not part of a regular MySQL identifier (0-9, A-Z, a-z, _, $, \u0080-\uffff).
        unsigned char previous = tail > start ? *(tail - 1) : 0;
        bool is_identifier_char = previous >= 0x80 || (previous >= '0' && previous <= '9') ||
                                  ((previous | 0x20) >= 'a' && (previous | 0x20) <= 'z') || previous == '$' ||
                                  previous == '_';
        if (tail == start || !is_identifier_char) {
          const unsigned char *run = tail + 1;
          const unsigned char *kw = keyword + 1;
          int count = 9;
          while (count-- > 1 && (*run++ | 0x20) == *kw++)
            ;
          if (count == 0 && *run == ' ') {
            // Delimiter keyword found. Get the new delimiter (everything until the end of the line).
            tail = run++;
            while (run < end && !isLineBreak(run, newLine))
              ++run;
            delimiter = trim(std::string(reinterpret_cast<const char *>(tail), run - tail));
            delimiterHead = reinterpret_cast<const unsigned char *>(delimiter.c_str());

            // Skip over the delimiter statement and any following line breaks.
            while (isLineBreak(run, newLine)) {
              ++currentLine;
              ++run;
            }
            tail = run;
            head = tail;
            statementStart = currentLine;
          } else
            ++tail;
        } else
          ++tail;

        break;
      }

      default:
        if (isLineBreak(tail, newLine)) {
          ++currentLine;
          if (!haveContent)
            ++statementStart;
        }

        if (*tail > ' ')
          haveContent = true;
        tail++;
        break;
    }

    if (*tail == *delimiterHead) {
      // Found possible start of the delimiter. Check if it really is.
      size_t count = delimiter.size();
      if (count == 1) {
        // Most common case. Trim the statement and check if it is not empty before adding the range.
        head = skipLeadingWhitespace(head, tail);
        if (head < tail)
          ranges.push_back({ statementStart, static_cast<size_t>(head - start), static_cast<size_t>(tail - head) });
        head = ++tail;
        statementStart = currentLine;
        haveContent = false;
      } else {
        const unsigned char *run = tail + 1;
        const unsigned char *del = delimiterHead + 1;
        while (count-- > 1 && (*run++ == *del++))
          ;

        if (count == 0) {
          // Multi char delimiter is complete. Tail still points to the start of the delimiter.
          // Run points to the first character after the delimiter.
          head = skipLeadingWhitespace(head, tail);
          if (head < tail)
            ranges.push_back({ statementStart, static_cast<size_t>(head - start), static_cast<size_t>(tail - head) });
          tail = run;
          head = run;
          statementStart = currentLine;
          haveContent = false;
        }
      }
    }
  }

  // Add remaining text to the range list.
  head = skipLeadingWhitespace(head, tail);
  if (head < tail)
    ranges.push_back({ statementStart, static_cast<size_t>(head - start), static_cast<size_t>(tail - head) });
}

ParseTree *ParseServiceCpp::startParsing(bool fast) {
  errors.clear();
  lexer.reset();
  lexer.setInputStream(&input); // Not just reset(), which only rewinds the current position.
  tokens.setTokenSource(&lexer);

  parser.reset();
  parser.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for correct queries.
  parser.setErrorHandler(bailOutErrorStrategy);
  parser.getInterpreter<ParserATNSimulator>()->setPredictionMode(PredictionMode::SLL);

  ParseTree *tree;
  try {
    tree = parser.query();
  } catch (ParseCancellationException &) {
    if (fast && !errors.empty())
      tree = nullptr;
    else {
      tokens.reset();
      parser.reset();
      errors.clear();
      parser.setErrorHandler(defaultErrorStrategy);
      parser.getInterpreter<ParserATNSimulator>()->setPredictionMode(PredictionMode::LL);
      tree = parser.query();
    }
  }

  return tree;
}
