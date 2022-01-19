# Project Flex - Bison

A parser and lexer project from our University using Bison and Flex. The report is in Greek.

- we used the following commands (in the specified order) to compile and execute our parser:
```
bison -d myParser.y 

lex myParser.l 

gcc lex.yy.c myParser.tab.c -o myParser 

./myParser.exe input.c
```
