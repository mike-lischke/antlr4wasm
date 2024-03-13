# Benchmarking MySQL With Different Runtimes

## Results

||C++|antlr4ng|antlr4|antlr4ts|antl4wasm|
|---|---|---|---|---|---|
|Query Collection (cold)|1340 ms|6356 ms|7984 ms|3402 ms|3331 ms|
|Bitrix Queries (cold)|195 ms|1116 ms|1134 ms|444 ms|998 ms|
|Large Inserts (cold)|4981 ms|14407 ms|10695 ms|11483 ms|34243 ms|
|Query Collection (warm)|133 ms|333 ms|223 ms|259 ms|1177 ms|
|Bitrix Queries (warm)|70 ms|194 ms|110 ms|131 ms|815 ms|
|Large Inserts (warm)|4971 ms|14440 ms|10593 ms|11287 ms|36317 ms|
|||||||
|Total (cold)|6546 ms|21939 ms|19878 ms|15403 ms|38641 ms|
|Total (warm)|5198 ms|14985 ms|10944 ms|11697 ms|38329 ms|

### Notes on the Benchmarks

The numbers have been taken on a Mac Studio M1 Pro (Sonoma 14.2). For each target there's an own NPM script you can run. See below for details.

All applications used the same [MySQL grammar](https://github.com/mysql/mysql-shell-plugins/tree/master/gui/frontend/src/parsing/mysql) and the same data files.

The query collection file contains more than 900 MySQL queries of all kinds, from very simple to complex stored procedures, including some deeply nested select queries that can easily exhaust available stack space. The minimum MySQL server version used was 8.0.0.

The large binary inserts file contains only a few dozen queries, but they are really large with deep recursions, stressing so the prediction engine of the parser. Additionally, one query contains binary (image) data which contains input characters from the whole UTF-8 range.

Cold tests only ran once, while the warm tests have been executed 5 times, the 2 slowest ones have been removed, and the average was computed from the remaining 3.

## Emscripten Notes

- Multiple inheritance is a problem for emscripten. You can specify only one base class. Using the derived class in places for any other base class is needed will cause an error.
- Exception handling is tricky.
  - By default an exception in wasm code just stops the app.
  - Enable catching either with `-fexceptions` or `-fwasm-exceptions`. The latter is more efficient but requires a newer browser.
  - Using wasm exceptions requires [additional handling](https://emscripten.org/docs/porting/exceptions.html#handling-c-exceptions-from-javascript).
  - Exceptions thrown in C++ cannot be identified using `instanceof` in JS. To get wasm exception information, you can enable `-sEXPORT_EXCEPTION_HANDLING_HELPERS`, but that will partially disable optimization.

## Running the Benchmarks

### Installing Dependencies

You first have install all dependencies needed for building and running the benchmarks.

- C++ Runtime: you need `clang` installed on your box. Use your package manager or similar to install that if necessary.
- JS and TS runtimes: run `npm i` in the root of the project, which will install antlr4, antlr4ts and antlr4ng packages.
- C++ WASM Runtime: this is the most complex one to set up. Follow the [Getting Started](https://emscripten.org/docs/getting_started/downloads.html) description on how to install emscripten.

### Building

The next step is to generate the benchmark parser. Run

```bash
npm run generate-benchmark-parsers
```

which will run a script that does the actual work.

> Note: there's no Windows batch file yet. You have to run each of the calls to ANTLR4 manually.

Then build the C++ benchmark app, by executing:

```bash
npm run build-cpp
```

and finally the WebAssembly:

```bash
npm run build-wasm-release
```

Once all this has succeeded you are ready to run the benchmarks.

### Benchmarks Execution

For each runtime there's a separate NPM script available. They follow the pattern `run-xyz-benchmark` where `xyz` is either `antlr4ng`, `antlr4`, `antlr4ts` or `antlr4wasm`. Each of them will print a record like this:

```
Starting  MySQL C++ parser benchmarks
Splitter tests took 20 ms
Running antlr4 C++ parser once (cold)
    Found 944 statements in file 1 (statements.txt).
    Parsing all statements took: 1350 ms
    Found 529 statements in file 2 (bitrix_queries_cut.sql).
    Parsing all statements took: 201 ms
    Found 57 statements in file 3 (sakila-db/sakila-data.sql).
    Parsing all statements took: 4967 ms
Overall parse run took: 6539 ms
Running antlr4 C++ parser 5 times (warm) .....
    File 1 took  131 ms
    File 2 took  69 ms
    File 3 took  4935 ms
Overall parse run took 5157 ms
Done
```

This is the command to run the C++ benchmark:

```bash
npm run run-cpp-benchmark
```

Alternatively, you can open the project in VS Code, open the NPM Scripts sidebar section and click the play button for each entry.
