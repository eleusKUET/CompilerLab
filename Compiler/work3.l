%{
	// definition
	#include <bits/stdc++.h>
	using namespace std;

	string x; // here x is for storing yytext
	//int count_of_identifiers = 0;
	int count_of_keywords = 0;
	int count_of_statements = 0;
	int count_of_line_number = 0;
	stack<pair<int,char>> bracket_checker;
	int nested_depth = 0;
	int maximum_nested_depth = 0;
	set<string> identifiers;
	int condition = 0, floop = 0, wloop = 0;

	// a newline is an indicator of the end of statement
	// but multiple statement can be written in a single line seperating them with a semicolon
	
	void print(string comment, string message) {
		// cout << message << " is a " << comment << "\n";
		//cout << "input : " << message << "\n";
		//cout << "token : " << comment << "\n\n";
	}
%}

identifier   		[a-zA-Z_][a-zA-Z_0-9]{0,31}
datatype   			("integer"|"number"|"character"|"string"|"binary")
string     			[\"].*[\"]
integer    			[\+\-]?[0-9]+
number     			({integer}([\.][0-9]+)?(e{integer})|{integer}([\.][0-9]+))
binary     			("false"|"true")
character  			("'\\n'"|[\'][^\n][\'])
newline        		[\n]
semicolon			[";"]
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

iff_condition		("if"|"else if"|"else")
for 				("for")[ ]{identifier}[ ]("in")[ ]{identifier}
while 				("while")

forloop   			("for")[ ]{identifier}[ ]("in")[ ]{identifier}[ ]*[\{].*[\}]
whileloop			("while")[ ]*[\(].*[\)][ ]*[\{].*[\}]
returntype			({datatype}|"void")
routine				("function")[ ]{identifier}[ ]*[\(].*[\)][ ]*:[ ]*{returntype}[ ]*[\{].*[\}]
function 			("function")[ ]{identifier}[ ]*[\(].*[\)][ ]*:[ ]*{returntype}
LP 					[\(]
RP                  [\)]
CURL				[\{]
CURR				[\}]

%%

{binary}   {
	x = yytext; print("binary",  x);
}

{skip}|{back}|{stop}|"import" {
	x = yytext; print("keyword", x); 
	count_of_keywords++;
}

{newline} {
	x = yytext; 
	print("end of statement", x); 
	count_of_statements++;
	count_of_line_number++;
}

{semicolon} {
	x = yytext;
	print("end of statement", x);
	count_of_statements++;
}

{logical_op} {
	x = yytext; 
	print("logical_operator",  x);
}

{com_op} {
	x = yytext; 
	print("comparison operator",  x);
}

{datatype} {
	x = yytext; 
	print("datatype",  x); 
	count_of_keywords++;
}

{LP} {
	x = yytext;
	print("left paranthesis", x);
	bracket_checker.push({count_of_line_number + 1, '('});
}

{RP} {
	x = yytext;
	print("right parenthesis", x);
	if (bracket_checker.size() && bracket_checker.top().second == '(') {
		bracket_checker.pop();
	}
	else {
		bracket_checker.push({count_of_line_number + 1, ')'});
	}
}

{CURL} {
	x = yytext;
	print("left curly bracket", x);
	bracket_checker.push({count_of_line_number + 1, '{'});
	nested_depth++;
	maximum_nested_depth = max(maximum_nested_depth, nested_depth);
}

{CURR} {
	x = yytext;
	print("right curly bracket", x);
	if (bracket_checker.size() && bracket_checker.top().second == '{') {
		bracket_checker.pop();
		nested_depth--;
	}
	else {
		bracket_checker.push({count_of_line_number + 1, '}'});
	}
}

{iff_condition}	{
	x = yytext; 
	print("if condition", x);
	condition++;
}

{for} {
	x = yytext; 
	print("for loop", x);
	floop++;
}

{while}	{
	x = yytext; 
	print("while loop", x);
	wloop++;
}

{function} {
	x = yytext; 
	print("subroutine", x);
	identifiers.insert(x);
}

{identifier} {
	x = yytext; 
	print("identifier",  x); 
	identifiers.insert(x);
}

{string} {
	x = yytext; 
	print("string",  x);
}

{integer} {
	x = yytext; 
	print("integer",  x);
}

{number} {
	x = yytext;
	print("number",  x);
}

{character} {
	x = yytext; 
	print("character",  x);
}

{math_op} {
	x = yytext; 
	print("math_op",  x);
}

{ass_op} {
	x = yytext; 
	print("assignment operator",  x);
}

{ass_init} {
	x = yytext; 
	print("operation with assignment",  x);
}

{bitwise_op} {
	x = yytext; 
	print("bitwise operator",  x);
}

{indec_op} {
	x = yytext; 
	print("indec_operator",  x);
}

{comma} {
	x = yytext; 
	print("comma operator",  x);
}

{singleline} {
	x = yytext; 
	print("singleline comment", x);
}

{multiline} {
	x = yytext; 
	print("multiline comment", x);
}

[ ] {

}

. {
	x = yytext;
	print("unrecognized", x);
}

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
	yyin = freopen("input2.txt", "r", stdin);
	yyout = freopen("output2.txt", "w", stdout);
	cout << "Evaluation is running...\n";
	yylex();

	if (bracket_checker.empty()) {
		cout << "okay! all brackets are balanced\n";
		cout << "okay! all blocks are balanced\n";
		cout << "maximum_nested_depth of your program is : " << maximum_nested_depth << "\n";
	}

	while (bracket_checker.size()) {
		cout << "Unexpected " << bracket_checker.top().second << " in line " << bracket_checker.top().first << "\n";
		bracket_checker.pop();
	}

	cout << "Total identifiers found: " << identifiers.size() << "\n";
	cout << "Total keywords found   : " << count_of_keywords << "\n";
	cout << "Total statements found: " << count_of_statements << "\n";
	cout << "no of foor loop: " << floop << "\n";
	cout << "no of while loop: " << wloop << "\n";
	cout << "no of if condition: " << condition << "\n";
	return 0;
}
