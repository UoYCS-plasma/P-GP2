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
    WEIGHTED = 266,
    SWEIGHTED = 267,
    JWEIGHTED = 268,
    WHERE = 269,
    EDGETEST = 270,
    INDEG = 271,
    OUTDEG = 272,
    _LENGTH = 273,
    RANDINTOP = 274,
    BOUNDOP = 275,
    INT = 276,
    CHARACTER = 277,
    STRING = 278,
    ATOM = 279,
    LIST = 280,
    INTERFACE = 281,
    _EMPTY = 282,
    INJECTIVE = 283,
    MARK = 284,
    ANY_MARK = 285,
    ARROW = 286,
    NEQ = 287,
    GTEQ = 288,
    LTEQ = 289,
    NUM = 290,
    DNUM = 291,
    STR = 292,
    PROCID = 293,
    ID = 294,
    ROOT = 295,
    BIDIRECTIONAL = 296,
    GP_PROGRAM = 297,
    GP_GRAPH = 298,
    GP_RULE = 299,
    OR = 300,
    AND = 301,
    NOT = 302,
    UMINUS = 303
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
#define WEIGHTED 266
#define SWEIGHTED 267
#define JWEIGHTED 268
#define WHERE 269
#define EDGETEST 270
#define INDEG 271
#define OUTDEG 272
#define _LENGTH 273
#define RANDINTOP 274
#define BOUNDOP 275
#define INT 276
#define CHARACTER 277
#define STRING 278
#define ATOM 279
#define LIST 280
#define INTERFACE 281
#define _EMPTY 282
#define INJECTIVE 283
#define MARK 284
#define ANY_MARK 285
#define ARROW 286
#define NEQ 287
#define GTEQ 288
#define LTEQ 289
#define NUM 290
#define DNUM 291
#define STR 292
#define PROCID 293
#define ID 294
#define ROOT 295
#define BIDIRECTIONAL 296
#define GP_PROGRAM 297
#define GP_GRAPH 298
#define GP_RULE 299
#define OR 300
#define AND 301
#define NOT 302
#define UMINUS 303

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
#line 112 "parser.y" /* yacc.c:355  */

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

#line 252 "parser.c" /* yacc.c:355  */
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

#line 287 "parser.c" /* yacc.c:355  */

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "parser.c" /* yacc.c:358  */

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
#define YYLAST   520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    68,     2,     2,     2,     2,
      60,    61,    50,    48,    59,    49,    53,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    58,
      66,    55,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    65,    64,     2,     2,     2,     2,
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
      45,    46,    47,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   220,   220,   221,   222,   225,   227,   230,   231,   232,
     234,   236,   240,   245,   252,   253,   255,   258,   259,   261,
     266,   267,   268,   270,   273,   277,   279,   281,   283,   287,
     288,   292,   293,   294,   295,   296,   297,   299,   300,   301,
     302,   303,   304,   306,   309,   311,   314,   316,   318,   321,
     326,   334,   337,   340,   343,   347,   356,   363,   368,   374,
     376,   379,   380,   383,   386,   388,   391,   392,   393,   394,
     395,   399,   400,   401,   402,   403,   404,   407,   408,   410,
     413,   417,   418,   420,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   436,   437,   439,   440,   444,   445,   447,
     449,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   463,   464,   465,   466,   468,   469,   472,   473,   475,
     478,   479,   480,   481,   483,   484,   485,   486,   488,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   502,
     503,   504,   505,   513,   514,   522,   526,   527,   528,   529,
     531,   533,   536,   537,   539,   541,   544,   545,   547,   550,
     552,   553,   555,   556,   557,   558,   560,   561,   562
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "IF", "TRY", "THEN", "ELSE",
  "SKIP", "FAIL", "BREAK", "WEIGHTED", "SWEIGHTED", "JWEIGHTED", "WHERE",
  "EDGETEST", "INDEG", "OUTDEG", "_LENGTH", "RANDINTOP", "BOUNDOP", "INT",
  "CHARACTER", "STRING", "ATOM", "LIST", "INTERFACE", "_EMPTY",
  "INJECTIVE", "MARK", "ANY_MARK", "ARROW", "NEQ", "GTEQ", "LTEQ", "NUM",
  "DNUM", "STR", "PROCID", "ID", "ROOT", "BIDIRECTIONAL", "GP_PROGRAM",
  "GP_GRAPH", "GP_RULE", "OR", "AND", "NOT", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "'.'", "':'", "'='", "'['", "']'", "';'", "','", "'('", "')'",
  "'!'", "'{'", "'}'", "'|'", "'<'", "'>'", "'#'", "$accept", "Initialise",
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
     295,   296,   297,   298,   299,   300,   301,   302,    43,    45,
      42,    47,   303,    46,    58,    61,    91,    93,    59,    44,
      40,    41,    33,   123,   125,   124,    60,    62,    35
};
# endif

#define YYPACT_NINF -229

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-229)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     388,     3,   -31,   160,    27,    89,  -229,  -229,     3,  -229,
    -229,  -229,  -229,    42,    46,    98,  -229,  -229,   125,   148,
    -229,   202,  -229,   212,     7,    78,    -4,   207,   111,    -5,
     171,   118,  -229,    12,   218,   218,  -229,  -229,  -229,    15,
     160,   202,   160,   221,  -229,   185,   205,  -229,  -229,  -229,
    -229,   160,   221,  -229,   -25,   135,  -229,  -229,   190,    94,
    -229,   223,  -229,   243,   247,   297,   158,   213,  -229,  -229,
    -229,  -229,   359,   430,   270,  -229,   376,  -229,   282,     6,
     189,  -229,   202,   202,   218,  -229,    65,     7,   291,   364,
       7,   133,   -17,   318,    32,   315,  -229,   317,    91,   139,
     319,   326,   164,  -229,   207,   236,  -229,   218,   218,   218,
     218,  -229,   358,   358,  -229,   341,  -229,  -229,  -229,  -229,
     202,  -229,  -229,   195,   131,   378,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,   202,   350,   107,   389,   178,  -229,   352,
     291,   291,   -15,   384,   108,   380,   381,   414,   383,   385,
     416,   165,  -229,   262,   394,  -229,  -229,   447,  -229,   448,
    -229,  -229,  -229,  -229,   221,   364,   291,   221,   291,  -229,
    -229,   223,  -229,   288,  -229,   199,    21,   425,   400,   291,
    -229,  -229,  -229,   423,   194,   -34,  -229,  -229,  -229,   392,
    -229,  -229,   395,   396,   397,   426,  -229,   348,   207,   218,
     218,  -229,    21,   429,   406,  -229,   170,   367,  -229,   409,
     201,   403,   413,   455,   291,   291,    21,  -229,  -229,   410,
     132,   441,  -229,  -229,  -229,  -229,   405,  -229,   415,  -229,
    -229,   455,   291,   281,  -229,  -229,   432,  -229,  -229,  -229,
     368,  -229,   412,   268,  -229,    21,   445,   455,  -229,  -229,
    -229,  -229,  -229,   207,  -229,    21,   417,   418,   419,   420,
     421,  -229,  -229,  -229,   307,   307,   210,   -28,   370,  -229,
    -229,   424,  -229,   369,   -11,   422,  -229,  -229,  -229,  -229,
     268,   268,   393,   427,     5,   324,   455,   291,  -229,   431,
     455,   107,   107,     7,   307,   307,   433,   184,  -229,   428,
     294,   411,   307,   307,   307,   307,   307,   107,  -229,  -229,
     245,  -229,   107,  -229,    -7,   302,   268,   268,     7,   281,
     281,   307,   307,   307,   307,  -229,    21,   108,  -229,   434,
     435,   436,   311,   351,  -229,  -229,  -229,   370,  -229,  -229,
     287,   287,   433,   433,  -229,   439,   107,  -229,   440,  -229,
     438,  -229,   442,   437,   437,   370,   370,   370,   370,   455,
     443,  -229,  -229,  -229,   307,   307,   107,  -229,   107,  -229,
    -229,  -229,   331,   363,   446,   449,  -229,   307,   281,   281,
     450,   345,   451,  -229,  -229,  -229,  -229
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
       0,     0,     0,    10,    17,    20,    32,    37,    38,    42,
      40,    14,    11,   145,     0,     0,    59,    14,     0,     0,
     159,    93,   146,     0,     0,     0,     0,     0,   153,    46,
      31,    44,     0,    25,     0,    39,     0,    49,    47,     0,
       0,    47,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,   148,     0,     0,   156,     0,     0,     0,
       0,    45,     0,     0,    41,    29,    43,    18,    19,    21,
       0,    16,    15,     0,     0,     0,    66,    67,    68,    69,
      70,    57,    60,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   150,   157,    22,    24,    26,
      27,    50,    48,    30,    12,     0,     0,    13,     0,   142,
     141,    93,    71,     0,    78,     0,     0,     0,     0,     0,
     164,   166,   168,     0,     0,   160,   162,    85,    91,     0,
      89,    84,     0,     0,     0,     0,   149,     0,     0,     0,
       0,    58,     0,     0,     0,    73,     0,     0,    81,     0,
       0,     0,     0,    97,     0,     0,     0,   167,   154,     0,
       0,     0,    86,    90,    87,    92,     0,   151,     0,    23,
      28,    97,     0,     0,   144,   143,    95,    75,    82,    72,
       0,    63,     0,     0,    52,     0,     0,    97,   155,   165,
     163,   161,    88,     0,    55,     0,     0,     0,     0,     0,
       0,   122,   125,   126,     0,     0,     0,   117,   120,   124,
      96,     0,    74,     0,     0,     0,   111,   112,   113,   114,
       0,     0,    98,     0,     0,   120,    97,     0,    51,     0,
      97,     0,     0,     0,     0,     0,   132,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    61,
       0,    64,     0,   107,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,    54,     0,
       0,     0,     0,     0,   133,    80,   123,   121,   118,   119,
     134,   135,   136,   137,   138,     0,     0,    62,     0,   110,
     108,   109,     0,   102,   101,   104,   106,   105,   103,    97,
       0,   127,   128,   131,     0,     0,     0,    65,     0,    99,
      53,   158,     0,     0,     0,   115,   129,     0,     0,     0,
       0,     0,     0,   116,   100,   130,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,  -229,   477,  -229,   191,   444,    -9,   360,   -23,
    -229,   453,  -229,   452,    14,   462,    79,  -193,  -229,   328,
     -85,   325,  -122,   266,  -199,   -14,   336,  -229,  -218,  -168,
    -229,  -229,    66,  -228,  -185,   153,    74,  -184,  -229,   -24,
    -229,   454,   -13,   349,   -98,  -100,   182,  -229,   290
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     8,     9,    10,    11,    86,    43,    44,    45,
      46,    47,    48,    76,    12,    54,    55,   213,   310,   131,
      93,   137,   138,   207,   208,   139,    97,   271,   244,   282,
     283,   380,   266,   284,   268,    49,    50,   171,   236,   269,
      16,    31,    32,   105,   106,    61,   184,   185,   186
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      56,    30,    56,   125,   154,   267,     5,   156,   238,   231,
     143,    72,    73,   254,    52,   174,    74,    17,    68,   134,
     220,   178,   211,   247,   169,    15,   300,    20,   170,   288,
      63,    64,    79,    87,   221,    53,    88,   319,   316,   317,
     301,     6,     7,   135,    65,   135,    53,   212,   136,    29,
     136,    29,   286,   309,   349,   176,   177,    58,   285,   300,
     320,   119,   290,    56,    82,    83,   132,   115,   325,    69,
      56,    53,   328,    70,   238,    14,    71,    19,    42,   296,
     297,   202,    14,   203,   157,   158,   159,   160,   174,    68,
     311,   353,   354,   141,   216,   285,   315,    23,   228,   156,
     122,    25,    24,     6,     7,   122,    26,   329,   330,   332,
     333,   164,   313,   314,    78,   337,    81,   340,   341,   342,
     343,   344,   120,   345,   167,    78,   145,   146,   348,   245,
     246,   285,   285,   359,    57,   180,   355,   356,   357,   358,
     147,   370,   169,   181,    21,   182,   170,   255,   350,   351,
     267,   267,    94,   289,    13,    95,    18,   183,    27,   249,
      14,    13,   367,    28,    29,    14,   123,   181,    62,   182,
     219,     6,     7,   123,   148,   149,   229,   230,    27,   372,
     373,   183,   374,    67,   375,    24,   161,   162,   150,    89,
     133,   135,   381,    77,    90,    77,   136,    29,     6,     7,
     193,   194,   326,    33,    77,   234,    34,    35,    26,   235,
      36,    37,    38,    33,   195,    39,    34,    35,    27,    33,
      36,    37,    38,   101,    27,    39,    36,    37,    38,   153,
      84,    39,   302,   303,   304,   305,    66,   306,   135,    13,
       6,     7,    60,   173,    13,   334,    92,   112,   113,   165,
       6,     7,   299,   116,    90,   218,     6,     7,    40,   135,
      29,   135,    41,    96,   209,    42,   240,    85,    51,   331,
     103,   298,    41,   104,    40,    42,    29,   121,    41,    82,
      83,    42,   121,   275,   256,   257,   258,   259,   260,   276,
     277,   278,   279,   155,   352,   261,   104,   256,   257,   258,
     259,   260,    98,   262,   346,   263,    99,    53,   261,   347,
     256,   257,   258,   259,   260,   280,   262,   264,   263,   196,
      53,   336,   104,   256,   257,   258,   259,   260,   281,   262,
     264,   263,   100,    53,    71,   321,   322,   304,   305,   114,
     306,   265,   262,   264,   263,   205,    53,   124,   206,   140,
     302,   303,   304,   305,   265,   306,   264,   321,   322,   302,
     303,   304,   305,   334,   306,   107,   108,   265,   323,   324,
     364,   142,   302,   303,   304,   305,   144,   306,   151,   302,
     303,   304,   305,   152,   306,   126,   127,   128,   129,   130,
     323,   324,   376,   302,   303,   304,   305,     7,   306,   302,
     303,   304,   305,   163,   306,   227,   385,   168,   104,   166,
     365,   302,   303,   304,   305,   179,   306,   175,   302,   303,
     304,   305,   377,   306,   237,   272,   308,   206,   206,   206,
       1,     2,     3,   111,   112,   113,   109,   110,   316,   317,
     338,   339,   117,   118,   382,   383,   172,   187,   188,   189,
     190,   192,   191,   198,   199,   200,   214,   215,   217,   222,
     232,   226,   223,   224,   225,   233,   239,   241,   242,   243,
     251,   248,   252,   270,   253,   274,   287,   291,   292,   293,
     294,   295,   312,   307,   317,    22,   306,   318,    59,   335,
     327,   300,    75,   201,    80,   361,   362,   363,   366,   368,
     210,    91,   197,   369,   371,   378,   273,   204,   379,   360,
     250,   384,   386,     0,     0,     0,     0,     0,     0,     0,
     102
};

static const yytype_int16 yycheck[] =
{
      24,    15,    26,    88,   104,   233,     3,   105,   207,   202,
      95,    34,    35,   231,    23,   137,     1,     3,    31,    36,
      54,    36,     1,   216,    35,    56,    54,     0,    39,   247,
      35,    36,    41,    58,    68,    39,    61,    32,    45,    46,
      68,    38,    39,    60,    49,    60,    39,    26,    65,    66,
      65,    66,   245,    64,    61,   140,   141,    61,   243,    54,
      55,    84,   255,    87,    58,    59,    90,    61,   286,    57,
      94,    39,   290,    61,   273,     1,    64,     3,    63,   264,
     265,   166,     8,   168,   107,   108,   109,   110,   210,   102,
     274,   319,   320,    61,   179,   280,   281,    55,   198,   197,
      86,    55,    60,    38,    39,    91,    60,   291,   292,   294,
     295,   120,   280,   281,    40,   300,    42,   302,   303,   304,
     305,   306,    57,   307,   133,    51,    35,    36,   312,   214,
     215,   316,   317,   326,    56,    27,   321,   322,   323,   324,
      49,   359,    35,    35,    55,    37,    39,   232,   316,   317,
     378,   379,    58,   253,     1,    61,     3,    49,    60,    27,
      86,     8,   346,    65,    66,    91,    87,    35,    57,    37,
     184,    38,    39,    94,    35,    36,   199,   200,    60,   364,
     365,    49,   366,    65,   368,    60,   112,   113,    49,    54,
      57,    60,   377,    40,    59,    42,    65,    66,    38,    39,
      35,    36,   287,     1,    51,    35,     4,     5,    60,    39,
       8,     9,    10,     1,    49,    13,     4,     5,    60,     1,
       8,     9,    10,    65,    60,    13,     8,     9,    10,    65,
      45,    13,    48,    49,    50,    51,    65,    53,    60,    86,
      38,    39,    35,    65,    91,    61,    56,    58,    59,    54,
      38,    39,   266,    64,    59,    61,    38,    39,    56,    60,
      66,    60,    60,    40,    65,    63,    65,    62,    56,   293,
      57,    61,    60,    60,    56,    63,    66,    86,    60,    58,
      59,    63,    91,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    57,   318,    27,    60,    16,    17,    18,
      19,    20,    59,    35,    59,    37,    59,    39,    27,    64,
      16,    17,    18,    19,    20,    47,    35,    49,    37,    57,
      39,    27,    60,    16,    17,    18,    19,    20,    60,    35,
      49,    37,    35,    39,    64,    33,    34,    50,    51,    57,
      53,    60,    35,    49,    37,    57,    39,    56,    60,    31,
      48,    49,    50,    51,    60,    53,    49,    33,    34,    48,
      49,    50,    51,    61,    53,     6,     7,    60,    66,    67,
      59,    56,    48,    49,    50,    51,    59,    53,    59,    48,
      49,    50,    51,    57,    53,    21,    22,    23,    24,    25,
      66,    67,    61,    48,    49,    50,    51,    39,    53,    48,
      49,    50,    51,    62,    53,    57,    61,    57,    60,    31,
      59,    48,    49,    50,    51,    31,    53,    65,    48,    49,
      50,    51,    59,    53,    57,    57,    57,    60,    60,    60,
      42,    43,    44,    57,    58,    59,     6,     7,    45,    46,
      29,    30,    82,    83,   378,   379,    57,    67,    67,    35,
      67,    35,    67,    59,     7,     7,    31,    57,    35,    67,
      31,    35,    67,    67,    67,    59,    57,    64,    55,    14,
      29,    61,    67,    41,    59,    63,    31,    60,    60,    60,
      60,    60,    60,    59,    46,     8,    53,    60,    26,    61,
      59,    54,    39,   165,    42,    61,    61,    61,    59,    59,
     175,    57,   153,    61,    61,    59,   240,   171,    59,   327,
     220,    61,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,    44,    70,     3,    38,    39,    71,    72,
      73,    74,    83,   104,   105,    56,   109,    83,   104,   105,
       0,    55,    72,    55,    60,    55,    60,    60,    65,    66,
      94,   110,   111,     1,     4,     5,     8,     9,    10,    13,
      56,    60,    63,    76,    77,    78,    79,    80,    81,   104,
     105,    56,    76,    39,    84,    85,   108,    56,    61,    84,
      35,   114,    57,    35,    36,    49,    65,    65,   111,    57,
      61,    64,    78,    78,     1,    80,    82,   104,   105,    76,
      82,   105,    58,    59,    45,    62,    75,    58,    61,    54,
      59,    75,    56,    89,    58,    61,    40,    95,    59,    59,
      35,    65,   110,    57,    60,   112,   113,     6,     7,     6,
       7,    57,    58,    59,    57,    61,    64,    77,    77,    78,
      57,    74,    83,    85,    56,    89,    21,    22,    23,    24,
      25,    88,   108,    57,    36,    60,    65,    90,    91,    94,
      31,    61,    56,    89,    59,    35,    36,    49,    35,    36,
      49,    59,    57,    65,   114,    57,   113,    78,    78,    78,
      78,   105,   105,    62,    76,    54,    31,    76,    57,    35,
      39,   106,    57,    65,    91,    65,    89,    89,    36,    31,
      27,    35,    37,    49,   115,   116,   117,    67,    67,    35,
      67,    67,    35,    35,    36,    49,    57,   112,    59,     7,
       7,    88,    89,    89,    95,    57,    60,    92,    93,    65,
      90,     1,    26,    86,    31,    57,    89,    35,    61,    94,
      54,    68,    67,    67,    67,    67,    35,    57,   114,    78,
      78,    86,    31,    59,    35,    39,   107,    57,    93,    57,
      65,    64,    55,    14,    97,    89,    89,    86,    61,    27,
     117,    29,    67,    59,    97,    89,    16,    17,    18,    19,
      20,    27,    35,    37,    49,    60,   101,   102,   103,   108,
      41,    96,    57,    92,    63,    15,    21,    22,    23,    24,
      47,    60,    98,    99,   102,   103,    86,    31,    97,   114,
      86,    60,    60,    60,    60,    60,   103,   103,    61,    94,
      54,    68,    48,    49,    50,    51,    53,    59,    57,    64,
      87,   106,    60,    98,    98,   103,    45,    46,    60,    32,
      55,    33,    34,    66,    67,    97,    89,    59,    97,   106,
     106,   108,   103,   103,    61,    61,    27,   103,    29,    30,
     103,   103,   103,   103,   103,   106,    59,    64,   106,    61,
      98,    98,   108,   102,   102,   103,   103,   103,   103,    86,
     115,    61,    61,    61,    59,    59,    59,   106,    59,    61,
      97,    61,   103,   103,   106,   106,    61,    59,    59,    59,
     100,   103,   101,   101,    61,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    74,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   101,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     105,   106,   106,   107,   107,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   114,
     115,   115,   116,   116,   116,   116,   117,   117,   117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     1,     1,     1,
       3,     3,     6,     6,     0,     2,     2,     1,     3,     3,
       1,     3,     4,     6,     4,     2,     4,     4,     6,     3,
       4,     2,     1,     2,     1,     1,     1,     1,     1,     2,
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
          case 37: /* STR  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1476 "parser.c" /* yacc.c:1257  */
        break;

    case 38: /* PROCID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1482 "parser.c" /* yacc.c:1257  */
        break;

    case 39: /* ID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1488 "parser.c" /* yacc.c:1257  */
        break;

    case 71: /* Program  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1494 "parser.c" /* yacc.c:1257  */
        break;

    case 72: /* Declaration  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTDeclaration(((*yyvaluep).decl)); }
#line 1500 "parser.c" /* yacc.c:1257  */
        break;

    case 73: /* MainDecl  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1506 "parser.c" /* yacc.c:1257  */
        break;

    case 75: /* LocalDecls  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1512 "parser.c" /* yacc.c:1257  */
        break;

    case 76: /* ComSeq  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1518 "parser.c" /* yacc.c:1257  */
        break;

    case 77: /* Command  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1524 "parser.c" /* yacc.c:1257  */
        break;

    case 78: /* Block  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1530 "parser.c" /* yacc.c:1257  */
        break;

    case 79: /* SimpleCommand  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1536 "parser.c" /* yacc.c:1257  */
        break;

    case 80: /* RuleSetCall  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1542 "parser.c" /* yacc.c:1257  */
        break;

    case 81: /* SWeightedRuleSetCall  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1548 "parser.c" /* yacc.c:1257  */
        break;

    case 82: /* IDList  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1554 "parser.c" /* yacc.c:1257  */
        break;

    case 83: /* RuleDecl  */
#line 155 "parser.y" /* yacc.c:1257  */
      { freeASTRule(((*yyvaluep).rule)); }
#line 1560 "parser.c" /* yacc.c:1257  */
        break;

    case 84: /* VarDecls  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1566 "parser.c" /* yacc.c:1257  */
        break;

    case 85: /* VarList  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1572 "parser.c" /* yacc.c:1257  */
        break;

    case 86: /* Inter  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1578 "parser.c" /* yacc.c:1257  */
        break;

    case 87: /* NodeIDList  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1584 "parser.c" /* yacc.c:1257  */
        break;

    case 89: /* Graph  */
#line 156 "parser.y" /* yacc.c:1257  */
      { freeASTGraph(((*yyvaluep).graph)); }
#line 1590 "parser.c" /* yacc.c:1257  */
        break;

    case 90: /* NodeList  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1596 "parser.c" /* yacc.c:1257  */
        break;

    case 91: /* Node  */
#line 157 "parser.y" /* yacc.c:1257  */
      { freeASTNode(((*yyvaluep).node)); }
#line 1602 "parser.c" /* yacc.c:1257  */
        break;

    case 92: /* EdgeList  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1608 "parser.c" /* yacc.c:1257  */
        break;

    case 93: /* Edge  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTEdge(((*yyvaluep).edge)); }
#line 1614 "parser.c" /* yacc.c:1257  */
        break;

    case 97: /* CondDecl  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1620 "parser.c" /* yacc.c:1257  */
        break;

    case 98: /* Condition  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1626 "parser.c" /* yacc.c:1257  */
        break;

    case 100: /* LabelArg  */
#line 160 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1632 "parser.c" /* yacc.c:1257  */
        break;

    case 101: /* Label  */
#line 160 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1638 "parser.c" /* yacc.c:1257  */
        break;

    case 102: /* List  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1644 "parser.c" /* yacc.c:1257  */
        break;

    case 103: /* AtomExp  */
#line 161 "parser.y" /* yacc.c:1257  */
      { freeASTAtom(((*yyvaluep).atom_exp)); }
#line 1650 "parser.c" /* yacc.c:1257  */
        break;

    case 104: /* ProcID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1656 "parser.c" /* yacc.c:1257  */
        break;

    case 105: /* RuleID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1662 "parser.c" /* yacc.c:1257  */
        break;

    case 106: /* NodeID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1668 "parser.c" /* yacc.c:1257  */
        break;

    case 107: /* EdgeID  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1674 "parser.c" /* yacc.c:1257  */
        break;

    case 108: /* Variable  */
#line 151 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1680 "parser.c" /* yacc.c:1257  */
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
#line 220 "parser.y" /* yacc.c:1646  */
    { gp_program = (yyvsp[0].list); }
#line 1968 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 221 "parser.y" /* yacc.c:1646  */
    { }
#line 1974 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 222 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].rule)) freeASTRule((yyvsp[0].rule)); }
#line 1980 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), NULL); }
#line 1987 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), (yyvsp[-1].list)); }
#line 1994 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTMainDecl((yyloc), (yyvsp[0].command)); }
#line 2000 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTProcedureDecl((yyloc), (yyvsp[0].proc)); }
#line 2006 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTRuleDecl((yyloc), (yyvsp[0].rule)); }
#line 2012 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yylsp[-2]), (yyvsp[0].list)); }
#line 2018 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-2]), (yyvsp[-2].id), NULL,
                                               newASTCommandSequence((yylsp[0]) ,(yyvsp[0].list)));
					  if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
				          if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2034 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
                                          report_warning("Procedure names must "
 					   "start with an upper-case letter.");
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTRuleDecl((yylsp[0]), (yyvsp[0].rule)), (yyvsp[-1].list)); }
#line 2057 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTProcedureDecl((yylsp[0]), (yyvsp[0].proc)), (yyvsp[-1].list)); }
#line 2064 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), NULL); }
#line 2070 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list)); }
#line 2076 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list));
                                          report_warning("Incorrect use of comma "
					    "to separate commands. Perhaps you "
					    "meant to use a semicolon?"); }
#line 2085 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTOrStmt((yyloc), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2091 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2098 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2105 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command));
                                          report_warning("No 'then' clause in if "
						         "statement."); }
#line 2114 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 277 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[0].command), newASTSkip((yyloc)), newASTSkip((yyloc))); }
#line 2121 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2128 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command)); }
#line 2135 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                                (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2142 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yyloc), (yyvsp[-1].list)); }
#line 2148 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc),
                                               newASTCommandSequence((yylsp[-2]), (yyvsp[-2].list))); }
#line 2155 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = NULL; }
#line 2161 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc), (yyvsp[-1].command)); }
#line 2167 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSkip((yyloc)); }
#line 2173 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTFail((yyloc)); }
#line 2179 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTBreak((yyloc)); }
#line 2185 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2191 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSeparateWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2197 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTJoinedWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2203 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2209 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTWeightedRuleCall((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2215 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTProcCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2221 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2227 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2233 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2239 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2245 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2252 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id));}
#line 2259 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
                                          report_warning("Procedure name used in "
					   "a rule set. Rule names must start "
					   "with a lower-case letter.");
				          if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2269 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
                                          report_warning("Incorrect use of semicolon "
					   "in a rule set. Perhaps you meant to "
					   "use a comma?");
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2279 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2286 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-7]), (yyvsp[-7].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-7].id)) free((yyvsp[-7].id)); }
#line 2293 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 341 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-11]), (yyvsp[-11].id), (yyvsp[-9].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
            					  if((yyvsp[-11].id)) free((yyvsp[-11].id)); }
#line 2300 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-10]), (yyvsp[-10].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
					  if((yyvsp[-10].id)) free((yyvsp[-10].id)); }
#line 2307 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Rule names must "
 					   "start with a lower-case letter."
				 	   "letter.");
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2317 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-9]), (yyvsp[-9].id), (yyvsp[-7].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Semicolon at the end "
					    "of a rule's variable list");
					  if((yyvsp[-9].id)) free((yyvsp[-9].id)); }
#line 2326 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), NULL); }
#line 2332 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 368 "parser.y" /* yacc.c:1646  */
    { (yyloc).first_column = (yylsp[-2]).first_column;
				          (yyloc).first_line = (yylsp[-2]).first_line;
					  (yyloc).last_column = (yylsp[0]).last_column;
				          (yyloc).last_column = (yylsp[0]).last_column;
					  (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), (yyvsp[-4].list)); }
#line 2342 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 374 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2349 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
		 	                  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2356 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2362 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2368 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 383 "parser.y" /* yacc.c:1646  */
    { report_warning("Error in an interface list.");
                                          (yyval.list) = NULL; }
#line 2375 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2382 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2389 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = INT_DECLARATIONS; }
#line 2395 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = CHAR_DECLARATIONS; }
#line 2401 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = STRING_DECLARATIONS; }
#line 2407 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = ATOM_DECLARATIONS; }
#line 2413 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = LIST_DECLARATIONS; }
#line 2419 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2425 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2431 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2437 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2443 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2449 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2455 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), NULL); }
#line 2461 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), (yyvsp[-1].list)); }
#line 2467 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-4]), is_root, (yyvsp[-4].id), (yyvsp[-1].label));
 					  is_root = false;
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); }
#line 2475 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-5]), is_root, (yyvsp[-5].id), (yyvsp[-2].label));
 					  is_root = false;
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2483 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), NULL); }
#line 2489 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 418 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), (yyvsp[-1].list)); }
#line 2495 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.edge) = newASTEdge((yylsp[-8]), is_bidir, (yyvsp[-8].id), (yyvsp[-5].id), (yyvsp[-3].id), (yyvsp[-1].label));
                                          is_bidir = false; if((yyvsp[-8].id)) free((yyvsp[-8].id));
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); if((yyvsp[-3].id)) free((yyvsp[-3].id)); }
#line 2503 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 426 "parser.y" /* yacc.c:1646  */
    { }
#line 2509 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 427 "parser.y" /* yacc.c:1646  */
    { }
#line 2515 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2521 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 429 "parser.y" /* yacc.c:1646  */
    { }
#line 2527 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 430 "parser.y" /* yacc.c:1646  */
    { }
#line 2533 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 431 "parser.y" /* yacc.c:1646  */
    { }
#line 2539 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 432 "parser.y" /* yacc.c:1646  */
    { }
#line 2545 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 433 "parser.y" /* yacc.c:1646  */
    { }
#line 2551 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 434 "parser.y" /* yacc.c:1646  */
    { }
#line 2557 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 437 "parser.y" /* yacc.c:1646  */
    { is_root = true; }
#line 2563 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 440 "parser.y" /* yacc.c:1646  */
    { is_bidir = true; }
#line 2569 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 444 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = NULL; }
#line 2575 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[0].cond_exp); }
#line 2581 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 447 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTSubtypePred((yyvsp[-3].check_type), (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2588 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 450 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTEdgePred((yyloc), (yyvsp[-4].id), (yyvsp[-2].id), (yyvsp[-1].label));
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2595 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2601 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(NOT_EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2607 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2613 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2619 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2625 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2631 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 458 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTNotExp((yyloc), (yyvsp[0].cond_exp)); }
#line 2637 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_OR, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2643 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_AND, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2649 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 461 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[-1].cond_exp); }
#line 2655 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = INT_CHECK; }
#line 2661 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = CHAR_CHECK; }
#line 2667 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = STRING_CHECK; }
#line 2673 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 466 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = ATOM_CHECK; }
#line 2679 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = NULL; }
#line 2685 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 469 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[0].label); }
#line 2691 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 472 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), NONE, (yyvsp[0].list)); }
#line 2697 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 473 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2703 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 475 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2709 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 478 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), NULL); }
#line 2715 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), (yyvsp[-2].list)); }
#line 2721 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2727 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 483 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTVariable((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2733 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 484 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNumber((yyloc), (yyvsp[0].num)); }
#line 2739 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 485 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTString((yyloc), (yyvsp[0].str)); if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2745 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 486 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(INDEGREE, (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2752 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 488 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(OUTDEGREE, (yyloc), (yyvsp[-1].id));
				 	  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2759 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 490 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTRandInt((yyloc), (yyvsp[-3].atom_exp), (yyvsp[-1].atom_exp)); }
#line 2765 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBound((yyloc), (yyvsp[-5].atom_exp), (yyvsp[-3].atom_exp), (yyvsp[-1].atom_exp)); }
#line 2771 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 492 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTLength((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2777 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 493 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNegExp((yyloc), (yyvsp[0].atom_exp)); }
#line 2783 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 494 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = (yyvsp[-1].atom_exp); }
#line 2789 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 495 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(ADD, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp));  }
#line 2795 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 496 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(SUBTRACT, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2801 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 497 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(MULTIPLY, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2807 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 498 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(DIVIDE, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2813 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 499 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTConcat((yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2819 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 505 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Node ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2832 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 514 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Edge ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2845 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 526 "parser.y" /* yacc.c:1646  */
    { }
#line 2851 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 527 "parser.y" /* yacc.c:1646  */
    { }
#line 2857 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 528 "parser.y" /* yacc.c:1646  */
    { }
#line 2863 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 530 "parser.y" /* yacc.c:1646  */
    { }
#line 2869 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 532 "parser.y" /* yacc.c:1646  */
    { }
#line 2875 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 534 "parser.y" /* yacc.c:1646  */
    { }
#line 2881 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 536 "parser.y" /* yacc.c:1646  */
    { }
#line 2887 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 537 "parser.y" /* yacc.c:1646  */
    { }
#line 2893 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 544 "parser.y" /* yacc.c:1646  */
    { }
#line 2899 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 545 "parser.y" /* yacc.c:1646  */
    { }
#line 2905 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 552 "parser.y" /* yacc.c:1646  */
    { }
#line 2911 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 553 "parser.y" /* yacc.c:1646  */
    { }
#line 2917 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 555 "parser.y" /* yacc.c:1646  */
    { }
#line 2923 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 556 "parser.y" /* yacc.c:1646  */
    { }
#line 2929 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 557 "parser.y" /* yacc.c:1646  */
    { }
#line 2935 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 558 "parser.y" /* yacc.c:1646  */
    { }
#line 2941 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 560 "parser.y" /* yacc.c:1646  */
    { }
#line 2947 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 561 "parser.y" /* yacc.c:1646  */
    { }
#line 2953 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 562 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2959 "parser.c" /* yacc.c:1646  */
    break;


#line 2963 "parser.c" /* yacc.c:1646  */
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
#line 564 "parser.y" /* yacc.c:1906  */


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
