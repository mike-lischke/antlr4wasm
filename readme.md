# ANTLR4 Typescript WebAssembly target

This projects realizes a WebAssembly target for ANTLR4. It is based on the [ANTLR4 C++ target](https://github.com/antlr/antlr4/tree/dev/runtime/Cpp) and currently in an early stage and not ready for production use.

## Status

This project is on hold now, as it did not provide the expected results (see the [benchmark readme](benchmarks/mysql/readme.md) for more details). As it turned out the JavaScript/TypeScript runtime which already exists in the ANTLR4 repository is much faster than the WebAssembly runtime. So the focus will be on improving the existing runtime instead of continuing this project.

A potential improvement of the wasm version is probably to also generate the parser/lexer files in the target language and compile all of that as a whole to WebAssembly. But then you need to have the full emscripten setup on your machine, which to avoid was one of the main goals of this project.

## Build

Patch the antlr4 runtime:

```bash
patch --directory . -p1 --unified < antlr4.patch
```

in the node_modules directory.

To build the wasm module, you need to have the [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html) installed. Then you can build the module with:

```bash
./scripts/build.sh
```

Installing the emscripten SDK usually requires additional build tools (like XCode terminal tools on macOS), it is therefore recommended to use packager tools of your platform like [Homebrew](https://brew.sh/) on macOS or [Chocolatey](https://chocolatey.org/) on Windows. All details can be found in the [Emscripten documentation](https://emscripten.org/docs/getting_started/downloads.html).

**Note:** The include path set in the VS Code project configuration file (`includePath`) must be adjusted to your local installation path of the Emscripten SDK! See the file `.vscode/c_cpp_properties.json` for details.

## Release Notes

### 0.1.0

- First public release.
- Includes all C++ runtime files, bindings for a part of that runtime and some type definitions for the generated wasm module.
