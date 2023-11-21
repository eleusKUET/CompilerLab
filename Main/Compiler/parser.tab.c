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
  YYSYMBOL_SINGLE = 15,                    /* SINGLE  */
  YYSYMBOL_CMULF = 16,                     /* CMULF  */
  YYSYMBOL_CMULS = 17,                     /* CMULS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_REM = 19,                       /* REM  */
  YYSYMBOL_STRINGD = 20,                   /* STRINGD  */
  YYSYMBOL_CHAR = 21,                      /* CHAR  */
  YYSYMBOL_CHARD = 22,                     /* CHARD  */
  YYSYMBOL_FUNC = 23,                      /* FUNC  */
  YYSYMBOL_VOID = 24,                      /* VOID  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_SEMIC = 32,                     /* SEMIC  */
  YYSYMBOL_ASSOP = 33,                     /* ASSOP  */
  YYSYMBOL_LP = 34,                        /* LP  */
  YYSYMBOL_RP = 35,                        /* RP  */
  YYSYMBOL_LCUR = 36,                      /* LCUR  */
  YYSYMBOL_RCUR = 37,                      /* RCUR  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_EE = 43,                        /* EE  */
  YYSYMBOL_NE = 44,                        /* NE  */
  YYSYMBOL_IF = 45,                        /* IF  */
  YYSYMBOL_ELSE = 46,                      /* ELSE  */
  YYSYMBOL_AND = 47,                       /* AND  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_UMINUS = 49,                    /* UMINUS  */
  YYSYMBOL_FCALL = 50,                     /* FCALL  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_input = 52,                     /* input  */
  YYSYMBOL_line = 53,                      /* line  */
  YYSYMBOL_for = 54,                       /* for  */
  YYSYMBOL_while = 55,                     /* while  */
  YYSYMBOL_inloop = 56,                    /* inloop  */
  YYSYMBOL_f_first = 57,                   /* f_first  */
  YYSYMBOL_f_second = 58,                  /* f_second  */
  YYSYMBOL_f_third = 59,                   /* f_third  */
  YYSYMBOL_if = 60,                        /* if  */
  YYSYMBOL_elseif = 61,                    /* elseif  */
  YYSYMBOL_else = 62,                      /* else  */
  YYSYMBOL_condition = 63,                 /* condition  */
  YYSYMBOL_comparison = 64,                /* comparison  */
  YYSYMBOL_logical = 65,                   /* logical  */
  YYSYMBOL_logical_term = 66,              /* logical_term  */
  YYSYMBOL_library = 67,                   /* library  */
  YYSYMBOL_declare = 68,                   /* declare  */
  YYSYMBOL_int_declare = 69,               /* int_declare  */
  YYSYMBOL_more_int = 70,                  /* more_int  */
  YYSYMBOL_double_declare = 71,            /* double_declare  */
  YYSYMBOL_more_double = 72,               /* more_double  */
  YYSYMBOL_string_declare = 73,            /* string_declare  */
  YYSYMBOL_boolean_declare = 74,           /* boolean_declare  */
  YYSYMBOL_more_bool = 75,                 /* more_bool  */
  YYSYMBOL_char_declare = 76,              /* char_declare  */
  YYSYMBOL_more_char = 77,                 /* more_char  */
  YYSYMBOL_func_declare = 78,              /* func_declare  */
  YYSYMBOL_fargs = 79,                     /* fargs  */
  YYSYMBOL_rtype = 80,                     /* rtype  */
  YYSYMBOL_in_fun = 81,                    /* in_fun  */
  YYSYMBOL_fdata = 82,                     /* fdata  */
  YYSYMBOL_assign = 83,                    /* assign  */
  YYSYMBOL_int_assign = 84,                /* int_assign  */
  YYSYMBOL_string_assign = 85,             /* string_assign  */
  YYSYMBOL_char_assign = 86,               /* char_assign  */
  YYSYMBOL_type = 87,                      /* type  */
  YYSYMBOL_expr = 88,                      /* expr  */
  YYSYMBOL_term = 89,                      /* term  */
  YYSYMBOL_factor = 90,                    /* factor  */
  YYSYMBOL_func_call = 91,                 /* func_call  */
  YYSYMBOL_data = 92,                      /* data  */
  YYSYMBOL_number = 93                     /* number  */
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
#define YYLAST   485

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    52,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    74,    80,    86,    89,    95,    96,
     100,   104,   108,   113,   114,   115,   121,   127,   128,   129,
     133,   134,   135,   136,   137,   138,   141,   142,   143,   144,
     148,   149,   153,   159,   160,   161,   162,   163,   164,   168,
     179,   192,   193,   204,   217,   228,   241,   242,   253,   266,
     277,   290,   303,   316,   317,   330,   343,   354,   367,   368,
     379,   392,   406,   419,   435,   438,   444,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   461,   462,   463,   464,
     465,   466,   467,   471,   494,   510,   526,   527,   528,   529,
     530,   534,   538,   542,   546,   553,   557,   561,   565,   572,
     576,   577,   603,   610,   629,   630,   630,   630,   630,   630,
     630,   631,   632,   633,   634,   635,   636,   640,   644,   648
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
  "PLUS", "BOOL", "SINGLE", "CMULF", "CMULS", "MINUS", "REM", "STRINGD",
  "CHAR", "CHARD", "FUNC", "VOID", "FOR", "WHILE", "BREAK", "CONTINUE",
  "RETURN", "COMMA", "DOT", "SEMIC", "ASSOP", "LP", "RP", "LCUR", "RCUR",
  "COLON", "GT", "LT", "GE", "LE", "EE", "NE", "IF", "ELSE", "AND", "OR",
  "UMINUS", "FCALL", "$accept", "input", "line", "for", "while", "inloop",
  "f_first", "f_second", "f_third", "if", "elseif", "else", "condition",
  "comparison", "logical", "logical_term", "library", "declare",
  "int_declare", "more_int", "double_declare", "more_double",
  "string_declare", "boolean_declare", "more_bool", "char_declare",
  "more_char", "func_declare", "fargs", "rtype", "in_fun", "fdata",
  "assign", "int_assign", "string_assign", "char_assign", "type", "expr",
  "term", "factor", "func_call", "data", "number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-118)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -191,   158,  -191,   126,    15,    19,    37,    51,  -191,  -191,
    -191,    61,  -191,    96,    71,    81,    77,    84,    83,   103,
      11,   449,   121,  -191,  -191,  -191,  -191,  -191,   142,   104,
     141,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,   145,    79,   150,   160,    80,    16,  -191,  -191,  -191,
      39,   446,  -191,    95,   161,   169,   166,   163,    96,  -191,
     231,   179,   133,   449,  -191,  -191,    -2,   185,   189,   191,
    -191,  -191,  -191,   204,    80,  -191,   102,    47,   449,  -191,
     449,   449,  -191,   253,   253,   253,   123,   123,    96,    96,
      96,    96,    96,    96,   123,   123,   123,  -191,  -191,    54,
      82,    99,   118,   225,   227,    23,   233,   257,  -191,    96,
    -191,   263,  -191,    96,  -191,  -191,   254,   272,  -191,    96,
    -191,    57,   273,  -191,   261,  -191,   464,   255,   449,  -191,
     266,   251,  -191,  -191,  -191,   264,  -191,    80,  -191,  -191,
    -191,  -191,    16,    16,    54,    54,    54,    54,    54,    54,
    -191,  -191,  -191,   446,   446,   446,   446,   446,   446,  -191,
     247,    53,   252,   182,   268,   274,   207,   290,    70,  -191,
    -191,  -191,  -191,  -191,   276,   284,   253,   271,  -191,   281,
     282,  -191,  -191,  -191,  -191,  -191,  -191,    96,  -191,  -191,
      96,  -191,  -191,  -191,    96,  -191,  -191,   297,  -191,  -191,
     288,   279,   292,  -191,  -191,  -191,  -191,    53,   182,   207,
      70,    89,   464,   289,   201,   244,  -191,  -191,  -191,  -191,
    -191,   293,  -191,  -191,  -191,  -191,   285,  -191,   287,   -19,
    -191,  -191,   330,  -191,  -191,   294,  -191,   373,   449,  -191,
     295,   305,  -191,   416,   285,  -191
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    36,     1,   111,     0,     0,     0,     0,   127,   128,
     129,     0,    13,     0,     0,     0,     0,     0,     0,     0,
      36,    36,     0,     3,     9,    10,    11,     8,     0,    28,
      29,    37,     4,     5,    43,    44,    45,    46,    47,    48,
      12,     0,    87,    88,    89,    27,   101,   105,   110,   109,
       0,   114,    42,     0,     0,     0,     0,   111,     0,   102,
       0,     0,    86,    36,    16,    17,   111,   127,   128,   129,
      81,    83,    85,     0,    27,    40,     0,     0,    36,     7,
       0,     0,     6,    86,    86,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    93,
     127,   128,   129,   118,   119,   120,     0,     0,    56,     0,
      55,     0,    51,     0,    50,    60,     0,     0,    63,     0,
      62,     0,     0,    68,     0,    67,     0,     0,    36,    18,
       0,     0,    76,    41,   112,     0,    38,     0,    39,    90,
      91,    92,   103,   104,    32,    33,    35,    34,    30,    31,
     107,   106,   108,   114,   114,   114,   114,   114,   114,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      96,    98,   100,    99,     0,     0,    86,     0,    19,     0,
       0,   121,   122,   123,   124,   125,   126,     0,    58,    54,
       0,    53,    49,    59,     0,    65,    61,     0,    70,    66,
       0,    72,     0,    21,    20,     2,     2,     0,     0,     0,
       0,     0,     0,     0,    36,    36,    57,    52,    64,    69,
      74,     0,    75,    73,     2,    15,    23,     2,    36,     0,
      22,    24,    36,    14,     2,     0,    71,    36,    36,    26,
       0,     0,     2,    36,    23,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -190,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
      98,  -191,   -20,   -18,   322,   151,  -191,   298,  -191,  -152,
    -191,  -156,  -191,  -191,  -159,  -191,  -155,  -191,   134,  -191,
    -191,  -191,   -60,  -191,  -191,  -191,   136,   -12,   147,    75,
    -191,    87,  -191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    23,    24,    25,    26,   128,   176,   202,    27,
     230,   231,    28,    29,    30,    31,    32,    33,    34,   114,
      35,   110,    36,    37,   120,    38,   125,    39,   174,   221,
      40,    73,    41,    42,    43,    44,   175,    45,    46,    47,
      48,   106,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    59,   130,    75,   188,   189,   195,   196,    74,    77,
     191,   192,   198,   199,    66,   214,   215,   234,    52,    67,
      68,    69,    53,   139,   140,   141,   235,    94,    95,    13,
     -78,    70,    51,    71,   228,    96,    86,   232,    99,   105,
      54,    87,    57,   131,   237,    21,   121,     8,     9,    10,
     218,   216,   243,   158,    55,   219,   217,    13,   135,    97,
      86,    98,    75,    75,    56,    87,    86,    86,   137,   137,
      86,    87,    87,    58,    60,    87,   144,   145,   146,   147,
     148,   149,   134,   107,    61,   108,    88,    89,    90,    91,
      92,    93,   134,    86,   169,   170,   171,   161,    87,    57,
     122,   163,   123,   172,     8,     9,    10,   166,   177,    83,
     173,    62,   153,   220,    13,    64,   203,  -115,    63,    88,
      89,    90,    91,    92,    93,   107,    57,   108,   109,   154,
      58,     8,     9,    10,  -116,    65,   127,   133,     5,     6,
       7,   105,   105,   105,   105,   105,   105,    11,   155,    80,
      81,   -40,   -40,  -117,    14,    78,    15,    58,     2,    50,
      51,     3,     4,     5,     6,     7,     8,     9,    10,   150,
     151,   152,    11,    12,    79,   207,    13,    82,   208,    14,
      84,    15,   209,    16,    17,    18,    19,    20,    80,    81,
      85,   111,    21,   112,   113,    86,   117,    51,   118,   119,
      87,   115,   116,    22,     3,     4,     5,     6,     7,     8,
       9,    10,   111,   126,   112,    11,    12,   -79,   240,    13,
      86,   -80,    14,   -82,    15,    87,    16,    17,    18,    19,
      20,   136,   138,   142,   143,    21,   132,   117,   225,   118,
     181,   182,   183,   184,   185,   186,    22,     3,     4,     5,
       6,     7,     8,     9,    10,   156,   127,   157,    11,    12,
     160,   122,    13,   123,   124,    14,   162,    15,   159,    16,
      17,    18,    19,    20,   164,   165,   167,   107,    21,   108,
     187,   226,   111,   168,   112,   190,   179,   201,    50,    22,
       3,     4,     5,     6,     7,     8,     9,    10,   178,   180,
     193,    11,    12,   204,   117,    13,   118,   194,    14,   212,
      15,   200,    16,    17,    18,    19,    20,   205,   206,   210,
     122,    21,   123,   197,   233,   224,   211,   213,   238,   227,
     241,   229,    22,     3,     4,     5,     6,     7,     8,     9,
      10,   242,   245,    76,    11,    12,   223,   222,    13,     0,
       0,    14,     0,    15,     0,    16,    17,    18,    19,    20,
     129,     0,     0,     0,    21,     0,     0,   236,     0,     0,
       0,     0,     0,     0,     0,    22,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,    11,    12,     0,
       0,    13,     0,     0,    14,     0,    15,     0,    16,    17,
      18,    19,    20,     0,     0,     0,     0,    21,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,    22,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,    12,     0,     0,    13,     0,     0,    14,     0,    15,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    57,
      21,     0,    57,   244,   100,   101,   102,     8,     9,    10,
       0,    22,     0,     0,    13,     0,   103,    13,   104,   169,
     170,   171,     0,     0,     0,     0,     0,     0,   172,     0,
      58,     0,     0,    21,     0,   173
};

static const yytype_int16 yycheck[] =
{
      20,    13,    62,    21,   160,   161,   165,   166,    20,    21,
     162,   163,   167,   168,     3,   205,   206,    36,     3,     8,
       9,    10,     3,    83,    84,    85,    45,    11,    12,    18,
      32,    20,    34,    22,   224,    19,    13,   227,    50,    51,
       3,    18,     3,    63,   234,    34,    58,     8,     9,    10,
     209,   207,   242,    30,     3,   210,   208,    18,    78,    20,
      13,    22,    80,    81,     3,    18,    13,    13,    80,    81,
      13,    18,    18,    34,     3,    18,    88,    89,    90,    91,
      92,    93,    35,    30,     3,    32,    39,    40,    41,    42,
      43,    44,    35,    13,     5,     6,     7,   109,    18,     3,
      30,   113,    32,    14,     8,     9,    10,   119,   128,    30,
      21,    34,    30,    24,    18,    32,   176,    35,    34,    39,
      40,    41,    42,    43,    44,    30,     3,    32,    33,    30,
      34,     8,     9,    10,    35,    32,     3,    35,     5,     6,
       7,   153,   154,   155,   156,   157,   158,    14,    30,    47,
      48,    47,    48,    35,    21,    34,    23,    34,     0,    33,
      34,     3,     4,     5,     6,     7,     8,     9,    10,    94,
      95,    96,    14,    15,    32,   187,    18,    32,   190,    21,
      30,    23,   194,    25,    26,    27,    28,    29,    47,    48,
      30,    30,    34,    32,    33,    13,    30,    34,    32,    33,
      18,    32,    33,    45,     3,     4,     5,     6,     7,     8,
       9,    10,    30,    34,    32,    14,    15,    32,   238,    18,
      13,    32,    21,    32,    23,    18,    25,    26,    27,    28,
      29,    80,    81,    86,    87,    34,    32,    30,    37,    32,
     153,   154,   155,   156,   157,   158,    45,     3,     4,     5,
       6,     7,     8,     9,    10,    30,     3,    30,    14,    15,
       3,    30,    18,    32,    33,    21,     3,    23,    35,    25,
      26,    27,    28,    29,    20,     3,     3,    30,    34,    32,
      33,    37,    30,    22,    32,    33,    35,     3,    33,    45,
       3,     4,     5,     6,     7,     8,     9,    10,    32,    35,
      32,    14,    15,    32,    30,    18,    32,    33,    21,    30,
      23,    35,    25,    26,    27,    28,    29,    36,    36,    22,
      30,    34,    32,    33,    37,    36,    38,    35,    34,    36,
      35,    46,    45,     3,     4,     5,     6,     7,     8,     9,
      10,    36,   244,    21,    14,    15,   212,   211,    18,    -1,
      -1,    21,    -1,    23,    -1,    25,    26,    27,    28,    29,
      62,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      -1,    18,    -1,    -1,    21,    -1,    23,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    -1,    -1,    18,    -1,    -1,    21,    -1,    23,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,     3,
      34,    -1,     3,    37,     8,     9,    10,     8,     9,    10,
      -1,    45,    -1,    -1,    18,    -1,    20,    18,    22,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      34,    -1,    -1,    34,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    14,    15,    18,    21,    23,    25,    26,    27,    28,
      29,    34,    45,    53,    54,    55,    56,    60,    63,    64,
      65,    66,    67,    68,    69,    71,    73,    74,    76,    78,
      81,    83,    84,    85,    86,    88,    89,    90,    91,    93,
      33,    34,     3,     3,     3,     3,     3,     3,    34,    88,
       3,     3,    34,    34,    32,    32,     3,     8,     9,    10,
      20,    22,    63,    82,    88,    64,    65,    88,    34,    32,
      47,    48,    32,    30,    30,    30,    13,    18,    39,    40,
      41,    42,    43,    44,    11,    12,    19,    20,    22,    88,
       8,     9,    10,    20,    22,    88,    92,    30,    32,    33,
      72,    30,    32,    33,    70,    32,    33,    30,    32,    33,
      75,    88,    30,    32,    33,    77,    34,     3,    57,    68,
      83,    63,    32,    35,    35,    63,    66,    88,    66,    83,
      83,    83,    89,    89,    88,    88,    88,    88,    88,    88,
      90,    90,    90,    30,    30,    30,    30,    30,    30,    35,
       3,    88,     3,    88,    20,     3,    88,     3,    22,     5,
       6,     7,    14,    21,    79,    87,    58,    63,    32,    35,
      35,    92,    92,    92,    92,    92,    92,    33,    72,    72,
      33,    70,    70,    32,    33,    75,    75,    33,    77,    77,
      35,     3,    59,    83,    32,    36,    36,    88,    88,    88,
      22,    38,    30,    35,    52,    52,    72,    70,    75,    77,
      24,    80,    87,    79,    36,    37,    37,    36,    52,    46,
      61,    62,    52,    37,    36,    45,    37,    52,    34,    37,
      63,    35,    36,    52,    37,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    55,    56,    56,    57,    57,
      58,    59,    60,    61,    61,    61,    62,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    76,    76,    77,    77,
      77,    78,    79,    79,    80,    80,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    84,    85,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    90,    90,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     9,     7,     2,     2,     1,     2,
       2,     1,     8,     0,     1,     9,     4,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     0,     1,     3,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     5,
       3,     1,     5,     3,     5,     3,     1,     5,     3,     5,
       3,     5,     3,     1,     5,     3,     5,     3,     1,     5,
       3,    10,     2,     4,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     3,     3,     3,     1,
       1,     1,     3,     4,     0,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1
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
  case 13: /* line: SINGLE  */
#line 65 "parser.y"
        {
    cout << "comment -> " << (yyvsp[0].anytype).sval << "\n";
}
#line 1391 "parser.tab.c"
    break;

  case 14: /* for: FOR LP f_first f_second f_third RP LCUR input RCUR  */
#line 74 "parser.y"
                                                   {
    cout << "parsing for loop\n";
}
#line 1399 "parser.tab.c"
    break;

  case 15: /* while: WHILE LP condition RP LCUR input RCUR  */
#line 80 "parser.y"
                                      {
    cout << "parsing while loop\n";
}
#line 1407 "parser.tab.c"
    break;

  case 16: /* inloop: BREAK SEMIC  */
#line 86 "parser.y"
            {
    cout << "statement -> break\n";
}
#line 1415 "parser.tab.c"
    break;

  case 17: /* inloop: CONTINUE SEMIC  */
#line 89 "parser.y"
                {
    cout << "statement -> continue\n";
}
#line 1423 "parser.tab.c"
    break;

  case 22: /* if: IF LP condition RP LCUR input RCUR elseif  */
#line 108 "parser.y"
                                          {
    cout << "parsing if block\n";
}
#line 1431 "parser.tab.c"
    break;

  case 25: /* elseif: ELSE IF LP condition RP LCUR input RCUR elseif  */
#line 115 "parser.y"
                                                {
    cout << "parsing else if block\n";
}
#line 1439 "parser.tab.c"
    break;

  case 26: /* else: ELSE LCUR input RCUR  */
#line 121 "parser.y"
                     {
    cout << "parsing else block\n";
}
#line 1447 "parser.tab.c"
    break;

  case 42: /* library: IMPORT IDEN  */
#line 153 "parser.y"
            {
    printf("imported library: %s\n", (yyvsp[0].anytype).sval);
}
#line 1455 "parser.tab.c"
    break;

  case 49: /* int_declare: INT IDEN ASSOP expr more_int  */
#line 168 "parser.y"
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
#line 1471 "parser.tab.c"
    break;

  case 50: /* int_declare: INT IDEN more_int  */
#line 179 "parser.y"
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
#line 1486 "parser.tab.c"
    break;

  case 52: /* more_int: COMMA IDEN ASSOP expr more_int  */
#line 193 "parser.y"
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
#line 1502 "parser.tab.c"
    break;

  case 53: /* more_int: COMMA IDEN more_int  */
#line 204 "parser.y"
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
#line 1517 "parser.tab.c"
    break;

  case 54: /* double_declare: DOUBLE IDEN ASSOP expr more_double  */
#line 217 "parser.y"
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
#line 1533 "parser.tab.c"
    break;

  case 55: /* double_declare: DOUBLE IDEN more_double  */
#line 228 "parser.y"
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
#line 1548 "parser.tab.c"
    break;

  case 57: /* more_double: COMMA IDEN ASSOP expr more_double  */
#line 242 "parser.y"
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
#line 1564 "parser.tab.c"
    break;

  case 58: /* more_double: COMMA IDEN more_double  */
#line 253 "parser.y"
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
#line 1579 "parser.tab.c"
    break;

  case 59: /* string_declare: STRING IDEN ASSOP STRINGD SEMIC  */
#line 266 "parser.y"
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
#line 1595 "parser.tab.c"
    break;

  case 60: /* string_declare: STRING IDEN SEMIC  */
#line 277 "parser.y"
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
#line 1610 "parser.tab.c"
    break;

  case 61: /* boolean_declare: BOOL IDEN ASSOP expr more_bool  */
#line 290 "parser.y"
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
#line 1628 "parser.tab.c"
    break;

  case 62: /* boolean_declare: BOOL IDEN more_bool  */
#line 303 "parser.y"
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
#line 1643 "parser.tab.c"
    break;

  case 64: /* more_bool: COMMA IDEN ASSOP expr more_bool  */
#line 317 "parser.y"
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
#line 1661 "parser.tab.c"
    break;

  case 65: /* more_bool: COMMA IDEN more_bool  */
#line 330 "parser.y"
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
#line 1676 "parser.tab.c"
    break;

  case 66: /* char_declare: CHAR IDEN ASSOP CHARD more_char  */
#line 343 "parser.y"
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
#line 1692 "parser.tab.c"
    break;

  case 67: /* char_declare: CHAR IDEN more_char  */
#line 354 "parser.y"
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
#line 1707 "parser.tab.c"
    break;

  case 69: /* more_char: COMMA IDEN ASSOP CHARD more_char  */
#line 368 "parser.y"
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
#line 1723 "parser.tab.c"
    break;

  case 70: /* more_char: COMMA IDEN more_char  */
#line 379 "parser.y"
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
#line 1738 "parser.tab.c"
    break;

  case 71: /* func_declare: FUNC IDEN LP fargs RP COLON rtype LCUR input RCUR  */
#line 392 "parser.y"
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
#line 1754 "parser.tab.c"
    break;

  case 72: /* fargs: type IDEN  */
#line 406 "parser.y"
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
#line 1772 "parser.tab.c"
    break;

  case 73: /* fargs: type IDEN COMMA fargs  */
#line 419 "parser.y"
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
#line 1790 "parser.tab.c"
    break;

  case 74: /* rtype: VOID  */
#line 435 "parser.y"
     {
    strcpy((yyval.anytype).sval, "void");
}
#line 1798 "parser.tab.c"
    break;

  case 75: /* rtype: type  */
#line 438 "parser.y"
      {
    strcpy((yyval.anytype).sval, (yyvsp[0].anytype).sval);
}
#line 1806 "parser.tab.c"
    break;

  case 76: /* in_fun: RETURN fdata SEMIC  */
#line 444 "parser.y"
                   {
    cout << "statement -> return : " << (yyvsp[-1].anytype).sval << "\n";
}
#line 1814 "parser.tab.c"
    break;

  case 77: /* fdata: %empty  */
#line 449 "parser.y"
       {strcpy((yyval.anytype).sval, "void");}
#line 1820 "parser.tab.c"
    break;

  case 78: /* fdata: IDEN  */
#line 450 "parser.y"
      {strcpy((yyval.anytype).sval, (yyvsp[0].anytype).sval);}
#line 1826 "parser.tab.c"
    break;

  case 79: /* fdata: INTD  */
#line 451 "parser.y"
      {string tmp = to_string((yyvsp[0].anytype).ival);strcpy((yyval.anytype).sval, tmp.c_str());}
#line 1832 "parser.tab.c"
    break;

  case 80: /* fdata: DOUBLED  */
#line 452 "parser.y"
         {string tmp = to_string((yyvsp[0].anytype).dval);strcpy((yyval.anytype).sval, tmp.c_str());}
#line 1838 "parser.tab.c"
    break;

  case 82: /* fdata: BOOLD  */
#line 454 "parser.y"
       {string tmp = (yyvsp[0].anytype).bval ? "true":"false";strcpy((yyval.anytype).sval, tmp.c_str());}
#line 1844 "parser.tab.c"
    break;

  case 83: /* fdata: CHARD  */
#line 455 "parser.y"
       {string tmp; tmp += (yyvsp[0].anytype).cval;strcpy((yyval.anytype).sval, tmp.c_str());}
#line 1850 "parser.tab.c"
    break;

  case 84: /* fdata: expr  */
#line 456 "parser.y"
      {strcpy((yyval.anytype).sval, "expression");}
#line 1856 "parser.tab.c"
    break;

  case 85: /* fdata: condition  */
#line 457 "parser.y"
           {strcpy((yyval.anytype).sval, "expression");}
#line 1862 "parser.tab.c"
    break;

  case 93: /* int_assign: IDEN ASSOP expr  */
#line 471 "parser.y"
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
#line 1887 "parser.tab.c"
    break;

  case 94: /* string_assign: IDEN ASSOP STRINGD  */
#line 494 "parser.y"
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
#line 1905 "parser.tab.c"
    break;

  case 95: /* char_assign: IDEN ASSOP CHARD  */
#line 510 "parser.y"
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
#line 1923 "parser.tab.c"
    break;

  case 96: /* type: INT  */
#line 526 "parser.y"
    {strcpy((yyval.anytype).sval,"int");}
#line 1929 "parser.tab.c"
    break;

  case 97: /* type: DOUBLE  */
#line 527 "parser.y"
        {strcpy((yyval.anytype).sval,"double");}
#line 1935 "parser.tab.c"
    break;

  case 98: /* type: STRING  */
#line 528 "parser.y"
        {strcpy((yyval.anytype).sval,"string");}
#line 1941 "parser.tab.c"
    break;

  case 99: /* type: CHAR  */
#line 529 "parser.y"
      {strcpy((yyval.anytype).sval,"char");}
#line 1947 "parser.tab.c"
    break;

  case 100: /* type: BOOL  */
#line 530 "parser.y"
      {strcpy((yyval.anytype).sval,"bool");}
#line 1953 "parser.tab.c"
    break;

  case 101: /* expr: term  */
#line 534 "parser.y"
     {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1962 "parser.tab.c"
    break;

  case 102: /* expr: MINUS expr  */
#line 538 "parser.y"
                         {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1971 "parser.tab.c"
    break;

  case 103: /* expr: expr PLUS term  */
#line 542 "parser.y"
                {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval + (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival + (yyvsp[0].anytype).ival;
}
#line 1980 "parser.tab.c"
    break;

  case 104: /* expr: expr MINUS term  */
#line 546 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval - (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival - (yyvsp[-2].anytype).ival;
}
#line 1989 "parser.tab.c"
    break;

  case 105: /* term: factor  */
#line 553 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 1998 "parser.tab.c"
    break;

  case 106: /* term: term MUL factor  */
#line 557 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval * (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival * (yyvsp[-2].anytype).ival;
}
#line 2007 "parser.tab.c"
    break;

  case 107: /* term: term DIV factor  */
#line 561 "parser.y"
                 {
    (yyval.anytype).dval = (yyvsp[-2].anytype).dval / (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival / (yyvsp[-2].anytype).ival;
}
#line 2016 "parser.tab.c"
    break;

  case 108: /* term: term REM factor  */
#line 565 "parser.y"
                 {
    (yyval.anytype).ival = (yyvsp[-2].anytype).ival % (yyvsp[0].anytype).ival;
    (yyval.anytype).dval = (yyval.anytype).ival;
}
#line 2025 "parser.tab.c"
    break;

  case 109: /* factor: number  */
#line 572 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 2034 "parser.tab.c"
    break;

  case 111: /* factor: IDEN  */
#line 577 "parser.y"
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
#line 2065 "parser.tab.c"
    break;

  case 112: /* factor: LP expr RP  */
#line 603 "parser.y"
            {
    (yyval.anytype).dval = (yyvsp[-1].anytype).dval;
    (yyval.anytype).ival = (yyvsp[-1].anytype).ival;
}
#line 2074 "parser.tab.c"
    break;

  case 113: /* func_call: IDEN LP data RP  */
#line 610 "parser.y"
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
#line 2096 "parser.tab.c"
    break;

  case 127: /* number: INTD  */
#line 640 "parser.y"
     {
    (yyval.anytype).dval = (yyvsp[0].anytype).ival;
    (yyval.anytype).ival = (yyvsp[0].anytype).ival;
}
#line 2105 "parser.tab.c"
    break;

  case 128: /* number: DOUBLED  */
#line 644 "parser.y"
         {
    (yyval.anytype).dval = (yyvsp[0].anytype).dval;
    (yyval.anytype).ival = (yyvsp[0].anytype).dval;
}
#line 2114 "parser.tab.c"
    break;

  case 129: /* number: BOOLD  */
#line 648 "parser.y"
       {
    (yyval.anytype).dval = (yyvsp[0].anytype).bval;
    (yyval.anytype).ival = (yyvsp[0].anytype).bval;
}
#line 2123 "parser.tab.c"
    break;


#line 2127 "parser.tab.c"

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

#line 655 "parser.y"


int main() {
    //yyin = fopen("input.txt", "r");
    freopen("input2.0.txt", "r", stdin);
    //freopen("output3.0.txt", "w", stdout);
    yyparse();

    return 0;
}

void yyerror(char *str) {
    fprintf(stderr, "error:%s\n", str);
}
