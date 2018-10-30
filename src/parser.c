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
#line 57 "parser.y" /* yacc.c:339  */

#include "common.h"

int yylex(void);

void yyerror(const char *error_message);
void report_warning(const char *error_message);

/* Flags used in the AST construction. */
bool is_root = false;
bool is_bidir = false;

/* Pointers to data structures constructed by the parser. */
struct List *gp_program = NULL;
int host_nodes = 0, host_edges = 0;

bool syntax_error = false;

#line 85 "parser.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 43 "parser.y" /* yacc.c:355  */

#include "ast.h"

#line 119 "parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAIN = 258,
    IF = 259,
    TRY = 260,
    THEN = 261,
    ELSE = 262,
    SKIP = 263,
    FAIL = 264,
    BREAK = 265,
    WHERE = 266,
    EDGETEST = 267,
    INDEG = 268,
    OUTDEG = 269,
    _LENGTH = 270,
    RANDINTOP = 271,
    BOUNDOP = 272,
    G_UNIFORM = 273,
    INT = 274,
    CHARACTER = 275,
    STRING = 276,
    ATOM = 277,
    LIST = 278,
    INTERFACE = 279,
    _EMPTY = 280,
    INJECTIVE = 281,
    MARK = 282,
    ANY_MARK = 283,
    ARROW = 284,
    NEQ = 285,
    GTEQ = 286,
    LTEQ = 287,
    NUM = 288,
    DNUM = 289,
    STR = 290,
    PROCID = 291,
    ID = 292,
    ROOT = 293,
    BIDIRECTIONAL = 294,
    GP_PROGRAM = 295,
    GP_GRAPH = 296,
    GP_RULE = 297,
    OR = 298,
    AND = 299,
    NOT = 300,
    UMINUS = 301
  };
#endif
/* Tokens.  */
#define MAIN 258
#define IF 259
#define TRY 260
#define THEN 261
#define ELSE 262
#define SKIP 263
#define FAIL 264
#define BREAK 265
#define WHERE 266
#define EDGETEST 267
#define INDEG 268
#define OUTDEG 269
#define _LENGTH 270
#define RANDINTOP 271
#define BOUNDOP 272
#define G_UNIFORM 273
#define INT 274
#define CHARACTER 275
#define STRING 276
#define ATOM 277
#define LIST 278
#define INTERFACE 279
#define _EMPTY 280
#define INJECTIVE 281
#define MARK 282
#define ANY_MARK 283
#define ARROW 284
#define NEQ 285
#define GTEQ 286
#define LTEQ 287
#define NUM 288
#define DNUM 289
#define STR 290
#define PROCID 291
#define ID 292
#define ROOT 293
#define BIDIRECTIONAL 294
#define GP_PROGRAM 295
#define GP_GRAPH 296
#define GP_RULE 297
#define OR 298
#define AND 299
#define NOT 300
#define UMINUS 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 78 "parser.y" /* yacc.c:355  */

  int num;   /* value of NUM token. */
  double dnum; /* value of DNUM token. */
  char *str; /* value of STRING and CHAR tokens. */
  char *id;  /* value of PROCID and ID tokens. */
  int mark;  /* enum MarkTypes, value of MARK token. */
#line 111 "parser.y" /* yacc.c:355  */

  struct List *list;
  struct GPDeclaration *decl;
  struct GPCommand *command;
  struct GPProcedure *proc;
  struct GPRule *rule;
  struct GPGraph *graph;
  struct GPNode *node;
  struct GPEdge *edge;
  struct GPPos *pos;
  struct GPCondition *cond_exp;
  struct GPLabel *label;
  struct GPAtom *atom_exp;

  int list_type; /* enum ListType */
  int check_type; /* enum CondExpType */

#line 248 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);
/* "%code provides" blocks.  */
#line 48 "parser.y" /* yacc.c:355  */

extern List *gp_program;
extern int yylineno;
extern string yytext;
extern FILE *yyin;
extern bool syntax_error;

#line 283 "parser.c" /* yacc.c:355  */

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 289 "parser.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    66,     2,     2,     2,     2,
      58,    59,    48,    46,    57,    47,    51,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    56,
      64,    53,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    63,    62,     2,     2,     2,     2,
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
      45,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   220,   221,   224,   226,   229,   230,   231,
     233,   235,   239,   244,   251,   252,   254,   257,   258,   260,
     265,   266,   267,   269,   272,   276,   278,   280,   282,   286,
     287,   291,   292,   293,   294,   295,   296,   298,   299,   300,
     301,   302,   303,   305,   308,   310,   313,   315,   317,   320,
     325,   333,   336,   339,   342,   346,   355,   362,   367,   373,
     375,   378,   379,   382,   385,   387,   390,   391,   392,   393,
     394,   398,   399,   400,   401,   402,   403,   406,   407,   409,
     412,   416,   417,   419,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   435,   436,   438,   439,   443,   444,   446,
     448,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   462,   463,   464,   465,   467,   468,   471,   472,   474,
     477,   478,   479,   480,   482,   483,   484,   485,   487,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   501,
     502,   503,   504,   512,   513,   521,   525,   526,   527,   528,
     530,   532,   535,   536,   538,   540,   543,   544,   546,   549,
     551,   552,   554,   555,   556,   557,   559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "IF", "TRY", "THEN", "ELSE",
  "SKIP", "FAIL", "BREAK", "WHERE", "EDGETEST", "INDEG", "OUTDEG",
  "_LENGTH", "RANDINTOP", "BOUNDOP", "G_UNIFORM", "INT", "CHARACTER",
  "STRING", "ATOM", "LIST", "INTERFACE", "_EMPTY", "INJECTIVE", "MARK",
  "ANY_MARK", "ARROW", "NEQ", "GTEQ", "LTEQ", "NUM", "DNUM", "STR",
  "PROCID", "ID", "ROOT", "BIDIRECTIONAL", "GP_PROGRAM", "GP_GRAPH",
  "GP_RULE", "OR", "AND", "NOT", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "'.'", "':'", "'='", "'['", "']'", "';'", "','", "'('", "')'", "'!'",
  "'{'", "'}'", "'|'", "'<'", "'>'", "'#'", "$accept", "Initialise",
  "Program", "Declaration", "MainDecl", "ProcDecl", "LocalDecls", "ComSeq",
  "Command", "Block", "SimpleCommand", "RuleSetCall",
  "SWeightedRuleSetCall", "IDList", "RuleDecl", "VarDecls", "VarList",
  "Inter", "NodeIDList", "Type", "Graph", "NodeList", "Node", "EdgeList",
  "Edge", "Position", "RootNode", "Bidirection", "CondDecl", "Condition",
  "Subtype", "LabelArg", "Label", "List", "AtomExp", "ProcID", "RuleID",
  "NodeID", "EdgeID", "Variable", "HostGraph", "HostNodeList", "HostNode",
  "HostEdgeList", "HostEdge", "HostID", "HostLabel", "HostList", "HostExp", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    43,    45,    42,    47,
     301,    46,    58,    61,    91,    93,    59,    44,    40,    41,
      33,   123,   125,   124,    60,    62,    35
};
# endif

#define YYPACT_NINF -268

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-268)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     400,     6,   -15,    76,    60,    25,  -268,  -268,     6,  -268,
    -268,  -268,  -268,    10,    31,   164,  -268,  -268,    44,    77,
    -268,   200,  -268,   215,    96,    94,   -13,   122,   115,   134,
     135,    42,  -268,    11,   230,   230,  -268,  -268,  -268,    18,
      76,   200,    76,   236,  -268,   142,   151,  -268,  -268,  -268,
    -268,    76,   236,  -268,   303,   100,  -268,  -268,   178,   319,
    -268,   176,  -268,   208,   218,   250,   133,   322,  -268,  -268,
    -268,  -268,   301,   440,   247,    76,  -268,   388,  -268,   261,
     295,   187,  -268,   200,   200,   230,  -268,    67,    96,   202,
     404,    96,   128,   -11,   256,    17,   233,  -268,   271,   139,
     160,   276,   263,   183,  -268,   122,   342,  -268,   230,   230,
     230,   230,  -268,   304,   304,  -268,   286,  -268,  -268,  -268,
    -268,   200,  -268,  -268,   193,   171,   324,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,   200,   293,    -4,   306,   197,  -268,
     300,   202,   202,   111,   350,     1,   330,   334,   356,   336,
     344,   383,   179,  -268,   373,   399,  -268,  -268,   450,  -268,
     451,  -268,  -268,  -268,  -268,   236,   404,   202,   236,   202,
    -268,  -268,   176,  -268,   374,  -268,   199,    20,   378,   406,
     202,  -268,  -268,  -268,   426,   204,   124,  -268,  -268,  -268,
     395,  -268,  -268,   397,   398,   401,   431,  -268,   375,   122,
     230,   230,  -268,    20,   436,   410,  -268,   184,   379,  -268,
     413,   201,   407,   417,   460,   202,   202,    20,  -268,  -268,
     414,     2,   445,  -268,  -268,  -268,  -268,   409,  -268,   418,
    -268,  -268,   460,   202,   297,  -268,  -268,   437,  -268,  -268,
    -268,   380,  -268,   416,   284,  -268,    20,   449,   460,  -268,
    -268,  -268,  -268,  -268,   122,  -268,    20,   421,   422,   424,
     425,   427,  -268,  -268,  -268,   323,   323,   222,   137,   371,
    -268,  -268,   429,  -268,   381,    -5,   430,  -268,  -268,  -268,
    -268,   284,   284,   405,   432,   -12,   318,   460,   202,  -268,
     434,   460,    -4,    -4,    96,   323,   323,   433,   231,  -268,
     428,   310,   423,   323,   323,   323,   323,   323,    -4,  -268,
    -268,   232,  -268,    -4,  -268,   156,    95,   284,   284,    96,
     297,   297,   323,   323,   323,   323,  -268,    20,     1,  -268,
     435,   438,   439,   345,   357,  -268,  -268,  -268,   371,  -268,
    -268,   223,   223,   433,   433,  -268,   442,    -4,  -268,   443,
    -268,   448,  -268,   444,   441,   441,   371,   371,   371,   371,
     460,   446,  -268,  -268,  -268,   323,   323,    -4,  -268,    -4,
    -268,  -268,  -268,   325,   364,   447,   452,  -268,   323,   297,
     297,   453,   339,   454,  -268,  -268,  -268,  -268
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   139,   140,     2,     5,
       7,     8,     9,     0,     0,     0,     3,     4,     0,     0,
       1,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,    10,    17,    20,    32,    37,    39,    42,
      40,    14,    11,   145,     0,     0,    59,    14,     0,     0,
     159,    93,   146,     0,     0,     0,     0,     0,   153,    46,
      31,    44,     0,    25,     0,     0,    38,     0,    49,    47,
       0,     0,    47,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,   148,     0,     0,   156,     0,     0,
       0,     0,    45,     0,     0,    41,    29,    43,    18,    19,
      21,     0,    16,    15,     0,     0,     0,    66,    67,    68,
      69,    70,    57,    60,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,   150,   157,    22,    24,
      26,    27,    50,    48,    30,    12,     0,     0,    13,     0,
     142,   141,    93,    71,     0,    78,     0,     0,     0,     0,
       0,   164,   166,   168,     0,     0,   160,   162,    85,    91,
       0,    89,    84,     0,     0,     0,     0,   149,     0,     0,
       0,     0,    58,     0,     0,     0,    73,     0,     0,    81,
       0,     0,     0,     0,    97,     0,     0,     0,   167,   154,
       0,     0,     0,    86,    90,    87,    92,     0,   151,     0,
      23,    28,    97,     0,     0,   144,   143,    95,    75,    82,
      72,     0,    63,     0,     0,    52,     0,     0,    97,   155,
     165,   163,   161,    88,     0,    55,     0,     0,     0,     0,
       0,     0,   122,   125,   126,     0,     0,     0,   117,   120,
     124,    96,     0,    74,     0,     0,     0,   111,   112,   113,
     114,     0,     0,    98,     0,     0,   120,    97,     0,    51,
       0,    97,     0,     0,     0,     0,     0,   132,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      61,     0,    64,     0,   107,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,     0,    54,
       0,     0,     0,     0,     0,   133,    80,   123,   121,   118,
     119,   134,   135,   136,   137,   138,     0,     0,    62,     0,
     110,   108,   109,     0,   102,   101,   104,   106,   105,   103,
      97,     0,   127,   128,   131,     0,     0,     0,    65,     0,
      99,    53,   158,     0,     0,     0,   115,   129,     0,     0,
       0,     0,     0,     0,   116,   100,   130,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,  -268,   473,  -268,   228,   457,   -10,   369,   -23,
    -268,  -268,   456,   459,    14,   463,   -50,  -187,  -268,   340,
     -86,   320,  -118,   266,  -200,   -14,   338,  -268,  -226,  -267,
    -268,  -268,    75,  -229,  -186,   155,    74,  -185,  -268,   -24,
    -268,   455,    -6,   348,   -99,  -101,   180,  -268,   290
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     8,     9,    10,    11,    87,    43,    44,    45,
      46,    47,    48,    77,    12,    54,    55,   214,   311,   132,
      94,   138,   139,   208,   209,   140,    98,   272,   245,   283,
     284,   381,   267,   285,   269,    49,    50,   172,   237,   270,
      16,    31,    32,   106,   107,    61,   185,   186,   187
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      56,    30,    56,   126,   155,   268,   255,   157,   239,     5,
     144,    72,    73,    52,   314,   315,   232,    17,   320,    74,
     175,   212,   289,   135,    53,    68,   181,   250,   170,   170,
     248,    80,   171,   171,   182,   182,   183,   183,   124,    15,
     301,   321,     6,     7,   213,   124,    58,   136,   184,   184,
     351,   352,   137,    29,    53,   177,   178,   310,   286,   287,
      20,   326,   120,    23,    56,   329,    69,   133,    24,   291,
      70,    56,    75,    71,   239,    14,   142,    19,    21,   297,
     298,   203,    14,   204,    25,   158,   159,   160,   161,    26,
     312,   354,   355,   175,   217,   286,   316,    68,   229,   157,
      27,   123,    24,     6,     7,    67,   123,   330,   331,   333,
     334,   165,     6,     7,    79,   338,    82,   341,   342,   343,
     344,   345,   121,   346,   168,    79,   322,   323,   349,   246,
     247,   286,   286,    53,   371,    26,   356,   357,   358,   359,
     360,   303,   304,   305,   306,   179,   307,   256,    57,    82,
     268,   268,    90,   290,   335,    60,    13,    91,    18,   324,
     325,    14,   368,    13,     6,     7,    14,    63,    64,   136,
      62,   220,   146,   147,   137,    29,   221,   230,   231,   373,
     374,    65,   375,   134,   376,    85,   148,   162,   163,   301,
     222,    27,   382,   149,   150,    78,   102,    78,    66,   317,
     318,    33,   327,   302,    34,    35,    78,   151,    36,    37,
      38,    86,   194,   195,    97,   350,    33,   235,    39,    34,
      35,   236,    27,    36,    37,    38,   196,    28,    29,   136,
      78,    33,    93,    39,   137,    29,     6,     7,    36,    37,
      38,    27,    13,   113,   114,   166,   154,    13,    39,   117,
      91,     6,     7,   300,    40,   136,   125,   136,    41,   136,
     174,    42,   210,   219,   241,    99,     6,     7,    29,    51,
     332,   305,   306,    41,   307,   100,    42,   303,   304,   305,
     306,   299,   307,   101,    40,   141,    29,   143,    41,   347,
     335,    42,    83,    84,   348,   353,   276,   257,   258,   259,
     260,   261,    69,   277,   278,   279,   280,   108,   109,   262,
     257,   258,   259,   260,   261,   122,   115,   263,   153,   264,
     122,    53,   262,   257,   258,   259,   260,   261,   145,   281,
     263,   265,   264,   152,    53,   337,   257,   258,   259,   260,
     261,     7,   282,   263,   265,   264,   164,    53,   169,   322,
     323,    83,    84,   167,   116,   266,   263,   265,   264,    88,
      53,   173,    89,   176,   303,   304,   305,   306,   266,   307,
     265,   303,   304,   305,   306,    95,   307,   104,    96,   180,
     105,   266,   324,   325,   377,   303,   304,   305,   306,   190,
     307,   303,   304,   305,   306,   188,   307,   156,   386,   189,
     105,   191,   365,   303,   304,   305,   306,   215,   307,   192,
     303,   304,   305,   306,   366,   307,   193,   303,   304,   305,
     306,   378,   307,   127,   128,   129,   130,   131,   197,   206,
     228,   105,   207,   105,   238,   273,   309,   207,   207,   207,
       1,     2,     3,   112,   113,   114,   110,   111,   317,   318,
     339,   340,   118,   119,   383,   384,   199,   200,   201,   218,
     223,   216,   224,   225,   227,   233,   226,   234,   240,   242,
     243,   244,   252,   249,   253,   254,   271,   275,   288,   292,
     293,    22,   294,   295,   307,   296,   308,   336,   313,    59,
     319,   328,   318,   301,   362,    76,   211,   363,   364,   367,
     369,    81,   198,   370,   379,   372,   202,   274,   361,   380,
     205,   251,   385,   387,    92,     0,     0,     0,     0,     0,
       0,   103
};

static const yytype_int16 yycheck[] =
{
      24,    15,    26,    89,   105,   234,   232,   106,   208,     3,
      96,    34,    35,    23,   281,   282,   203,     3,    30,     1,
     138,     1,   248,    34,    37,    31,    25,    25,    33,    33,
     217,    41,    37,    37,    33,    33,    35,    35,    88,    54,
      52,    53,    36,    37,    24,    95,    59,    58,    47,    47,
     317,   318,    63,    64,    37,   141,   142,    62,   244,   246,
       0,   287,    85,    53,    88,   291,    55,    91,    58,   256,
      59,    95,    54,    62,   274,     1,    59,     3,    53,   265,
     266,   167,     8,   169,    53,   108,   109,   110,   111,    58,
     275,   320,   321,   211,   180,   281,   282,   103,   199,   198,
      58,    87,    58,    36,    37,    63,    92,   292,   293,   295,
     296,   121,    36,    37,    40,   301,    42,   303,   304,   305,
     306,   307,    55,   308,   134,    51,    31,    32,   313,   215,
     216,   317,   318,    37,   360,    58,   322,   323,   324,   325,
     327,    46,    47,    48,    49,    34,    51,   233,    54,    75,
     379,   380,    52,   254,    59,    33,     1,    57,     3,    64,
      65,    87,   347,     8,    36,    37,    92,    33,    34,    58,
      55,   185,    33,    34,    63,    64,    52,   200,   201,   365,
     366,    47,   367,    55,   369,    43,    47,   113,   114,    52,
      66,    58,   378,    33,    34,    40,    63,    42,    63,    43,
      44,     1,   288,    66,     4,     5,    51,    47,     8,     9,
      10,    60,    33,    34,    38,    59,     1,    33,    18,     4,
       5,    37,    58,     8,     9,    10,    47,    63,    64,    58,
      75,     1,    54,    18,    63,    64,    36,    37,     8,     9,
      10,    58,    87,    56,    57,    52,    63,    92,    18,    62,
      57,    36,    37,   267,    54,    58,    54,    58,    58,    58,
      63,    61,    63,    59,    63,    57,    36,    37,    64,    54,
     294,    48,    49,    58,    51,    57,    61,    46,    47,    48,
      49,    59,    51,    33,    54,    29,    64,    54,    58,    57,
      59,    61,    56,    57,    62,   319,    12,    13,    14,    15,
      16,    17,    55,    19,    20,    21,    22,     6,     7,    25,
      13,    14,    15,    16,    17,    87,    55,    33,    55,    35,
      92,    37,    25,    13,    14,    15,    16,    17,    57,    45,
      33,    47,    35,    57,    37,    25,    13,    14,    15,    16,
      17,    37,    58,    33,    47,    35,    60,    37,    55,    31,
      32,    56,    57,    29,    59,    58,    33,    47,    35,    56,
      37,    55,    59,    63,    46,    47,    48,    49,    58,    51,
      47,    46,    47,    48,    49,    56,    51,    55,    59,    29,
      58,    58,    64,    65,    59,    46,    47,    48,    49,    33,
      51,    46,    47,    48,    49,    65,    51,    55,    59,    65,
      58,    65,    57,    46,    47,    48,    49,    29,    51,    65,
      46,    47,    48,    49,    57,    51,    33,    46,    47,    48,
      49,    57,    51,    19,    20,    21,    22,    23,    55,    55,
      55,    58,    58,    58,    55,    55,    55,    58,    58,    58,
      40,    41,    42,    55,    56,    57,     6,     7,    43,    44,
      27,    28,    83,    84,   379,   380,    57,     7,     7,    33,
      65,    55,    65,    65,    33,    29,    65,    57,    55,    62,
      53,    11,    27,    59,    65,    57,    39,    61,    29,    58,
      58,     8,    58,    58,    51,    58,    57,    59,    58,    26,
      58,    57,    44,    52,    59,    39,   176,    59,    59,    57,
      57,    42,   154,    59,    57,    59,   166,   241,   328,    57,
     172,   221,    59,    59,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    42,    68,     3,    36,    37,    69,    70,
      71,    72,    81,   102,   103,    54,   107,    81,   102,   103,
       0,    53,    70,    53,    58,    53,    58,    58,    63,    64,
      92,   108,   109,     1,     4,     5,     8,     9,    10,    18,
      54,    58,    61,    74,    75,    76,    77,    78,    79,   102,
     103,    54,    74,    37,    82,    83,   106,    54,    59,    82,
      33,   112,    55,    33,    34,    47,    63,    63,   109,    55,
      59,    62,    76,    76,     1,    54,    79,    80,   102,   103,
      74,    80,   103,    56,    57,    43,    60,    73,    56,    59,
      52,    57,    73,    54,    87,    56,    59,    38,    93,    57,
      57,    33,    63,   108,    55,    58,   110,   111,     6,     7,
       6,     7,    55,    56,    57,    55,    59,    62,    75,    75,
      76,    55,    72,    81,    83,    54,    87,    19,    20,    21,
      22,    23,    86,   106,    55,    34,    58,    63,    88,    89,
      92,    29,    59,    54,    87,    57,    33,    34,    47,    33,
      34,    47,    57,    55,    63,   112,    55,   111,    76,    76,
      76,    76,   103,   103,    60,    74,    52,    29,    74,    55,
      33,    37,   104,    55,    63,    89,    63,    87,    87,    34,
      29,    25,    33,    35,    47,   113,   114,   115,    65,    65,
      33,    65,    65,    33,    33,    34,    47,    55,   110,    57,
       7,     7,    86,    87,    87,    93,    55,    58,    90,    91,
      63,    88,     1,    24,    84,    29,    55,    87,    33,    59,
      92,    52,    66,    65,    65,    65,    65,    33,    55,   112,
      76,    76,    84,    29,    57,    33,    37,   105,    55,    91,
      55,    63,    62,    53,    11,    95,    87,    87,    84,    59,
      25,   115,    27,    65,    57,    95,    87,    13,    14,    15,
      16,    17,    25,    33,    35,    47,    58,    99,   100,   101,
     106,    39,    94,    55,    90,    61,    12,    19,    20,    21,
      22,    45,    58,    96,    97,   100,   101,    84,    29,    95,
     112,    84,    58,    58,    58,    58,    58,   101,   101,    59,
      92,    52,    66,    46,    47,    48,    49,    51,    57,    55,
      62,    85,   104,    58,    96,    96,   101,    43,    44,    58,
      30,    53,    31,    32,    64,    65,    95,    87,    57,    95,
     104,   104,   106,   101,   101,    59,    59,    25,   101,    27,
      28,   101,   101,   101,   101,   101,   104,    57,    62,   104,
      59,    96,    96,   106,   100,   100,   101,   101,   101,   101,
      84,   113,    59,    59,    59,    57,    57,    57,   104,    57,
      59,    95,    59,   101,   101,   104,   104,    59,    57,    57,
      57,    98,   101,    99,    99,    59,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    68,    69,    69,    70,    70,    70,
      71,    72,    72,    72,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     103,   104,   104,   105,   105,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     1,     1,     1,
       3,     3,     6,     6,     0,     2,     2,     1,     3,     3,
       1,     3,     4,     6,     4,     2,     4,     4,     6,     3,
       4,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     3,     2,     3,     2,     1,     3,     1,
       3,     9,     8,    12,    11,     9,    10,     3,     5,     1,
       3,     4,     5,     2,     1,     3,     1,     1,     1,     1,
       1,     3,     5,     4,     6,     5,     7,     1,     2,     6,
       7,     1,     2,    10,     5,     5,     6,     6,     7,     5,
       6,     5,     6,     0,     1,     0,     1,     0,     2,     4,
       7,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     1,     1,     1,     1,     0,     2,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     4,     4,     6,
       8,     4,     2,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     4,     6,
       5,     7,     1,     2,     6,     7,     1,     2,     9,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 35: /* STR  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1472 "parser.c" /* yacc.c:1257  */
        break;

    case 36: /* PROCID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1478 "parser.c" /* yacc.c:1257  */
        break;

    case 37: /* ID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1484 "parser.c" /* yacc.c:1257  */
        break;

    case 69: /* Program  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1490 "parser.c" /* yacc.c:1257  */
        break;

    case 70: /* Declaration  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeASTDeclaration(((*yyvaluep).decl)); }
#line 1496 "parser.c" /* yacc.c:1257  */
        break;

    case 71: /* MainDecl  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1502 "parser.c" /* yacc.c:1257  */
        break;

    case 73: /* LocalDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1508 "parser.c" /* yacc.c:1257  */
        break;

    case 74: /* ComSeq  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1514 "parser.c" /* yacc.c:1257  */
        break;

    case 75: /* Command  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1520 "parser.c" /* yacc.c:1257  */
        break;

    case 76: /* Block  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1526 "parser.c" /* yacc.c:1257  */
        break;

    case 77: /* SimpleCommand  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1532 "parser.c" /* yacc.c:1257  */
        break;

    case 78: /* RuleSetCall  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1538 "parser.c" /* yacc.c:1257  */
        break;

    case 79: /* SWeightedRuleSetCall  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1544 "parser.c" /* yacc.c:1257  */
        break;

    case 80: /* IDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1550 "parser.c" /* yacc.c:1257  */
        break;

    case 81: /* RuleDecl  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTRule(((*yyvaluep).rule)); }
#line 1556 "parser.c" /* yacc.c:1257  */
        break;

    case 82: /* VarDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1562 "parser.c" /* yacc.c:1257  */
        break;

    case 83: /* VarList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1568 "parser.c" /* yacc.c:1257  */
        break;

    case 84: /* Inter  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1574 "parser.c" /* yacc.c:1257  */
        break;

    case 85: /* NodeIDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1580 "parser.c" /* yacc.c:1257  */
        break;

    case 87: /* Graph  */
#line 155 "parser.y" /* yacc.c:1257  */
      { freeASTGraph(((*yyvaluep).graph)); }
#line 1586 "parser.c" /* yacc.c:1257  */
        break;

    case 88: /* NodeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1592 "parser.c" /* yacc.c:1257  */
        break;

    case 89: /* Node  */
#line 156 "parser.y" /* yacc.c:1257  */
      { freeASTNode(((*yyvaluep).node)); }
#line 1598 "parser.c" /* yacc.c:1257  */
        break;

    case 90: /* EdgeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1604 "parser.c" /* yacc.c:1257  */
        break;

    case 91: /* Edge  */
#line 157 "parser.y" /* yacc.c:1257  */
      { freeASTEdge(((*yyvaluep).edge)); }
#line 1610 "parser.c" /* yacc.c:1257  */
        break;

    case 95: /* CondDecl  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1616 "parser.c" /* yacc.c:1257  */
        break;

    case 96: /* Condition  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1622 "parser.c" /* yacc.c:1257  */
        break;

    case 98: /* LabelArg  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1628 "parser.c" /* yacc.c:1257  */
        break;

    case 99: /* Label  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1634 "parser.c" /* yacc.c:1257  */
        break;

    case 100: /* List  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1640 "parser.c" /* yacc.c:1257  */
        break;

    case 101: /* AtomExp  */
#line 160 "parser.y" /* yacc.c:1257  */
      { freeASTAtom(((*yyvaluep).atom_exp)); }
#line 1646 "parser.c" /* yacc.c:1257  */
        break;

    case 102: /* ProcID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1652 "parser.c" /* yacc.c:1257  */
        break;

    case 103: /* RuleID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1658 "parser.c" /* yacc.c:1257  */
        break;

    case 104: /* NodeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1664 "parser.c" /* yacc.c:1257  */
        break;

    case 105: /* EdgeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1670 "parser.c" /* yacc.c:1257  */
        break;

    case 106: /* Variable  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1676 "parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 219 "parser.y" /* yacc.c:1646  */
    { gp_program = (yyvsp[0].list); }
#line 1964 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 220 "parser.y" /* yacc.c:1646  */
    { }
#line 1970 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 221 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].rule)) freeASTRule((yyvsp[0].rule)); }
#line 1976 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), NULL); }
#line 1983 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), (yyvsp[-1].list)); }
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTMainDecl((yyloc), (yyvsp[0].command)); }
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTProcedureDecl((yyloc), (yyvsp[0].proc)); }
#line 2002 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTRuleDecl((yyloc), (yyvsp[0].rule)); }
#line 2008 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yylsp[-2]), (yyvsp[0].list)); }
#line 2014 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-2]), (yyvsp[-2].id), NULL,
                                               newASTCommandSequence((yylsp[0]) ,(yyvsp[0].list)));
					  if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2022 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
				          if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2030 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
                                          report_warning("Procedure names must "
 					   "start with an upper-case letter.");
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2040 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2046 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTRuleDecl((yylsp[0]), (yyvsp[0].rule)), (yyvsp[-1].list)); }
#line 2053 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTProcedureDecl((yylsp[0]), (yyvsp[0].proc)), (yyvsp[-1].list)); }
#line 2060 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), NULL); }
#line 2066 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list)); }
#line 2072 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list));
                                          report_warning("Incorrect use of comma "
					    "to separate commands. Perhaps you "
					    "meant to use a semicolon?"); }
#line 2081 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTOrStmt((yyloc), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2087 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2094 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2101 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command));
                                          report_warning("No 'then' clause in if "
						         "statement."); }
#line 2110 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[0].command), newASTSkip((yyloc)), newASTSkip((yyloc))); }
#line 2117 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2124 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command)); }
#line 2131 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                                (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2138 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yyloc), (yyvsp[-1].list)); }
#line 2144 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc),
                                               newASTCommandSequence((yylsp[-2]), (yyvsp[-2].list))); }
#line 2151 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = NULL; }
#line 2157 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc), (yyvsp[-1].command)); }
#line 2163 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSkip((yyloc)); }
#line 2169 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTFail((yyloc)); }
#line 2175 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTBreak((yyloc)); }
#line 2181 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2187 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTJoinedWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2193 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSeparateWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2199 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2205 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTWeightedRuleCall((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2211 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTProcCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2217 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2223 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2229 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2235 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2241 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2248 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id));}
#line 2255 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
                                          report_warning("Procedure name used in "
					   "a rule set. Rule names must start "
					   "with a lower-case letter.");
				          if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2265 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
                                          report_warning("Incorrect use of semicolon "
					   "in a rule set. Perhaps you meant to "
					   "use a comma?");
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2275 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2282 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-7]), (yyvsp[-7].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-7].id)) free((yyvsp[-7].id)); }
#line 2289 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-11]), (yyvsp[-11].id), (yyvsp[-9].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
            					  if((yyvsp[-11].id)) free((yyvsp[-11].id)); }
#line 2296 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-10]), (yyvsp[-10].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
					  if((yyvsp[-10].id)) free((yyvsp[-10].id)); }
#line 2303 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Rule names must "
 					   "start with a lower-case letter."
				 	   "letter.");
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2313 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-9]), (yyvsp[-9].id), (yyvsp[-7].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Semicolon at the end "
					    "of a rule's variable list");
					  if((yyvsp[-9].id)) free((yyvsp[-9].id)); }
#line 2322 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), NULL); }
#line 2328 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyloc).first_column = (yylsp[-2]).first_column;
				          (yyloc).first_line = (yylsp[-2]).first_line;
					  (yyloc).last_column = (yylsp[0]).last_column;
				          (yyloc).last_column = (yylsp[0]).last_column;
					  (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), (yyvsp[-4].list)); }
#line 2338 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 373 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2345 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
		 	                  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2352 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2358 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2364 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 382 "parser.y" /* yacc.c:1646  */
    { report_warning("Error in an interface list.");
                                          (yyval.list) = NULL; }
#line 2371 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 385 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2378 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2385 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 390 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = INT_DECLARATIONS; }
#line 2391 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = CHAR_DECLARATIONS; }
#line 2397 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = STRING_DECLARATIONS; }
#line 2403 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = ATOM_DECLARATIONS; }
#line 2409 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = LIST_DECLARATIONS; }
#line 2415 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 398 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2421 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2427 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2433 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2439 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2445 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2451 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), NULL); }
#line 2457 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), (yyvsp[-1].list)); }
#line 2463 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-4]), is_root, (yyvsp[-4].id), (yyvsp[-1].label));
 					  is_root = false;
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); }
#line 2471 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-5]), is_root, (yyvsp[-5].id), (yyvsp[-2].label));
 					  is_root = false;
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2479 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), NULL); }
#line 2485 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), (yyvsp[-1].list)); }
#line 2491 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.edge) = newASTEdge((yylsp[-8]), is_bidir, (yyvsp[-8].id), (yyvsp[-5].id), (yyvsp[-3].id), (yyvsp[-1].label));
                                          is_bidir = false; if((yyvsp[-8].id)) free((yyvsp[-8].id));
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); if((yyvsp[-3].id)) free((yyvsp[-3].id)); }
#line 2499 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 425 "parser.y" /* yacc.c:1646  */
    { }
#line 2505 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 426 "parser.y" /* yacc.c:1646  */
    { }
#line 2511 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 427 "parser.y" /* yacc.c:1646  */
    { }
#line 2517 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2523 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 429 "parser.y" /* yacc.c:1646  */
    { }
#line 2529 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 430 "parser.y" /* yacc.c:1646  */
    { }
#line 2535 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 431 "parser.y" /* yacc.c:1646  */
    { }
#line 2541 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 432 "parser.y" /* yacc.c:1646  */
    { }
#line 2547 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 433 "parser.y" /* yacc.c:1646  */
    { }
#line 2553 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 436 "parser.y" /* yacc.c:1646  */
    { is_root = true; }
#line 2559 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 439 "parser.y" /* yacc.c:1646  */
    { is_bidir = true; }
#line 2565 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = NULL; }
#line 2571 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 444 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[0].cond_exp); }
#line 2577 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTSubtypePred((yyvsp[-3].check_type), (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2584 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTEdgePred((yyloc), (yyvsp[-4].id), (yyvsp[-2].id), (yyvsp[-1].label));
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2591 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2597 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(NOT_EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2603 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2609 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2615 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2621 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2627 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTNotExp((yyloc), (yyvsp[0].cond_exp)); }
#line 2633 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 458 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_OR, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2639 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_AND, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2645 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[-1].cond_exp); }
#line 2651 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = INT_CHECK; }
#line 2657 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = CHAR_CHECK; }
#line 2663 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = STRING_CHECK; }
#line 2669 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = ATOM_CHECK; }
#line 2675 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 467 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = NULL; }
#line 2681 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[0].label); }
#line 2687 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 471 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), NONE, (yyvsp[0].list)); }
#line 2693 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 472 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2699 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2705 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 477 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), NULL); }
#line 2711 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 478 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), (yyvsp[-2].list)); }
#line 2717 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2723 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 482 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTVariable((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2729 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 483 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNumber((yyloc), (yyvsp[0].num)); }
#line 2735 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 484 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTString((yyloc), (yyvsp[0].str)); if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2741 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 485 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(INDEGREE, (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2748 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 487 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(OUTDEGREE, (yyloc), (yyvsp[-1].id));
				 	  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2755 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 489 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTRandInt((yyloc), (yyvsp[-3].atom_exp), (yyvsp[-1].atom_exp)); }
#line 2761 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 490 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBound((yyloc), (yyvsp[-5].atom_exp), (yyvsp[-3].atom_exp), (yyvsp[-1].atom_exp)); }
#line 2767 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTLength((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2773 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 492 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNegExp((yyloc), (yyvsp[0].atom_exp)); }
#line 2779 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 493 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = (yyvsp[-1].atom_exp); }
#line 2785 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 494 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(ADD, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp));  }
#line 2791 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 495 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(SUBTRACT, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2797 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 496 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(MULTIPLY, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2803 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 497 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(DIVIDE, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2809 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 498 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTConcat((yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2815 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 504 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Node ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2828 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 513 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Edge ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2841 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 525 "parser.y" /* yacc.c:1646  */
    { }
#line 2847 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 526 "parser.y" /* yacc.c:1646  */
    { }
#line 2853 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 527 "parser.y" /* yacc.c:1646  */
    { }
#line 2859 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 529 "parser.y" /* yacc.c:1646  */
    { }
#line 2865 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 531 "parser.y" /* yacc.c:1646  */
    { }
#line 2871 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 533 "parser.y" /* yacc.c:1646  */
    { }
#line 2877 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 535 "parser.y" /* yacc.c:1646  */
    { }
#line 2883 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 536 "parser.y" /* yacc.c:1646  */
    { }
#line 2889 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 543 "parser.y" /* yacc.c:1646  */
    { }
#line 2895 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 544 "parser.y" /* yacc.c:1646  */
    { }
#line 2901 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 551 "parser.y" /* yacc.c:1646  */
    { }
#line 2907 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 552 "parser.y" /* yacc.c:1646  */
    { }
#line 2913 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 554 "parser.y" /* yacc.c:1646  */
    { }
#line 2919 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 555 "parser.y" /* yacc.c:1646  */
    { }
#line 2925 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 556 "parser.y" /* yacc.c:1646  */
    { }
#line 2931 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 557 "parser.y" /* yacc.c:1646  */
    { }
#line 2937 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 559 "parser.y" /* yacc.c:1646  */
    { }
#line 2943 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 560 "parser.y" /* yacc.c:1646  */
    { }
#line 2949 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 561 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2955 "parser.c" /* yacc.c:1646  */
    break;


#line 2959 "parser.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 563 "parser.y" /* yacc.c:1906  */


/* Bison calls yyerror whenever it encounters an error. It prints error
 * messages to stderr and log_file. */
void yyerror(const char *error_message)
{
   fprintf(stderr, "Error at '%c': %s\n\n", yychar, error_message);
   fprintf(log_file, "%d.%d-%d.%d: Error at '%s': %s\n\n",
           yylloc.first_line, yylloc.first_column, yylloc.last_line,
           yylloc.last_column, yytext, error_message);
}

/* report_warning is identical to yyerror except that it doesn't refer to yytext.
 * This is called in the action code of error-catching Bison rules in which
 * the value of yytext may be misleading. */
void report_warning(const char *error_message)
{
   fprintf(stderr, "Error: %s\n\n", error_message);
   fprintf(log_file, "%d.%d-%d.%d: Error: %s\n\n",
           yylloc.first_line, yylloc.first_column, yylloc.last_line,
           yylloc.last_column, error_message);
   syntax_error = true;
}
