/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDEN = 258,                    /* IDEN  */
    IMPORT = 259,                  /* IMPORT  */
    DOUBLE = 260,                  /* DOUBLE  */
    INT = 261,                     /* INT  */
    STRING = 262,                  /* STRING  */
    INTD = 263,                    /* INTD  */
    DOUBLED = 264,                 /* DOUBLED  */
    BOOLD = 265,                   /* BOOLD  */
    DIV = 266,                     /* DIV  */
    MUL = 267,                     /* MUL  */
    PLUS = 268,                    /* PLUS  */
    BOOL = 269,                    /* BOOL  */
    MINUS = 270,                   /* MINUS  */
    REM = 271,                     /* REM  */
    STRINGD = 272,                 /* STRINGD  */
    CHAR = 273,                    /* CHAR  */
    CHARD = 274,                   /* CHARD  */
    FUNC = 275,                    /* FUNC  */
    VOID = 276,                    /* VOID  */
    FOR = 277,                     /* FOR  */
    WHILE = 278,                   /* WHILE  */
    COMMA = 279,                   /* COMMA  */
    DOT = 280,                     /* DOT  */
    SEMIC = 281,                   /* SEMIC  */
    ASSOP = 282,                   /* ASSOP  */
    LP = 283,                      /* LP  */
    RP = 284,                      /* RP  */
    LCUR = 285,                    /* LCUR  */
    RCUR = 286,                    /* RCUR  */
    COLON = 287,                   /* COLON  */
    GT = 288,                      /* GT  */
    LT = 289,                      /* LT  */
    GE = 290,                      /* GE  */
    LE = 291,                      /* LE  */
    EE = 292,                      /* EE  */
    NE = 293,                      /* NE  */
    IF = 294,                      /* IF  */
    ELSE = 295,                    /* ELSE  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    UMINUS = 298,                  /* UMINUS  */
    FCALL = 299                    /* FCALL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;

#line 118 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
