%{
    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<limits.h>
    #include<float.h>
    #include<bits/stdc++.h>
    using namespace std;
    #include "parser.tab.h"

    void yyerror(char *);
%}

integer    			[0-9]+
number     			({integer}([\.][0-9]+)?(e[\+\-]?{integer})|{integer}([\.][0-9]+))

%%

"import" {
    return IMPORT;
}

"int" {
    return INT;
}

"double" {
    return DOUBLE;
}

"boolean" {
    return BOOL;
}

"char" {
    return CHAR;
}

"string" {
    return STRING;
}

"func" {
    return FUNC;
}

"void" {
    return VOID;
}

"and" {
    return AND;
}

"or" {
    return OR;
}

("true"|"false") {
    string temp = yytext;
    yylval.anytype.bval = (temp == "true");
    return BOOLD;
}

"for" {
    return FOR;
}

"if" {
    return IF;
}

"else" {
    return ELSE;
}

"while" {
    return WHILE;
}

[a-zA-Z_][a-zA-Z_0-9]{0,31} {
    strcpy(yylval.anytype.sval, yytext);
    return IDEN;
}

{integer} {
    yylval.anytype.ival = atoi(yytext);
    return INTD;
}

{number} {
    yylval.anytype.dval = atof(yytext);
    return DOUBLED;
}

"+" {
    return PLUS;
}

"=" {
    return ASSOP;
}

"<" {
    return LT;
}

">" {
    return GT;
}

"<=" {
    return LE;
}

">=" {
    return GE;
}

"==" {
    return EE;
}

"!=" {
    return NE;
}

":" {
    return COLON;
}

"-" {
    return MINUS;
}

"*" {
    return MUL;
}

"/" {
    return DIV;
}

"%" {
    return REM;
}

"(" {
    return LP;
}
")" {
    return RP;
}

"{" {
    return LCUR;
}

"}" {
    return RCUR;
}

\".*\" {
    strcpy(yylval.anytype.sval, yytext);
    return STRINGD;
}
\'.\' {
    yylval.anytype.cval = yytext[1];
    return CHARD;
}

";" {
    return SEMIC;
}

"," {
    return COMMA;
}

"." {
    return DOT;
}

[ \t\n] {

}

. {
    printf("Unrecognized character -> %s\n", yytext);
}
%%

int yywrap() {

    return 1;
}