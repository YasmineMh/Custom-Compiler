
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxe_projet.y"

 
#include "projet.h"
bool error_syntaxical=false;
bool error_semantical=false;

/* Notre table de hachage */
GHashTable* table_variable;

/* Notre structure Variable qui a comme membre le type et un pointeur generique vers la valeur */
typedef struct Variable Variable;

struct Variable{
        char* type;
        void* value;
};
 


/* Line 189 of yacc.c  */
#line 93 "syntaxe_projet.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_MOINS = 258,
     TOK_PLUS = 259,
     TOK_DIV_REEL = 260,
     TOK_MUL = 261,
     TOK_DIV = 262,
     TOK_MOD = 263,
     TOK_DIFF = 264,
     TOK_EGAL = 265,
     TOK_SUP = 266,
     TOK_INF = 267,
     TOK_SUP_EGAL = 268,
     TOK_INF_EGAL = 269,
     TOK_ET = 270,
     TOK_NON = 271,
     TOK_OU = 272,
     TOK_PARD = 273,
     TOK_PARG = 274,
     TOK_CROD = 275,
     TOK_CROG = 276,
     TOK_NOMBRE = 277,
     TOK_MOT_CLE_PROG = 278,
     TOK_MOT_CLE_VAR = 279,
     TOK_MOT_CLE_INT = 280,
     TOK_MOT_CLE_FUNC = 281,
     TOK_MOT_CLE_RETURN = 282,
     TOK_MOT_CLE_PROC = 283,
     TOK_MOT_CLE_IF = 284,
     TOK_MOT_CLE_THEN = 285,
     TOK_MOT_CLE_ELSE = 286,
     TOK_MOT_CLE_WHILE = 287,
     TOK_MOT_CLE_DO = 288,
     TOK_AFFECT = 289,
     TOK_DEUX_POINTS = 290,
     TOK_VIRGULE = 291,
     TOK_FINSTR = 292,
     TOK_VAR = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "syntaxe_projet.y"

        long nombre;
        char* texte;



/* Line 214 of yacc.c  */
#line 174 "syntaxe_projet.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "syntaxe_projet.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    11,    14,    21,    23,    26,    30,
      32,    36,    38,    42,    49,    54,    58,    60,    63,    67,
      69,    73,    78,    82,    84,    86,    89,    93,    95,    99,
     101,   103,   110,   115,   117,   119,   124,   127,   131,   133,
     135,   139,   143,   147,   151,   155,   159,   161,   164,   168,
     172,   176,   178,   182,   186,   190,   194,   198,   200,   205,
     207,   211,   214,   216,   218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    23,    38,    37,    41,    52,    -1,     1,
      -1,    42,    45,    -1,    24,    43,    35,    25,    37,    42,
      -1,    66,    -1,    57,    44,    -1,    36,    57,    44,    -1,
      66,    -1,    46,    37,    45,    -1,    66,    -1,    47,    41,
      52,    -1,    26,    57,    48,    35,    25,    37,    -1,    28,
      57,    48,    37,    -1,    19,    49,    18,    -1,    66,    -1,
      51,    50,    -1,    37,    51,    50,    -1,    66,    -1,    57,
      35,    25,    -1,    24,    57,    35,    25,    -1,    21,    53,
      20,    -1,    54,    -1,    66,    -1,    56,    55,    -1,    37,
      56,    55,    -1,    66,    -1,    57,    34,    61,    -1,    58,
      -1,    52,    -1,    29,    61,    30,    56,    31,    56,    -1,
      32,    61,    33,    56,    -1,    38,    -1,    57,    -1,    57,
      19,    59,    18,    -1,    61,    60,    -1,    36,    61,    60,
      -1,    66,    -1,    62,    -1,    62,    10,    62,    -1,    62,
       9,    62,    -1,    62,    12,    62,    -1,    62,    11,    62,
      -1,    62,    14,    62,    -1,    62,    13,    62,    -1,    63,
      -1,    65,    63,    -1,    62,     4,    63,    -1,    62,     3,
      63,    -1,    62,    17,    63,    -1,    64,    -1,    63,     6,
      64,    -1,    63,     5,    64,    -1,    63,     7,    64,    -1,
      63,     8,    64,    -1,    63,    15,    64,    -1,    57,    -1,
      57,    19,    59,    18,    -1,    22,    -1,    19,    61,    18,
      -1,    16,    64,    -1,     4,    -1,     3,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   117,   122,   127,   132,   135,   158,   179,
     182,   185,   188,   192,   214,   236,   240,   244,   247,   250,
     254,   258,   262,   266,   270,   273,   277,   280,   285,   299,
     304,   308,   311,   314,   318,   331,   345,   349,   352,   355,
     359,   363,   367,   371,   375,   379,   383,   386,   389,   392,
     395,   398,   401,   404,   407,   410,   413,   416,   419,   430,
     439,   442,   445,   448,   451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_MOINS", "TOK_PLUS", "TOK_DIV_REEL",
  "TOK_MUL", "TOK_DIV", "TOK_MOD", "TOK_DIFF", "TOK_EGAL", "TOK_SUP",
  "TOK_INF", "TOK_SUP_EGAL", "TOK_INF_EGAL", "TOK_ET", "TOK_NON", "TOK_OU",
  "TOK_PARD", "TOK_PARG", "TOK_CROD", "TOK_CROG", "TOK_NOMBRE",
  "TOK_MOT_CLE_PROG", "TOK_MOT_CLE_VAR", "TOK_MOT_CLE_INT",
  "TOK_MOT_CLE_FUNC", "TOK_MOT_CLE_RETURN", "TOK_MOT_CLE_PROC",
  "TOK_MOT_CLE_IF", "TOK_MOT_CLE_THEN", "TOK_MOT_CLE_ELSE",
  "TOK_MOT_CLE_WHILE", "TOK_MOT_CLE_DO", "TOK_AFFECT", "TOK_DEUX_POINTS",
  "TOK_VIRGULE", "TOK_FINSTR", "TOK_VAR", "$accept", "programmes",
  "declaration", "declaration_var", "liste_identificateurs",
  "liste_identificateurs_rec", "declaration_sous_programmes",
  "declaration_sous_programme", "entete_sous_programme", "arguments",
  "liste_parametres", "liste_parametres_rec", "parametre",
  "instruction_composee", "instructions_optionnelles",
  "liste_instructions", "liste_instructions_rec", "instruction",
  "variable", "appel_de_procedure", "liste_expressions",
  "liste_expressions_rec", "expression", "expression_simple", "terme",
  "facteur", "signe", "empty", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    40,    41,    42,    42,    43,    44,    44,
      45,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    57,    58,    58,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    65,    65,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     2,     6,     1,     2,     3,     1,
       3,     1,     3,     6,     4,     3,     1,     2,     3,     1,
       3,     4,     3,     1,     1,     2,     3,     1,     3,     1,
       1,     6,     4,     1,     1,     4,     2,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     4,     1,
       3,     2,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     1,    64,     0,     0,    64,
       6,    33,     0,    64,    64,     2,     0,     0,     4,     0,
      64,    11,     0,     0,     7,     9,     0,     0,    30,     0,
      23,    64,    34,    29,    24,    64,    64,    64,     0,     0,
      64,    63,    62,     0,     0,    59,    57,     0,    39,    46,
      51,     0,     0,    22,     0,    25,    27,     0,     0,     0,
       0,    16,     0,    10,    12,    64,     8,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    64,     0,    64,
      28,     0,     0,    64,     0,     0,    14,     5,    60,     0,
       0,    49,    48,    41,    40,    43,    42,    45,    44,    50,
      53,    52,    54,    55,    56,    32,    26,    35,     0,    36,
      38,     0,    15,     0,    17,    19,     0,     0,    58,     0,
      64,     0,    64,    20,    13,    31,    37,    21,    18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     8,     9,    12,    24,    18,    19,    20,    60,
      92,   124,    93,    28,    29,    30,    55,    31,    46,    33,
      88,   119,    89,    48,    49,    50,    51,    10
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -54
static const yytype_int8 yypact[] =
{
      28,   -54,   -24,    20,     0,   -54,     6,     8,    27,    -7,
     -54,   -54,    17,    22,    34,   -54,     8,     8,   -54,    24,
       6,   -54,    37,     8,   -54,   -54,    31,    31,   -54,    47,
     -54,    33,   -11,   -54,   -54,    49,    49,    -7,    27,    38,
      22,   -54,   -54,    -6,    31,   -54,    52,    44,    79,    94,
     -54,    -6,    46,   -54,    34,   -54,   -54,    31,    31,     1,
      42,   -54,    48,   -54,   -54,     6,   -54,   -54,    69,    31,
      34,    -6,    -6,    31,    31,    31,    31,    31,    31,    -6,
      -6,    -6,    -6,    -6,    -6,    94,    34,    33,    76,    59,
     -54,     8,    92,    60,    77,    86,   -54,   -54,   -54,    95,
      83,    94,    94,    56,    56,    56,    56,    56,    56,    94,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,    31,   -54,
     -54,    80,   -54,     1,   -54,   -54,    91,    82,   -54,    34,
      59,    97,    60,   -54,   -54,   -54,   -54,   -54,   -54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   100,    61,   -54,    85,    90,   -54,   -54,    81,
     -54,    -4,     9,     7,   -54,   -54,    43,   -53,    -5,   -54,
      62,    -1,   -20,    30,   -15,   -40,   -54,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      21,    87,    13,    67,    25,    34,    47,    52,    57,    32,
      43,    35,    36,    44,     4,    15,    45,   100,    40,    16,
       5,    17,    56,    58,    68,    91,    61,    61,    21,     1,
       7,    25,    11,   115,    41,    42,    85,     6,    90,    11,
     110,   111,   112,   113,   114,    64,    11,    43,    14,    32,
      44,     2,    22,    45,    94,    14,   101,   102,    23,    71,
      72,    37,    39,    26,   109,    32,    27,    53,    59,    11,
      54,    69,    11,    79,    70,    65,   135,    95,    56,    86,
     120,    32,    71,    72,   125,    96,   121,    98,    73,    74,
      75,    76,    77,    78,   117,   118,    79,   123,   130,    80,
      81,    82,    83,   103,   104,   105,   106,   107,   108,    84,
     122,   127,   126,   128,   129,   131,   133,    62,    94,   134,
      38,   120,   137,   125,    32,    66,    97,    63,   138,   136,
     116,    99,   132
};

static const yytype_uint8 yycheck[] =
{
       9,    54,     7,    43,    13,    14,    26,    27,    19,    14,
      16,    16,    17,    19,    38,     8,    22,    70,    23,    26,
       0,    28,    31,    34,    44,    24,    35,    36,    37,     1,
      24,    40,    38,    86,     3,     4,    51,    37,    58,    38,
      80,    81,    82,    83,    84,    38,    38,    16,    21,    54,
      19,    23,    35,    22,    59,    21,    71,    72,    36,     3,
       4,    37,    25,    29,    79,    70,    32,    20,    19,    38,
      37,    19,    38,    17,    30,    37,   129,    35,    87,    33,
      89,    86,     3,     4,    93,    37,    91,    18,     9,    10,
      11,    12,    13,    14,    18,    36,    17,    37,   118,     5,
       6,     7,     8,    73,    74,    75,    76,    77,    78,    15,
      18,    25,    35,    18,    31,    35,    25,    36,   123,    37,
      20,   130,    25,   132,   129,    40,    65,    37,   132,   130,
      87,    69,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    40,    38,     0,    37,    24,    41,    42,
      66,    38,    43,    57,    21,    52,    26,    28,    45,    46,
      47,    66,    35,    36,    44,    66,    29,    32,    52,    53,
      54,    56,    57,    58,    66,    57,    57,    37,    41,    25,
      57,     3,     4,    16,    19,    22,    57,    61,    62,    63,
      64,    65,    61,    20,    37,    55,    66,    19,    34,    19,
      48,    66,    48,    45,    52,    37,    44,    64,    61,    19,
      30,     3,     4,     9,    10,    11,    12,    13,    14,    17,
       5,     6,     7,     8,    15,    63,    33,    56,    59,    61,
      61,    24,    49,    51,    57,    35,    37,    42,    18,    59,
      56,    63,    63,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    64,    64,    64,    56,    55,    18,    36,    60,
      66,    57,    18,    37,    50,    66,    35,    25,    18,    31,
      61,    35,    51,    25,    37,    56,    60,    25,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 113 "syntaxe_projet.y"
    {
		//printf("Resultat : squelette du programme valide !\n\n");
		;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 117 "syntaxe_projet.y"
    {
			//fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 123 "syntaxe_projet.y"
    {
		//printf("declaration valide !\n\n");
		;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 128 "syntaxe_projet.y"
    {
		printf("declaration des variables %s \n\n",(yyvsp[(2) - (6)].texte));
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 132 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 136 "syntaxe_projet.y"
    {
 /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup((yyvsp[(1) - (2)].texte));
//printf("\t\tYO var->value :  %s and %d \n",var->value,g_hash_table_lookup_extended(table_variable,strdup($1),NULL,NULL));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[(1) - (2)].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",(yyvsp[(1) - (2)].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[(1) - (2)].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 159 "syntaxe_projet.y"
    {
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup((yyvsp[(2) - (3)].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[(2) - (3)].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",(yyvsp[(2) - (3)].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[(2) - (3)].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 179 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 183 "syntaxe_projet.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 185 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 189 "syntaxe_projet.y"
    {//printf("sous_programme !\n\n");
;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 193 "syntaxe_projet.y"
    {

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("func");
                                var->value=strdup((yyvsp[(2) - (6)].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[(2) - (6)].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION FONCTION !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la fonction :  %s\n",(yyvsp[(2) - (6)].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[(2) - (6)].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE FONCTION !\n");
                                //error_semantical=true;
                        }
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 215 "syntaxe_projet.y"
    {

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("proc");
                                var->value=strdup((yyvsp[(2) - (4)].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[(2) - (4)].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION PROCEDURE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la procedure :  %s\n",(yyvsp[(2) - (4)].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[(2) - (4)].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE PROCEDURE !\n");
                                //error_semantical=true;
                        }
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 237 "syntaxe_projet.y"
    {//printf("arguments !\n\n");
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 240 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 245 "syntaxe_projet.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 248 "syntaxe_projet.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 250 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 255 "syntaxe_projet.y"
    {//printf("parametre sans mot cle var !\n\n");
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 259 "syntaxe_projet.y"
    {//printf("parametre avec mot cle var !\n\n");
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 263 "syntaxe_projet.y"
    {//printf("instruction composee !\n\n");
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 267 "syntaxe_projet.y"
    {//printf("instruction optionnelle !\n\n");
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 270 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 274 "syntaxe_projet.y"
    {//printf("instruction valide !\n\n");
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 278 "syntaxe_projet.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 280 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 286 "syntaxe_projet.y"
    {
                        
                                if(!g_hash_table_lookup_extended(table_variable,strdup((yyvsp[(1) - (3)].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME AFFECTATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tAffectation avec succes de la variable %s\n",(yyvsp[(1) - (3)].texte));}

                       
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 300 "syntaxe_projet.y"
    {

;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 305 "syntaxe_projet.y"
    {//printf("instruction -> composee !\n\n");
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 309 "syntaxe_projet.y"
    {printf("instruction -> conditionnelle if else\n\n");(yyval.texte)=strdup("if_else");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 312 "syntaxe_projet.y"
    {printf("instrction -> boucle while \n\n");(yyval.texte)=strdup("while_do");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 315 "syntaxe_projet.y"
    { 
                          (yyval.texte)=strdup((yyvsp[(1) - (1)].texte));              ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 319 "syntaxe_projet.y"
    {Variable* var=g_hash_table_lookup(table_variable,(yyvsp[(1) - (1)].texte));

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                (yyval.texte)=strdup((yyvsp[(1) - (1)].texte));
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,(yyvsp[(1) - (1)].texte));
                                error_semantical=true;
                        }
                        
                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 332 "syntaxe_projet.y"
    {
                Variable* var=g_hash_table_lookup(table_variable,(yyvsp[(1) - (4)].texte));

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                (yyval.texte)=strdup((yyvsp[(1) - (4)].texte));
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,(yyvsp[(1) - (4)].texte));
                                error_semantical=true;
                        }
                                      
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 346 "syntaxe_projet.y"
    {//printf("expression valide !\n\n");
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 350 "syntaxe_projet.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 352 "syntaxe_projet.y"
    {//printf("empty !\n\n");
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 356 "syntaxe_projet.y"
    {//printf("expression simple valide !\n\n");
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 360 "syntaxe_projet.y"
    {//printf("egalité !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("==")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 364 "syntaxe_projet.y"
    {//printf("different !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("<>")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 368 "syntaxe_projet.y"
    {//printf("inferieur !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("<")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 372 "syntaxe_projet.y"
    {//printf("superieur !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup(">")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 376 "syntaxe_projet.y"
    {//printf("inferieur ou egal !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("<=")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 380 "syntaxe_projet.y"
    {//printf("superieur ou egal !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup(">=")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 384 "syntaxe_projet.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 387 "syntaxe_projet.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 390 "syntaxe_projet.y"
    {printf("\t\t\tAddition\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("+")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 393 "syntaxe_projet.y"
    {printf("\t\t\tSoustraction\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("-")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 396 "syntaxe_projet.y"
    {printf("\t\t\tOU logique\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("or")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 399 "syntaxe_projet.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 402 "syntaxe_projet.y"
    {printf("\t\t\tMultiplication\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("*")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 405 "syntaxe_projet.y"
    {printf("\t\t\tDivision\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("/")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 408 "syntaxe_projet.y"
    {printf("\t\t\tDiv\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("div")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 411 "syntaxe_projet.y"
    {printf("\t\t\tMod\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("mod")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 414 "syntaxe_projet.y"
    {printf("\t\t\ET logique\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[(1) - (3)].texte)),strdup("and")),strdup((yyvsp[(3) - (3)].texte)));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 417 "syntaxe_projet.y"
    { ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 420 "syntaxe_projet.y"
    {Variable* var=g_hash_table_lookup(table_variable,(yyvsp[(1) - (4)].texte));

                        if(var!=NULL && strcmp(var->type,"func")==0){
                                (yyval.texte)=strdup((yyvsp[(1) - (4)].texte));
				printf("SUCCES : appel de fonction !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de fonction ayant le nom : %s) !\n",lineno,(yyvsp[(1) - (4)].texte));
                                error_semantical=true;
                        };}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 431 "syntaxe_projet.y"
    {printf("\t\t\tNombre : %ld\n",(yyvsp[(1) - (1)].nombre));
                /* Comme le token TOK_NOMBRE est de type entier et que on a type 			expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. 			*/
                int length=snprintf(NULL,0,"%ld",(yyvsp[(1) - (1)].nombre));
                char* str=malloc(length+1);
                snprintf(str,length+1,"%ld",(yyvsp[(1) - (1)].nombre));
                (yyval.texte)=strdup(str);
                free(str);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 440 "syntaxe_projet.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 443 "syntaxe_projet.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 446 "syntaxe_projet.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 449 "syntaxe_projet.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 451 "syntaxe_projet.y"
    {(yyval.texte) = NULL;;}
    break;



/* Line 1455 of yacc.c  */
#line 2099 "syntaxe_projet.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 454 "syntaxe_projet.y"

 
/* Dans la fonction main on appelle bien la routine yyparse() qui sera genere par Bison. Cette routine appellera yylex() de notre analyseur lexical. */
 
int main(void){
            /* Creation de la table de hachage */
        table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,free,free);
        printf("Debut de l'analyse syntaxique :\n");
        yyparse();
        printf("Fin de l'analyse !\n");
        printf("Resultat :\n");
        if(error_lexical){
                printf("\t-- Echec : Certains lexemes ne font pas partie du lexique du langage ! --\n");
                printf("\t-- Echec a l'analyse lexicale --\n");
        }
        else{
                printf("\t-- Succes a l'analyse lexicale ! --\n");
        }
        if(error_syntaxical){
                printf("\t-- Echec : Certaines phrases sont syntaxiquement incorrectes ! --\n");
                printf("\t-- Echec a l'analyse syntaxique --\n");
        }
        else{
                printf("\t-- Succes a l'analyse syntaxique ! --\n");
                if(error_semantical){
                        printf("\t-- Echec : Certaines phrases sont semantiquement incorrectes ! --\n");
                        printf("\t-- Echec a l'analyse semantique --\n");
                }
                else{
                        printf("\t-- Succes a l'analyse semantique ! --\n");
                }
        }
        /* Liberation memoire : suppression de la table */
        g_hash_table_destroy(table_variable);
        return EXIT_SUCCESS;
}
void yyerror(char *s) {
        fprintf(stderr, "Erreur de syntaxe a la ligne %d: %s\n", lineno, s);
}

