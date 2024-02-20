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

## Notes on the TypeScript Runtime

The existing TypeScript runtime only comes with a subset of the required type definitions, so it did not compile out of the box. This [patch file](../antlr4%20TS%20runtime%20changes.patch) contains the minimal changes required to make it compile.

Also the generated files need some (manual) changes: the test scripts are executed using ts-node with Node.js' ESM support enabled. This requires that all imports must include the `.js` extension (even for TypeScript source files). And there are a couple actions in the MySQL grammar that are tailored to the new WebAssembly runtime, for example `this.type = ...`, which need to be changed to `this._type = ...`.

## Running the Benchmarks

Before you can run the JS/TS benchmarks, you have to generate the parser code and you must install the antlr4 runtime, by running `npm install` in the root directory of this repository. After that generate the parser code by running `npm run generate-benchmark-parsers`. This will generate the parser code for 3 targets: C++, JS/TS and WebAssembly in the `benchmarks/mysql/targets` folder.

The C++ benchmark first must be built. You need `clang` for that. The (very simple, no fancy cmake) `build.sh` script will create an executable named `mysql-benchmark` in the same folder, which you can directly execute from there (don't move it, or the paths won't work anymore).

After that run the benchmarks using `npm run run-benchmarks`. This will run the WebAssembly parser first and then the JS/TS parser. Each run will print its results to the console.
