# Benchmarking MySQL With Different Runtimes

## Results

| Runtime | Query Collection Cold | Query Collection Warm | ratio | Large (Binary) Inserts Cold | Large (Binary) Inserts Warm | ratio |
| ------- | --------------------- | --------------------- | ------| --------------------------- | --------------------------- | ----- |
| C++| 3.96s | 0.437s | 1.0 | 13.2s | 12.2s | 1.0 |
| WebAssembly | 6.17s | 1.77s | 4.05 | 56.5s | 60s | 4.93 |
| antlr4-ts | 12.3s | 0.84s | 1.9 | 44.85s | 43.6s | 3.57 |
| JavaScript | 72.5s | 5.2s | 11.9 | 248.9s | 250.2s | 20.5 |

### Notes on the Benchmarks

The numbers have been taken from different applications. Only WebAssembly and JavaScript target measurements were collected using the benchmark tool in this repository. The C++ parser test used the parser test application, which is part of the [MySQL Workbench repository](https://github.com/mysql/mysql-workbench/tree/8.0/library/parsers/grammars/test.parser). And the antlr4ts test results come from the Jest tests of the [MySQL Shell for VS Code extension](https://github.com/mysql/mysql-shell-plugins/blob/master/gui/frontend/src/tests/unit-tests/parsing/mysql/MySQLParsingServices.spec.ts). All applications used the same [MySQL grammar](https://github.com/mysql/mysql-shell-plugins/tree/master/gui/frontend/src/parsing/mysql), except for the C++ parser test app, which used a slightly older version of the grammar, and the same data files.

The query collection file contains more than 900 MySQL queries of all kinds, from very simple to complex stored procedures (minimum MySQL server version used was 8.0.0). The large binary inserts file contains only a few queries but they are really large, stressing so the prediction engine of the parser. Additionally, one query contains binary (image) data which contains input characters from the whole UTF-8 range.

Each number has been measured 5 times and the average was used in the table above.

### Discussion of the Results

The C++ runtime is the fastest, as expected, but antlr4ts is pretty close, given that it is pure JavaScript executing. This runtime got some optimization and it really shows. Imagine one could apply those optimizations to the C++ target!

The JavaScript target is orders of magnitudes slower than the C++ target. Also this is an expected result. Compare this to antlr4ts to see how much that is optimized.

The results for the WebAssembly runtime show a mixed picture. If there were no antlr4ts then the results would be pretty good (3 times faster for the query collection and 4 times faster for the large binary inserts). Note: we are looking here only at the results produces with warm runtimes, that is, the internal structures for prediction have been created.

But on the other hand the WebAssembly version should operate close to the C++ speed, which is not the case, particularly for the large insert data. What's also not visible here is that the memory consumption of the WebAssembly version is very high and indicates some memory leaks. Fixing them is the next step in the development. Another point here is that the warm run for the WebAssembly version is actually slower than the cold one, which is a pretty surprising result, but might have to do with the high memory pressure.

## Notes on MySQL

- For MySQL to execute successfully, you need to increase the Node.js stack size. This requires changing the [build configuration](https://emscripten.org/docs/tools_reference/emsdk.html#compiler-configuration-file) of emscripten. There's also a FAQ entry here: https://emscripten.org/docs/getting_started/FAQ.html#why-do-i-get-a-stack-size-error-when-optimizing-rangeerror-maximum-call-stack-size-exceeded-or-similar
- Multiple inheritance is a problem for emscripten. You can specify only one base class and using the derived class in places for any other base class is needed will cause an error.
- Exception handling is tricky.
  - By default an exception in wasm code just stops the app.
  - Enable catching either with `-fexceptions` or `-fwasm-exceptions`. The latter is more efficient but requires a newer browser.
  - Using wasm exceptions requires [additional handling](https://emscripten.org/docs/porting/exceptions.html#handling-c-exceptions-from-javascript).
  - Exceptions thrown in C++ cannot be identified using `instanceof` in JS. To get wasm exception information, you can enable `-sEXPORT_EXCEPTION_HANDLING_HELPERS`, but that will partially disable optimization.

## Notes on the TypeScript Runtime

The existing TypeScript runtime only comes with a subset of the required type definitions, so it did not compile out of the box. This [patch file](../antlr4%20TS%20runtime%20changes.patch) contains the minimal changes required to make it compile.

Also the generated files need some (manual) changes: the test scripts are executed using ts-node with Node.js' ESM support enabled. This requires that all imports must include the `.js` extension (even for TypeScript source files). And there are a couple actions in the MySQL grammar that are tailored to the new WebAssembly runtime, for example `this.type = ...`, which need to be changed to `this._type = ...`.

## Running the Benchmarks

Before you can run the benchmarks, you have to generate the parser code and you must install the antlr4 runtime, by running `npm install` in the root directory of this repository. After that generate the parser code by running `npm run generate-benchmark-parsers`. This will generate the parser code for 3 targets: C++, JS/TS and WebAssembly in the `benchmarks/mysql/targets` folder.

The C++ code is not used for the benchmarks yet. You have to apply the changes to the JS/TS runtime + node module like mentioned above, to compile.

After that run the benchmarks using `npm run run-benchmarks`. This will run the WebAssembly parser first and then the JS/TS parser. Each run will print its results to the console.
