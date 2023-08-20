# Notes on MySQL

- For MySQL to execute successfully, you need to increase the Node.js stack size. This requires changing the [build configuration](https://emscripten.org/docs/tools_reference/emsdk.html#compiler-configuration-file) of emscripten. There's also a FAQ entry here: https://emscripten.org/docs/getting_started/FAQ.html#why-do-i-get-a-stack-size-error-when-optimizing-rangeerror-maximum-call-stack-size-exceeded-or-similar
- Multiple inheritance is a problem for emscripten. You can specify only one base class and using the derived class in places for any other base class is needed will cause an error.
- Exception handling is tricky.
  - By default an exception in wasm code just stops the app.
  - Enable catching either with `-fexceptions` or `-fwasm-exceptions`. The latter is more efficient but requires a newer browser.
  - Using wasm exceptions requires [additional handling](https://emscripten.org/docs/porting/exceptions.html#handling-c-exceptions-from-javascript).
  - Exceptions thrown in C++ cannot be identified using `instanceof` in JS. To get wasm exception information, you can enable `-sEXPORT_EXCEPTION_HANDLING_HELPERS`, but that will partially disable optimization.
