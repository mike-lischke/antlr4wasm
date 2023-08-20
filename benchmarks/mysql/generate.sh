# Generates the MySQL parser + lexer files for the benchmarks.

java -jar ../../antlr/antlr-4.13.0-complete.jar \
    -Dlanguage=Cpp -o ./generated/cpp \
    -no-visitor -listener -package antlr4 \
    -Xexact-output-dir -Werror \
    MySQLLexer.g4 MySQLParser.g4

java -jar ../../antlr/antlr-4.13.0-complete.jar \
    -Dlanguage=TypeScript -o ./generated/TypeScript \
    -no-visitor -listener -package antlr4 \
    -Xexact-output-dir -Werror \
    MySQLLexer.g4 MySQLParser.g4
