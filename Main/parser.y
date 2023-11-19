%{
    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<limits.h>
    #include<float.h>
    #include<bits/stdc++.h>
    using namespace std;

    void yyerror(char *);
    extern int yylex();
    //extern int yyparse();
    extern FILE *yyin;
    extern FILE *yyout;

    map<string,string> var_type;
    map<string,int> var_i;
    map<string,bool> var_b;
    map<string,double> var_d;
    map<string,char> var_c;
    map<string,string> var_s;
%}

%union {
    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;
}

%start input
%token<anytype> IDEN IMPORT DOUBLE INT STRING INTD DOUBLED BOOLD DIV MUL PLUS BOOL
%token<anytype> MINUS REM STRINGD CHAR CHARD FUNC VOID FOR WHILE
%token<anytype> COMMA DOT SEMIC ASSOP LP RP LCUR RCUR COLON GT LT GE LE EE NE IF ELSE AND OR
%type<anytype> input line library declare double_declare string_declare int_declare
%type<anytype> boolean_declare char_declare func_declare expr term factor number 
%type<anytype> more_int more_double more_bool more_char fargs type assign
%type<anytype> condition
%left OR
%left AND
%left LT GT LE GE EE NE
%left PLUS MINUS
%left DIV MUL
%nonassoc UMINUS

%%
input:
|input line
;

line:
library
|declare
|assign SEMIC
|condition SEMIC
|if
|for
|while
;

for:
FOR LP f_first f_second f_third RP LCUR input RCUR {
    cout << "parsing for loop\n";
}
;

while:
WHILE LP condition RP LCUR input RCUR {
    cout << "parsing while loop\n";
}
;

f_first:
declare
|assign SEMIC
;

f_second:
condition SEMIC
;

f_third:
assign
;

if:
IF LP condition RP LCUR input RCUR elseif {
    cout << "parsing if block\n";
}
;

elseif:
|else 
|ELSE IF LP condition RP LCUR input RCUR elseif {
    cout << "parsing else if block\n";
}
;

else:
ELSE LCUR input RCUR {
    cout << "parsing else block\n";
}
;

condition: 
expr
|comparison
|logical
;

comparison:
expr EE expr
|expr NE expr
|expr GT expr
|expr LT expr
|expr LE expr
|expr GE expr
;

logical:
|logical_term
|logical AND logical_term
|logical OR logical_term
;

logical_term:
comparison
|LP logical RP
;

library:
IMPORT IDEN {
    printf("imported library: %s\n", $2.sval);
}
;

declare:
int_declare
|double_declare
|string_declare
|boolean_declare
|char_declare
|func_declare
;

int_declare:
INT IDEN ASSOP expr more_int {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int, value -> " << $4.ival << "\n";
        var_type[name] = "INT";
        var_i[name] = $4.ival;
    }
}
|INT IDEN more_int {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
}
;

more_int:
SEMIC
|COMMA IDEN ASSOP expr more_int {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int, value -> " << $4.ival << "\n";
        var_type[name] = "INT";
        var_i[name] = $4.ival;
    }
}
|COMMA IDEN more_int {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
}
;

double_declare:
DOUBLE IDEN ASSOP expr more_double {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << $4.dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = $4.dval;
    }
}
|DOUBLE IDEN more_double {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "DOUBLE";
    }
}
;

more_double:
SEMIC
|COMMA IDEN ASSOP expr more_double {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << $4.dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = $4.dval;
    }
}
|COMMA IDEN more_double {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "double";
    }
}
;

string_declare:
STRING IDEN ASSOP STRINGD SEMIC {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string, value -> " << $4.sval << "\n";
        var_s[name] = $4.sval;
        var_type[name] = "STRING";
    }
}
|STRING IDEN SEMIC {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string\n";
        var_type[name] = "STRING";
    }
}
;

boolean_declare:
BOOL IDEN ASSOP expr more_bool {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ($4.ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = $4.bval;
    }
}
|BOOL IDEN more_bool {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
}
;

more_bool:
SEMIC
|COMMA IDEN ASSOP expr more_bool {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ($4.ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = $4.bval;
    }
}
|COMMA IDEN more_bool {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
}
;

char_declare:
CHAR IDEN ASSOP CHARD more_char {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << $4.cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = $4.cval;
    }
}
|CHAR IDEN more_char {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
}
;

more_char:
SEMIC
|COMMA IDEN ASSOP CHARD more_char {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << $4.cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = $4.cval;
    }
}
|COMMA IDEN more_char {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
}
;

func_declare:
FUNC IDEN LP fargs RP COLON type LCUR input RCUR {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclaration function -> " << name << "\n"; 
    }
    else {
        string ret = $7.sval;
        cout << "function -> " << name << ": return type -> " << ret << "\n";
        var_type[name] = "FUNC";
    }
}
;

fargs:
type IDEN {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << $1.sval<< "\n";
        var_type[name] = $1.sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
}
|type IDEN COMMA fargs {
    string name = $2.sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << $1.sval<< "\n";
        var_type[name] = $1.sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
}
;

assign:
|int_assign
|string_assign
|char_assign
|int_assign COMMA assign
|string_assign COMMA assign
|char_assign COMMA assign
;

int_assign:
IDEN ASSOP expr {
    string name = $1.sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] == "INT"){
        var_i[name] = $3.ival;
        cout << "assignment: " << name << " -> " << $3.ival << "\n";
    }
    else if (var_type[name] == "DOUBLE") {
        var_d[name] = $3.dval;
        cout << "assignment: " << name << " -> " << $3.dval << "\n";
    }
    else if (var_type[name] == "BOOL") {
        var_b[name] = $3.bval;
        string bval = "false";
        if ($3.bval) bval = "true";
        cout << "assignment: " << name << " -> " << bval << "\n";
    }
}
;

string_assign:
IDEN ASSOP STRINGD {
    string name = $1.sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "STRING") {
        cout << "Error: invalid value type -> string" << "\n";
    }
    else {
        var_s[name] = $3.sval;
        cout << "assignment: " << name << " -> " << $3.sval << "\n";
    }
}
;

char_assign:
IDEN ASSOP CHARD {
    string name = $1.sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "CHAR") {
        cout << "Error: invalid value type -> char" << "\n";
    }
    else {
        var_c[name] = $3.cval;
        cout << "assignment: " << name << " -> '" << $3.cval << "'\n";
    }
}
;

type:
INT {strcpy($$.sval,"int");}
|DOUBLE {strcpy($$.sval,"double");}
|STRING {strcpy($$.sval,"string");}
|CHAR {strcpy($$.sval,"char");}
|BOOL {strcpy($$.sval,"bool");}
|VOID {strcpy($$.sval,"void");}
;

expr:
term {
    $$.dval = $1.dval;
    $$.ival = $1.ival;
}
|MINUS expr %prec UMINUS {
    $$.dval = $2.dval;
    $$.ival = $2.ival;
}
|expr PLUS term {
    $$.dval = $1.dval + $3.dval;
    $$.ival = $1.ival + $3.ival;
}
|expr MINUS term {
    $$.dval = $1.dval - $3.dval;
    $$.ival = $1.ival - $1.ival;
}
;

term:
factor {
    $$.dval = $1.dval;
    $$.ival = $1.ival;
}
|term MUL factor {
    $$.dval = $1.dval * $3.dval;
    $$.ival = $1.ival * $1.ival;
}
|term DIV factor {
    $$.dval = $1.dval / $3.dval;
    $$.ival = $1.ival / $1.ival;
}
|term REM factor {
    $$.ival = $1.ival % $3.ival;
    $$.dval = $$.ival;
}
;

factor:
number {
    $$.dval = $1.dval;
    $$.ival = $1.ival;
}
|func_call %prec FCALL
|IDEN {
    string name = $1.sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undeclared variable -> " << name << "\n";
    }
    else {
        if (var_type[name] == "INT") {
            $$.dval = var_i[name];
            $$.ival = var_i[name];
        }
        else if (var_type[name] == "DOUBLE") {
            $$.dval = var_d[name];
            $$.ival = var_d[name];
        }
        else if (var_type[name] == "BOOL") {
            $$.dval = var_b[name];
            $$.ival = var_b[name];
        }
        else if (var_type[name] == "STRING") {
            strcpy($$.sval,var_s[name].c_str());
        }
        else {
            $$.cval = var_c[name];
        }
    }
}
|LP expr RP {
    $$.dval = $2.dval;
    $$.ival = $2.ival;
}
;

func_call:
IDEN LP data RP {
    string name = $1.sval;
    if (var_type.find(name) != var_type.end()) {
        if (var_type[name] != "FUNC") {
            cout << "Error: redeclared function -> " << name << "\n";
        }
        else {
            cout << "called function name -> " << name << "\n";
        }
    }
    else if (name == "min" || name == "max" || "gcd" == name || name == "input"||name=="output") {
        cout << "Called builtin function -> " << name << "\n";
    }
    else {
        cout << "Error: undeclared function -> " << name << "\n";
    }
}
;

data:
|INTD|DOUBLED|BOOLD|STRINGD|CHARD
|INTD COMMA data
|DOUBLED COMMA data
|BOOLD COMMA data
|STRINGD COMMA data
|CHARD COMMA data
;

number:
INTD {
    $$.dval = $1.ival;
    $$.ival = $1.ival;
}
|DOUBLED {
    $$.dval = $1.dval;
    $$.ival = $1.dval;
}
|BOOLD {
    $$.dval = $1.bval;
    $$.ival = $1.bval;
}
;


%%

int main() {
    yyin = fopen("input.txt", "r");
    yyparse();

    return 0;
}

void yyerror(char *str) {
    fprintf(stderr, "error:%s\n", str);
}
