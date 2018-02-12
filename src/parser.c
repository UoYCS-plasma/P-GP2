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
    WEIGHT = 282,
    MARK = 283,
    ANY_MARK = 284,
    ARROW = 285,
    NEQ = 286,
    GTEQ = 287,
    LTEQ = 288,
    NUM = 289,
    DNUM = 290,
    STR = 291,
    PROCID = 292,
    ID = 293,
    ROOT = 294,
    BIDIRECTIONAL = 295,
    GP_PROGRAM = 296,
    GP_GRAPH = 297,
    GP_RULE = 298,
    OR = 299,
    AND = 300,
    NOT = 301,
    UMINUS = 302
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
#define WEIGHT 282
#define MARK 283
#define ANY_MARK 284
#define ARROW 285
#define NEQ 286
#define GTEQ 287
#define LTEQ 288
#define NUM 289
#define DNUM 290
#define STR 291
#define PROCID 292
#define ID 293
#define ROOT 294
#define BIDIRECTIONAL 295
#define GP_PROGRAM 296
#define GP_GRAPH 297
#define GP_RULE 298
#define OR 299
#define AND 300
#define NOT 301
#define UMINUS 302

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

#line 250 "parser.c" /* yacc.c:355  */
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

#line 285 "parser.c" /* yacc.c:355  */

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "parser.c" /* yacc.c:358  */

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
#define YYLAST   459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    67,     2,     2,     2,     2,
      59,    60,    49,    47,    58,    48,    52,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    57,
      65,    54,    66,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    64,    63,     2,     2,     2,     2,
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
      45,    46,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   221,   221,   222,   223,   226,   228,   231,   232,   233,
     235,   237,   241,   246,   253,   254,   256,   259,   260,   262,
     267,   268,   269,   271,   274,   278,   280,   282,   284,   288,
     289,   293,   294,   295,   296,   297,   298,   300,   301,   302,
     303,   304,   305,   307,   310,   312,   314,   317,   322,   330,
     333,   336,   339,   343,   352,   359,   364,   370,   372,   375,
     376,   379,   382,   384,   387,   388,   389,   390,   391,   395,
     396,   397,   398,   399,   400,   403,   404,   406,   409,   413,
     414,   416,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   432,   433,   435,   436,   440,   441,   443,   445,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   459,
     460,   461,   462,   464,   465,   468,   469,   471,   474,   475,
     476,   477,   479,   480,   481,   482,   484,   486,   487,   488,
     489,   490,   491,   492,   493,   496,   497,   498,   499,   507,
     508,   516,   520,   521,   522,   523,   525,   527,   530,   531,
     533,   535,   538,   539,   541,   544,   546,   547,   549,   550,
     551,   552,   554,   555,   556
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
  "ATOM", "LIST", "INTERFACE", "_EMPTY", "INJECTIVE", "WEIGHT", "MARK",
  "ANY_MARK", "ARROW", "NEQ", "GTEQ", "LTEQ", "NUM", "DNUM", "STR",
  "PROCID", "ID", "ROOT", "BIDIRECTIONAL", "GP_PROGRAM", "GP_GRAPH",
  "GP_RULE", "OR", "AND", "NOT", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "'.'", "':'", "'='", "'['", "']'", "';'", "','", "'('", "')'", "'!'",
  "'{'", "'}'", "'|'", "'<'", "'>'", "'#'", "$accept", "Initialise",
  "Program", "Declaration", "MainDecl", "ProcDecl", "LocalDecls", "ComSeq",
  "Command", "Block", "SimpleCommand", "RuleSetCall", "IDList", "RuleDecl",
  "VarDecls", "VarList", "Inter", "NodeIDList", "Type", "Graph",
  "NodeList", "Node", "EdgeList", "Edge", "Position", "RootNode",
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
     295,   296,   297,   298,   299,   300,   301,    43,    45,    42,
      47,   302,    46,    58,    61,    91,    93,    59,    44,    40,
      41,    33,   123,   125,   124,    60,    62,    35
};
# endif

#define YYPACT_NINF -240

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-240)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,    23,   -25,   118,    32,    -7,  -240,  -240,    23,  -240,
    -240,  -240,  -240,   -11,     5,    63,  -240,  -240,   -21,    44,
    -240,   197,  -240,   141,    59,    60,   -16,   100,    84,    95,
      80,   113,  -240,   195,   181,   181,  -240,  -240,  -240,   127,
      20,    20,   197,   118,   157,  -240,   151,   143,  -240,  -240,
    -240,  -240,   157,  -240,    13,   174,  -240,  -240,   161,   263,
    -240,   203,  -240,   170,   206,   247,   167,   290,  -240,  -240,
    -240,   365,   367,  -240,   207,  -240,  -240,   287,   154,  -240,
    -240,   197,   197,   181,  -240,     2,    59,   161,   320,    59,
      82,   165,   242,    50,   161,  -240,   225,   123,   125,   250,
     231,   193,  -240,   100,   299,  -240,   181,   181,   181,   181,
     261,   127,   127,  -240,  -240,  -240,  -240,   197,  -240,  -240,
     213,   296,  -240,  -240,  -240,  -240,  -240,  -240,  -240,   197,
      38,   272,   209,  -240,   284,   161,   161,   339,    73,   271,
     319,   316,   321,   322,   352,   149,  -240,   301,   332,  -240,
    -240,   382,  -240,   384,  -240,  -240,  -240,  -240,   157,   320,
     161,   157,  -240,  -240,   203,  -240,   303,  -240,   215,    27,
     362,   161,  -240,  -240,  -240,   359,   234,   -26,  -240,  -240,
    -240,   328,  -240,  -240,   329,   330,   333,   363,  -240,   305,
     100,   181,   181,  -240,    27,   340,  -240,    99,   307,  -240,
     344,   236,   338,   348,   389,   161,    27,  -240,  -240,   345,
      77,   376,  -240,  -240,  -240,  -240,   342,  -240,   351,  -240,
    -240,   389,   244,  -240,  -240,   366,  -240,  -240,  -240,   309,
    -240,   350,   229,   380,    27,   389,  -240,  -240,  -240,  -240,
    -240,   100,  -240,   354,   355,   356,  -240,  -240,  -240,   273,
     273,   245,   146,   189,  -240,  -240,   353,  -240,   311,     8,
     357,  -240,  -240,  -240,  -240,   229,   229,   331,   358,    21,
     286,   364,   389,   383,   361,    38,    38,    59,   368,   173,
    -240,   369,   268,   349,   273,   273,   273,   273,   273,    38,
    -240,  -240,   238,  -240,    38,  -240,    79,   265,   229,   229,
      59,   244,   244,   273,   273,   273,   273,   386,  -240,   370,
      73,   371,   372,   373,  -240,  -240,  -240,   189,  -240,  -240,
     304,   304,   368,   368,  -240,   377,    38,  -240,   378,  -240,
     381,  -240,   374,   375,   375,   189,   189,   189,   189,  -240,
     387,   379,  -240,  -240,  -240,    38,  -240,    38,  -240,  -240,
    -240,   385,   388,   244,   244,   390,   391,  -240,  -240,  -240
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   135,   136,     2,     5,
       7,     8,     9,     0,     0,     0,     3,     4,     0,     0,
       1,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,     0,    10,    17,    20,    32,    37,    42,
      40,    14,    11,   141,     0,     0,    57,    14,     0,     0,
     155,    91,   142,     0,     0,     0,     0,     0,   149,    31,
      44,     0,    25,    41,     0,    38,    39,     0,     0,    47,
      45,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,   144,     0,     0,   152,     0,     0,     0,     0,
      29,     0,     0,    43,    18,    19,    21,     0,    16,    15,
       0,     0,    64,    65,    66,    67,    68,    55,    58,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,   146,
     153,    22,    24,    26,    27,    30,    48,    46,    12,     0,
       0,    13,   138,   137,    91,    69,     0,    76,     0,     0,
       0,     0,   160,   162,   164,     0,     0,   156,   158,    83,
      89,     0,    87,    82,     0,     0,     0,     0,   145,     0,
       0,     0,     0,    56,     0,     0,    71,     0,     0,    79,
       0,     0,     0,     0,    95,     0,     0,   163,   150,     0,
       0,     0,    84,    88,    85,    90,     0,   147,     0,    23,
      28,    95,     0,   140,   139,    93,    73,    80,    70,     0,
      61,     0,     0,    50,     0,    95,   151,   161,   159,   157,
      86,     0,    53,     0,     0,     0,   120,   123,   124,     0,
       0,     0,   115,   118,   122,    94,     0,    72,     0,     0,
       0,   109,   110,   111,   112,     0,     0,    96,     0,     0,
     118,     0,    95,    49,     0,     0,     0,     0,   128,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    59,     0,    62,     0,   105,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,   129,    78,   121,   119,   116,   117,
     130,   131,   132,   133,   134,     0,     0,    60,     0,   108,
     106,   107,     0,   100,    99,   102,   104,   103,   101,    52,
       0,     0,   125,   126,   127,     0,    63,     0,    97,    51,
     154,     0,   113,     0,     0,     0,     0,   114,    98,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,  -240,   415,  -240,   239,   392,   -13,   298,   -29,
    -240,   341,  -240,     9,   399,    19,  -171,  -240,   278,   -79,
     259,  -108,   201,  -173,   -90,   274,  -240,  -204,  -232,  -240,
    -240,    30,  -218,  -118,    10,     6,  -239,  -240,   -24,  -240,
     393,   -12,   293,   -88,  -100,   131,  -240,   232
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     8,     9,    10,    11,    85,    44,    45,    46,
      47,    48,    78,    12,    54,    55,   204,   292,   127,    92,
     132,   133,   198,   199,    30,    96,   256,   233,   267,   268,
     355,   251,   269,   253,    49,    50,   164,   225,   254,    16,
      31,    32,   104,   105,    61,   176,   177,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      56,   134,    56,   148,   252,    71,    72,    14,   121,    19,
      52,    13,    17,    18,    14,   137,   150,   242,    13,    68,
     293,    74,    53,   221,   167,   227,     5,   210,   202,    77,
      15,   273,    20,   295,   296,   235,   311,   312,    24,     6,
       7,   211,   162,    23,    58,    73,   163,    21,    24,    80,
     325,   203,   301,    79,   116,   328,   169,   170,   117,    25,
       6,     7,    56,   272,    26,   128,   330,   331,   308,    56,
      86,   291,   162,    87,   282,   302,   163,   151,   152,   153,
     154,   194,    43,   333,   334,   227,   209,   346,    53,    68,
     218,    14,   206,   167,   119,    13,    14,    53,   172,   119,
      13,   150,   237,    26,   158,   120,   351,   173,   352,   174,
     136,   173,   120,   174,   270,    57,   161,   156,   157,     6,
       7,   175,    27,   298,   299,   175,   234,    28,    29,    63,
      64,   278,   279,   223,    60,   252,   252,   224,   129,   329,
      62,   274,    33,    65,    66,    34,    35,   270,   297,    36,
      37,    38,    39,    40,    41,     6,     7,   139,   140,   142,
     143,   281,   219,   220,   317,     7,   320,   321,   322,   323,
     324,   141,    27,   144,     1,     2,     3,    67,     6,     7,
     270,   270,    33,   185,   186,   335,   336,   337,   338,    36,
      37,    38,    39,    40,    41,    83,    51,   187,    33,   282,
      42,    34,    35,    43,    84,    36,    37,    38,    39,    40,
      41,   111,   112,   283,    81,    82,    91,   113,     6,     7,
     284,   285,   286,   287,   130,   288,    27,    88,    97,   131,
      29,   100,    89,   314,     6,     7,   284,   285,   286,   287,
      42,   288,    95,    43,   260,   243,   244,   245,   261,   262,
     263,   264,    27,   313,   246,    69,    42,   147,    70,    43,
     243,   244,   245,   247,    98,   248,   159,    53,   130,   246,
      70,    89,   135,   166,   130,   265,   332,   249,   247,   200,
     248,    99,    53,   138,   243,   244,   245,   146,   266,   243,
     244,   245,   249,   316,   208,   130,   326,   303,   304,    29,
     229,   327,   247,   250,   248,   280,    53,   247,   145,   248,
      29,    53,   284,   285,   286,   287,   249,   288,   303,   304,
      93,   249,   155,    94,   118,   314,   160,   250,   165,   118,
     305,   306,   250,   284,   285,   286,   287,   179,   288,   122,
     123,   124,   125,   126,    81,    82,   102,   110,   168,   103,
     181,   305,   306,   286,   287,   149,   288,   188,   103,   196,
     103,   217,   197,   226,   103,   257,   197,   290,   197,   171,
     197,   106,   107,   108,   109,   298,   299,   318,   319,   114,
     115,    75,    76,   356,   357,   180,   184,   182,   183,   191,
     190,   192,   205,   207,   212,   213,   214,   216,   222,   215,
     228,   230,   231,   232,   239,   236,   255,   271,   240,   241,
     309,   289,   259,   275,   276,   277,   294,   300,   307,   310,
     288,   339,   349,    22,   340,    59,   299,   201,   282,   315,
     258,   342,   343,   344,   348,   345,   347,   193,   195,   350,
     189,   341,   238,   353,     0,     0,   354,     0,     0,    90,
     358,   359,     0,     0,     0,     0,     0,     0,     0,   101
};

static const yytype_int16 yycheck[] =
{
      24,    91,    26,   103,   222,    34,    35,     1,    87,     3,
      23,     1,     3,     3,     8,    94,   104,   221,     8,    31,
     259,     1,    38,   194,   132,   198,     3,    53,     1,    42,
      55,   235,     0,   265,   266,   206,   275,   276,    59,    37,
      38,    67,    34,    54,    60,    39,    38,    54,    59,    43,
     289,    24,    31,    43,    83,   294,   135,   136,    56,    54,
      37,    38,    86,   234,    59,    89,   298,   299,   272,    93,
      57,    63,    34,    60,    53,    54,    38,   106,   107,   108,
     109,   160,    62,   301,   302,   258,   176,   326,    38,   101,
     190,    85,   171,   201,    85,    85,    90,    38,    25,    90,
      90,   189,    25,    59,   117,    86,   345,    34,   347,    36,
      60,    34,    93,    36,   232,    55,   129,   111,   112,    37,
      38,    48,    59,    44,    45,    48,   205,    64,    65,    34,
      35,   249,   250,    34,    34,   353,   354,    38,    56,    60,
      56,   241,     1,    48,    64,     4,     5,   265,   266,     8,
       9,    10,    11,    12,    13,    37,    38,    34,    35,    34,
      35,   251,   191,   192,   282,    38,   284,   285,   286,   287,
     288,    48,    59,    48,    41,    42,    43,    64,    37,    38,
     298,   299,     1,    34,    35,   303,   304,   305,   306,     8,
       9,    10,    11,    12,    13,    44,    55,    48,     1,    53,
      59,     4,     5,    62,    61,     8,     9,    10,    11,    12,
      13,    57,    58,    67,    57,    58,    55,    63,    37,    38,
      47,    48,    49,    50,    59,    52,    59,    53,    58,    64,
      65,    64,    58,    60,    37,    38,    47,    48,    49,    50,
      59,    52,    39,    62,    15,    16,    17,    18,    19,    20,
      21,    22,    59,   277,    25,    60,    59,    64,    63,    62,
      16,    17,    18,    34,    58,    36,    53,    38,    59,    25,
      63,    58,    30,    64,    59,    46,   300,    48,    34,    64,
      36,    34,    38,    58,    16,    17,    18,    56,    59,    16,
      17,    18,    48,    25,    60,    59,    58,    32,    33,    65,
      64,    63,    34,    59,    36,    60,    38,    34,    58,    36,
      65,    38,    47,    48,    49,    50,    48,    52,    32,    33,
      57,    48,    61,    60,    85,    60,    30,    59,    56,    90,
      65,    66,    59,    47,    48,    49,    50,    66,    52,    19,
      20,    21,    22,    23,    57,    58,    56,    60,    64,    59,
      34,    65,    66,    49,    50,    56,    52,    56,    59,    56,
      59,    56,    59,    56,    59,    56,    59,    56,    59,    30,
      59,     6,     7,     6,     7,    44,    45,    28,    29,    81,
      82,    40,    41,   353,   354,    66,    34,    66,    66,     7,
      58,     7,    30,    34,    66,    66,    66,    34,    58,    66,
      56,    63,    54,    14,    28,    60,    40,    27,    66,    58,
      27,    58,    62,    59,    59,    59,    59,    59,    54,    58,
      52,    35,    35,     8,    54,    26,    45,   168,    53,    60,
     229,    60,    60,    60,    60,    58,    58,   159,   164,    60,
     147,   310,   210,    58,    -1,    -1,    58,    -1,    -1,    57,
      60,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,    43,    69,     3,    37,    38,    70,    71,
      72,    73,    81,   102,   103,    55,   107,    81,   102,   103,
       0,    54,    71,    54,    59,    54,    59,    59,    64,    65,
      92,   108,   109,     1,     4,     5,     8,     9,    10,    11,
      12,    13,    59,    62,    75,    76,    77,    78,    79,   102,
     103,    55,    75,    38,    82,    83,   106,    55,    60,    82,
      34,   112,    56,    34,    35,    48,    64,    64,   109,    60,
      63,    77,    77,   103,     1,    79,    79,    75,    80,   102,
     103,    57,    58,    44,    61,    74,    57,    60,    53,    58,
      74,    55,    87,    57,    60,    39,    93,    58,    58,    34,
      64,   108,    56,    59,   110,   111,     6,     7,     6,     7,
      60,    57,    58,    63,    76,    76,    77,    56,    73,    81,
      83,    87,    19,    20,    21,    22,    23,    86,   106,    56,
      59,    64,    88,    89,    92,    30,    60,    87,    58,    34,
      35,    48,    34,    35,    48,    58,    56,    64,   112,    56,
     111,    77,    77,    77,    77,    61,   103,   103,    75,    53,
      30,    75,    34,    38,   104,    56,    64,    89,    64,    87,
      87,    30,    25,    34,    36,    48,   113,   114,   115,    66,
      66,    34,    66,    66,    34,    34,    35,    48,    56,   110,
      58,     7,     7,    86,    87,    93,    56,    59,    90,    91,
      64,    88,     1,    24,    84,    30,    87,    34,    60,    92,
      53,    67,    66,    66,    66,    66,    34,    56,   112,    77,
      77,    84,    58,    34,    38,   105,    56,    91,    56,    64,
      63,    54,    14,    95,    87,    84,    60,    25,   115,    28,
      66,    58,    95,    16,    17,    18,    25,    34,    36,    48,
      59,    99,   100,   101,   106,    40,    94,    56,    90,    62,
      15,    19,    20,    21,    22,    46,    59,    96,    97,   100,
     101,    27,    84,    95,   112,    59,    59,    59,   101,   101,
      60,    92,    53,    67,    47,    48,    49,    50,    52,    58,
      56,    63,    85,   104,    59,    96,    96,   101,    44,    45,
      59,    31,    54,    32,    33,    65,    66,    54,    95,    27,
      58,   104,   104,   106,    60,    60,    25,   101,    28,    29,
     101,   101,   101,   101,   101,   104,    58,    63,   104,    60,
      96,    96,   106,   100,   100,   101,   101,   101,   101,    35,
      54,   113,    60,    60,    60,    58,   104,    58,    60,    35,
      60,   104,   104,    58,    58,    98,    99,    99,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    73,    73,    73,    74,    74,    74,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    99,    99,    99,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   103,   104,   104,   105,
     105,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   112,   113,   113,   114,   114,
     114,   114,   115,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     1,     1,     1,
       3,     3,     6,     6,     0,     2,     2,     1,     3,     3,
       1,     3,     4,     6,     4,     2,     4,     4,     6,     3,
       4,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     2,     1,     3,     2,     1,     3,     1,     3,     9,
       8,    12,    11,     9,    10,     3,     5,     1,     3,     4,
       5,     2,     1,     3,     1,     1,     1,     1,     1,     3,
       5,     4,     6,     5,     7,     1,     2,     6,     7,     1,
       2,    10,     5,     5,     6,     6,     7,     5,     6,     5,
       6,     0,     1,     0,     1,     0,     2,     4,     7,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     1,
       1,     1,     1,     0,     2,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     4,     4,     4,     2,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     4,     6,     5,     7,     1,     2,
       6,     7,     1,     2,     9,     1,     1,     3,     1,     3,
       1,     3,     1,     2,     1
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
          case 36: /* STR  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1451 "parser.c" /* yacc.c:1257  */
        break;

    case 37: /* PROCID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1457 "parser.c" /* yacc.c:1257  */
        break;

    case 38: /* ID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1463 "parser.c" /* yacc.c:1257  */
        break;

    case 70: /* Program  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1469 "parser.c" /* yacc.c:1257  */
        break;

    case 71: /* Declaration  */
#line 152 "parser.y" /* yacc.c:1257  */
      { freeASTDeclaration(((*yyvaluep).decl)); }
#line 1475 "parser.c" /* yacc.c:1257  */
        break;

    case 72: /* MainDecl  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1481 "parser.c" /* yacc.c:1257  */
        break;

    case 74: /* LocalDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1487 "parser.c" /* yacc.c:1257  */
        break;

    case 75: /* ComSeq  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1493 "parser.c" /* yacc.c:1257  */
        break;

    case 76: /* Command  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1499 "parser.c" /* yacc.c:1257  */
        break;

    case 77: /* Block  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1505 "parser.c" /* yacc.c:1257  */
        break;

    case 78: /* SimpleCommand  */
#line 153 "parser.y" /* yacc.c:1257  */
      { freeASTCommand(((*yyvaluep).command)); }
#line 1511 "parser.c" /* yacc.c:1257  */
        break;

    case 79: /* RuleSetCall  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1517 "parser.c" /* yacc.c:1257  */
        break;

    case 80: /* IDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1523 "parser.c" /* yacc.c:1257  */
        break;

    case 81: /* RuleDecl  */
#line 154 "parser.y" /* yacc.c:1257  */
      { freeASTRule(((*yyvaluep).rule)); }
#line 1529 "parser.c" /* yacc.c:1257  */
        break;

    case 82: /* VarDecls  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1535 "parser.c" /* yacc.c:1257  */
        break;

    case 83: /* VarList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1541 "parser.c" /* yacc.c:1257  */
        break;

    case 84: /* Inter  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1547 "parser.c" /* yacc.c:1257  */
        break;

    case 85: /* NodeIDList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1553 "parser.c" /* yacc.c:1257  */
        break;

    case 87: /* Graph  */
#line 155 "parser.y" /* yacc.c:1257  */
      { freeASTGraph(((*yyvaluep).graph)); }
#line 1559 "parser.c" /* yacc.c:1257  */
        break;

    case 88: /* NodeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1565 "parser.c" /* yacc.c:1257  */
        break;

    case 89: /* Node  */
#line 156 "parser.y" /* yacc.c:1257  */
      { freeASTNode(((*yyvaluep).node)); }
#line 1571 "parser.c" /* yacc.c:1257  */
        break;

    case 90: /* EdgeList  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1577 "parser.c" /* yacc.c:1257  */
        break;

    case 91: /* Edge  */
#line 157 "parser.y" /* yacc.c:1257  */
      { freeASTEdge(((*yyvaluep).edge)); }
#line 1583 "parser.c" /* yacc.c:1257  */
        break;

    case 95: /* CondDecl  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1589 "parser.c" /* yacc.c:1257  */
        break;

    case 96: /* Condition  */
#line 158 "parser.y" /* yacc.c:1257  */
      { freeASTCondition(((*yyvaluep).cond_exp)); }
#line 1595 "parser.c" /* yacc.c:1257  */
        break;

    case 98: /* LabelArg  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1601 "parser.c" /* yacc.c:1257  */
        break;

    case 99: /* Label  */
#line 159 "parser.y" /* yacc.c:1257  */
      { freeASTLabel(((*yyvaluep).label)); }
#line 1607 "parser.c" /* yacc.c:1257  */
        break;

    case 100: /* List  */
#line 151 "parser.y" /* yacc.c:1257  */
      { freeAST(((*yyvaluep).list)); }
#line 1613 "parser.c" /* yacc.c:1257  */
        break;

    case 101: /* AtomExp  */
#line 160 "parser.y" /* yacc.c:1257  */
      { freeASTAtom(((*yyvaluep).atom_exp)); }
#line 1619 "parser.c" /* yacc.c:1257  */
        break;

    case 102: /* ProcID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1625 "parser.c" /* yacc.c:1257  */
        break;

    case 103: /* RuleID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1631 "parser.c" /* yacc.c:1257  */
        break;

    case 104: /* NodeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1637 "parser.c" /* yacc.c:1257  */
        break;

    case 105: /* EdgeID  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1643 "parser.c" /* yacc.c:1257  */
        break;

    case 106: /* Variable  */
#line 150 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1649 "parser.c" /* yacc.c:1257  */
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
#line 1937 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 222 "parser.y" /* yacc.c:1646  */
    { }
#line 1943 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 223 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].rule)) freeASTRule((yyvsp[0].rule)); }
#line 1949 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), NULL); }
#line 1956 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(GLOBAL_DECLARATIONS,
                                               (yylsp[0]), (yyvsp[0].decl), (yyvsp[-1].list)); }
#line 1963 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTMainDecl((yyloc), (yyvsp[0].command)); }
#line 1969 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTProcedureDecl((yyloc), (yyvsp[0].proc)); }
#line 1975 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = newASTRuleDecl((yyloc), (yyvsp[0].rule)); }
#line 1981 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yylsp[-2]), (yyvsp[0].list)); }
#line 1987 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-2]), (yyvsp[-2].id), NULL,
                                               newASTCommandSequence((yylsp[0]) ,(yyvsp[0].list)));
					  if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 1995 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
				          if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2003 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.proc) = newASTProcedure((yylsp[-5]), (yyvsp[-5].id), (yyvsp[-2].list),
                                               newASTCommandSequence((yylsp[0]), (yyvsp[0].list)));
                                          report_warning("Procedure names must "
 					   "start with an upper-case letter.");
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2013 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2019 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTRuleDecl((yylsp[0]), (yyvsp[0].rule)), (yyvsp[-1].list)); }
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTDecl(LOCAL_DECLARATIONS, (yylsp[0]),
                                               newASTProcedureDecl((yylsp[0]), (yyvsp[0].proc)), (yyvsp[-1].list)); }
#line 2033 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), NULL); }
#line 2039 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list)); }
#line 2045 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTCommand((yylsp[0]), (yyvsp[0].command), (yyvsp[-2].list));
                                          report_warning("Incorrect use of comma "
					    "to separate commands. Perhaps you "
					    "meant to use a semicolon?"); }
#line 2054 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTOrStmt((yyloc), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2060 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2067 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(IF_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command));
                                          report_warning("No 'then' clause in if "
						         "statement."); }
#line 2083 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[0].command), newASTSkip((yyloc)), newASTSkip((yyloc))); }
#line 2090 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), (yyvsp[0].command), newASTSkip((yyloc))); }
#line 2097 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                               (yyvsp[-2].command), newASTSkip((yyloc)), (yyvsp[0].command)); }
#line 2104 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCondBranch(TRY_STATEMENT, (yyloc),
                                                (yyvsp[-4].command), (yyvsp[-2].command), (yyvsp[0].command)); }
#line 2111 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTCommandSequence((yyloc), (yyvsp[-1].list)); }
#line 2117 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc),
                                               newASTCommandSequence((yylsp[-2]), (yyvsp[-2].list))); }
#line 2124 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = NULL; }
#line 2130 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTAlap((yyloc), (yyvsp[-1].command)); }
#line 2136 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSkip((yyloc)); }
#line 2142 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTFail((yyloc)); }
#line 2148 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTBreak((yyloc)); }
#line 2154 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2160 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTSeparateWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2166 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTJoinedWeightedRuleSetCall((yyloc), (yyvsp[0].list)); }
#line 2172 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTRuleCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2178 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTWeightedRuleCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2184 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.command) = newASTProcCall((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2190 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2196 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2202 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2209 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id));}
#line 2216 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), NULL);
                                          report_warning("Procedure name used in "
					   "a rule set. Rule names must start "
					   "with a lower-case letter.");
				          if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2226 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTRule((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
                                          report_warning("Incorrect use of semicolon "
					   "in a rule set. Perhaps you meant to "
					   "use a comma?");
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2236 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2243 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-7]), (yyvsp[-7].id), NULL, (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
					  if((yyvsp[-7].id)) free((yyvsp[-7].id)); }
#line 2250 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-11]), (yyvsp[-11].id), (yyvsp[-9].list), (yyvsp[-7].graph), (yyvsp[-5].graph), (yyvsp[-4].list), (yyvsp[-3].cond_exp), (yyvsp[0].dnum));
            					  if((yyvsp[-11].id)) free((yyvsp[-11].id)); }
#line 2257 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTWeightedRule((yylsp[-10]), (yyvsp[-10].id), NULL, (yyvsp[-7].graph), (yyvsp[-5].graph), (yyvsp[-4].list), (yyvsp[-3].cond_exp), (yyvsp[0].dnum));
					  if((yyvsp[-10].id)) free((yyvsp[-10].id)); }
#line 2264 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-8]), (yyvsp[-8].id), (yyvsp[-6].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Rule names must "
 					   "start with a lower-case letter."
				 	   "letter.");
					  if((yyvsp[-8].id)) free((yyvsp[-8].id)); }
#line 2274 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.rule) = newASTRule((yylsp[-9]), (yyvsp[-9].id), (yyvsp[-7].list), (yyvsp[-4].graph), (yyvsp[-2].graph), (yyvsp[-1].list), (yyvsp[0].cond_exp));
                                          report_warning("Semicolon at the end "
					    "of a rule's variable list");
					  if((yyvsp[-9].id)) free((yyvsp[-9].id)); }
#line 2283 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), NULL); }
#line 2289 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyloc).first_column = (yylsp[-2]).first_column;
				          (yyloc).first_line = (yylsp[-2]).first_line;
					  (yyloc).last_column = (yylsp[0]).last_column;
				          (yyloc).last_column = (yylsp[0]).last_column;
					  (yyval.list) = addASTVariableDecl((yyvsp[0].list_type), (yyloc), (yyvsp[-2].list), (yyvsp[-4].list)); }
#line 2299 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2306 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTVariable((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
		 	                  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2313 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2319 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2325 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 379 "parser.y" /* yacc.c:1646  */
    { report_warning("Error in an interface list.");
                                          (yyval.list) = NULL; }
#line 2332 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), NULL);
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2339 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNodeID((yylsp[0]), (yyvsp[0].id), (yyvsp[-2].list));
					  if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2346 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = INT_DECLARATIONS; }
#line 2352 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = CHAR_DECLARATIONS; }
#line 2358 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = STRING_DECLARATIONS; }
#line 2364 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 390 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = ATOM_DECLARATIONS; }
#line 2370 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.list_type) = LIST_DECLARATIONS; }
#line 2376 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2382 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), NULL, NULL); }
#line 2388 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 397 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2394 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 398 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-2].list), NULL); }
#line 2400 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2406 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.graph) = newASTGraph((yyloc), (yyvsp[-3].list), (yyvsp[-1].list)); }
#line 2412 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), NULL); }
#line 2418 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTNode((yylsp[0]), (yyvsp[0].node), (yyvsp[-1].list)); }
#line 2424 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-4]), is_root, (yyvsp[-4].id), (yyvsp[-1].label));
 					  is_root = false;
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); }
#line 2432 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newASTNode((yylsp[-5]), is_root, (yyvsp[-5].id), (yyvsp[-2].label));
 					  is_root = false;
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); }
#line 2440 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), NULL); }
#line 2446 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTEdge((yylsp[0]), (yyvsp[0].edge), (yyvsp[-1].list)); }
#line 2452 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.edge) = newASTEdge((yylsp[-8]), is_bidir, (yyvsp[-8].id), (yyvsp[-5].id), (yyvsp[-3].id), (yyvsp[-1].label));
                                          is_bidir = false; if((yyvsp[-8].id)) free((yyvsp[-8].id));
					  if((yyvsp[-5].id)) free((yyvsp[-5].id)); if((yyvsp[-3].id)) free((yyvsp[-3].id)); }
#line 2460 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 422 "parser.y" /* yacc.c:1646  */
    { }
#line 2466 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 423 "parser.y" /* yacc.c:1646  */
    { }
#line 2472 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 424 "parser.y" /* yacc.c:1646  */
    { }
#line 2478 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 425 "parser.y" /* yacc.c:1646  */
    { }
#line 2484 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 426 "parser.y" /* yacc.c:1646  */
    { }
#line 2490 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 427 "parser.y" /* yacc.c:1646  */
    { }
#line 2496 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2502 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 429 "parser.y" /* yacc.c:1646  */
    { }
#line 2508 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 430 "parser.y" /* yacc.c:1646  */
    { }
#line 2514 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 433 "parser.y" /* yacc.c:1646  */
    { is_root = true; }
#line 2520 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 436 "parser.y" /* yacc.c:1646  */
    { is_bidir = true; }
#line 2526 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = NULL; }
#line 2532 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[0].cond_exp); }
#line 2538 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTSubtypePred((yyvsp[-3].check_type), (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2545 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTEdgePred((yyloc), (yyvsp[-4].id), (yyvsp[-2].id), (yyvsp[-1].label));
					  if((yyvsp[-4].id)) free((yyvsp[-4].id)); if((yyvsp[-2].id)) free((yyvsp[-2].id)); }
#line 2552 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2558 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTListComparison(NOT_EQUAL, (yyloc), (yyvsp[-2].list), (yyvsp[0].list)); }
#line 2564 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 450 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2570 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(GREATER_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2576 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2582 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTAtomComparison(LESS_EQUAL, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2588 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTNotExp((yyloc), (yyvsp[0].cond_exp)); }
#line 2594 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_OR, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2600 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = newASTBinaryExp(BOOL_AND, (yyloc), (yyvsp[-2].cond_exp), (yyvsp[0].cond_exp)); }
#line 2606 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_exp) = (yyvsp[-1].cond_exp); }
#line 2612 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = INT_CHECK; }
#line 2618 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = CHAR_CHECK; }
#line 2624 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 461 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = STRING_CHECK; }
#line 2630 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval.check_type) = ATOM_CHECK; }
#line 2636 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = NULL; }
#line 2642 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[0].label); }
#line 2648 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), NONE, (yyvsp[0].list)); }
#line 2654 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 469 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2660 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 471 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = newASTLabel((yyloc), (yyvsp[0].mark), (yyvsp[-2].list)); }
#line 2666 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), NULL); }
#line 2672 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 475 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = addASTAtom((yylsp[0]), (yyvsp[0].atom_exp), (yyvsp[-2].list)); }
#line 2678 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 476 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 2684 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTVariable((yyloc), (yyvsp[0].id)); if((yyvsp[0].id)) free((yyvsp[0].id)); }
#line 2690 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNumber((yyloc), (yyvsp[0].num)); }
#line 2696 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 481 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTString((yyloc), (yyvsp[0].str)); if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2702 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 482 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(INDEGREE, (yyloc), (yyvsp[-1].id));
					  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2709 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 484 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTDegreeOp(OUTDEGREE, (yyloc), (yyvsp[-1].id));
				 	  if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2716 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 486 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTLength((yyloc), (yyvsp[-1].id)); if((yyvsp[-1].id)) free((yyvsp[-1].id)); }
#line 2722 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 487 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTNegExp((yyloc), (yyvsp[0].atom_exp)); }
#line 2728 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 488 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = (yyvsp[-1].atom_exp); }
#line 2734 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 489 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(ADD, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp));  }
#line 2740 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 490 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(SUBTRACT, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2746 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(MULTIPLY, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2752 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 492 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTBinaryOp(DIVIDE, (yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2758 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 493 "parser.y" /* yacc.c:1646  */
    { (yyval.atom_exp) = newASTConcat((yyloc), (yyvsp[-2].atom_exp), (yyvsp[0].atom_exp)); }
#line 2764 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 499 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Node ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2777 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 508 "parser.y" /* yacc.c:1646  */
    { char id[64]; int write;
					  write = snprintf(id, 64, "%d", (yyvsp[0].num));
				          if(write < 0) {
					    yyerror("Edge ID conversion failed.");
					    exit(1);
					  }
					  else (yyval.id) = strdup(id);
					}
#line 2790 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 520 "parser.y" /* yacc.c:1646  */
    { }
#line 2796 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 521 "parser.y" /* yacc.c:1646  */
    { }
#line 2802 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 522 "parser.y" /* yacc.c:1646  */
    { }
#line 2808 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 524 "parser.y" /* yacc.c:1646  */
    { }
#line 2814 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 526 "parser.y" /* yacc.c:1646  */
    { }
#line 2820 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 528 "parser.y" /* yacc.c:1646  */
    { }
#line 2826 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 530 "parser.y" /* yacc.c:1646  */
    { }
#line 2832 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 531 "parser.y" /* yacc.c:1646  */
    { }
#line 2838 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 538 "parser.y" /* yacc.c:1646  */
    { }
#line 2844 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 539 "parser.y" /* yacc.c:1646  */
    { }
#line 2850 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 546 "parser.y" /* yacc.c:1646  */
    { }
#line 2856 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 547 "parser.y" /* yacc.c:1646  */
    { }
#line 2862 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 549 "parser.y" /* yacc.c:1646  */
    { }
#line 2868 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 550 "parser.y" /* yacc.c:1646  */
    { }
#line 2874 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 551 "parser.y" /* yacc.c:1646  */
    { }
#line 2880 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 552 "parser.y" /* yacc.c:1646  */
    { }
#line 2886 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 554 "parser.y" /* yacc.c:1646  */
    { }
#line 2892 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 555 "parser.y" /* yacc.c:1646  */
    { }
#line 2898 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 556 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[0].str)) free((yyvsp[0].str)); }
#line 2904 "parser.c" /* yacc.c:1646  */
    break;


#line 2908 "parser.c" /* yacc.c:1646  */
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
#line 558 "parser.y" /* yacc.c:1906  */


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
