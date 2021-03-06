/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myParser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror (char *);
extern FILE * yyin;
extern int * yylineno;
extern void substring(char*, char*, int, int);
// identifiers
char ids[256][256] = {0};
void addId(char *);
int idExists(char *);
// functions
char funcs[256][256] = {0};
void addFunc(char *);
int funcExists(char *);
// structs
char structs[256][256] = {0};
void addStruct(char *);
int structExists(char *);
// type names
char typeNames[256][256] = {0};
void addTypeName(char *);
int typeNameExists(char *);

void undeclaredError(char * id);

#line 96 "myParser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myParser.tab.h".  */
#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DIGITS = 258,
    CHARACTER = 259,
    PROGRAM = 260,
    FUNCTION = 261,
    VARS = 262,
    CHAR = 263,
    INTEGER = 264,
    END_FUNCTION = 265,
    RETURN = 266,
    STARTMAIN = 267,
    ENDMAIN = 268,
    IF = 269,
    THEN = 270,
    ELSEIF = 271,
    ENDIF = 272,
    WHILE = 273,
    ENDWHILE = 274,
    FOR = 275,
    TO = 276,
    STEP = 277,
    ENDFOR = 278,
    BREAK = 279,
    PRINT = 280,
    SWITCH = 281,
    CASE = 282,
    DEFAULT = 283,
    ENDSWITCH = 284,
    AND = 285,
    OR = 286,
    VARNAME = 287,
    SEMICOLON = 288,
    STRING = 289,
    COMP = 290,
    ELSE = 291,
    STRUCT = 292,
    ENDSTRUCT = 293,
    TYPEDEF = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "myParser.y" /* yacc.c:355  */

    int intValue;
    char *stringValue;

#line 181 "myParser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "myParser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,    46,    44,    42,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,    48,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    81,    82,    85,    86,    89,    90,
      93,    94,    97,    98,    99,   100,   103,   104,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   118,   119,   122,
     124,   125,   128,   130,   131,   134,   135,   136,   137,   138,
     139,   140,   143,   144,   145,   146,   149,   150,   151,   152,
     155,   156,   157,   158,   159,   162,   163,   166,   167,   170,
     171,   172,   173,   176,   177,   178,   179,   182,   183,   184,
     187,   190,   193,   194,   197,   198,   201,   204,   205,   206,
     207,   210,   211,   214,   215,   218,   219,   222,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGITS", "CHARACTER", "PROGRAM",
  "FUNCTION", "VARS", "CHAR", "INTEGER", "END_FUNCTION", "RETURN",
  "STARTMAIN", "ENDMAIN", "IF", "THEN", "ELSEIF", "ENDIF", "WHILE",
  "ENDWHILE", "FOR", "TO", "STEP", "ENDFOR", "BREAK", "PRINT", "SWITCH",
  "CASE", "DEFAULT", "ENDSWITCH", "AND", "OR", "VARNAME", "SEMICOLON",
  "STRING", "COMP", "ELSE", "STRUCT", "ENDSTRUCT", "TYPEDEF", "'('", "')'",
  "','", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'['", "']'", "':'",
  "$accept", "file", "structs", "declarations", "struct", "main", "block",
  "statement", "print", "invocation", "parameter_list", "declaration",
  "assignment", "expression", "var_list", "print_var_list", "operator",
  "array", "functions", "function", "param_declaration", "var_type",
  "return", "break", "bool_op", "condition", "while", "if", "elseifs",
  "cases", "switch", "for", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      40,    41,    44,    61,    43,    45,    42,    47,    94,    91,
      93,    58
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,    17,    13,    45,    44,    99,    76,    12,    77,   -55,
     109,   120,   -55,    88,    57,     6,   -55,    91,    93,    97,
      94,    96,   103,    53,   196,   122,   247,   -55,   113,   -55,
     105,   -55,   -55,   -55,   -55,   -55,   -55,    -2,    99,   -55,
     109,   -55,   -55,   -55,    57,   -55,   -55,   -55,   -55,   118,
     -55,   -55,   -21,     6,   -55,    34,   -55,     6,     6,   102,
     -55,   124,     6,     6,     6,     5,   -55,    53,   146,   -55,
     -55,   -55,   -55,     6,   -55,    63,   -55,   121,   129,   115,
      50,   -55,   244,   -55,   -55,   -55,   -55,   -55,   -55,     6,
     150,   -15,     2,   123,    68,   252,   127,   267,    40,   119,
     125,   -55,   236,   132,   131,    -8,   135,   -55,   141,   -55,
     230,     6,   -55,   -55,   159,     6,   247,   177,   154,   156,
     163,   -55,     6,   -55,   -55,   -55,   -55,   -55,   -55,   215,
     181,    57,    57,   115,   -55,   230,   247,    89,   173,   178,
     -55,    58,   160,   165,   167,   171,    95,   -55,   -55,   202,
     -55,   -55,   -55,    -5,   -55,   210,   183,   184,     6,   168,
     -55,   -55,   187,   -55,   247,     4,   208,    62,   190,   -55,
     260,   247,     6,   201,   -55,   247,   229,   185,   205,    22,
     -55,   220,   231,   247,   -55,   247,   -55,   -55,   221,   163,
     222,   -55,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     6,     5,
       0,    57,     1,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    18,     0,    19,
       0,    26,    24,    22,    20,    23,    21,     0,     0,     4,
       0,     7,     3,    58,     0,    67,    68,    69,     8,     0,
      35,    37,    38,     0,    41,     0,    36,     0,     0,     0,
      71,     0,     0,     0,     0,     0,    13,    69,     0,     9,
      14,    17,    25,     0,    10,     0,     2,     0,     0,    42,
       0,    43,     0,    70,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,    12,     0,    69,     0,    63,    64,    32,     0,    40,
      39,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    33,    55,    56,    34,    11,    61,     0,
       0,     0,     0,    44,    45,    74,     0,    75,     0,     0,
      27,    42,     0,     0,    43,     0,     0,    31,    60,     0,
      62,    66,    65,     0,    76,     0,     0,     0,     0,     0,
      85,    59,     0,    77,     0,     0,     0,    44,    45,    28,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
      78,     0,     0,     0,    86,     0,    80,    88,     0,    83,
      81,    87,    84,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   235,    -3,   -55,     7,    18,   -55,   -55,     1,
     126,   232,   -55,   -14,   133,   -55,   -55,    -4,    87,   -55,
       8,   -41,   -55,   -55,   -55,   -54,   -55,   -55,    60,    64,
     -55,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    24,     8,     9,    25,    26,    27,    54,
      96,    69,    29,    90,    80,   143,    89,    56,    10,    11,
      77,    49,    31,    32,   115,    91,    33,    34,   165,   146,
      35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    55,    37,    78,    92,    28,    45,    46,    99,    50,
      51,   162,   163,    12,    39,   112,   113,    42,     3,    63,
      30,   174,    30,     3,     4,    28,   114,    28,    65,     4,
      47,   164,   112,   113,   131,    75,    74,   100,    52,    82,
     175,    65,    68,   116,    71,    81,    53,    76,    95,    97,
      98,    14,   112,   113,     5,    15,     6,    16,    17,   102,
       1,   137,    18,   185,    19,    45,    46,    83,    20,    21,
      22,    45,    46,   123,   106,   110,    23,    13,    84,    85,
      86,    87,    88,   107,    84,    85,    86,    87,    88,    47,
      78,    78,   108,    63,    40,   103,    64,   135,    43,   -46,
      30,   129,    65,   -48,   134,    28,    14,    65,    97,   118,
     119,    65,    30,    38,     5,   144,     6,    28,   179,   112,
     113,     4,   130,   159,   160,    30,     3,    60,    44,    59,
      28,    57,    30,    58,   138,    70,    61,    28,    14,   151,
     152,   128,    15,    62,   170,    17,    72,   149,    73,    18,
      79,    19,   168,    93,   153,    20,    21,    22,    94,   101,
      30,   105,   104,    23,    65,    28,   117,    30,   121,   124,
     127,    30,    28,   133,   136,   125,    28,   132,    30,    30,
     139,    30,   173,    28,    28,   111,    28,   140,   141,   178,
     145,   150,   154,   181,    84,    85,    86,    87,    88,   155,
     188,   189,   156,   190,    45,    46,   157,    15,   -47,    66,
      17,   158,   161,   166,    18,   167,    19,   169,   180,   171,
      20,    21,    22,    45,    46,   148,    15,   172,    67,    17,
     176,   -49,   182,    18,   184,    19,   183,   186,   162,    20,
      21,    22,    15,    41,   191,    17,    48,    67,   147,    18,
     193,    19,   142,   192,   187,    20,    21,    22,    15,     0,
       0,    17,     0,    23,     0,    18,     0,    19,     0,   126,
       0,    20,    21,    22,    84,    85,    86,    87,    88,    23,
      84,    85,    86,    87,    88,   109,     0,     0,    84,    85,
      86,    87,    88,   120,     0,     0,    84,    85,    86,    87,
      88,   177,     0,     0,    84,    85,    86,    87,    88,   122,
       0,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
       4,    15,     5,    44,    58,     4,     8,     9,     3,     3,
       4,    16,    17,     0,     7,    30,    31,    10,     6,    40,
      24,    17,    26,     6,    12,    24,    41,    26,    49,    12,
      32,    36,    30,    31,    42,    38,    38,    32,    32,    53,
      36,    49,    24,    41,    26,    49,    40,    40,    62,    63,
      64,     7,    30,    31,    37,    11,    39,    13,    14,    73,
       5,   115,    18,    41,    20,     8,     9,    33,    24,    25,
      26,     8,     9,    33,    78,    89,    32,    32,    44,    45,
      46,    47,    48,    33,    44,    45,    46,    47,    48,    32,
     131,   132,    42,    40,     7,    32,    43,   111,    11,    41,
     104,   104,    49,    41,   108,   104,     7,    49,   122,    41,
      42,    49,   116,    37,    37,   119,    39,   116,   172,    30,
      31,    12,   104,    28,    29,   129,     6,    33,    40,    32,
     129,    40,   136,    40,   116,    13,    40,   136,     7,   131,
     132,    10,    11,    40,   158,    14,    33,   129,    43,    18,
      32,    20,   156,    51,   136,    24,    25,    26,    34,    13,
     164,    32,    41,    32,    49,   164,    43,   171,    41,    50,
      38,   175,   171,    32,    15,    50,   175,    42,   182,   183,
       3,   185,   164,   182,   183,    35,   185,    33,    32,   171,
      27,    10,    19,   175,    44,    45,    46,    47,    48,    21,
     182,   183,    42,   185,     8,     9,    41,    11,    41,    13,
      14,    40,    10,     3,    18,    32,    20,    33,    17,    51,
      24,    25,    26,     8,     9,    10,    11,    40,    32,    14,
      22,    41,     3,    18,    29,    20,    51,    17,    16,    24,
      25,    26,    11,     8,    23,    14,    14,    32,   122,    18,
     190,    20,   119,   189,    23,    24,    25,    26,    11,    -1,
      -1,    14,    -1,    32,    -1,    18,    -1,    20,    -1,    33,
      -1,    24,    25,    26,    44,    45,    46,    47,    48,    32,
      44,    45,    46,    47,    48,    41,    -1,    -1,    44,    45,
      46,    47,    48,    41,    -1,    -1,    44,    45,    46,    47,
      48,    41,    -1,    -1,    44,    45,    46,    47,    48,    42,
      -1,    44,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    53,     6,    12,    37,    39,    54,    56,    57,
      70,    71,     0,    32,     7,    11,    13,    14,    18,    20,
      24,    25,    26,    32,    55,    58,    59,    60,    61,    64,
      69,    74,    75,    78,    79,    82,    83,    55,    37,    57,
      70,    54,    57,    70,    40,     8,     9,    32,    63,    73,
       3,     4,    32,    40,    61,    65,    69,    40,    40,    32,
      33,    40,    40,    40,    43,    49,    13,    32,    58,    63,
      13,    58,    33,    43,    38,    55,    57,    72,    73,    32,
      66,    69,    65,    33,    44,    45,    46,    47,    48,    68,
      65,    77,    77,    51,    34,    65,    62,    65,    65,     3,
      32,    13,    65,    32,    41,    32,    69,    33,    42,    41,
      65,    35,    30,    31,    41,    76,    41,    43,    41,    42,
      41,    41,    42,    33,    50,    50,    33,    38,    10,    55,
      58,    42,    42,    32,    69,    65,    15,    77,    58,     3,
      33,    32,    66,    67,    69,    27,    81,    62,    10,    58,
      10,    72,    72,    58,    19,    21,    42,    41,    40,    28,
      29,    10,    16,    17,    36,    80,     3,    32,    69,    33,
      65,    51,    40,    58,    17,    36,    22,    41,    58,    77,
      17,    58,     3,    51,    29,    41,    17,    23,    58,    58,
      58,    23,    81,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      62,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      74,    75,    76,    76,    77,    77,    78,    79,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     2,     2,     2,
       3,     5,     4,     3,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     5,     7,     4,
       1,     3,     3,     4,     4,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     3,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     4,     4,     1,     2,     8,
       7,     6,     7,     2,     2,     4,     4,     1,     1,     1,
       3,     2,     1,     1,     3,     3,     6,     7,     9,     8,
      10,     5,     6,     6,     7,     6,     9,    11,    10
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 79 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1432 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1438 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1444 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1450 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "myParser.y" /* yacc.c:1646  */
    {char newId[256]; substring(newId, (yyvsp[-2].stringValue), 7, strlen((yyvsp[-2].stringValue))-1); addStruct(newId);}
#line 1456 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 94 "myParser.y" /* yacc.c:1646  */
    {char newId[256]; substring(newId, (yyvsp[-3].stringValue), 7, strlen((yyvsp[-3].stringValue))-1);if(strcmp(newId, (yyvsp[-1].stringValue)) == 0){addStruct(newId);addTypeName(newId);}else{yyerror("TYPEDEF STRUCT name different than ENDSTRUCT name!");YYERROR;}}
#line 1462 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1468 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1474 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1480 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1486 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = (yyvsp[0].intValue);}
#line 1492 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = (yyvsp[-1].intValue) || (yyvsp[0].intValue);}
#line 1498 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1504 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1510 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1516 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 110 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1522 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1528 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 112 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1534 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 113 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1540 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 0;}
#line 1546 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "myParser.y" /* yacc.c:1646  */
    {(yyval.intValue) = 1;}
#line 1552 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1558 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 119 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1564 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 122 "myParser.y" /* yacc.c:1646  */
    {if(funcExists((yyvsp[-3].stringValue)) == 0){undeclaredError((yyvsp[-3].stringValue));YYERROR;}}
#line 1570 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1576 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1582 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1588 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[-3].stringValue)) == 0){undeclaredError((yyvsp[-3].stringValue));YYERROR;}}
#line 1594 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[-3].stringValue)) == 0){undeclaredError((yyvsp[-3].stringValue));YYERROR;}}
#line 1600 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1606 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 135 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1612 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1618 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1624 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1630 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1636 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1642 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1648 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1654 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1660 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1666 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1672 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1678 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1684 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "myParser.y" /* yacc.c:1646  */
    {if(idExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1690 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1696 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1702 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1708 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1714 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1720 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "myParser.y" /* yacc.c:1646  */
    {(yyval.stringValue) = (yyvsp[-3].stringValue);}
#line 1726 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "myParser.y" /* yacc.c:1646  */
    {(yyval.stringValue) = (yyvsp[-3].stringValue); if(idExists((yyvsp[-1].stringValue)) == 0){undeclaredError((yyvsp[-1].stringValue));YYERROR;}}
#line 1732 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 166 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1738 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 167 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1744 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "myParser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].intValue) == 0){yyerror("function does not return!");YYERROR;}addFunc((yyvsp[-6].stringValue));}
#line 1750 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "myParser.y" /* yacc.c:1646  */
    {yyerror("function does not return!");YYERROR;}
#line 1756 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "myParser.y" /* yacc.c:1646  */
    {yyerror("empty functions are not allowed!");YYERROR;}
#line 1762 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "myParser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].intValue) == 0){yyerror("function does not return!");YYERROR;}addFunc((yyvsp[-5].stringValue));}
#line 1768 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 176 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1774 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 177 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[0].stringValue));}
#line 1780 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 178 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[-2].stringValue));}
#line 1786 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 179 "myParser.y" /* yacc.c:1646  */
    {addId((yyvsp[-2].stringValue));}
#line 1792 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 182 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1798 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 183 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1804 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 184 "myParser.y" /* yacc.c:1646  */
    {if(typeNameExists((yyvsp[0].stringValue)) == 0){undeclaredError((yyvsp[0].stringValue));YYERROR;}}
#line 1810 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 187 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1816 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 190 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1822 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1828 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1834 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 197 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1840 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 198 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1846 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 201 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1852 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 204 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1858 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 205 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1864 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 206 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1870 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 207 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1876 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 210 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1882 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 211 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1888 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 214 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1894 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 215 "myParser.y" /* yacc.c:1646  */
    {;}
#line 1900 "myParser.tab.c" /* yacc.c:1646  */
    break;


#line 1904 "myParser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 226 "myParser.y" /* yacc.c:1906  */


void yyerror(char *s) {
    fprintf(stderr, "at line %d: %s\n", yylineno, s);
}

void catFile(char* filename){
	FILE * fp = fopen(filename, "r");
    char next = fgetc(fp);
    while (next != EOF)
    {
        printf ("%c", next);
        next = fgetc(fp);
    }
    fclose(fp);
	printf("\n");
}

int main(int argc, char **argv){

	// print file contents
	catFile(argv[1]);

	// redirect input to file
	yyin = fopen(argv[1],"r");
	yyparse();

	return 0;
}

void addId(char * newId){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(ids[i][0] != 0){
		i++;
		if(strcmp(ids[i], newId) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newId[j] != '\0'){
			ids[i][j] = newId[j];
			j++;
		}
	}
}

int idExists(char * id){
	int i = 0;
	while(ids[i][0] != 0){
		if(strcmp(ids[i], id) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addFunc(char * newFunc){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(funcs[i][0] != 0){
		i++;
		if(strcmp(funcs[i], newFunc) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newFunc[j] != '\0'){
			funcs[i][j] = newFunc[j];
			j++;
		}
	}
}

int funcExists(char * func){
	int i = 0;
	while(funcs[i][0] != 0){
		if(strcmp(funcs[i], func) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addStruct(char * newStruct){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(structs[i][0] != 0){
		i++;
		if(strcmp(structs[i], newStruct) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newStruct[j] != '\0'){
			structs[i][j] = newStruct[j];
			j++;
		}
	}
}

int structExists(char * struc){
	int i = 0;
	while(structs[i][0] != 0){
		if(strcmp(structs[i], struc) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addTypeName(char * newTypeName){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(typeNames[i][0] != 0){
		i++;
		if(strcmp(typeNames[i], newTypeName) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newTypeName[j] != '\0'){
			typeNames[i][j] = newTypeName[j];
			j++;
		}
	}
}

int typeNameExists(char * typeName){
	int i = 0;
	while(typeNames[i][0] != 0){
		if(strcmp(typeNames[i], typeName) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void undeclaredError(char * id){
	char message[270] = "undeclared identifier: ";
	yyerror(strcat(message, id));
}

