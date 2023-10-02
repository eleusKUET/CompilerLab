%{

// definition
#include <bits/stdc++.h>
using namespace std;

int count_of_identifiers = 0;
int count_of_keywords = 0;
int count_of_statements = 0;
int current_scope = 0;

map<string, pair<string,vector<int>>> identifiers;

// a newline is an indicator of the end of statement
// but multiple statement can be written in a single line seperating them with a semicolon
	
void print(string comment, string message) {
	// cout << message << " is a " << comment << "\n";
	cout << "input : " << message << "\n";
	cout << "token : " << comment << "\n\n";
}

set<string> keywords = {
	"integer", "number", "character", "string", "binary", 
	"if", "import", 
	"for", "in", "continue", "return", "break", "else", "else if",
	"while", "void", "function"
};

set<string> operators = {
	"+", "-", "*", "/", ",", "=", "%", "++", "--", "or", "and", "not",
	"xor", "is", "is not", ">", "<", "<=", ">=", "&", "|", "^", ">>",
	"<<", "+=", "-=", "*=", "%=", "/=", "&=", "|=", "^=", "<<=", ">>="
};

bool isIdentifier(string input) {
	if (input.empty() || (!isalpha(input[0]) && input[0] != '_')) return false;
	for (auto it : input){
		if (isalnum(it) || it == '_') continue;
		return false;
	}
	return keywords.count(input) == 0;
}

bool isOperator(string input) {
	return operators.count(input);
}

string removeExtraWhitespace(string input) {
	string result;
	int length = input.size();
	for (int i = 0, j; i < length; i++) {
		if (input[i] != ' ') {
			result += input[i];
			continue;
		}
		j = i;
		while (j < length && input[j] == ' ') j++;
		result += input[i];
		i = j - 1;
	}
	return result;
}

string stripInput(string input) {
	deque<char> result(input.begin(), input.end());
	while (result.size() && (result[0] == ' ' || result[0] == '\n')) result.pop_front();
	while (result.size() && result.back() == ' ' || result.back() == '\n') result.pop_back();
	string res;
	for (auto it : result) {
		res += it;
	}
	return res;
}

vector<string> tokenizer(string input, string seperator) {
	vector<string> words;
	string token;
	for (int i = 0; i < input.size(); i++) {
		if (input.substr(i, seperator.size()) == seperator) {
			if (token.empty() == false) {
				words.push_back(token);
			}
			token.clear();
		}
		else {
			token += input[i];
		}
	}
	if (token.empty() == false) {
		words.push_back(token);
	}
	return words;
}

bool addIdentifier(string input, string type)
{
	input = stripInput(removeExtraWhitespace(input));
	if (identifiers.find(input) == identifiers.end()) {
		identifiers[input] = {type, {current_scope}};
		return true;
	}

	auto &res = identifiers[input];
	if (res.second.second.size() && res.second.first != type) {
		cout << input << " is already declared as " << res.second.first << "\n";
		return false;
	}
	while (res.second.second.size() && res.second.second.back() > current_scope) {
		res.second.second.pop_back();
	}
	if (res.second.second.size() && res.second.second.back() == current_scope) {
		cout << input << " is already declared in the scope\n";
		return false;
	}
	res.second.second.push_back(current_scope);
	res.second.first = type;
	return true;
}

bool isKeyword(string input) {
	return keywords.count(stripInput(removeExtraWhitespace(input)));
}

bool isEOS(string input) {
	input = stripInput(removeExtraWhitespace(input));
	return (input == ";" || input == "\n");
}

bool isChar(string input) {
	input = stripInput(removeExtraWhitespace(input));
	if (input.size() != 3) return false;
	return input[0] == '\'' && input[2] == '\'';
}

bool isString(string input) {
	input = stripInput(removeExtraWhitespace(input));
	deque<char> tmp(input.begin(), input.end());
	if(tmp.empty() || tmp[0] != '"') return false;
	tmp.pop_back();
	while (tmp.size()) {
		if (tmp.front() == '\\') {
			if (tmp.size()) tmp.pop_front();
			else return false;
		}
		else if (tmp.front() == '"') break;
		tmp.pop_front();
	}
	return tmp.size() == 1 && tmp[0] == '"';
}

bool isInteger(string input, bool sign) {
   	input = stripInput(removeExtraWhitespace(input));
   	if (input.empty()) return false;
   	deque<char> tmp(input.begin(), input.end());
   	if (sign) {
   		if (tmp[0] == '+' || tmp[0] == '-') tmp.pop_front();
   	}
   	for (auto it : tmp) {
   		if (!isdigit(it)) return false;
   	}
   	return true;
}

bool isBinary(string input) {
	input = stripInput(removeExtraWhitespace(input));
   	return (input == "true" || input == "false");
}

bool isNumber(string input) {
	input = stripInput(removeExtraWhitespace(input));
	auto words = tokenizer(input, "e");
	if (words.size() == 2) {
		auto tmp = tokenizer(words[0], ".");
		if (tmp.size() == 2) {
			return isInteger(tmp[0], true) && isInteger(tmp[1], false) && isInteger(words[1], true);
		}
		return isInteger(words[0], true);
	}
	return isInteger(words[0], true);
}

string typeId(string input) {
	input = stripInput(removeExtraWhitespace(input));
	if(isInteger(input)) return "integer";
	if (isBinary(input)) return "Binary";
	if (isChar(input)) return "character";
	if (isString(input)) return "string";
	if (isNumber(input)) return "number";
	return "unknown";
}

void import(string input) {
	cout << "Your input: " << input << "\n";
	cout << "Program verdict: \n";

	input = stripInput(removeExtraWhitespace(input));
	auto words = tokenizer(input, ",");
	if (words.empty()) return;

	vector<string> temp;
	for (auto it : words) {
		auto _ = tokenizer(it, " ");
		for (auto j : _ ){ 
			temp.push_back(j);
		}
	}

	words = temp;

	int count_of_lib = 0;
	int count_of_key = 0;
	vector<string> result;
	for (auto it : words) {
		if (isKeyword(it)) {
			result.push_back(it + " is keyword");
			count_of_key++;
		}
		else if (isIdentifier(it)) {
			if (addIdentifier(it)) {
				result.push_back(it + " is a lib");
				count_of_lib++;
			}
			else {
				return;
			}
		}
		else if (isOperator(it)) {
			result.push_back(it + " is a operator");
		}
		else if (isEOS(it)) {
			result.push_back(it + " is the end of statement");
		}
		else {
			cout << "Unrecognized : " << it << "\n";
			return;
		}
	}
	result.push_back("libraries have been imported");
	for (auto it : result) {
		cout << it << "\n";
	}
	cout << "No of keywords found: " << count_of_key << "\n";
	cout << "No of identifiers found: " << count_of_lib << "\n";
	cout << "\n";
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
import				("import")
forloop   			("for")[ ]{identifier}[ ]("in")[ ]{identifier}[ ]*[\{].*[\}]
whileloop			("while")[ ]*[\(].*[\)][ ]*[\{].*[\}]
returntype			({datatype}|"void")
routine				("function")[ ]{identifier}[ ]*[\(].*[\)][ ]*:[ ]*{returntype}[ ]*[\{].*[\}]
routine_call 		{identifier}[ ]*[\(].*[\)]
SP  				[ ]+

%%

{import}{SP}{identifier}([ ]*?,[ ]*?{identifier})*{eof} {
	string statement = yytext;
	import(statement);
}

{datatype}{SP}{identifier}([ ]*=[ ]*[^,]+)?([ ]*?,[ ]*?{identifier})*{eof} {
	string statement = yytext;
	import(statement);
}

. {cout << yytext << "\n";}
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

	//cout << "Total identifiers found: " << count_of_identifiers << "\n";
	//cout << "Total keywords found   : " << count_of_keywords << "\n";
	//cout << "Total statements fountd: " << count_of_statements << "\n";

	return 0;
}
