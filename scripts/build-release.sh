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
    -O3\
    -std=c++17 -lembind -Iantlr4-cpp-runtime/ \
    -o wasm/antlr4-runtime-wasm.js\
    -s EXPORT_ES6=1\
    -s WASM=1\
    -s WASM_BIGINT=1\
    -s ALLOW_MEMORY_GROWTH=1\
    -s ASSERTIONS\
    -fexceptions\
    -g
