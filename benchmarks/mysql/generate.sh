# Generates the MySQL parser + lexer files for the benchmarks.

java -jar ../../antlr/antlr4-4.13.1-SNAPSHOT-complete.jar \
    -Dlanguage=Cpp -o ./targets/cpp -visitor -listener -package parsers -Xexact-output-dir -Werror \
    MySQLLexer.g4 MySQLParser.g4

java -jar ../../antlr/antlr4-4.13.1-SNAPSHOT-complete.jar \
    -Dlanguage=TypeScript -o ./targets/TypeScriptWasm -visitor -listener -package antlr4 -Xexact-output-dir -Werror \
    MySQLLexer.g4 MySQLParser.g4

java -jar ../../antlr/antlr-4.13.0-complete.jar \
    -Dlanguage=TypeScript -o ./targets/TypeScript -visitor -listener -package antlr4 -Xexact-output-dir -Werror \
    MySQLLexer.g4 MySQLParser.g4
