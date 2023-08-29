# Benchmarking MySQL With Different Runtimes

## Results

| Runtime | Query Collection Cold | Query Collection Warm | ratio | Large (Binary) Inserts Cold | Large (Binary) Inserts Warm | ratio |
| ------- | --------------------- | --------------------- | ------| --------------------------- | --------------------------- | ----- |
| C++| 1.04s | 0.140s | 1.0 | 5.13s | 5.14s | 1.0 |
| JavaScript | 10.5s | 0.25s | 1.78 | 12.93s | 12.9s | 2.5 |
| WebAssembly | 3.2s | 0.95s | 6.78 | 27.6s | 28.5s | 5.5 |
| antlr4ts | 12.3s | 0.84s | 6 | 44.85s | 43.6s | 8.5 |

### Notes on the Benchmarks

For C++ there's a terminal application in the benchmarks/mysql/targets/cpp folder. WebAssembly and JavaScript target measurements were collected using the benchmark script `benchmarks/mysql/run-benchmarks.ts`. See below for how to build and run the benchmarks.

The antlr4ts test results came from the Jest tests of the [MySQL Shell for VS Code extension](https://github.com/mysql/mysql-shell-plugins/blob/master/gui/frontend/src/tests/unit-tests/parsing/mysql/MySQLParsingServices.spec.ts).

All applications used the same [MySQL grammar](https://github.com/mysql/mysql-shell-plugins/tree/master/gui/frontend/src/parsing/mysql) and the same data files.

The query collection file contains more than 900 MySQL queries of all kinds, from very simple to complex stored procedures (minimum MySQL server version used was 8.0.0). The large binary inserts file contains only a few queries but they are really large, stressing so the prediction engine of the parser. Additionally, one query contains binary (image) data which contains input characters from the whole UTF-8 range.

Each number has been measured 5 times and the average was used in the table above.

### Discussion of the Results

The C++ runtime is the fastest, as expected, but the JavaScript runtime is pretty close, which is surprising, given that scripting languages are usually much slower than compiled ones. On the other hand the WebAssembly runtime is much slower, which is also surprising, given that WebAssembly is supposed to be close to native speed. My assumption is there are way too many cross calls between JS and WASM, which is a known performance problem. And it's not clear if this can be solved in the future, if we want to stay with generated JS/TS parser files.

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
