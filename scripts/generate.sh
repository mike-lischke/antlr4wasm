# Generates test parser + lexer files for C++ and TypeScript.

java -jar antlr/antlr-4.13.1-complete.jar \
    -Dlanguage=Cpp -o tests/generated/cpp \
    -no-visitor -no-listener -package antlr4 \
    -Xexact-output-dir -Werror \
    tests/grammars/Whitebox.g4 # tests/grammars/CPP14.g4 tests/grammars/Expr.g4

java -jar antlr/antlr-4.13.1-complete.jar \
    -Dlanguage=TypeScript -o tests/generated/TypeScript \
    -no-visitor -no-listener -package antlr4 \
    -Xexact-output-dir -Werror \
    tests/grammars/Whitebox.g4 # tests/grammars/CPP14.g4 tests/grammars/Expr.g4
