clang++ \
    ../../../../antlr4-cpp-runtime/*.cpp\
    ../../../../antlr4-cpp-runtime/atn/*.cpp\
    ../../../../antlr4-cpp-runtime/dfa/*.cpp\
    ../../../../antlr4-cpp-runtime/internal/*.cpp\
    ../../../../antlr4-cpp-runtime/misc/*.cpp\
    ../../../../antlr4-cpp-runtime/support/*.cpp\
    ../../../../antlr4-cpp-runtime/tree/*.cpp\
    ../../../../antlr4-cpp-runtime/tree/pattern/*.cpp\
    ../../../../antlr4-cpp-runtime/tree/xpath/*.cpp\
    MySQLBaseLexer.cpp\
    MySQLBaseRecognizer.cpp\
    MySQLLexer.cpp\
    MySQLParser.cpp\
    MySQLParserBaseListener.cpp\
    MySQLParserBaseVisitor.cpp\
    MySQLParserListener.cpp\
    MySQLParserVisitor.cpp\
    MySQLRecognizerCommon.cpp\
    parsers-common.cpp\
    ParseServiceCpp.cpp\
    main.cpp\
    -O3\
    -std=c++17 -I../../../../antlr4-cpp-runtime/\
    -o mysql-benchmark
