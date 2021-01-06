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
#line 20 "proiect.y" /* yacc.c:339  */

    void yyerror(char *s);
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int xx=0;
	int cond[100];
	int h = 0;
	typedef struct{
		float nr;
		float* list;
		int listSize;
		char* str;
	}variabila;
	variabila names[52] = {0};
	int zz;
	float symbolVal(char symbol);
	int fractia(int x);
	void afisMesaj(char *s);
	void updateSymbolVal(char symbol, float val);
	void updateSymbolList(char symbol, char* list);
	void updateSymbolString(char symbol, char* string);
	void printAssign(char symbol);
	void printVariable(char symbol); 
	void updateSymbolList1(char symbol, int nr, int val);
	void updateSymbolString1(char symbol, int nr, char* val);
	float symbolListElement(char symbol, char* n);
	void while_function(int a,char cond, int b,char var, int c);
	void for_function(float a,float cond, float b,float c,char var,char var1, float d,float e,char ala);
	void for_function_print(float a,float cond, float b,float c,char ala,char pr);
	float* symbolList(char symbol);
	char* symbolString(char symbol);
	int symbolListSize(char symbol);
	int computeSymbolIndex(char token);
	void sortList(char symbol);
	void removeDuplicates(char symbol);
	

#line 105 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    VAR = 258,
    COND = 259,
    NUMBER = 260,
    STRING = 261,
    CAR = 262,
    LIST = 263,
    EGAL = 264,
    PRINT = 265,
    IF = 266,
    THEN = 267,
    ELSE = 268,
    WHILE = 269,
    FOR = 270,
    SIZE = 271,
    SORT = 272,
    REM_DUP = 273
  };
#endif
/* Tokens.  */
#define VAR 258
#define COND 259
#define NUMBER 260
#define STRING 261
#define CAR 262
#define LIST 263
#define EGAL 264
#define PRINT 265
#define IF 266
#define THEN 267
#define ELSE 268
#define WHILE 269
#define FOR 270
#define SIZE 271
#define SORT 272
#define REM_DUP 273

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 59 "proiect.y" /* yacc.c:355  */
 char name;
	float nr;
	int num;
	char* string;
	char* list;
	struct node{
        float type;
        char value;
    }node ;
	

#line 193 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      23,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,    25,    21,    19,    29,    20,    30,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,    28,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    75,    76,    77,    78,    92,    97,
     101,   105,   108,   116,   122,   136,   149,   160,   170,   171,
     174,   175,   178,   181,   184,   190,   191,   192,   193,   196,
     199,   205,   209,   212,   227,   229,   231,   233,   240,   248,
     249,   250,   251,   252,   253,   254,   255,   260,   263,   265,
     266,   269,   271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "COND", "NUMBER", "STRING", "CAR",
  "LIST", "EGAL", "PRINT", "IF", "THEN", "ELSE", "WHILE", "FOR", "SIZE",
  "SORT", "REM_DUP", "'+'", "'-'", "'*'", "'/'", "'\\n'", "'('", "')'",
  "';'", "'['", "']'", "','", "'.'", "$accept", "program", "act",
  "print_st", "ope", "if_statement", "statement", "condition", "asign",
  "exp", "oper1", "oper2", "oper3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    43,
      45,    42,    47,    10,    40,    41,    59,    91,    93,    44,
      46
};
# endif

#define YYPACT_NINF -17

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-17)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   112,   -17,    99,   -10,     5,    36,    39,    44,    60,
      64,   -17,   -17,   -17,    82,     1,     7,    30,    86,    30,
      91,   108,   110,   -17,    27,   120,    88,   -17,   -17,    92,
      94,    30,   218,   -17,   -17,   -17,    -6,    -9,   155,   113,
      15,   127,   111,   115,   116,   -17,   218,   -17,   132,   135,
     -17,   162,    30,    30,    30,    30,   -17,   -17,    50,   -17,
      30,   136,   -17,   141,    30,    53,   -17,   -17,   -17,   119,
     -17,    81,    81,   -17,   -17,     3,   169,   176,    30,    15,
     183,   138,   131,   -17,   -17,   -17,   -17,   218,   -17,   152,
     153,   160,   161,   146,   168,    30,   159,    56,   218,   175,
     140,   139,   182,   189,   196,    30,   154,   184,   147,   174,
     203,   210,   217,   105,   198,   205,   216,   223,   224,   231,
     220,   221,   215,   228,    42,    61,   243,   244,   241,   227,
     245,   229,   230,   232,   249,    62,   253,    80,   248,   250,
     222,    32,   190,   222,    67,   197,   235,   237,   -17,   -17,
     -17,   -17,    30,   -17,   -17,    30,   -17,   -17,    85,    90,
     218,   218,    -3,   204,    14,   211,   259,   -17,   260,   -17,
     236,   238,   240,   242,   -17,   -17
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,    48,    49,    52,    51,     0,
       0,     0,    34,    39,    35,    36,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    37,    47,     0,     0,
      40,     0,     0,     0,     0,     0,    20,    24,     0,    21,
       0,     0,    32,    29,     0,     0,    18,    19,    50,     0,
      45,    41,    42,    43,    44,    48,     0,     0,     0,     0,
       0,     0,     0,    46,    22,    23,    33,    31,    30,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,    48,     0,     0,     0,    25,    26,
      27,    28,     0,    10,    12,     0,    11,    13,     0,     0,
       8,     9,    48,     0,    48,     0,     0,    17,     0,    16,
       0,     0,     0,     0,    15,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -17,   -17,   -17,   -17,   125,   268,   191,   -17,   -17,   -16,
     246,   -17,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    10,    11,   152,    62,    63,    18,    13,    32,
      33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    39,    47,    41,    25,    47,    26,    27,    46,    28,
      36,    47,    26,    37,    16,    51,    57,    29,    61,    56,
      58,    30,    47,    29,   166,    31,     5,    30,    84,    17,
      25,    31,    26,    25,    45,    26,    71,    72,    73,    74,
      47,   168,    76,    29,    77,   128,    29,    30,    80,    82,
      30,    31,   129,    75,    31,    26,    25,   153,    26,    25,
      19,    26,    87,    20,   130,   141,    29,    26,    21,    81,
      30,   131,   100,    30,    31,    47,    30,    31,    29,    98,
      31,   101,    30,   144,    22,    26,    31,    23,   162,   108,
      26,    24,   156,   164,    42,    26,    29,    25,    40,    26,
      30,    29,    54,    55,    31,    30,    29,    14,    15,    31,
      30,    43,     2,    44,    31,     3,    49,    60,    48,   142,
      65,   145,     4,     5,   116,   117,     6,     7,    47,     8,
       9,    64,    52,    53,    54,    55,   160,    68,    69,   161,
      66,    67,   163,   165,    83,    78,    52,    53,    54,    55,
      52,    53,    54,    55,    79,    92,    93,    91,    52,    53,
      54,    55,    90,    94,   103,   104,    52,    53,    54,    55,
      95,    96,    97,   111,    52,    53,    54,    55,   102,   109,
      59,    52,    53,    54,    55,    99,   105,    70,    52,    53,
      54,    55,   106,   110,    85,    52,    53,    54,    55,   107,
     112,    86,    52,    53,    54,    55,   113,   118,    89,    52,
      53,    54,    55,   114,   119,   154,    52,    53,    54,    55,
     115,   120,   157,    52,    53,    54,    55,   122,   121,   167,
      52,    53,    54,    55,   123,   126,   169,    52,    53,    54,
      55,   148,   149,   150,   151,   124,   125,   127,   132,   133,
     134,   135,   140,   137,   136,   138,   143,   139,   146,   158,
     147,   159,   170,   171,   172,   174,   173,   175,   155,    12,
      88,     0,     0,     0,     0,     0,    50
};

static const yytype_int16 yycheck[] =
{
      16,    17,     8,    19,     3,     8,     5,     6,    24,     8,
       3,     8,     5,     6,    24,    31,    25,    16,     3,    25,
      29,    20,     8,    16,    27,    24,    11,    20,    25,    24,
       3,    24,     5,     3,     7,     5,    52,    53,    54,    55,
       8,    27,    58,    16,    60,     3,    16,    20,    64,    65,
      20,    24,    10,     3,    24,     5,     3,    25,     5,     3,
      24,     5,    78,    24,     3,     3,    16,     5,    24,    16,
      20,    10,    16,    20,    24,     8,    20,    24,    16,    95,
      24,    97,    20,     3,    24,     5,    24,    23,     3,   105,
       5,     9,    25,     3,     3,     5,    16,     3,    12,     5,
      20,    16,    21,    22,    24,    20,    16,     8,     9,    24,
      20,     3,     0,     3,    24,     3,    24,     4,    30,   135,
       9,   137,    10,    11,    19,    20,    14,    15,     8,    17,
      18,     4,    19,    20,    21,    22,   152,     5,     3,   155,
      25,    25,   158,   159,    25,     9,    19,    20,    21,    22,
      19,    20,    21,    22,    13,     3,     3,    26,    19,    20,
      21,    22,    24,     3,    24,    26,    19,    20,    21,    22,
       9,    25,     4,    26,    19,    20,    21,    22,     3,    25,
      25,    19,    20,    21,    22,    26,     4,    25,    19,    20,
      21,    22,     3,     9,    25,    19,    20,    21,    22,     3,
      26,    25,    19,    20,    21,    22,     3,     9,    25,    19,
      20,    21,    22,     3,     9,    25,    19,    20,    21,    22,
       3,     5,    25,    19,    20,    21,    22,     3,     5,    25,
      19,    20,    21,    22,     3,    20,    25,    19,    20,    21,
      22,    19,    20,    21,    22,    25,    25,    19,     5,     5,
       9,    24,     3,    24,     9,    25,     3,    25,    10,    24,
      10,    24,     3,     3,    28,    25,    28,    25,   143,     1,
      79,    -1,    -1,    -1,    -1,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,     0,     3,    10,    11,    14,    15,    17,    18,
      33,    34,    36,    39,     8,     9,    24,    24,    38,    24,
      24,    24,    24,    23,     9,     3,     5,     6,     8,    16,
      20,    24,    40,    41,    42,    43,     3,     6,    40,    40,
      12,    40,     3,     3,     3,     7,    40,     8,    30,    24,
      41,    40,    19,    20,    21,    22,    25,    25,    29,    25,
       4,     3,    36,    37,     4,     9,    25,    25,     5,     3,
      25,    40,    40,    40,    40,     3,    40,    40,     9,    13,
      40,    16,    40,    25,    25,    25,    25,    40,    37,    25,
      24,    26,     3,     3,     3,     9,    25,     4,    40,    26,
      16,    40,     3,    24,    26,     4,     3,     3,    40,    25,
       9,    26,    26,     3,     3,     3,    19,    20,     9,     9,
       5,     5,     3,     3,    25,    25,    20,    19,     3,    10,
       3,    10,     5,     5,     9,    24,     9,    24,    25,    25,
       3,     3,    40,     3,     3,    40,    10,    10,    19,    20,
      21,    22,    35,    25,    25,    35,    25,    25,    24,    24,
      40,    40,     3,    40,     3,    40,    27,    25,    27,    25,
       3,     3,    28,    28,    25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      34,    34,    34,    34,    34,    35,    35,    35,    35,    36,
      36,    37,    37,    38,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    42,    43
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     1,     9,    21,    21,
      20,    20,    20,    20,    26,    26,    23,    23,     4,     4,
       4,     4,     6,     6,     4,     1,     1,     1,     1,     4,
       6,     3,     1,     5,     3,     3,     3,     4,     4,     1,
       2,     3,     3,     3,     3,     3,     4,     2,     1,     1,
       3,     1,     1
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
        case 4:
#line 75 "proiect.y" /* yacc.c:1646  */
    { printAssign((yyvsp[0].name)); }
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 78 "proiect.y" /* yacc.c:1646  */
    {		if ((yyvsp[-5].name) == '>')
													{  
														while_function((yyvsp[-6].nr),'>',(yyvsp[-4].nr),(yyvsp[-2].name),(yyvsp[0].nr));
													} 
													else if ((yyvsp[-5].name) == '<')
														{
															while_function((yyvsp[-6].nr),'<',(yyvsp[-4].nr),(yyvsp[-2].name),(yyvsp[0].nr));;
														}
													else
														{
															while_function((yyvsp[-6].nr),'=',(yyvsp[-4].nr),(yyvsp[-2].name),(yyvsp[0].nr));
														}
	
											 }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 92 "proiect.y" /* yacc.c:1646  */
    {
													if ((yyvsp[-13].name) == '<')
														{
															for_function((yyvsp[-16].nr),'<',(yyvsp[-12].nr),(yyvsp[-6].nr),(yyvsp[-4].name),(yyvsp[-2].name),(yyvsp[-1].nr),(yyvsp[0].nr),(yyvsp[-18].name));
														}}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 97 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-13].name) == '>')
													{  
														for_function((yyvsp[-16].nr),'<',(yyvsp[-12].nr),(yyvsp[-6].nr),(yyvsp[-4].name),(yyvsp[-2].name),(yyvsp[-1].nr),(yyvsp[0].nr),(yyvsp[-18].name));
													} }
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 101 "proiect.y" /* yacc.c:1646  */
    {
												
															for_function_print((yyvsp[-15].nr),'<',(yyvsp[-11].nr),(yyvsp[-5].nr),(yyvsp[-17].name),(yyvsp[-1].name));
														}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "proiect.y" /* yacc.c:1646  */
    { 
														for_function_print((yyvsp[-15].nr),'>',(yyvsp[-11].nr),(yyvsp[-5].nr),(yyvsp[-17].name),(yyvsp[-1].name));
													 }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 108 "proiect.y" /* yacc.c:1646  */
    {
												
															for(int i=(yyvsp[-15].nr);i<(yyvsp[-11].nr);i+=(yyvsp[-5].nr)){
															if(zz == 1) printf("%c\n",(char)(yyvsp[-1].nr));
																else printf("%.2f\n",(yyvsp[-1].nr));
																zz = 0;}
															}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 116 "proiect.y" /* yacc.c:1646  */
    { 
														for(int i=(yyvsp[-15].nr);i>(yyvsp[-11].nr);i-=(yyvsp[-5].nr)){
															if(zz == 1) printf("%c\n",(char)(yyvsp[-1].nr));
																else printf("%.2f\n",(yyvsp[-1].nr));
																zz = 0;}
															}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 122 "proiect.y" /* yacc.c:1646  */
    {
															
															if(NULL != symbolList((yyvsp[-15].name))){
															for(int i=(yyvsp[-21].nr);i<symbolListSize((yyvsp[-15].name));i+=(yyvsp[-8].nr)){
															    updateSymbolVal((yyvsp[-2].name),i);
																int x = symbolVal((yyvsp[-2].name));
																int bucket = computeSymbolIndex((yyvsp[-4].name));
																float la = names[bucket].list[x];
																printf("%.2f\n",la);
																}
															}
															else printf("%c nu este o lista\n",(yyvsp[-15].name));
															}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 136 "proiect.y" /* yacc.c:1646  */
    { 
														
														if(NULL != symbolList((yyvsp[-19].name))){
															for(int i=symbolListSize((yyvsp[-19].name));i>(yyvsp[-14].nr);i-=(yyvsp[-8].nr)){
															 updateSymbolVal((yyvsp[-2].name),i);
																int x = symbolVal((yyvsp[-2].name));
																int bucket = computeSymbolIndex((yyvsp[-4].name));
																float la = names[bucket].list[x];
																printf("%.2f\n",la);
																}
															}
															else printf("%c nu este o lista\n",(yyvsp[-15].name));
															}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 149 "proiect.y" /* yacc.c:1646  */
    {
															
															if(NULL != symbolList((yyvsp[-12].name))){
															for(int i=(yyvsp[-18].nr);i<symbolListSize((yyvsp[-12].name));i+=(yyvsp[-5].nr)){
															if(zz == 1) printf("%c\n",(char)(yyvsp[-1].nr));
																else printf("%.2f\n",(yyvsp[-1].nr));
																zz = 0;}
															}
															else printf("%c nu este o lista\n",(yyvsp[-12].name));
															}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 160 "proiect.y" /* yacc.c:1646  */
    { 
														
														if(NULL != symbolList((yyvsp[-16].name))){
															for(int i=symbolListSize((yyvsp[-16].name));i>(yyvsp[-11].nr);i-=(yyvsp[-5].nr)){
															if(zz == 1) printf("%c\n",(char)(yyvsp[-1].nr));
																else printf("%.2f\n",(yyvsp[-1].nr));
																zz = 0;}
															}
															else printf("%c nu este o lista\n",(yyvsp[-12].name));
															}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "proiect.y" /* yacc.c:1646  */
    { sortList((yyvsp[-1].name)); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 171 "proiect.y" /* yacc.c:1646  */
    { removeDuplicates((yyvsp[-1].name)); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 174 "proiect.y" /* yacc.c:1646  */
    { printVariable((yyvsp[-1].name));}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 175 "proiect.y" /* yacc.c:1646  */
    { if(zz == 1) printf("%c\n",(char)(yyvsp[-1].nr));
							else printf("%.2f\n",(yyvsp[-1].nr));
							zz = 0;}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 178 "proiect.y" /* yacc.c:1646  */
    { char *s; s = (yyvsp[-3].string);
										afisMesaj(s);
										printVariable((yyvsp[-1].name));}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 181 "proiect.y" /* yacc.c:1646  */
    { char *s; s = (yyvsp[-3].string);
										afisMesaj(s);
										printf(" %.2f \n",(yyvsp[-1].nr));}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 184 "proiect.y" /* yacc.c:1646  */
    { char *s; s = (yyvsp[-1].string);
										afisMesaj(s);
										printf("\n");
										}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 190 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = 0;}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 191 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = 1;}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 192 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = 2;}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 193 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = 3;}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 196 "proiect.y" /* yacc.c:1646  */
    {if((yyvsp[-2].num) == 1){ updateSymbolVal((yyvsp[0].node).value,(yyvsp[0].node).type);
															printf("val lui %c este acuma %.2f\n",(yyvsp[0].node).value,(yyvsp[0].node).type);}
											else printf("conditie neindeplinita\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 199 "proiect.y" /* yacc.c:1646  */
    {if((yyvsp[-4].num) == 1){ updateSymbolVal((yyvsp[-2].node).value,(yyvsp[-2].node).type);
															printf("val lui %c este acuma %.2f\n",(yyvsp[-2].node).value,(yyvsp[-2].node).type);}
											else { updateSymbolVal((yyvsp[0].node).value,(yyvsp[0].node).type);
															printf("val lui %c este acuma %.2f\n",(yyvsp[0].node).value,(yyvsp[0].node).type);}}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 205 "proiect.y" /* yacc.c:1646  */
    {
						  (yyval.node).type = (yyvsp[0].nr);
						  (yyval.node).value = (yyvsp[-2].name);
						   }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].name) == '>')
									{  if((yyvsp[-3].nr) > (yyvsp[-1].nr))
										{ (yyval.num) = 1;}
										else (yyval.num) = 0;} 
									else if ((yyvsp[-2].name) == '<')
											{if ((yyvsp[-3].nr) > (yyvsp[-1].nr))
												{ (yyval.num) = 0;} 
											else (yyval.num) = 1;}
									else if((yyvsp[-3].nr) == (yyvsp[-1].nr)) 
											(yyval.num) = 1; 
										else (yyval.num) = 0;}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 227 "proiect.y" /* yacc.c:1646  */
    {updateSymbolVal((yyvsp[-2].name), (yyvsp[0].nr)); 
					(yyval.name) = (yyvsp[-2].name);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "proiect.y" /* yacc.c:1646  */
    {updateSymbolList((yyvsp[-2].name), (yyvsp[0].list));
					(yyval.name) = (yyvsp[-2].name);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 231 "proiect.y" /* yacc.c:1646  */
    {updateSymbolString((yyvsp[-2].name), (yyvsp[0].string));
					(yyval.name) = (yyvsp[-2].name);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 233 "proiect.y" /* yacc.c:1646  */
    {char* n = (yyvsp[-2].list);
						 char nr1[10];
						 strncpy(nr1,n+1,strlen(n)-2);
						 int nr = atoi(nr1);
						 updateSymbolList1((yyvsp[-3].name), nr, (yyvsp[0].nr));
					(yyval.name) = (yyvsp[-3].name);
						 }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 240 "proiect.y" /* yacc.c:1646  */
    {char* n = (yyvsp[-2].list);
						 char nr1[10];
						 strncpy(nr1,n+1,strlen(n)-2);
						 int nr = atoi(nr1);
						 updateSymbolString1((yyvsp[-3].name), nr, (yyvsp[0].string));
					(yyval.name) = (yyvsp[-3].name);
						 }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 248 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[0].nr);}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 249 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = -((yyvsp[0].nr));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 250 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[-2].nr) + (yyvsp[0].nr);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 251 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[-2].nr) - (yyvsp[0].nr);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 252 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[-2].nr) * (yyvsp[0].nr);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 253 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[-2].nr) / (yyvsp[0].nr);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 254 "proiect.y" /* yacc.c:1646  */
    { (yyval.nr) = (yyvsp[-1].nr); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 255 "proiect.y" /* yacc.c:1646  */
    {if(NULL != symbolList((yyvsp[-1].name)))
						   (yyval.nr) = symbolListSize((yyvsp[-1].name));
						else printf("%c nu este o lista \n",(yyvsp[-1].name));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 260 "proiect.y" /* yacc.c:1646  */
    { (yyval.nr) = symbolListElement((yyvsp[-1].name), (yyvsp[0].list));
					
					}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 263 "proiect.y" /* yacc.c:1646  */
    {
			(yyval.nr) = symbolVal((yyvsp[0].name));}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 265 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[0].nr);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 266 "proiect.y" /* yacc.c:1646  */
    {(yyval.nr) = (yyvsp[-2].nr) + (yyvsp[0].nr)/fractia((yyvsp[0].nr));}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 269 "proiect.y" /* yacc.c:1646  */
    {(yyval.list) = (yyvsp[0].list);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 271 "proiect.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1805 "y.tab.c" /* yacc.c:1646  */
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
#line 274 "proiect.y" /* yacc.c:1906  */


void for_function(float a,float cond, float b,float c,char var,char var1, float d,float e,char ala){
//var = var1 op e   cu ala parcurg forul

if (cond == '>')
				{  
					if(a<=b) printf("imposibil \n");
					else
					{
						for(float i=a;i>b;i-=c){
							updateSymbolVal(ala,i);
							float l = symbolVal(var);
							float l1 = symbolVal(var1);
							if(d == 0){
								l1 +=e;
								printf("adun\n");
								}
							if(d == 1){
								l1 -=e;
								printf("scad\n");
								}
							if(d == 2){
								l1 *=e;
								printf("ori\n");
								}
							if(d == 3){
								l1 /=e;
								printf("supra\n");
								}
							updateSymbolVal(var,l1);	
						}
					}
				} 
				else if (cond == '<')
					{
						if(a>=b) printf("imposibil \n");
						else
						{
							for(float i=a;i<b;i+=c){
							updateSymbolVal(ala,i);
							float l = symbolVal(var);
							float l1 = symbolVal(var1);
							if(d == 0){
								l1 +=e;
								}
							if(d == 1){
								l1 -=e;
								}
							if(d == 2){
								l1 *=e;
								}
							if(d == 3){
								l1 /=e;
								}
							updateSymbolVal(var,l1);	
							}
						}
					}		
}

void for_function_print(float a,float cond, float b,float c,char ala,char pr){
if (cond == '>')
				{  
					if(a<=b) printf("inposibil \n");
					else
					{
						for(float i=a;i>b;i-=c){
						updateSymbolVal(ala,i);	
							printVariable(pr);
						}
					}
				} 
				else if (cond == '<')
					{
						if(a>=b) printf("inposibil \n");
						else
						{
							for(float i=a;i<b;i+=c){
							updateSymbolVal(ala,i);	
							printVariable(pr);
							}
						}
					}		
}


void while_function(int a,char cond, int b,char var, int c){
		if (cond == '>')
				{  
					printf("this is s while statement\n");
				} 
					else if (cond == '<')
						{
							printf("this is s while statement\n");
						}
				else if (cond == '=')
				{
					printf("this is s while statement\n");
				}
}

void afisMesaj(char* s){
	for(int i=1;i<strlen(s)-1;i++)
		printf("%c",s[i]);
}

int fractia(int x){
	int res = 1;
	while(x!=0){
		x/=10;
		res=10;
	}
	return res;
}

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 



float symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].nr;
}

char* symbolString(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].str;
}

float* symbolList(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].list;
}

float symbolListElement(char symbol, char* n)
{
	char nr1[10];
	strncpy(nr1,n+1,strlen(n)-2);
	int nr = atoi(nr1);
	int bucket = computeSymbolIndex(symbol);
	if(NULL != symbolList(symbol)){
	zz = 0; //lista
	return names[bucket].list[nr];
	}
	else if(NULL != symbolString(symbol)){
	zz = 1; //string
	return names[bucket].str[nr+1];
	}
	else printf("%c[%d] nu este un element al unei liste existente si nici string\n",symbol,nr);
	return names[bucket].list[nr];
}

int symbolListSize(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].listSize;
}

float* parseToList(char* list, int* listSize)
{
	int startIndex = 0, endIndex = 0;
	float* listF = (float*)malloc(sizeof(float));
	float nr;
	char* number = (char*)malloc(strlen(list));
	int size = 0;
	for(int i=0; i<strlen(list); i++)
	{
		startIndex = i;
		endIndex = i;
		while( (list[i] >= '0' && list[i] <= '9') 
			|| list[i] == '.' )
		{
			i++;
			endIndex = i;
		}
		if(startIndex != endIndex )
		{
			strncpy(number, list+startIndex, endIndex-startIndex);
			nr = atof(number);
			size++;
			listF = realloc(listF, size*sizeof(float));
			listF[size-1] = nr;
		}
	}
	(*listSize) = size;
	return listF;
}

void updateSymbolVal(char symbol, float val)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].nr = val;
	free(names[bucket].str);
	names[bucket].str = NULL;
	free(names[bucket].list);
	names[bucket].list = NULL;
}

void updateSymbolList(char symbol, char* list)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].list = parseToList(list, &names[bucket].listSize);
	free(names[bucket].str);
	names[bucket].str = NULL;
}

void updateSymbolList1(char symbol, int nr, int val)
{
	if(NULL != symbolList(symbol)){
			int bucket = computeSymbolIndex(symbol);
			names[bucket].list[nr] = val;
	}
	else if(NULL != symbolString(symbol)){
			int bucket = computeSymbolIndex(symbol);
			names[bucket].str[nr+1] = (char)val;
	}
	else
		printf("lista %c nu are %d elemente sau nu a fost creata",symbol,nr);
}

void updateSymbolString1(char symbol, int nr, char* val)
{
	if(NULL != symbolString(symbol)){
		int bucket = computeSymbolIndex(symbol);
		char val1 = val[1];
		names[bucket].str[nr+1] = val1;
	}
}

void updateSymbolString(char symbol, char* string)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].str = strdup(string);
	free(names[bucket].list);
	names[bucket].list = NULL;
}

void printAssign(char symbol)
{
	if(NULL != symbolString(symbol))
		printf("%c was assigned value %s\n",symbol,symbolString(symbol));
	else
		if(NULL != symbolList(symbol)){
			printf("%c was assigned a list: ",symbol);
			float* list = symbolList(symbol);
			int size = symbolListSize(symbol);
			for(int i=0; i< size; i++)
			{
				printf("%.2f ",list[i]);
			}
			printf("\n");
		}
		else
			printf("%c was assigned value %.2f\n",symbol,symbolVal(symbol));
}

void printVariable(char symbol)
{
	if(NULL != symbolString(symbol))
		printf("%s\n",symbolString(symbol));
	else
		if(NULL != symbolList(symbol)){
			printf("[ ");
			float* list = symbolList(symbol);
			int size = symbolListSize(symbol);
			for(int i=0; i< size; i++)
			{
				printf("%.2f ",list[i]);
			}
			printf("]\n");
		}
		else
			printf("%.2f\n",symbolVal(symbol));
}

int partition(float *list, int low, int high)
{
	float pivot = list[high];

	int i = (low - 1);
	float aux;
	for(int j=low; j<= high - 1; j++)
	{
		if(list[j] < pivot)
		{
			i++;
			aux = list[i];
			list[i] = list[j];
			list[j] = aux;
		}
	}
	aux = list[i+1];
	list[i+1] = list[high];
	list[high] = aux;
	return i+1;
}

void quickSort(float* list, int low, int high)
{
	int pi;
	if(low < high)
	{
		pi = partition(list, low ,high);

		quickSort(list, low, pi - 1);
		quickSort(list, pi + 1, high);
	}
}

void sortList(char symbol)
{
	if(symbolList(symbol) ==NULL)
		printf("%c nu este o lista",symbol);
	else{
	float* list = symbolList(symbol);
	int length = symbolListSize(symbol);
	quickSort(list, 0, length - 1);
	}
}

void updateSizeSymbol(char symbol,int size)
{
	int index = computeSymbolIndex(symbol); 
	names[index].listSize = size; 
	names[index].list = realloc(names[index].list, size*sizeof(float));
}

void removeElement(float* list, int index, char symbol)
{
	int size = symbolListSize(symbol);
	for(int i = index; i<size; i++)
	{
		list[i] = list[i + 1];
	}
	updateSizeSymbol(symbol, size - 1);
}

void removeDuplicates(char symbol)
{
	if(symbolList(symbol) ==NULL)
		printf("%c nu este o lista",symbol);
		else{
	float* list = symbolList(symbol);
	int length = symbolListSize(symbol);
	for(int i = 0; i < length - 1; i++)
	{
		for(int j = i + 1; j < length; j++)
		{
			if(list[i] == list[j])
			{
				removeElement(list, j, symbol);
				length--;
				j--;
			}
		}
	}
	}
}



int main()
{

return yyparse();
return 0;
}

void yyerror(char *s)
{
printf(s);
}
