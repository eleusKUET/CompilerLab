%{
	// definition
	#include <bits/stdc++.h>
	using namespace std;

	string x; // here x is for storing yytext
	int count_of_identifiers = 0;
	int count_of_keywords = 0;
	int count_of_statements = 0;

	// a newline is an indicator of the end of statement
	// but multiple statement can be written in a single line seperating them with a semicolon
	
	void print(string comment, string message) {
		// cout << message << " is a " << comment << "\n";
		cout << "input : " << message << "\n";
		cout << "token : " << comment << "\n\n";
	}
%}

identifier   		[a-zA-Z_][a-zA-Z_0-9]{0,31}
datatype   			("integer"|"number"|"character"|"string"|"binary")
string     			[\"].*[\"]
integer    			[\+\-]?[0-9]+
number     			({integer}([\.]{integer})?(e[\+\-]?{integer})|{integer}([\.]{integer}))
binary     			("false"|"true")
character  			("'\\n'"|[\'][^\n][\'])
eof        			([\n]|";")
math_op    			(\+|\-|\*|\/|%)
ass_op 				=
ass_init            (\+=|\-=|\*=|\/=|%=|&=|\|=|\^=|<<=|>>=)
com_op              ("is"|"is not"|<|>|<=|>=)
logical_op			("or"|"and"|"xor")
bitwise_op 			(&|\|\^|>>|<<)
indec_op 			("++"|"--")
comma				,
skip	          	("continue")
back              	("return")
stop				("break")
singleline			("//")[^\n]*
multiline			("/\*").*?("\*/")
iff            		("if")[ ]*[\(].*[\)][ ]*[\{].*[\}]
elseif            	("else if")[ ]*[\(].*[\)][ ]*[\{].*[\}]
else            	("else")[ ]*[\{].*[\}]
if_condition		{iff}[ ]*{elseif}*?{else}?

forloop   			("for")[ ]{identifier}[ ]("in")[ ]{identifier}[ ]*[\{].*[\}]
whileloop			("while")[ ]*[\(].*[\)][ ]*[\{].*[\}]
returntype			({datatype}|"void")
routine				("function")[ ]{identifier}[ ]*[\(].*[\)][ ]*:[ ]*{returntype}[ ]*[\{].*[\}]

%%

{binary}    		{x = yytext; print("binary",  x);}
{skip}|{back}|{stop} {x = yytext; print("keyword", x); count_of_keywords++;}
{eof}				{x = yytext; print("end of statement", x); count_of_statements++;}
{logical_op}  		{x = yytext; print("logical_operator",  x);}
{com_op}      		{x = yytext; print("comparison operator",  x);}
{datatype}    		{x = yytext; print("datatype",  x); count_of_keywords++;}
{identifier}    	{x = yytext; print("identifier",  x); count_of_identifiers++;}
{string}      		{x = yytext; print("string",  x);}
{integer}     		{x = yytext; print("integer",  x);}
{number}      		{x = yytext; print("number",  x);}
{character}   		{x = yytext; print("character",  x);}
{math_op}     		{x = yytext; print("math_op",  x);}
{ass_op}      		{x = yytext; print("assignment operator",  x);}
{ass_init}    		{x = yytext; print("operation with assignment",  x);}
{bitwise_op}  		{x = yytext; print("bitwise operator",  x);}
{indec_op}    		{x = yytext; print("indec_operator",  x);}
{comma}       		{x = yytext; print("comma operator",  x);}
{singleline}		{x = yytext; print("singleline comment", x);}
{multiline}			{x = yytext; print("multiline comment", x);}
{if_condition}		{x = yytext; print("if condition", x);}
{forloop}			{x = yytext; print("for loop", x);}
{whileloop}	 		{x = yytext; print("while loop", x);}
{routine}			{x = yytext; print("subroutine", x);}
.					{}

%%

int yywrap()
{
	return 1;
}

void replaceNewlinesWithWhitespace(const std::string filename) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return;
    }
    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) {
        content += line + " ";
    }
    inputFile.close();
    std::ofstream outputFile("temp");
    if (!outputFile) {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return;
    }
    outputFile << content;
    outputFile.close();
}

int main()
{
	// replaceNewlinesWithWhitespace("input.txt");
	//yyin = freopen("temp", "r", stdin);
	yyin = freopen("input.txt", "r", stdin);
	//yyout = freopen("output.txt", "r", stdout);
	cout << "Evaluation is running...\n";
	yylex();

	cout << "Total identifiers found: " << count_of_identifiers << "\n";
	cout << "Total keywords found   : " << count_of_keywords << "\n";
	cout << "Total statements fountd: " << count_of_statements << "\n";

	return 0;
}