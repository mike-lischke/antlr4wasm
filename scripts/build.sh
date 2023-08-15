em++ \
    wasm/antlr4-runtime-wrapper.cpp \
    antlr4-cpp-runtime/*.cpp\
    antlr4-cpp-runtime/atn/*.cpp\
    antlr4-cpp-runtime/dfa/*.cpp\
    antlr4-cpp-runtime/internal/*.cpp\
    antlr4-cpp-runtime/misc/*.cpp\
    antlr4-cpp-runtime/support/*.cpp\
    antlr4-cpp-runtime/tree/*.cpp\
    antlr4-cpp-runtime/tree/pattern/*.cpp\
    antlr4-cpp-runtime/tree/xpath/*.cpp\
    -O0\
    -std=c++17 -lembind -Iantlr4-cpp-runtime/ \
    -o wasm/antlr4-runtime-wasm.js\
    -s EXPORT_ES6=1\
    -s WASM=1\
    -s WASM_BIGINT=1\
    -s ALLOW_MEMORY_GROWTH=1\
    -s DEMANGLE_SUPPORT=1\
    -s ERROR_ON_WASM_CHANGES_AFTER_LINK=1\
    -fwasm-exceptions\
    -fsanitize=undefined\
    -fsanitize=address\
    -g

# -- memoryProfiler
# -s TOTAL_MEMORY=1024MB
# -s LINKABLE=1
# -s EXPORT_ALL=1
# -s BUILD_AS_WORKER=1
# --embind-emit-tsd wasm/test.d.ts\
# -s ERROR_ON_WASM_CHANGES_AFTER_LINK=1\
