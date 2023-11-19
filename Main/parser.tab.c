/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 94 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDEN = 3,                       /* IDEN  */
  YYSYMBOL_IMPORT = 4,                     /* IMPORT  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_INTD = 8,                       /* INTD  */
  YYSYMBOL_DOUBLED = 9,                    /* DOUBLED  */
  YYSYMBOL_BOOLD = 10,                     /* BOOLD  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_MUL = 12,                       /* MUL  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_BOOL = 14,                      /* BOOL  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_REM = 16,                       /* REM  */
  YYSYMBOL_STRINGD = 17,                   /* STRINGD  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_CHARD = 19,                     /* CHARD  */
  YYSYMBOL_FUNC = 20,                      /* FUNC  */
  YYSYMBOL_VOID = 21,                      /* VOID  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_DOT = 25,                       /* DOT  */
  YYSYMBOL_SEMIC = 26,                     /* SEMIC  */
  YYSYMBOL_ASSOP = 27,                     /* ASSOP  */
  YYSYMBOL_LP = 28,                        /* LP  */
  YYSYMBOL_RP = 29,                        /* RP  */
  YYSYMBOL_LCUR = 30,                      /* LCUR  */
  YYSYMBOL_RCUR = 31,                      /* RCUR  */
  YYSYMBOL_COLON = 32,                     /* COLON  */
  YYSYMBOL_GT = 33,                        /* GT  */
  YYSYMBOL_LT = 34,                        /* LT  */
  YYSYMBOL_GE = 35,                        /* GE  */
  YYSYMBOL_LE = 36,                        /* LE  */
  YYSYMBOL_EE = 37,                        /* EE  */
  YYSYMBOL_NE = 38,                        /* NE  */
  YYSYMBOL_IF = 39,                        /* IF  */
  YYSYMBOL_ELSE = 40,                      /* ELSE  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_FCALL = 44,                     /* FCALL  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_input = 46,                     /* input  */
  YYSYMBOL_line = 47,                      /* line  */
  YYSYMBOL_for = 48,                       /* for  */
  YYSYMBOL_while = 49,                     /* while  */
  YYSYMBOL_f_first = 50,                   /* f_first  */
  YYSYMBOL_f_second = 51,                  /* f_second  */
  YYSYMBOL_f_third = 52,                   /* f_third  */
  YYSYMBOL_if = 53,                        /* if  */
  YYSYMBOL_elseif = 54,                    /* elseif  */
  YYSYMBOL_else = 55,                      /* else  */
  YYSYMBOL_condition = 56,                 /* condition  */
  YYSYMBOL_comparison = 57,                /* comparison  */
  YYSYMBOL_logical = 58,                   /* logical  */
  YYSYMBOL_logical_term = 59,              /* logical_term  */
  YYSYMBOL_library = 60,                   /* library  */
  YYSYMBOL_declare = 61,                   /* declare  */
  YYSYMBOL_int_declare = 62,               /* int_declare  */
  YYSYMBOL_more_int = 63,                  /* more_int  */
  YYSYMBOL_double_declare = 64,            /* double_declare  */
  YYSYMBOL_more_double = 65,               /* more_double  */
  YYSYMBOL_string_declare = 66,            /* string_declare  */
  YYSYMBOL_boolean_declare = 67,           /* boolean_declare  */
  YYSYMBOL_more_bool = 68,                 /* more_bool  */
  YYSYMBOL_char_declare = 69,              /* char_declare  */
  YYSYMBOL_more_char = 70,                 /* more_char  */
  YYSYMBOL_func_declare = 71,              /* func_declare  */
  YYSYMBOL_fargs = 72,                     /* fargs  */
  YYSYMBOL_assign = 73,                    /* assign  */
  YYSYMBOL_int_assign = 74,                /* int_assign  */
  YYSYMBOL_string_assign = 75,             /* string_assign  */
  YYSYMBOL_char_assign = 76,               /* char_assign  */
  YYSYMBOL_type = 77,                      /* type  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_factor = 80,                    /* factor  */
  YYSYMBOL_func_call = 81,                 /* func_call  */
  YYSYMBOL_data = 82,                      /* data  */
  YYSYMBOL_number = 83                     /* number  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    55,    56,    57,    58,    59,    60,
      61,    65,    71,    77,    78,    82,    86,    90,    95,    96,
      97,   103,   109,   110,   111,   115,   116,   117,   118,   119,
     120,   123,   124,   125,   126,   130,   131,   135,   141,   142,
     143,   144,   145,   146,   150,   161,   174,   175,   186,   199,
     210,   223,   224,   235,   248,   259,   272,   285,   298,   299,
     312,   325,   336,   349,   350,   361,   374,   388,   401,   416,
     417,   418,   419,   420,   421,   422,   426,   449,   465,   481,
     482,   483,   484,   485,   486,   490,   494,   498,   502,   509,
     513,   517,   521,   528,   532,   533,   559,   566,   585,   586,
     586,   586,   586,   586,   587,   588,   589,   590,   591,   595,
     599,   603
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDEN", "IMPORT",
  "DOUBLE", "INT", "STRING", "INTD", "DOUBLED", "BOOLD", "DIV", "MUL",
  "PLUS", "BOOL", "MINUS", "REM", "STRINGD", "CHAR", "CHARD", "FUNC",
  "VOID", "FOR", "WHILE", "COMMA", "DOT", "SEMIC", "ASSOP", "LP", "RP",
  "LCUR", "RCUR", "COLON", "GT", "LT", "GE", "LE", "EE", "NE", "IF",
  "ELSE", "AND", "OR", "UMINUS", "FCALL", "$accept", "input", "line",
  "for", "while", "f_first", "f_second", "f_third", "if", "elseif", "else",
  "condition", "comparison", "logical", "logical_term", "library",
  "declare", "int_declare", "more_int", "double_declare", "more_double",
  "string_declare", "boolean_declare", "more_bool", "char_declare",
  "more_char", "func_declare", "fargs", "assign", "int_assign",
  "string_assign", "char_assign", "type", "expr", "term", "factor",
  "func_call", "data", "number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -168,    87,  -168,    84,     6,     9,    17,    20,  -168,  -168,
    -168,    24,   364,    36,    43,    29,    38,   378,    60,  -168,
    -168,  -168,  -168,    52,    83,    88,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,    59,    79,   116,   118,   325,
      57,  -168,  -168,  -168,   361,   176,  -168,    50,   130,   121,
     170,   123,   364,  -168,   200,   131,    23,   378,  -168,   -25,
     319,   378,  -168,   378,   378,  -168,   146,   146,   146,    72,
      72,   364,   364,   364,   364,   364,   364,    72,    72,    72,
    -168,  -168,    71,   136,   147,   148,   149,   152,   158,   174,
    -168,   364,  -168,   186,  -168,   364,  -168,  -168,   181,   205,
    -168,   364,  -168,    21,   206,  -168,   191,  -168,   132,   187,
     378,  -168,   190,   184,  -168,  -168,   189,  -168,   325,  -168,
    -168,  -168,  -168,    57,    57,    71,    71,    71,    71,    71,
      71,  -168,  -168,  -168,   176,   176,   176,   176,   176,  -168,
     237,    18,   242,   119,   195,   274,   166,   279,    82,  -168,
    -168,  -168,  -168,  -168,  -168,   193,   220,   146,   208,  -168,
     215,   216,  -168,  -168,  -168,  -168,  -168,   364,  -168,  -168,
     364,  -168,  -168,  -168,   364,  -168,  -168,   228,  -168,  -168,
     203,   226,   222,  -168,  -168,  -168,  -168,    18,   119,   166,
      82,   132,   132,   223,   113,   160,  -168,  -168,  -168,  -168,
     225,  -168,  -168,  -168,   218,  -168,   197,    19,  -168,  -168,
     234,  -168,  -168,   231,  -168,   271,   378,  -168,   238,   230,
    -168,   308,   218,  -168
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    31,     1,    95,     0,     0,     0,     0,   109,   110,
     111,     0,     0,     0,     0,     0,     0,    31,     0,     3,
       9,    10,     8,     0,    23,    24,    32,     4,     5,    38,
      39,    40,    41,    42,    43,     0,    70,    71,    72,    22,
      85,    89,    94,    93,     0,    98,    37,     0,     0,     0,
       0,    95,     0,    86,     0,     0,    69,    31,    35,     0,
       0,    31,     7,     0,     0,     6,    69,    69,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    76,    99,   100,   101,   102,   103,     0,     0,
      51,     0,    50,     0,    46,     0,    45,    55,     0,     0,
      58,     0,    57,     0,     0,    63,     0,    62,     0,     0,
      31,    13,     0,     0,    36,    96,     0,    33,     0,    34,
      73,    74,    75,    87,    88,    27,    28,    30,    29,    25,
      26,    91,    90,    92,    98,    98,    98,    98,    98,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      79,    81,    83,    82,    84,     0,     0,    69,     0,    14,
       0,     0,   104,   105,   106,   107,   108,     0,    53,    49,
       0,    48,    44,    54,     0,    60,    56,     0,    65,    61,
       0,    67,     0,    16,    15,     2,     2,     0,     0,     0,
       0,     0,     0,     0,    31,    31,    52,    47,    59,    64,
       0,    68,     2,    12,    18,     2,    31,     0,    17,    19,
      31,    11,     2,     0,    66,    31,    31,    21,     0,     0,
       2,    31,    18,    20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -167,  -168,  -168,  -168,  -168,  -168,  -168,  -168,    48,
    -168,   -55,   -16,   254,    35,  -168,   227,  -168,  -132,  -168,
    -133,  -168,  -168,  -124,  -168,  -123,  -168,    80,   -53,  -168,
    -168,  -168,    91,   -12,    44,    -7,  -168,    95,  -168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    19,    20,    21,   110,   157,   182,    22,   208,
     209,    23,    24,    25,    26,    27,    28,    29,    96,    30,
      92,    31,    32,   102,    33,   107,    34,   155,    35,    36,
      37,    38,   156,    39,    40,    41,    42,    88,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    58,   113,   112,   114,    60,   116,   168,   169,    46,
     171,   172,    47,   120,   121,   122,    63,    64,   194,   195,
      48,   175,   176,    49,   178,   179,   109,    50,     5,     6,
       7,    69,    82,    70,    69,   206,    70,    11,   210,    54,
     103,    13,    89,    14,    90,   215,    55,    58,    58,   212,
     115,   118,   118,   221,   196,   158,   197,    56,   213,   125,
     126,   127,   128,   129,   130,   198,    57,   199,    77,    78,
     131,   132,   133,    79,    89,    51,    90,    91,    62,   141,
       8,     9,    10,   143,    69,    65,    70,     2,    61,   146,
       3,     4,     5,     6,     7,     8,     9,    10,   117,   119,
      52,    11,    12,    66,   183,    13,   104,    14,   105,    15,
      16,    44,    45,   123,   124,    17,     3,     4,     5,     6,
       7,     8,     9,    10,   -35,   -35,    18,    11,    12,    63,
      64,    13,    69,    14,    70,    15,    16,   149,   150,   151,
      67,    17,    68,    93,   203,    94,   152,    97,    98,   109,
     153,    45,    18,   154,    93,   187,    94,    95,   188,   108,
     134,   218,   189,     3,     4,     5,     6,     7,     8,     9,
      10,   135,   136,   137,    11,    12,   138,   140,    13,    69,
      14,    70,    15,    16,    83,    84,    85,   139,    17,   142,
      99,   204,   100,    86,    99,    87,   100,   101,   144,    18,
       3,     4,     5,     6,     7,     8,     9,    10,   145,   147,
     148,    11,    12,   160,    44,    13,   159,    14,   161,    15,
      16,   173,   180,   181,   104,    17,   105,   106,   211,   162,
     163,   164,   165,   166,   184,   191,    18,     3,     4,     5,
       6,     7,     8,     9,    10,   185,   186,   190,    11,    12,
     192,   193,    13,   202,    14,   205,    15,    16,   207,   216,
     220,    89,    17,    90,   167,   214,    93,   219,    94,   170,
     223,    59,   201,    18,     3,     4,     5,     6,     7,     8,
       9,    10,   200,   111,     0,    11,    12,     0,     0,    13,
       0,    14,     0,    15,    16,     0,     0,     0,    99,    17,
     100,   174,   217,   104,     0,   105,   177,     0,     0,     0,
      18,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,     0,     0,    13,     0,    14,     0,
      15,    16,    69,     0,    70,     0,    17,     0,    69,   222,
      70,     0,     0,     0,     0,     0,     0,    18,   115,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    71,    72,
      73,    74,    75,    76,    51,     0,     0,    51,     0,     8,
       9,    10,     8,     9,    10,     0,    12,     0,    80,    12,
      81,    51,     0,     0,     0,     0,     8,     9,    10,    52,
       0,     0,    52,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      12,    17,    57,    56,    29,    17,    61,   140,   141,     3,
     142,   143,     3,    66,    67,    68,    41,    42,   185,   186,
       3,   145,   146,     3,   147,   148,     3,     3,     5,     6,
       7,    13,    44,    15,    13,   202,    15,    14,   205,     3,
      52,    18,    24,    20,    26,   212,     3,    63,    64,    30,
      29,    63,    64,   220,   187,   110,   188,    28,    39,    71,
      72,    73,    74,    75,    76,   189,    28,   190,    11,    12,
      77,    78,    79,    16,    24,     3,    26,    27,    26,    91,
       8,     9,    10,    95,    13,    26,    15,     0,    28,   101,
       3,     4,     5,     6,     7,     8,     9,    10,    63,    64,
      28,    14,    15,    24,   157,    18,    24,    20,    26,    22,
      23,    27,    28,    69,    70,    28,     3,     4,     5,     6,
       7,     8,     9,    10,    41,    42,    39,    14,    15,    41,
      42,    18,    13,    20,    15,    22,    23,     5,     6,     7,
      24,    28,    24,    24,    31,    26,    14,    26,    27,     3,
      18,    28,    39,    21,    24,   167,    26,    27,   170,    28,
      24,   216,   174,     3,     4,     5,     6,     7,     8,     9,
      10,    24,    24,    24,    14,    15,    24,     3,    18,    13,
      20,    15,    22,    23,     8,     9,    10,    29,    28,     3,
      24,    31,    26,    17,    24,    19,    26,    27,    17,    39,
       3,     4,     5,     6,     7,     8,     9,    10,     3,     3,
      19,    14,    15,    29,    27,    18,    26,    20,    29,    22,
      23,    26,    29,     3,    24,    28,    26,    27,    31,   134,
     135,   136,   137,   138,    26,    32,    39,     3,     4,     5,
       6,     7,     8,     9,    10,    30,    30,    19,    14,    15,
      24,    29,    18,    30,    20,    30,    22,    23,    40,    28,
      30,    24,    28,    26,    27,    31,    24,    29,    26,    27,
     222,    17,   192,    39,     3,     4,     5,     6,     7,     8,
       9,    10,   191,    56,    -1,    14,    15,    -1,    -1,    18,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    24,    28,
      26,    27,    31,    24,    -1,    26,    27,    -1,    -1,    -1,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    -1,    -1,    18,    -1,    20,    -1,
      22,    23,    13,    -1,    15,    -1,    28,    -1,    13,    31,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    39,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    33,    34,
      35,    36,    37,    38,     3,    -1,    -1,     3,    -1,     8,
       9,    10,     8,     9,    10,    -1,    15,    -1,    17,    15,
      19,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    28,
      -1,    -1,    28,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    46,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    14,    15,    18,    20,    22,    23,    28,    39,    47,
      48,    49,    53,    56,    57,    58,    59,    60,    61,    62,
      64,    66,    67,    69,    71,    73,    74,    75,    76,    78,
      79,    80,    81,    83,    27,    28,     3,     3,     3,     3,
       3,     3,    28,    78,     3,     3,    28,    28,    57,    58,
      78,    28,    26,    41,    42,    26,    24,    24,    24,    13,
      15,    33,    34,    35,    36,    37,    38,    11,    12,    16,
      17,    19,    78,     8,     9,    10,    17,    19,    82,    24,
      26,    27,    65,    24,    26,    27,    63,    26,    27,    24,
      26,    27,    68,    78,    24,    26,    27,    70,    28,     3,
      50,    61,    73,    56,    29,    29,    56,    59,    78,    59,
      73,    73,    73,    79,    79,    78,    78,    78,    78,    78,
      78,    80,    80,    80,    24,    24,    24,    24,    24,    29,
       3,    78,     3,    78,    17,     3,    78,     3,    19,     5,
       6,     7,    14,    18,    21,    72,    77,    51,    56,    26,
      29,    29,    82,    82,    82,    82,    82,    27,    65,    65,
      27,    63,    63,    26,    27,    68,    68,    27,    70,    70,
      29,     3,    52,    73,    26,    30,    30,    78,    78,    78,
      19,    32,    24,    29,    46,    46,    65,    63,    68,    70,
      77,    72,    30,    31,    31,    30,    46,    40,    54,    55,
      46,    31,    30,    39,    31,    46,    28,    31,    56,    29,
      30,    46,    31,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    49,    50,    50,    51,    52,    53,    54,    54,
      54,    55,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    74,    75,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     1,     1,
       1,     9,     7,     1,     2,     2,     1,     8,     0,     1,
       9,     4,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     0,     1,     3,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     5,     3,     1,     5,     3,     5,
       3,     1,     5,     3,     5,     3,     5,     3,     1,     5,
       3,     5,     3,     1,     5,     3,    10,     2,     4,     0,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     1,
       3,     3,     3,     1,     1,     1,     3,     4,     0,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 11: /* for: FOR LP f_first f_second f_third RP LCUR input RCUR  */
#line 65 "parser.y"
                                                   {
    cout << "parsing for loop\n";
}
#line 1352 "parser.tab.c"
    break;

  case 12: /* while: WHILE LP condition RP LCUR input RCUR  */
#line 71 "parser.y"
                                      {
    cout << "parsing while loop\n";
}
#line 1360 "parser.tab.c"
    break;

  case 17: /* if: IF LP condition RP LCUR input RCUR elseif  */
#line 90 "parser.y"
                                          {
    cout << "parsing if block\n";
}
#line 1368 "parser.tab.c"
    break;

  case 20: /* elseif: ELSE IF LP condition RP LCUR input RCUR elseif  */
#line 97 "parser.y"
                                                {
    cout << "parsing else if block\n";
}
#line 1376 "parser.tab.c"
    break;

  case 21: /* else: ELSE LCUR input RCUR  */
#line 103 "parser.y"
                     {
    cout << "parsing else block\n";
}
#line 1384 "parser.tab.c"
    break;

  case 37: /* library: IMPORT IDEN  */
#line 135 "parser.y"
            {
    printf("imported library: %s\n", (yyvsp[0].anytype).sval);
}
#line 1392 "parser.tab.c"
    break;

  case 44: /* int_declare: INT IDEN ASSOP expr more_int  */
#line 150 "parser.y"
                             {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int, value -> " << (yyvsp[-1].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[-1].anytype).ival;
    }
}
#line 1408 "parser.tab.c"
    break;

  case 45: /* int_declare: INT IDEN more_int  */
#line 161 "parser.y"
                   {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
}
#line 1423 "parser.tab.c"
    break;

  case 47: /* more_int: COMMA IDEN ASSOP expr more_int  */
#line 175 "parser.y"
                                {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int, value -> " << (yyvsp[-1].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[-1].anytype).ival;
    }
}
#line 1439 "parser.tab.c"
    break;

  case 48: /* more_int: COMMA IDEN more_int  */
#line 186 "parser.y"
                     {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
}
#line 1454 "parser.tab.c"
    break;

  case 49: /* double_declare: DOUBLE IDEN ASSOP expr more_double  */
#line 199 "parser.y"
                                   {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << (yyvsp[-1].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[-1].anytype).dval;
    }
}
#line 1470 "parser.tab.c"
    break;

  case 50: /* double_declare: DOUBLE IDEN more_double  */
#line 210 "parser.y"
                         {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "DOUBLE";
    }
}
#line 1485 "parser.tab.c"
    break;

  case 52: /* more_double: COMMA IDEN ASSOP expr more_double  */
#line 224 "parser.y"
                                   {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << (yyvsp[-1].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[-1].anytype).dval;
    }
}
#line 1501 "parser.tab.c"
    break;

  case 53: /* more_double: COMMA IDEN more_double  */
#line 235 "parser.y"
                        {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "double";
    }
}
#line 1516 "parser.tab.c"
    break;

  case 54: /* string_declare: STRING IDEN ASSOP STRINGD SEMIC  */
#line 248 "parser.y"
                                {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string, value -> " << (yyvsp[-1].anytype).sval << "\n";
        var_s[name] = (yyvsp[-1].anytype).sval;
        var_type[name] = "STRING";
    }
}
#line 1532 "parser.tab.c"
    break;

  case 55: /* string_declare: STRING IDEN SEMIC  */
#line 259 "parser.y"
                   {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string\n";
        var_type[name] = "STRING";
    }
}
#line 1547 "parser.tab.c"
    break;

  case 56: /* boolean_declare: BOOL IDEN ASSOP expr more_bool  */
#line 272 "parser.y"
                               {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[-1].anytype).ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[-1].anytype).bval;
    }
}
#line 1565 "parser.tab.c"
    break;

  case 57: /* boolean_declare: BOOL IDEN more_bool  */
#line 285 "parser.y"
                     {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
}
#line 1580 "parser.tab.c"
    break;

  case 59: /* more_bool: COMMA IDEN ASSOP expr more_bool  */
#line 299 "parser.y"
                                 {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[-1].anytype).ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[-1].anytype).bval;
    }
}
#line 1598 "parser.tab.c"
    break;

  case 60: /* more_bool: COMMA IDEN more_bool  */
#line 312 "parser.y"
                      {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
}
#line 1613 "parser.tab.c"
    break;

  case 61: /* char_declare: CHAR IDEN ASSOP CHARD more_char  */
#line 325 "parser.y"
                                {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << (yyvsp[-1].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[-1].anytype).cval;
    }
}
#line 1629 "parser.tab.c"
    break;

  case 62: /* char_declare: CHAR IDEN more_char  */
#line 336 "parser.y"
                     {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
}
#line 1644 "parser.tab.c"
    break;

  case 64: /* more_char: COMMA IDEN ASSOP CHARD more_char  */
#line 350 "parser.y"
                                  {
    string name = (yyvsp[-3].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << (yyvsp[-1].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[-1].anytype).cval;
    }
}
#line 1660 "parser.tab.c"
    break;

  case 65: /* more_char: COMMA IDEN more_char  */
#line 361 "parser.y"
                      {
    string name = (yyvsp[-1].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
}
#line 1675 "parser.tab.c"
    break;

  case 66: /* func_declare: FUNC IDEN LP fargs RP COLON type LCUR input RCUR  */
#line 374 "parser.y"
                                                 {
    string name = (yyvsp[-8].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclaration function -> " << name << "\n"; 
    }
    else {
        string ret = (yyvsp[-3].anytype).sval;
        cout << "function -> " << name << ": return type -> " << ret << "\n";
        var_type[name] = "FUNC";
    }
}
#line 1691 "parser.tab.c"
    break;

  case 67: /* fargs: type IDEN  */
#line 388 "parser.y"
          {
    string name = (yyvsp[0].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << (yyvsp[-1].anytype).sval<< "\n";
        var_type[name] = (yyvsp[-1].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
}
#line 1709 "parser.tab.c"
    break;

  case 68: /* fargs: type IDEN COMMA fargs  */
#line 401 "parser.y"
                       {
    string name = (yyvsp[-2].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << (yyvsp[-3].anytype).sval<< "\n";
        var_type[name] = (yyvsp[-3].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
}
#line 1727 "parser.tab.c"
    break;

  case 76: /* int_assign: IDEN ASSOP expr  */
#line 426 "parser.y"
                {
    string name = (yyvsp[-2].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] == "INT"){
        var_i[name] = (yyvsp[0].anytype).ival;
        cout << "assignment: " << name << " -> " << (yyvsp[0].anytype).ival << "\n";
    }
    else if (var_type[name] == "DOUBLE") {
        var_d[name] = (yyvsp[0].anytype).dval;
        cout << "assignment: " << name << " -> " << (yyvsp[0].anytype).dval << "\n";
    }
    else if (var_type[name] == "BOOL") {
        var_b[name] = (yyvsp[0].anytype).bval;
        string bval = "false";
        if ((yyvsp[0].anytype).bval) bval = "true";
        cout << "assignment: " << name << " -> " << bval << "\n";
    }
}
#line 1752 "parser.tab.c"
    break;

  case 77: /* string_assign: IDEN ASSOP STRINGD  */
#line 449 "parser.y"
                   {
    string name = (yyvsp[-2].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "STRING") {
        cout << "Error: invalid value type -> string" << "\n";
    }
    else {
        var_s[name] = (yyvsp[0].anytype).sval;
        cout << "assignment: " << name << " -> " << (yyvsp[0].anytype).sval << "\n";
    }
}
#line 1770 "parser.tab.c"
    break;

  case 78: /* char_assign: IDEN ASSOP CHARD  */
#line 465 "parser.y"
                 {
    string name = (yyvsp[-2].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "CHAR") {
        cout << "Error: invalid value type -> char" << "\n";
    }
    else {
        var_c[name] = (yyvsp[0].anytype).cval;
        cout << "assignment: " << name << " -> '" << (yyvsp[0].anytype).cval << "'\n";
    }
}
#line 1788 "parser.tab.c"
    break;

  case 79: /* type: INT  */
#line 481 "parser.y"
    {strcpy((yyval.anytype).sval,"int");}
#line 1794 "parser.tab.c"
    break;

  case 80: /* type: DOUBLE  */
#line 482 "parser.y"
        {strcpy((yyval.anytype).sval,"double");}
#line 1800 "parser.tab.c"
    break;

  case 81: /* type: STRING  */
#line 483 "parser.y"
        {strcpy((yyval.anytype).sval,"string");}
#line 1806 "parser.tab.c"
    break;

  case 82: /* type: CHAR  */
#line 484 "parser.y"
      {strcpy((yyval.anytype).sval,"char");}
#line 1812 "parser.tab.c"
    break;

  case 83: /* type: BOOL  */
#line 485 "parser.y"
      {strcpy((yyval.anytype).sval,"bool");}
#line 1818 "parser.tab.c"
    break;

  case 84: /* type: VOID  */
#line 486 "parser.y"
      {strcpy((yyval.anytype).sval,"void");}
#line 1824 "parser.tab.c"
    break;

  case 85: /* expr: term  */
#line 490 "parser.y"
     {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1833 "parser.tab.c"
    break;

  case 86: /* expr: MINUS expr  */
#line 494 "parser.y"
                         {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1842 "parser.tab.c"
    break;

  case 87: /* expr: expr PLUS term  */
#line 498 "parser.y"
                {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval + (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival + (yyvsp[0].anytype).ival;
}
#line 1851 "parser.tab.c"
    break;

  case 88: /* expr: expr MINUS term  */
#line 502 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval - (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival - (yyvsp[-2].anytype).ival;
}
#line 1860 "parser.tab.c"
    break;

  case 89: /* term: factor  */
#line 509 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1869 "parser.tab.c"
    break;

  case 90: /* term: term MUL factor  */
#line 513 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval * (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival * (yyvsp[-2].anytype).ival;
}
#line 1878 "parser.tab.c"
    break;

  case 91: /* term: term DIV factor  */
#line 517 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval / (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival / (yyvsp[-2].anytype).ival;
}
#line 1887 "parser.tab.c"
    break;

  case 92: /* term: term REM factor  */
#line 521 "parser.y"
                 {
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival % (yyvsp[0].anytype).ival;
    (yyval.anytype).dval = (yyval.anytype).ival;
}
#line 1896 "parser.tab.c"
    break;

  case 93: /* factor: number  */
#line 528 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1905 "parser.tab.c"
    break;

  case 95: /* factor: IDEN  */
#line 533 "parser.y"
      {
    string name = (yyvsp[0].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undeclared variable -> " << name << "\n";
    }
    else {
        if (var_type[name] == "INT") {
            (yyval.anytype).dval = var_i[name];
            (yyval.anytype).ival = var_i[name];
        }
        else if (var_type[name] == "DOUBLE") {
            (yyval.anytype).dval = var_d[name];
            (yyval.anytype).ival = var_d[name];
        }
        else if (var_type[name] == "BOOL") {
            (yyval.anytype).dval = var_b[name];
            (yyval.anytype).ival = var_b[name];
        }
        else if (var_type[name] == "STRING") {
            strcpy((yyval.anytype).sval,var_s[name].c_str());
        }
        else {
            (yyval.anytype).cval = var_c[name];
        }
    }
}
#line 1936 "parser.tab.c"
    break;

  case 96: /* factor: LP expr RP  */
#line 559 "parser.y"
            {
    (yyval.anytype).dval = (yyvsp[-1].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-1].anytype).ival;
}
#line 1945 "parser.tab.c"
    break;

  case 97: /* func_call: IDEN LP data RP  */
#line 566 "parser.y"
                {
    string name = (yyvsp[-3].anytype).sval;
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
#line 1967 "parser.tab.c"
    break;

  case 109: /* number: INTD  */
#line 595 "parser.y"
     {
    (yyval.anytype).dval = (yyvsp[0].anytype).ival;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1976 "parser.tab.c"
    break;

  case 110: /* number: DOUBLED  */
#line 599 "parser.y"
         {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).dval;
}
#line 1985 "parser.tab.c"
    break;

  case 111: /* number: BOOLD  */
#line 603 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).bval;
    (yyval.anytype).ival = (yyvsp[0].anytype).bval;
}
#line 1994 "parser.tab.c"
    break;


#line 1998 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 610 "parser.y"


int main() {
    yyin = fopen("input.txt", "r");
    yyparse();

    return 0;
}

void yyerror(char *str) {
    fprintf(stderr, "error:%s\n", str);
}
