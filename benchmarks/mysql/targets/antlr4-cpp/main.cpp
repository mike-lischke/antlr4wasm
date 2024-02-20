
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

std::shared_ptr<ParseServiceCpp> service = std::make_shared<ParseServiceCpp>(80400);

struct TestFile {
  std::string name;
  const char *line_break;
  const char *initial_delimiter;
};

static const std::vector<TestFile> testFiles = {
  // Large set of all possible query types in different combinations and versions.
  { "statements.txt", "\n", "$$" },

  // The largest of the example files from the grammar repository:
  // (https://github.com/antlr/grammars-v4/tree/master/sql/mysql/Positive-Technologies/examples)
  { "bitrix_queries_cut.sql", "\n", ";" },

  // Not so many, but some very long insert statements.
  { "sakila-db/sakila-data.sql", "\n", ";" }
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

void splitterTest() {
    std::ifstream file1("../../data/sakila-db/sakila-data.sql");
    std::stringstream buffer1;
    buffer1 << file1.rdbuf();
    std::string data = buffer1.str();

    std::vector<StatementRange> ranges;
    service->determineStatementRanges(data.c_str(), data.size(), ";", ranges, "\n");
    //std::cout << ranges.size() << std::endl;
    assert(ranges.size() == 57);

    std::ifstream file3("../../data/sakila-db/sakila-schema.sql");
    std::stringstream buffer3;
    buffer3 << file3.rdbuf();
    data = buffer3.str();

    ranges.clear();
    service->determineStatementRanges(data.c_str(), data.size(), ";", ranges, "\n");
    //std::cout << ranges.size() << std::endl;
    assert(ranges.size() == 41);
}

std::vector<std::uint32_t> parseFiles(bool logResults) {
  std::size_t count = 0;
  std::vector<std::uint32_t> result;

  auto index = 0;
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

    if (logResults) {
      std::cout << "    Found " << ranges.size() << " statements in file " << (index + 1) << " (" << entry.name << ")." << std::endl;
    }

    auto start = std::chrono::high_resolution_clock::now();
    for (auto &range : ranges) {
      std::string statement(sql.c_str() + range.start, range.length);

      if (versionMatches(statement, 80400)) {
        bool succeeded = service->errorCheck(statement);

        if (!succeeded) {
          throw "This query failed to parse:\n" + statement;
        }
      }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

    if (logResults) {
      std::cout << "    Parsing all statements took: " << duration.count() << " ms" << std::endl;
    }

    result.push_back(duration.count());
    index++;
  }

  return result;
}

static std::vector<std::uint32_t> parserRun(bool showOutput) {
  std::vector<std::uint32_t> result;

  auto start = std::chrono::high_resolution_clock::now();
  try {
    result = parseFiles(showOutput);
  } catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }

  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
  if (showOutput) {
    std::cout << "Overall parse run took: " << duration.count() << " ms" << std::endl;
  }

  result.push_back(duration.count());

  return result;
};

int main(int, const char **) {
  std::cout << "Starting  MySQL C++ parser benchmarks" << std::endl;
  auto start = std::chrono::high_resolution_clock::now();

  splitterTest();

  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

  std::cout << "Splitter tests took " << duration.count() << " ms" << std::endl;

  std::cout << "Running antlr4 C++ parser once (cold)" << std::endl;
  parserRun(true);

  std::cout << "Running antlr4 C++ parser 5 times (warm) " << std::flush;

  std::vector<std::vector<std::uint32_t>> times;

  for (int i = 0; i < 5; i++) {
    times.push_back(parserRun(false));
    std::cout << "." << std::flush;
  }
  std::cout << std::endl;

  // Transpose the result matrix.
  std::vector<std::vector<std::uint32_t>> transposed;
  for (std::size_t i = 0; i < times[0].size(); i++) {
    std::vector<std::uint32_t> row;
    for (std::size_t j = 0; j < times.size(); j++) {
      row.push_back(times[j][i]);
    }
    transposed.push_back(row);
  }

  // Remove the 2 slowest runs in each row and compute the average of the remaining 3.
  std::vector<std::uint32_t> averageTimes;
  for (auto &row : transposed) {
    std::sort(row.begin(), row.end());
    row.pop_back();
    row.pop_back();

    std::uint32_t sum = 0;
    for (auto &time : row) {
      sum += time;
    }
    averageTimes.push_back(sum / 3);
  }

  for (std::size_t i = 0; i < averageTimes.size() - 1; ++i) {
    std::cout << "    File " << (i + 1) << " took "  << " " << std::round(averageTimes[i]) << " ms" << std::endl;
  }

  std::cout << "Overall parse run took " << std::round(averageTimes[averageTimes.size() - 1]) << " ms" << std::endl;

  std::cout << "Done" << std::endl;

  return 0;
}
