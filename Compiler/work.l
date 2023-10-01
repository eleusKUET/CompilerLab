%{
	// definition
	#include <bits/stdc++.h>
	using namespace std;
	void print(string comment, string message) {
		cout << message << " is a " << comment << "\n";
	}
%}

variable   			[a-zA-Z_][a-zA-Z_0-9]{0,31}
datatype   			("integer"|"number"|"character"|"string"|"binary")
string     			[\"][^\;][\"]
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
multiline			("/\*").*("\*/")
iff            		("if")[ ]*[\(].*[\)][ ]*[\{].*[\}]
elseif            	("else if")[ ]*[\(].*[\)][ ]*[\{].*[\}]
else            	("else")[ ]*[\{].*[\}]
if_condition		{iff}[ ]*{elseif}*?{else}?

forloop   			("for")[ ]{variable}[ ]("in")[ ]{variable}[ ]*[\{].*[\}]
whileloop			("while")[ ]*[\(].*[\)][ ]*[\{].*[\}]
returntype			({datatype}|"void")
routine				("function")[ ]{variable}[ ]*[\(].*[\)][ ]*:[ ]*{returntype}[ ]*[\{].*[\}]

%%

{binary}    		{string x = yytext; print("binary",  x);}
{logical_op}  		{string x = yytext; print("logical_operator",  x);}
{com_op}      		{string x = yytext; print("comparison operator",  x);}
{datatype}    		{string x = yytext; print("datatype",  x);}
{variable}    		{string x = yytext; print("variable",  x);}
{string}      		{string x = yytext; print("string",  x);}
{integer}     		{string x = yytext; print("integer",  x);}
{number}      		{string x = yytext; print("number",  x);}
{character}   		{string x = yytext; print("character",  x);}
{math_op}     		{string x = yytext; print("math_op",  x);}
{ass_op}      		{string x = yytext; print("assignment operator",  x);}
{ass_init}    		{string x = yytext; print("operation with assignment",  x);}
{bitwise_op}  		{string x = yytext; print("bitwise operator",  x);}
{indec_op}    		{string x = yytext; print("indec_operator",  x);}
{comma}       		{string x = yytext; print("comma operator",  x);}
{singleline}		{string x = yytext; print("singleline comment", x);}
{multiline}			{string x = yytext; print("multiline comment", x);}
{if_condition}		{string x = yytext; print("if condition", x);}
{forloop}			{string x = yytext; print("for loop", x);}
{whileloop}	 		{string x = yytext; print("while loop", x);}
{routine}			{string x = yytext; print("subroutine", x);}

%%

int yywrap()
{
	return 1;
}

void replaceNewlinesWithWhitespace(const std::string filename) {
    // Open the file for reading
    std::ifstream inputFile(filename);

    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return;
    }

    // Read the content of the file into a string
    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) {
        content += line + " "; // Replace newline with whitespace
    }

    // Close the input file
    inputFile.close();

    // Open the file for writing (truncating it)
    std::ofstream outputFile("temp");

    if (!outputFile) {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return;
    }

    // Write the modified content back to the file
    outputFile << content;

    // Close the output file
    outputFile.close();

    // std::cout << "Newlines replaced with whitespace and saved to " << filename << std::endl;
}

int main()
{
	// replaceNewlinesWithWhitespace("input.txt");
	//yyin = freopen("temp", "r", stdin);
	yyin = freopen("input.txt", "r", stdin);
	//yyout = freopen("output.txt", "r", stdout);
	cout << "Evaluation is running...\n";
	yylex();

	return 0;
}