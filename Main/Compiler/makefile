all:
	lex lexer.l 
	bison -d -t parser.y
	clear
	g++ -w parser.tab.c lex.yy.c
	./a.out
