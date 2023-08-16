# Generates test parser + lexer files for C++ and TypeScript.

java -jar tests/antlr-4.13.0-complete.jar \
    -Dlanguage=Cpp -o tests/generated/cpp \
    -no-visitor -no-listener -package antlr4 \
    -Xexact-output-dir -Werror \
    tests/grammars/Whitebox.g4 # tests/grammars/CPP14.g4 tests/grammars/Expr.g4

java -jar tests/antlr-4.13.0-complete.jar \
    -Dlanguage=TypeScript -o tests/generated/TypeScript \
    -no-visitor -no-listener -package antlr4 \
    -Xexact-output-dir -Werror \
    tests/grammars/Whitebox.g4 # tests/grammars/CPP14.g4 tests/grammars/Expr.g4
