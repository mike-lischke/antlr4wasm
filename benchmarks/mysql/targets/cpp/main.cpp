
#include <iostream>
#include <regex>

#include "antlr4-runtime.h"
#include "MySQLLexer.h"
#include "MySQLParser.h"
#include "ParseServiceCpp.h"

using namespace parsers;
using namespace antlr4;
using namespace antlr4::atn;
using namespace antlr4::tree;

std::shared_ptr<ParseServiceCpp> service = std::make_shared<ParseServiceCpp>(80000);

struct TestFile {
  std::string name;
  const char *line_break;
  const char *initial_delimiter;
};

static const std::vector<TestFile> testFiles = {
  // Large set of all possible query types in different combinations and versions.
  { "statements.txt", "\n", "$$" },

  // A file with a number of create tables statements that stresses the use
  // of the grammar (e.g. using weird but still valid object names including \n, long
  // list of indices, all possible data types + the default values etc.).
  // Note: it is essential to use \r\n as normal line break in the file to allow usage of \n
  //       in object names.
  //{ "nasty_tables.sql", "\r\n", ";" },

  // Not so many, but some very long insert statements.
  { "sakila-db/sakila-data.sql", "\n", ";" },

  { "bitrix_queries_cut.sql", "\n", ";" }
};

/**
 * Determines if the version info in the statement matches the given version (if there's version info at all).
 * The version info is removed from the statement, if any.
 */
static bool versionMatches(std::string &statement, unsigned long serverVersion) {
  static std::regex versionPattern("^\\[(<|<=|>|>=|=)(\\d{5})\\]");
  static std::map<std::string, int> relationMap = { { "<", 0 }, { "<=", 1 }, { "=", 2 }, { ">=", 3 }, { ">", 4 } };

  std::smatch matches;
  if (std::regex_search(statement, matches, versionPattern)) {
    auto relation = matches[1].str();
    unsigned long targetVersion = std::stoul(matches[2].str());

    switch (relationMap[relation]) {
      case 0:
        if (serverVersion >= targetVersion)
          return false;
        break;
      case 1:
        if (serverVersion > targetVersion)
          return false;
        break;
      case 2:
        if (serverVersion != targetVersion)
          return false;
        break;
      case 3:
        if (serverVersion < targetVersion)
          return false;
        break;
      case 4:
        if (serverVersion <= targetVersion)
          return false;
        break;
    }

    statement = std::regex_replace(statement, versionPattern, "");
  }

  return true;
}

void parseFiles() {
  std::size_t count = 0;
  for (auto entry : testFiles) {
    std::string fileName = "../../data/" + entry.name;

#ifdef _MSC_VER
    std::ifstream stream(base::string_to_wstring(fileName), std::ios::binary);
#else
    std::ifstream stream(fileName, std::ios::binary);
#endif
    std::string sql((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());

    std::vector<StatementRange> ranges;
    service->determineStatementRanges(sql.c_str(), sql.size(), entry.initial_delimiter, ranges, entry.line_break);
    count += ranges.size();

    std::cout << "    Found " << std::to_string(ranges.size()) + " statements in " + entry.name + "." << std::endl;
    auto start = std::chrono::high_resolution_clock::now();

    for (auto &range : ranges) {
      std::string statement(sql.c_str() + range.start, range.length);

      if (versionMatches(statement, 80000)) {
        bool succeeded = service->errorCheck(statement);

        if (!succeeded) {
          throw "This query failed to parse:\n" + statement;
        }
      }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "    Parsing all statements took: " << duration.count() << " ms" << std::endl;
  }
}

static void parserRun() {
  auto start = std::chrono::high_resolution_clock::now();
  try {
    parseFiles();
  } catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }

  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
  std::cout << "Parse run took: " << duration.count() << " ms" << std::endl;
};

int main(int, const char **) {
  std::cout << "Starting  MySQL C++ parser benchmarks" << std::endl;
  auto start = std::chrono::high_resolution_clock::now();

  std::cout << "Running antlr4 C++ parser (cold) ..." << std::endl;
  parserRun();

  std::cout << "Running antlr4 C++ parser (warm) ..." << std::endl;
  parserRun();
  parserRun();
  parserRun();
  parserRun();
  parserRun();

  std::cout << "Done" << std::endl;

  return 0;
}
