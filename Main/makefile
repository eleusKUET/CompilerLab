all:
	lex lexer.l 
	bison -d -t parser.y
	g++ parser.tab.c lex.yy.c
	./a.out
