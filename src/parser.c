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
#line 56 "parser.y" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 42 "parser.y" /* yacc.c:355  */

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
#define WEIGHTED 266
#define SWEIGHTED 267
#define JWEIGHTED 268
#define WHERE 269
#define EDGETEST 270
#define INDEG 271
#define OUTDEG 272
#define _LENGTH 273
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
#line 77 "parser.y" /* yacc.c:355  */

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
#line 47 "parser.y" /* yacc.c:355  */

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
#define YYLAST   481

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

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
       0,   221,   221,   222,   223,   226,   228,   231,   232,   233,
     235,   237,   241,   246,   253,   254,   256,   259,   260,   262,
     267,   268,   269,   271,   274,   278,   280,   282,   284,   288,
     289,   293,   294,   295,   296,   297,   298,   300,   301,   302,
     303,   304,   305,   307,   310,   312,   315,   317,   319,   322,
     327,   335,   338,   341,   344,   348,   357,   364,   369,   375,
     377,   380,   381,   384,   387,   389,   392,   393,   394,   395,
     396,   400,   401,   402,   403,   404,   405,   408,   409,   411,
     414,   418,   419,   421,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   437,   438,   440,   441,   445,   446,   448,
     450,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   464,   465,   466,   467,   469,   470,   473,   474,   476,
     479,   480,   481,   482,   484,   485,   486,   487,   489,   491,
     492,   493,   494,   495,   496,   497,   498,   501,   502,   503,
     504,   512,   513,   521,   525,   526,   527,   528,   530,   532,
     535,   536,   538,   540,   543,   544,   546,   549,   551,   552,
     554,   555,   556,   557,   559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "IF", "TRY", "THEN", "ELSE",
  "SKIP", "FAIL", "BREAK", "WEIGHTED", "SWEIGHTED", "JWEIGHTED", "WHERE",
  "EDGETEST", "INDEG", "OUTDEG", "_LENGTH", "INT", "CHARACTER", "STRING",
  "ATOM", "LIST", "INTERFACE", "_EMPTY", "INJECTIVE", "MARK", "ANY_MARK",
  "ARROW", "NEQ", "GTEQ", "LTEQ", "NUM", "DNUM", "STR", "PROCID", "ID",
  "ROOT", "BIDIRECTIONAL", "GP_PROGRAM", "GP_GRAPH", "GP_RULE", "OR",
  "AND", "NOT", "'+'", "'-'", "'*'", "'/'", "UMINUS", "'.'", "':'", "'='",
  "'['", "']'", "';'", "','", "'('", "')'", "'!'", "'{'", "'}'", "'|'",
  "'<'", "'>'", "'#'", "$accept", "Initialise", "Program", "Declaration",
  "MainDecl", "ProcDecl", "LocalDecls", "ComSeq", "Command", "Block",
  "SimpleCommand", "RuleSetCall", "SWeightedRuleSetCall", "IDList",
  "RuleDecl", "VarDecls", "VarList", "Inter", "NodeIDList", "Type",
  "Graph", "NodeList", "Node", "EdgeList", "Edge", "Position", "RootNode",
  "Bidirection", "CondDecl", "Condition", "Subtype", "LabelArg", "Label",
  "List", "AtomExp", "ProcID", "RuleID", "NodeID", "EdgeID", "Variable",
  "HostGraph", "HostNodeList", "HostNode", "HostEdgeList", "HostEdge",
  "HostID", "HostLabel", "HostList", "HostExp", YY_NULLPTR
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

#define YYPACT_NINF -264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-264)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     346,    13,    22,   143,    65,    25,  -264,  -264,    13,  -264,
    -264,  -264,  -264,    52,   103,   163,  -264,  -264,    41,    54,
    -264,   193,  -264,   203,    77,    69,     1,    92,    78,     0,
     126,    -4,  -264,   155,   223,   223,  -264,  -264,  -264,    14,
     143,   193,   143,   -21,  -264,   102,   139,  -264,  -264,  -264,
    -264,   143,   -21,  -264,   179,   189,  -264,  -264,   109,   312,
    -264,   167,  -264,   161,   188,   195,   205,   314,  -264,  -264,
    -264,  -264,   310,   386,   224,  -264,   334,  -264,   200,   308,
     196,  -264,   193,   193,   223,  -264,    66,    77,   211,   335,
      77,    82,   120,   253,     9,   244,  -264,   288,    59,   134,
     290,   245,   220,  -264,    92,   315,  -264,   223,   223,   223,
     223,  -264,   269,   269,  -264,   248,  -264,  -264,  -264,  -264,
     193,  -264,  -264,   228,   185,   281,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,   193,   297,   229,   347,   230,  -264,   300,
     211,   211,   124,   374,   190,   339,   340,   373,   342,   343,
     376,   162,  -264,   319,   353,  -264,  -264,   404,  -264,   405,
    -264,  -264,  -264,  -264,   -21,   335,   211,   -21,   211,  -264,
    -264,   167,  -264,   320,  -264,   234,    18,   384,   359,   211,
    -264,  -264,  -264,   382,   243,    94,  -264,  -264,  -264,   352,
    -264,  -264,   354,   355,   356,   383,  -264,   321,    92,   223,
     223,  -264,    18,   389,   365,  -264,   329,   325,  -264,   368,
     251,   362,   372,   412,   211,   211,    18,  -264,  -264,   370,
     209,   400,  -264,  -264,  -264,  -264,   363,  -264,   375,  -264,
    -264,   412,   211,     6,  -264,  -264,   391,  -264,  -264,  -264,
     326,  -264,   377,   254,  -264,    18,   402,   412,  -264,  -264,
    -264,  -264,  -264,    92,  -264,    18,   378,   379,   381,  -264,
    -264,  -264,    91,    91,   259,    98,   282,  -264,  -264,   385,
    -264,   327,    11,   387,  -264,  -264,  -264,  -264,   254,   254,
     351,   388,    -1,   295,   412,   211,  -264,   390,   412,   229,
     229,    77,   392,   302,  -264,   393,   278,   369,    91,    91,
      91,    91,    91,   229,  -264,  -264,   277,  -264,   229,  -264,
     100,   273,   254,   254,    77,     6,     6,    91,    91,    91,
      91,  -264,    18,   190,  -264,   394,   395,   396,  -264,  -264,
    -264,   282,  -264,  -264,   171,   171,   392,   392,  -264,   399,
     229,  -264,   401,  -264,   397,  -264,   398,   407,   407,   282,
     282,   282,   282,   412,   403,  -264,  -264,  -264,   229,  -264,
     229,  -264,  -264,  -264,   406,   408,     6,     6,   409,   410,
    -264,  -264,  -264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   137,   138,     2,     5,
       7,     8,     9,     0,     0,     0,     3,     4,     0,     0,
       1,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,    10,    17,    20,    32,    37,    38,    42,
      40,    14,    11,   143,     0,     0,    59,    14,     0,     0,
     157,    93,   144,     0,     0,     0,     0,     0,   151,    46,
      31,    44,     0,    25,     0,    39,     0,    49,    47,     0,
       0,    47,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,   146,     0,     0,   154,     0,     0,     0,
       0,    45,     0,     0,    41,    29,    43,    18,    19,    21,
       0,    16,    15,     0,     0,     0,    66,    67,    68,    69,
      70,    57,    60,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,   148,   155,    22,    24,    26,
      27,    50,    48,    30,    12,     0,     0,    13,     0,   140,
     139,    93,    71,     0,    78,     0,     0,     0,     0,     0,
     162,   164,   166,     0,     0,   158,   160,    85,    91,     0,
      89,    84,     0,     0,     0,     0,   147,     0,     0,     0,
       0,    58,     0,     0,     0,    73,     0,     0,    81,     0,
       0,     0,     0,    97,     0,     0,     0,   165,   152,     0,
       0,     0,    86,    90,    87,    92,     0,   149,     0,    23,
      28,    97,     0,     0,   142,   141,    95,    75,    82,    72,
       0,    63,     0,     0,    52,     0,     0,    97,   153,   163,
     161,   159,    88,     0,    55,     0,     0,     0,     0,   122,
     125,   126,     0,     0,     0,   117,   120,   124,    96,     0,
      74,     0,     0,     0,   111,   112,   113,   114,     0,     0,
      98,     0,     0,   120,    97,     0,    51,     0,    97,     0,
       0,     0,   130,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    61,     0,    64,     0,   107,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,    54,     0,     0,     0,   131,    80,
     123,   121,   118,   119,   132,   133,   134,   135,   136,     0,
       0,    62,     0,   110,   108,   109,     0,   102,   101,   104,
     106,   105,   103,    97,     0,   127,   128,   129,     0,    65,
       0,    99,    53,   156,     0,   115,     0,     0,     0,     0,
     116,   100,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,  -264,   425,  -264,   249,   413,   -16,   316,   -23,
    -264,   411,  -264,   418,    10,   414,    61,  -188,  -264,   270,
     -85,   274,  -120,   194,  -189,   -14,   280,  -264,  -226,  -147,
    -264,  -264,    34,  -227,  -127,    71,    29,  -263,  -264,   -24,
    -264,   415,   -11,   291,   -97,  -100,   125,  -264,   241
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     8,     9,    10,    11,    86,    43,    44,    45,
      46,    47,    48,    76,    12,    54,    55,   213,   306,   131,
      93,   137,   138,   207,   208,   139,    97,   269,   244,   280,
     281,   368,   264,   282,   266,    49,    50,   171,   236,   267,
      16,    31,    32,   105,   106,    61,   184,   185,   186
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      56,    30,    56,   125,   154,   254,   265,    52,   156,   307,
     143,    72,    73,    17,   231,    74,     5,   174,   238,   211,
      68,   286,   256,   257,   258,    79,   325,   326,   247,   315,
      14,   259,    19,    63,    64,    82,    83,    14,    53,   260,
     339,   261,   212,    53,   169,   342,    53,    65,   170,     6,
       7,   296,   316,   262,    27,   176,   177,   284,   321,    67,
      58,   119,   324,    56,   263,    20,   132,   288,   141,    78,
      56,    81,    13,   305,    18,    42,    15,   359,    21,    13,
      78,   202,   238,   203,   157,   158,   159,   160,   347,   348,
     174,    68,   145,   146,   216,   364,   122,   365,   228,    24,
     156,   122,     6,     7,   164,    23,   147,   256,   257,   258,
      24,    77,    26,    77,    53,    14,   283,   167,     6,     7,
      14,   120,    77,    57,   260,    60,   261,   362,    53,   245,
     246,   309,   310,    62,   353,   292,   293,   133,   262,   265,
     265,   161,   162,   312,   313,    84,   220,   255,   123,   263,
     296,   283,   311,   287,   134,   123,    25,    13,   178,   343,
     221,    26,    13,    92,   297,   344,   345,   148,   149,   331,
     219,   334,   335,   336,   337,   338,   229,   230,   135,     6,
       7,   150,   135,   136,    29,   283,   283,   136,    29,    66,
     349,   350,   351,   352,    33,   193,   194,    34,    35,    85,
     322,    36,    37,    38,    33,    96,    39,    34,    35,   195,
      69,    36,    37,    38,    70,   180,    39,    71,    98,   300,
     301,    27,   302,   181,    33,   182,    28,    29,   100,     6,
       7,    36,    37,    38,   249,    87,    39,   183,    88,     6,
       7,    89,   181,   135,   182,    99,    90,    40,   136,    29,
     295,    41,   112,   113,    42,   114,   183,    51,   116,     6,
       7,    41,   169,    27,    42,   124,   170,   327,   101,   273,
     256,   257,   258,   274,   275,   276,   277,    40,    27,   259,
     165,    41,   140,   153,    42,    90,    71,   260,   135,   261,
     346,    53,   135,   173,   256,   257,   258,   209,   142,   278,
     152,   262,   218,   330,   317,   318,     7,    29,   163,   135,
     166,   260,   279,   261,   240,    53,   107,   108,   294,   298,
     299,   300,   301,    29,   302,   262,   317,   318,   298,   299,
     300,   301,   328,   302,   340,   121,   263,   319,   320,   341,
     121,   298,   299,   300,   301,   144,   302,   151,   298,   299,
     300,   301,   168,   302,   126,   127,   128,   129,   130,   319,
     320,   328,   234,   175,    82,    83,   235,   115,    94,   103,
     155,    95,   104,   104,   196,   205,   227,   104,   206,   104,
     237,   270,   304,   206,   206,   206,     1,     2,     3,   111,
     112,   113,   109,   110,   312,   313,   332,   333,   117,   118,
     369,   370,   172,   179,   187,   188,   189,   190,   191,   192,
     198,   199,   200,   214,   215,   217,   226,   222,   232,   223,
     224,   225,   233,   239,   241,   242,   243,   251,   252,   248,
     268,   285,   253,    22,   271,   201,   289,   290,   272,   291,
      59,   313,   303,   302,   197,   308,   314,   323,   354,   210,
      75,   204,   329,   355,   356,   357,   358,   361,   360,   296,
      80,   250,   363,   366,     0,   367,     0,     0,   371,   372,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102
};

static const yytype_int16 yycheck[] =
{
      24,    15,    26,    88,   104,   231,   233,    23,   105,   272,
      95,    34,    35,     3,   202,     1,     3,   137,   207,     1,
      31,   247,    16,    17,    18,    41,   289,   290,   216,    30,
       1,    25,     3,    33,    34,    56,    57,     8,    37,    33,
     303,    35,    24,    37,    33,   308,    37,    47,    37,    36,
      37,    52,    53,    47,    58,   140,   141,   245,   284,    63,
      59,    84,   288,    87,    58,     0,    90,   255,    59,    40,
      94,    42,     1,    62,     3,    61,    54,   340,    53,     8,
      51,   166,   271,   168,   107,   108,   109,   110,   315,   316,
     210,   102,    33,    34,   179,   358,    86,   360,   198,    58,
     197,    91,    36,    37,   120,    53,    47,    16,    17,    18,
      58,    40,    58,    42,    37,    86,   243,   133,    36,    37,
      91,    55,    51,    54,    33,    33,    35,   353,    37,   214,
     215,   278,   279,    55,   322,   262,   263,    55,    47,   366,
     367,   112,   113,    43,    44,    43,    52,   232,    87,    58,
      52,   278,   279,   253,    34,    94,    53,    86,    34,    59,
      66,    58,    91,    54,    66,   312,   313,    33,    34,   296,
     184,   298,   299,   300,   301,   302,   199,   200,    58,    36,
      37,    47,    58,    63,    64,   312,   313,    63,    64,    63,
     317,   318,   319,   320,     1,    33,    34,     4,     5,    60,
     285,     8,     9,    10,     1,    38,    13,     4,     5,    47,
      55,     8,     9,    10,    59,    25,    13,    62,    57,    48,
      49,    58,    51,    33,     1,    35,    63,    64,    33,    36,
      37,     8,     9,    10,    25,    56,    13,    47,    59,    36,
      37,    52,    33,    58,    35,    57,    57,    54,    63,    64,
     264,    58,    56,    57,    61,    55,    47,    54,    62,    36,
      37,    58,    33,    58,    61,    54,    37,   291,    63,    15,
      16,    17,    18,    19,    20,    21,    22,    54,    58,    25,
      52,    58,    29,    63,    61,    57,    62,    33,    58,    35,
     314,    37,    58,    63,    16,    17,    18,    63,    54,    45,
      55,    47,    59,    25,    31,    32,    37,    64,    60,    58,
      29,    33,    58,    35,    63,    37,     6,     7,    59,    46,
      47,    48,    49,    64,    51,    47,    31,    32,    46,    47,
      48,    49,    59,    51,    57,    86,    58,    64,    65,    62,
      91,    46,    47,    48,    49,    57,    51,    57,    46,    47,
      48,    49,    55,    51,    19,    20,    21,    22,    23,    64,
      65,    59,    33,    63,    56,    57,    37,    59,    56,    55,
      55,    59,    58,    58,    55,    55,    55,    58,    58,    58,
      55,    55,    55,    58,    58,    58,    40,    41,    42,    55,
      56,    57,     6,     7,    43,    44,    27,    28,    82,    83,
     366,   367,    55,    29,    65,    65,    33,    65,    65,    33,
      57,     7,     7,    29,    55,    33,    33,    65,    29,    65,
      65,    65,    57,    55,    62,    53,    14,    27,    65,    59,
      39,    29,    57,     8,   240,   165,    58,    58,    61,    58,
      26,    44,    57,    51,   153,    58,    58,    57,   323,   175,
      39,   171,    59,    59,    59,    59,    57,    59,    57,    52,
      42,   220,    59,    57,    -1,    57,    -1,    -1,    59,    59,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    42,    68,     3,    36,    37,    69,    70,
      71,    72,    81,   102,   103,    54,   107,    81,   102,   103,
       0,    53,    70,    53,    58,    53,    58,    58,    63,    64,
      92,   108,   109,     1,     4,     5,     8,     9,    10,    13,
      54,    58,    61,    74,    75,    76,    77,    78,    79,   102,
     103,    54,    74,    37,    82,    83,   106,    54,    59,    82,
      33,   112,    55,    33,    34,    47,    63,    63,   109,    55,
      59,    62,    76,    76,     1,    78,    80,   102,   103,    74,
      80,   103,    56,    57,    43,    60,    73,    56,    59,    52,
      57,    73,    54,    87,    56,    59,    38,    93,    57,    57,
      33,    63,   108,    55,    58,   110,   111,     6,     7,     6,
       7,    55,    56,    57,    55,    59,    62,    75,    75,    76,
      55,    72,    81,    83,    54,    87,    19,    20,    21,    22,
      23,    86,   106,    55,    34,    58,    63,    88,    89,    92,
      29,    59,    54,    87,    57,    33,    34,    47,    33,    34,
      47,    57,    55,    63,   112,    55,   111,    76,    76,    76,
      76,   103,   103,    60,    74,    52,    29,    74,    55,    33,
      37,   104,    55,    63,    89,    63,    87,    87,    34,    29,
      25,    33,    35,    47,   113,   114,   115,    65,    65,    33,
      65,    65,    33,    33,    34,    47,    55,   110,    57,     7,
       7,    86,    87,    87,    93,    55,    58,    90,    91,    63,
      88,     1,    24,    84,    29,    55,    87,    33,    59,    92,
      52,    66,    65,    65,    65,    65,    33,    55,   112,    76,
      76,    84,    29,    57,    33,    37,   105,    55,    91,    55,
      63,    62,    53,    14,    95,    87,    87,    84,    59,    25,
     115,    27,    65,    57,    95,    87,    16,    17,    18,    25,
      33,    35,    47,    58,    99,   100,   101,   106,    39,    94,
      55,    90,    61,    15,    19,    20,    21,    22,    45,    58,
      96,    97,   100,   101,    84,    29,    95,   112,    84,    58,
      58,    58,   101,   101,    59,    92,    52,    66,    46,    47,
      48,    49,    51,    57,    55,    62,    85,   104,    58,    96,
      96,   101,    43,    44,    58,    30,    53,    31,    32,    64,
      65,    95,    87,    57,    95,   104,   104,   106,    59,    59,
      25,   101,    27,    28,   101,   101,   101,   101,   101,   104,
      57,    62,   104,    59,    96,    96,   106,   100,   100,   101,
     101,   101,   101,    84,   113,    59,    59,    59,    57,   104,
      57,    59,    95,    59,   104,   104,    57,    57,    98,    99,
      99,    59,    59
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
     101,   101,   101,   101,   101,   101,   101,   102,   103,   104,
     104,   105,   105,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   112,   113,   113,
     114,   114,   114,   114,   115,   115,   115
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
       1,     3,     1,     3,     1,     1,     1,     4,     4,     4,
       2,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     4,     6,     5,     7,
       1,     2,     6,     7,     1,     2,     9,     1,     1,     3,
       1,     3,     1,     3,     1,     2,     1
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
#line 1461 "parser.c" /* yacc.c:1257  */
        break;

    case 36: /* PROCID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1467 "parser.c" /* yacc.c:1257  */
        break;

    case 37: /* ID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1473 "parser.c" /* yacc.c:1257  */
        break;

    case 69: /* Program  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1479 "parser.c" /* yacc.c:1257  */
        break;

    case 70: /* Declaration  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeASTDeclaration(((*yyvaluep).decl)); }
#line 1485 "parser.c" /* yacc.c:1257  */
        break;

    case 71: /* MainDecl  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1491 "parser.c" /* yacc.c:1257  */
        break;

    case 73: /* LocalDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1497 "parser.c" /* yacc.c:1257  */
        break;

    case 74: /* ComSeq  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1503 "parser.c" /* yacc.c:1257  */
        break;

    case 75: /* Command  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1509 "parser.c" /* yacc.c:1257  */
        break;

    case 76: /* Block  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1515 "parser.c" /* yacc.c:1257  */
        break;

    case 77: /* SimpleCommand  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1521 "parser.c" /* yacc.c:1257  */
        break;

    case 78: /* RuleSetCall  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1527 "parser.c" /* yacc.c:1257  */
        break;

    case 79: /* SWeightedRuleSetCall  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1533 "parser.c" /* yacc.c:1257  */
        break;

    case 80: /* IDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1539 "parser.c" /* yacc.c:1257  */
        break;

    case 81: /* RuleDecl  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTRule(((*yyvaluep).rule)); }
#line 1545 "parser.c" /* yacc.c:1257  */
        break;

    case 82: /* VarDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1551 "parser.c" /* yacc.c:1257  */
        break;

    case 83: /* VarList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1557 "parser.c" /* yacc.c:1257  */
        break;

    case 84: /* Inter  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1563 "parser.c" /* yacc.c:1257  */
        break;

    case 85: /* NodeIDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1569 "parser.c" /* yacc.c:1257  */
        break;

    case 87: /* Graph  */
#line 155 "parser.y" /* yacc.c:1257  */
      { freeASTGraph(((*yyvaluep).graph)); }
#line 1575 "parser.c" /* yacc.c:1257  */
        break;

    case 88: /* NodeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1581 "parser.c" /* yacc.c:1257  */
        break;

    case 89: /* Node  */
#line 156 "parser.y" /* yacc.c:1257  */
      { freeASTNode(((*yyvaluep).node)); }
#line 1587 "parser.c" /* yacc.c:1257  */
        break;

    case 90: /* EdgeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1593 "parser.c" /* yacc.c:1257  */
        break;

    case 91: /* Edge  */
#line 157 "parser.y" /* yacc.c:1257  */
      { freeASTEdge(((*yyvaluep).edge)); }
#line 1599 "parser.c" /* yacc.c:1257  */
        break;

    case 95: /* CondDecl  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1605 "parser.c" /* yacc.c:1257  */
        break;

    case 96: /* Condition  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1611 "parser.c" /* yacc.c:1257  */
        break;

    case 98: /* LabelArg  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1617 "parser.c" /* yacc.c:1257  */
        break;

    case 99: /* Label  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1623 "parser.c" /* yacc.c:1257  */
        break;

    case 100: /* List  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1629 "parser.c" /* yacc.c:1257  */
        break;

    case 101: /* AtomExp  */
#line 160 "parser.y" /* yacc.c:1257  */
      { freeASTAtom(((*yyvaluep).atom_exp)); }
#line 1635 "parser.c" /* yacc.c:1257  */
        break;

    case 102: /* ProcID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1641 "parser.c" /* yacc.c:1257  */
        break;

    case 103: /* RuleID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1647 "parser.c" /* yacc.c:1257  */
        break;

    case 104: /* NodeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1653 "parser.c" /* yacc.c:1257  */
        break;

    case 105: /* EdgeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1659 "parser.c" /* yacc.c:1257  */
        break;

    case 106: /* Variable  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1665 "parser.c" /* yacc.c:1257  */
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
#line 221 "parser.y" /* yacc.c:1646  */
    { gp_program = (yyvsp[0].list); }
#line 1953 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 222 "parser.y" /* yacc.c:1646  */
    { }
#line 1959 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 223 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].rule)) freeASTRule((yyvsp[0].rule)); }
#line 1965 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), NULL); }
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), (yyvsp[-1].list)); }
#line 1979 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTMainDecl((yyloc), (yyvsp[0].command)); }
#line 1985 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTProcedureDecl((yyloc), (yyvsp[0].proc)); }
#line 1991 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTRuleDecl((yyloc), (yyvsp[0].rule)); }
#line 1997 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yylsp[-2]), (yyvsp[0].list)); }
#line 2003 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-2]), (yyvsp[-2].id), NULL,
                                               newASTCommandSequence((yylsp[0]) ,(yyvsp[0].list)));
					  if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2011 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
				          if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2019 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
                                          report_warning("Procedure names must "
 					   "start with an upper-case letter.");
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2029 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2035 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTRuleDecl((yylsp[0]), (yyvsp[0].rule)), (yyvsp[-1].list)); }
#line 2042 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTProcedureDecl((yylsp[0]), (yyvsp[0].proc)), (yyvsp[-1].list)); }
#line 2049 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), NULL); }
#line 2055 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list)); }
#line 2061 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list));
                                          report_warning("Incorrect use of comma "
					    "to separate commands. Perhaps you "
					    "meant to use a semicolon?"); }
#line 2070 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTOrStmt((yyloc), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2076 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2083 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2090 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command));
                                          report_warning("No 'then' clause in if "
						         "statement."); }
#line 2099 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[0].command), newASTSkip((yyloc)), newASTSkip((yyloc))); }
#line 2106 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2113 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command)); }
#line 2120 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                                (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2127 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yyloc), (yyvsp[-1].list)); }
#line 2133 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc),
                                               newASTCommandSequence((yylsp[-2]), (yyvsp[-2].list))); }
#line 2140 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = NULL; }
#line 2146 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc), (yyvsp[-1].command)); }
#line 2152 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSkip((yyloc)); }
#line 2158 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTFail((yyloc)); }
#line 2164 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTBreak((yyloc)); }
#line 2170 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2176 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSeparateWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2182 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTJoinedWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2188 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2194 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTWeightedRuleCall((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2200 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTProcCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2206 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2212 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2218 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2224 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2230 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2237 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id));}
#line 2244 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
                                          report_warning("Procedure name used in "
					   "a rule set. Rule names must start "
					   "with a lower-case letter.");
				          if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2254 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
                                          report_warning("Incorrect use of semicolon "
					   "in a rule set. Perhaps you meant to "
					   "use a comma?");
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2264 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2271 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-7]), (yyvsp[-7].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-7].id)) free((yyvsp[-7].id)); }
#line 2278 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-11]), (yyvsp[-11].id), (yyvsp[-9].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
            					  if((yyvsp[-11].id)) free((yyvsp[-11].id)); }
#line 2285 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-10]), (yyvsp[-10].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp), (yyvsp[-6].dnum));
					  if((yyvsp[-10].id)) free((yyvsp[-10].id)); }
#line 2292 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Rule names must "
 					   "start with a lower-case letter."
				 	   "letter.");
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2302 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-9]), (yyvsp[-9].id), (yyvsp[-7].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Semicolon at the end "
					    "of a rule's variable list");
					  if((yyvsp[-9].id)) free((yyvsp[-9].id)); }
#line 2311 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), NULL); }
#line 2317 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyloc).first_column = (yylsp[-2]).first_column;
				          (yyloc).first_line = (yylsp[-2]).first_line;
					  (yyloc).last_column = (yylsp[0]).last_column;
				          (yyloc).last_column = (yylsp[0]).last_column;
					  (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), (yyvsp[-4].list)); }
#line 2327 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2334 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
		 	                  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2341 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2347 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2353 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 384 "parser.y" /* yacc.c:1646  */
    { report_warning("Error in an interface list.");
                                          (yyval.list) = NULL; }
#line 2360 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2367 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2374 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = INT_DECLARATIONS; }
#line 2380 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = CHAR_DECLARATIONS; }
#line 2386 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = STRING_DECLARATIONS; }
#line 2392 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = ATOM_DECLARATIONS; }
#line 2398 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = LIST_DECLARATIONS; }
#line 2404 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2410 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2416 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2422 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2428 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2434 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2440 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), NULL); }
#line 2446 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), (yyvsp[-1].list)); }
#line 2452 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-4]), is_root, (yyvsp[-4].id), (yyvsp[-1].label));
 					  is_root = false;
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); }
#line 2460 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-5]), is_root, (yyvsp[-5].id), (yyvsp[-2].label));
 					  is_root = false;
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2468 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 418 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), NULL); }
#line 2474 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), (yyvsp[-1].list)); }
#line 2480 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 422 "parser.y" /* yacc.c:1646  */
    { (yyval.edge) = newASTEdge((yylsp[-8]), is_bidir, (yyvsp[-8].id), (yyvsp[-5].id), (yyvsp[-3].id), (yyvsp[-1].label));
                                          is_bidir = false; if((yyvsp[-8].id)) free((yyvsp[-8].id));
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); if((yyvsp[-3].id)) free((yyvsp[-3].id)); }
#line 2488 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 427 "parser.y" /* yacc.c:1646  */
    { }
#line 2494 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2500 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 429 "parser.y" /* yacc.c:1646  */
    { }
#line 2506 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 430 "parser.y" /* yacc.c:1646  */
    { }
#line 2512 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 431 "parser.y" /* yacc.c:1646  */
    { }
#line 2518 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 432 "parser.y" /* yacc.c:1646  */
    { }
#line 2524 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 433 "parser.y" /* yacc.c:1646  */
    { }
#line 2530 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 434 "parser.y" /* yacc.c:1646  */
    { }
#line 2536 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 435 "parser.y" /* yacc.c:1646  */
    { }
#line 2542 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 438 "parser.y" /* yacc.c:1646  */
    { is_root = true; }
#line 2548 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 441 "parser.y" /* yacc.c:1646  */
    { is_bidir = true; }
#line 2554 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = NULL; }
#line 2560 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[0].cond_exp); }
#line 2566 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTSubtypePred((yyvsp[-3].check_type), (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2573 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTEdgePred((yyloc), (yyvsp[-4].id), (yyvsp[-2].id), (yyvsp[-1].label));
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2580 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2586 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(NOT_EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2592 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2598 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2604 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2610 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 458 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2616 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTNotExp((yyloc), (yyvsp[0].cond_exp)); }
#line 2622 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_OR, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2628 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 461 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_AND, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2634 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[-1].cond_exp); }
#line 2640 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = INT_CHECK; }
#line 2646 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = CHAR_CHECK; }
#line 2652 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 466 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = STRING_CHECK; }
#line 2658 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 467 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = ATOM_CHECK; }
#line 2664 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 469 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = NULL; }
#line 2670 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 470 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[0].label); }
#line 2676 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 473 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), NONE, (yyvsp[0].list)); }
#line 2682 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2688 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 476 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2694 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), NULL); }
#line 2700 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), (yyvsp[-2].list)); }
#line 2706 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 481 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2712 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 484 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTVariable((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2718 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 485 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNumber((yyloc), (yyvsp[0].num)); }
#line 2724 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 486 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTString((yyloc), (yyvsp[0].str)); if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2730 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 487 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(INDEGREE, (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2737 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 489 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(OUTDEGREE, (yyloc), (yyvsp[-1].id));
				 	  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2744 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTLength((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2750 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 492 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNegExp((yyloc), (yyvsp[0].atom_exp)); }
#line 2756 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 493 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = (yyvsp[-1].atom_exp); }
#line 2762 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 494 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(ADD, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp));  }
#line 2768 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 495 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(SUBTRACT, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2774 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 496 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(MULTIPLY, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2780 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 497 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(DIVIDE, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2786 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 498 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTConcat((yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2792 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 504 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Node ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2805 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 513 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Edge ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2818 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 525 "parser.y" /* yacc.c:1646  */
    { }
#line 2824 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 526 "parser.y" /* yacc.c:1646  */
    { }
#line 2830 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 527 "parser.y" /* yacc.c:1646  */
    { }
#line 2836 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 529 "parser.y" /* yacc.c:1646  */
    { }
#line 2842 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 531 "parser.y" /* yacc.c:1646  */
    { }
#line 2848 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 533 "parser.y" /* yacc.c:1646  */
    { }
#line 2854 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 535 "parser.y" /* yacc.c:1646  */
    { }
#line 2860 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 536 "parser.y" /* yacc.c:1646  */
    { }
#line 2866 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 543 "parser.y" /* yacc.c:1646  */
    { }
#line 2872 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 544 "parser.y" /* yacc.c:1646  */
    { }
#line 2878 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 551 "parser.y" /* yacc.c:1646  */
    { }
#line 2884 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 552 "parser.y" /* yacc.c:1646  */
    { }
#line 2890 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 554 "parser.y" /* yacc.c:1646  */
    { }
#line 2896 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 555 "parser.y" /* yacc.c:1646  */
    { }
#line 2902 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 556 "parser.y" /* yacc.c:1646  */
    { }
#line 2908 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 557 "parser.y" /* yacc.c:1646  */
    { }
#line 2914 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 559 "parser.y" /* yacc.c:1646  */
    { }
#line 2920 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 560 "parser.y" /* yacc.c:1646  */
    { }
#line 2926 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 561 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2932 "parser.c" /* yacc.c:1646  */
    break;


#line 2936 "parser.c" /* yacc.c:1646  */
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
