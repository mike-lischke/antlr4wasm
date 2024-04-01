# Benchmarking MySQL With Different Runtimes

## Results

The latest MySQL runtime benchmarks can be seen in the [benchmarking repository](https://github.com/mike-lischke/antlr4-runtime-benchmarks/tree/main/src/mysql).

## Emscripten Notes

- Multiple inheritance is a problem for emscripten. You can specify only one base class. Using the derived class in places for any other base class is needed will cause an error.
- Exception handling is tricky.
  - By default an exception in wasm code just stops the app.
  - Enable catching either with `-fexceptions` or `-fwasm-exceptions`. The latter is more efficient but requires a newer browser.
  - Using wasm exceptions requires [additional handling](https://emscripten.org/docs/porting/exceptions.html#handling-c-exceptions-from-javascript).
  - Exceptions thrown in C++ cannot be identified using `instanceof` in JS. To get wasm exception information, you can enable `-sEXPORT_EXCEPTION_HANDLING_HELPERS`, but that will partially disable optimization.

## Running the Benchmarks

All instructions are explained in the [benchmarking repository](https://github.com/mike-lischke/antlr4-runtime-benchmarks/tree/main/src/mysql).
