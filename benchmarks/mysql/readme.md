# Benchmarking MySQL With Different Runtimes

## Results

| Runtime | Query Collection Cold | Query Collection Warm | Large (Binary) Inserts Cold | Large (Binary) Inserts Warm |
| ------- | --------------------- | --------------------- | --------------------------- | --------------------------- |
| C++| 3.96s | 0.437s | 13.2s | 12.2s |
| WebAssembly | 6.17s | 1.77s | 56.5s | 60s |
| antlr4-ts | 12.3s | 0.84s | 44.85s | 43.6s |
| JavaScript | 1.5s | 0.5s | 0.5s | 0.5s |

### Notes on the Benchmarks

The numbers have been taken from different applications. Only WebAssembly and JavaScript target measurements have been collection using the benchmark tool in this repository. The C++ parser test used the parser test application, which is part of the [MySQL Workbench repository](https://github.com/mysql/mysql-workbench/tree/8.0/library/parsers/grammars/test.parser). And the antlr4ts test results come from the Jest tests of the [MySQL Shell for VS Code extension](https://github.com/mysql/mysql-shell-plugins/blob/master/gui/frontend/src/tests/unit-tests/parsing/mysql/MySQLParsingServices.spec.ts). All applications used the same [MySQL grammar](https://github.com/mysql/mysql-shell-plugins/tree/master/gui/frontend/src/parsing/mysql), except for the C++ parser test app, which used a slightly older version of the grammar.

The query collection file contains more than 900 MySQL queries of all kinds, from very simple to complex stored procedures (minimum MySQL server version used was 8.0.0). The large binary inserts file contains only a few queries but they are really large, stressing so the prediction engine of the parser. Additionally, one query contains binary (image) data which contains input characters from the whole UTF-8 range.

Each number has been measured 5 times and the average has been taken.

### Discussion of the Results

The C++ parser is the fastest, as expected, but antlr4ts is pretty close (once warmed up), at least for mostly short queries without many recursions. This runtime got some optimization and it shows.

## Notes on MySQL

- For MySQL to execute successfully, you need to increase the Node.js stack size. This requires changing the [build configuration](https://emscripten.org/docs/tools_reference/emsdk.html#compiler-configuration-file) of emscripten. There's also a FAQ entry here: https://emscripten.org/docs/getting_started/FAQ.html#why-do-i-get-a-stack-size-error-when-optimizing-rangeerror-maximum-call-stack-size-exceeded-or-similar
- Multiple inheritance is a problem for emscripten. You can specify only one base class and using the derived class in places for any other base class is needed will cause an error.
- Exception handling is tricky.
  - By default an exception in wasm code just stops the app.
  - Enable catching either with `-fexceptions` or `-fwasm-exceptions`. The latter is more efficient but requires a newer browser.
  - Using wasm exceptions requires [additional handling](https://emscripten.org/docs/porting/exceptions.html#handling-c-exceptions-from-javascript).
  - Exceptions thrown in C++ cannot be identified using `instanceof` in JS. To get wasm exception information, you can enable `-sEXPORT_EXCEPTION_HANDLING_HELPERS`, but that will partially disable optimization.
