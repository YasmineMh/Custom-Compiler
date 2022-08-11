/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxe_projet.y"

 
#include "projet.h"
#include <string.h>
#include <glib.h>
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
 

#line 91 "syntaxe_projet.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTAXE_PROJET_TAB_H_INCLUDED
# define YY_YY_SYNTAXE_PROJET_TAB_H_INCLUDED
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
    TOK_PLUS = 258,
    TOK_MOINS = 259,
    TOK_MUL = 260,
    TOK_DIV_REEL = 261,
    TOK_MOD = 262,
    TOK_DIV = 263,
    TOK_EGAL = 264,
    TOK_DIFF = 265,
    TOK_INF = 266,
    TOK_SUP = 267,
    TOK_INF_EGAL = 268,
    TOK_SUP_EGAL = 269,
    TOK_ET = 270,
    TOK_OU = 271,
    TOK_NON = 272,
    TOK_PARG = 273,
    TOK_PARD = 274,
    TOK_CROG = 275,
    TOK_CROD = 276,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "syntaxe_projet.y"

        long nombre;
        char* texte;

#line 187 "syntaxe_projet.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXE_PROJET_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   119,   124,   129,   134,   137,   159,   180,
     183,   186,   189,   193,   215,   237,   241,   245,   248,   251,
     255,   263,   270,   274,   278,   281,   285,   288,   293,   307,
     312,   316,   319,   322,   326,   339,   353,   357,   360,   363,
     367,   371,   375,   379,   383,   387,   391,   394,   397,   400,
     403,   406,   409,   412,   415,   418,   421,   424,   427,   438,
     447,   450,   453,   456,   459
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_PLUS", "TOK_MOINS", "TOK_MUL",
  "TOK_DIV_REEL", "TOK_MOD", "TOK_DIV", "TOK_EGAL", "TOK_DIFF", "TOK_INF",
  "TOK_SUP", "TOK_INF_EGAL", "TOK_SUP_EGAL", "TOK_ET", "TOK_OU", "TOK_NON",
  "TOK_PARG", "TOK_PARD", "TOK_CROG", "TOK_CROD", "TOK_NOMBRE",
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
  "facteur", "signe", "empty", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,   -54,   -30,    14,   -24,   -54,    -4,    -2,    19,    46,
     -54,   -54,    23,    39,    35,   -54,    -2,    -2,   -54,    22,
      -4,   -54,    41,    -2,   -54,   -54,    12,    12,   -54,    50,
     -54,    40,     1,   -54,   -54,    61,    61,    46,    19,    48,
      39,   -54,   -54,    30,    12,   -54,    69,    64,    79,    55,
     -54,    30,    63,   -54,    35,   -54,   -54,    12,    12,    -1,
      62,   -54,    68,   -54,   -54,    -4,   -54,   -54,    87,    12,
      35,    30,    30,    12,    12,    12,    12,    12,    12,    30,
      30,    30,    30,    30,    30,    55,    35,    40,    88,    72,
     -54,    -2,    90,    73,    76,    89,   -54,   -54,   -54,    93,
      82,    55,    55,    53,    53,    53,    53,    53,    53,    55,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,    12,   -54,
     -54,    80,   -54,    -1,   -54,   -54,    91,    83,   -54,    35,
      72,    92,    73,   -54,   -54,   -54,   -54,   -54,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     0,     1,    64,     0,     0,    64,
       6,    33,     0,    64,    64,     2,     0,     0,     4,     0,
      64,    11,     0,     0,     7,     9,     0,     0,    30,     0,
      23,    64,    34,    29,    24,    64,    64,    64,     0,     0,
      64,    62,    63,     0,     0,    59,    57,     0,    39,    46,
      51,     0,     0,    22,     0,    25,    27,     0,     0,     0,
       0,    16,     0,    10,    12,    64,     8,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    64,     0,    64,
      28,     0,     0,    64,     0,     0,    14,     5,    60,     0,
       0,    48,    49,    40,    41,    42,    43,    44,    45,    50,
      52,    53,    55,    54,    56,    32,    26,    35,     0,    36,
      38,     0,    15,     0,    17,    19,     0,     0,    58,     0,
      64,     0,    64,    20,    13,    31,    37,    21,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,    99,    57,   -54,    85,    94,   -54,   -54,    96,
     -54,    -6,     4,    13,   -54,   -54,    42,   -53,    -5,   -54,
      59,     0,   -20,    26,   -26,   -40,   -54,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     8,     9,    12,    24,    18,    19,    20,    60,
      92,   124,    93,    28,    29,    30,    55,    31,    46,    33,
      88,   119,    89,    48,    49,    50,    51,    10
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,    87,    13,    67,    25,    34,    47,    52,     4,    32,
       1,    35,    36,     6,     5,    41,    42,   100,    40,    57,
       7,    15,    56,    91,    68,    85,    61,    61,    21,    43,
      44,    25,     2,   115,    45,    58,    11,    11,    90,    14,
     110,   111,   112,   113,   114,   101,   102,    43,    44,    32,
      11,    64,    45,   109,    94,    14,    71,    72,    22,    37,
      80,    81,    82,    83,    26,    32,    39,    27,    11,    79,
      84,    53,    16,    11,    17,    23,   135,    54,    56,    59,
     120,    32,    71,    72,   125,    65,   121,    69,    73,    74,
      75,    76,    77,    78,    70,    79,    86,    95,   130,   103,
     104,   105,   106,   107,   108,    96,    98,   117,   118,   122,
     123,   126,   128,   129,   127,   131,   133,   137,    94,    38,
     134,   120,    97,   125,    32,    66,   138,   132,    99,   116,
     136,    63,    62
};

static const yytype_uint8 yycheck[] =
{
       9,    54,     7,    43,    13,    14,    26,    27,    38,    14,
       1,    16,    17,    37,     0,     3,     4,    70,    23,    18,
      24,     8,    31,    24,    44,    51,    35,    36,    37,    17,
      18,    40,    23,    86,    22,    34,    38,    38,    58,    20,
      80,    81,    82,    83,    84,    71,    72,    17,    18,    54,
      38,    38,    22,    79,    59,    20,     3,     4,    35,    37,
       5,     6,     7,     8,    29,    70,    25,    32,    38,    16,
      15,    21,    26,    38,    28,    36,   129,    37,    87,    18,
      89,    86,     3,     4,    93,    37,    91,    18,     9,    10,
      11,    12,    13,    14,    30,    16,    33,    35,   118,    73,
      74,    75,    76,    77,    78,    37,    19,    19,    36,    19,
      37,    35,    19,    31,    25,    35,    25,    25,   123,    20,
      37,   130,    65,   132,   129,    40,   132,   123,    69,    87,
     130,    37,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    23,    40,    38,     0,    37,    24,    41,    42,
      66,    38,    43,    57,    20,    52,    26,    28,    45,    46,
      47,    66,    35,    36,    44,    66,    29,    32,    52,    53,
      54,    56,    57,    58,    66,    57,    57,    37,    41,    25,
      57,     3,     4,    17,    18,    22,    57,    61,    62,    63,
      64,    65,    61,    21,    37,    55,    66,    18,    34,    18,
      48,    66,    48,    45,    52,    37,    44,    64,    61,    18,
      30,     3,     4,     9,    10,    11,    12,    13,    14,    16,
       5,     6,     7,     8,    15,    63,    33,    56,    59,    61,
      61,    24,    49,    51,    57,    35,    37,    42,    19,    59,
      56,    63,    63,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    64,    64,    64,    56,    55,    19,    36,    60,
      66,    57,    19,    37,    50,    66,    35,    25,    19,    31,
      61,    35,    51,    25,    37,    56,    60,    25,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    42,    42,    43,    44,    44,
      45,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    57,    58,    58,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    65,    65,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     2,     6,     1,     2,     3,     1,
       3,     1,     3,     6,     4,     3,     1,     2,     3,     1,
       3,     4,     3,     1,     1,     2,     3,     1,     3,     1,
       1,     6,     4,     1,     1,     4,     2,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     4,     1,
       3,     2,     1,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 115 "syntaxe_projet.y"
                {
		//printf("Resultat : squelette du programme valide !\n\n");
		}
#line 1461 "syntaxe_projet.tab.c"
    break;

  case 3:
#line 119 "syntaxe_projet.y"
                     {
			//fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}
#line 1470 "syntaxe_projet.tab.c"
    break;

  case 4:
#line 125 "syntaxe_projet.y"
                {
		//printf("declaration valide !\n\n");
		}
#line 1478 "syntaxe_projet.tab.c"
    break;

  case 5:
#line 130 "syntaxe_projet.y"
                {
		printf("declaration des variables %s \n\n",(yyvsp[-4].texte));
		}
#line 1486 "syntaxe_projet.tab.c"
    break;

  case 6:
#line 134 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1493 "syntaxe_projet.tab.c"
    break;

  case 7:
#line 138 "syntaxe_projet.y"
                {
 /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup((yyvsp[-1].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[-1].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",(yyvsp[-1].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[-1].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
}
#line 1518 "syntaxe_projet.tab.c"
    break;

  case 8:
#line 160 "syntaxe_projet.y"
                {
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup((yyvsp[-1].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[-1].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",(yyvsp[-1].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[-1].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
}
#line 1542 "syntaxe_projet.tab.c"
    break;

  case 9:
#line 180 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1549 "syntaxe_projet.tab.c"
    break;

  case 10:
#line 184 "syntaxe_projet.y"
                {}
#line 1555 "syntaxe_projet.tab.c"
    break;

  case 11:
#line 186 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1562 "syntaxe_projet.tab.c"
    break;

  case 12:
#line 190 "syntaxe_projet.y"
                {//printf("sous_programme !\n\n");
}
#line 1569 "syntaxe_projet.tab.c"
    break;

  case 13:
#line 194 "syntaxe_projet.y"
                {

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("func");
                                var->value=strdup((yyvsp[-4].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[-4].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION FONCTION !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la fonction :  %s\n",(yyvsp[-4].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[-4].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE FONCTION !\n");
                                //error_semantical=true;
                        }
}
#line 1594 "syntaxe_projet.tab.c"
    break;

  case 14:
#line 216 "syntaxe_projet.y"
                {

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("proc");
                                var->value=strdup((yyvsp[-2].texte));
                                if(g_hash_table_lookup_extended(table_variable,strdup((yyvsp[-2].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION PROCEDURE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la procedure :  %s\n",(yyvsp[-2].texte));
g_hash_table_insert(table_variable,strdup((yyvsp[-2].texte)),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE PROCEDURE !\n");
                                //error_semantical=true;
                        }
}
#line 1619 "syntaxe_projet.tab.c"
    break;

  case 15:
#line 238 "syntaxe_projet.y"
                {//printf("arguments !\n\n");
}
#line 1626 "syntaxe_projet.tab.c"
    break;

  case 16:
#line 241 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1633 "syntaxe_projet.tab.c"
    break;

  case 17:
#line 246 "syntaxe_projet.y"
                {}
#line 1639 "syntaxe_projet.tab.c"
    break;

  case 18:
#line 249 "syntaxe_projet.y"
                {}
#line 1645 "syntaxe_projet.tab.c"
    break;

  case 19:
#line 251 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1652 "syntaxe_projet.tab.c"
    break;

  case 20:
#line 256 "syntaxe_projet.y"
                { /*  Variable* var=malloc(sizeof(Variable));
                                var->type=strdup("param");
                                var->value=strdup($1);
				g_hash_table_insert(table_variable,strdup($1),var);*/
                               
}
#line 1663 "syntaxe_projet.tab.c"
    break;

  case 21:
#line 264 "syntaxe_projet.y"
                {/*Variable* var=malloc(sizeof(Variable));
                                var->type=strdup("param");
                                var->value=strdup($2);
				g_hash_table_insert(table_variable,strdup($2),var);*/
}
#line 1673 "syntaxe_projet.tab.c"
    break;

  case 22:
#line 271 "syntaxe_projet.y"
                {//printf("instruction composee !\n\n");
}
#line 1680 "syntaxe_projet.tab.c"
    break;

  case 23:
#line 275 "syntaxe_projet.y"
                {//printf("instruction optionnelle !\n\n");
}
#line 1687 "syntaxe_projet.tab.c"
    break;

  case 24:
#line 278 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1694 "syntaxe_projet.tab.c"
    break;

  case 25:
#line 282 "syntaxe_projet.y"
                {//printf("instruction valide !\n\n");
}
#line 1701 "syntaxe_projet.tab.c"
    break;

  case 26:
#line 286 "syntaxe_projet.y"
                {}
#line 1707 "syntaxe_projet.tab.c"
    break;

  case 27:
#line 288 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1714 "syntaxe_projet.tab.c"
    break;

  case 28:
#line 294 "syntaxe_projet.y"
                {
                        
                                if(!g_hash_table_lookup_extended(table_variable,strdup((yyvsp[-2].texte)),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME AFFECTATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tAffectation avec succes de la variable %s\n",(yyvsp[-2].texte));}

                       
}
#line 1731 "syntaxe_projet.tab.c"
    break;

  case 29:
#line 308 "syntaxe_projet.y"
                {

}
#line 1739 "syntaxe_projet.tab.c"
    break;

  case 30:
#line 313 "syntaxe_projet.y"
                {//printf("instruction -> composee !\n\n");
}
#line 1746 "syntaxe_projet.tab.c"
    break;

  case 31:
#line 317 "syntaxe_projet.y"
                {printf("instruction -> conditionnelle if else\n\n");(yyval.texte)=strdup("if_else");}
#line 1752 "syntaxe_projet.tab.c"
    break;

  case 32:
#line 320 "syntaxe_projet.y"
                {printf("instrction -> boucle while \n\n");(yyval.texte)=strdup("while_do");}
#line 1758 "syntaxe_projet.tab.c"
    break;

  case 33:
#line 323 "syntaxe_projet.y"
                { 
                          (yyval.texte)=strdup((yyvsp[0].texte));              }
#line 1765 "syntaxe_projet.tab.c"
    break;

  case 34:
#line 327 "syntaxe_projet.y"
                {Variable* var=g_hash_table_lookup(table_variable,(yyvsp[0].texte));

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                (yyval.texte)=strdup((yyvsp[0].texte));
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,(yyvsp[0].texte));
                                error_semantical=true;
                        }
                        
                        }
#line 1781 "syntaxe_projet.tab.c"
    break;

  case 35:
#line 340 "syntaxe_projet.y"
                {
                Variable* var=g_hash_table_lookup(table_variable,(yyvsp[-3].texte));

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                (yyval.texte)=strdup((yyvsp[-3].texte));
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,(yyvsp[-3].texte));
                                error_semantical=true;
                        }
                                      
}
#line 1798 "syntaxe_projet.tab.c"
    break;

  case 36:
#line 354 "syntaxe_projet.y"
                {//printf("expression valide !\n\n");
}
#line 1805 "syntaxe_projet.tab.c"
    break;

  case 37:
#line 358 "syntaxe_projet.y"
                {}
#line 1811 "syntaxe_projet.tab.c"
    break;

  case 38:
#line 360 "syntaxe_projet.y"
                     {//printf("empty !\n\n");
}
#line 1818 "syntaxe_projet.tab.c"
    break;

  case 39:
#line 364 "syntaxe_projet.y"
                {//printf("expression simple valide !\n\n");
}
#line 1825 "syntaxe_projet.tab.c"
    break;

  case 40:
#line 368 "syntaxe_projet.y"
                {//printf("egalité !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("==")),strdup((yyvsp[0].texte)));}
#line 1832 "syntaxe_projet.tab.c"
    break;

  case 41:
#line 372 "syntaxe_projet.y"
                {//printf("different !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("<>")),strdup((yyvsp[0].texte)));}
#line 1839 "syntaxe_projet.tab.c"
    break;

  case 42:
#line 376 "syntaxe_projet.y"
                {//printf("inferieur !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("<")),strdup((yyvsp[0].texte)));}
#line 1846 "syntaxe_projet.tab.c"
    break;

  case 43:
#line 380 "syntaxe_projet.y"
                {//printf("superieur !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup(">")),strdup((yyvsp[0].texte)));}
#line 1853 "syntaxe_projet.tab.c"
    break;

  case 44:
#line 384 "syntaxe_projet.y"
                {//printf("inferieur ou egal !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("<=")),strdup((yyvsp[0].texte)));}
#line 1860 "syntaxe_projet.tab.c"
    break;

  case 45:
#line 388 "syntaxe_projet.y"
                {//printf("superieur ou egal !\n\n");
(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup(">=")),strdup((yyvsp[0].texte)));}
#line 1867 "syntaxe_projet.tab.c"
    break;

  case 46:
#line 392 "syntaxe_projet.y"
                {}
#line 1873 "syntaxe_projet.tab.c"
    break;

  case 47:
#line 395 "syntaxe_projet.y"
                {}
#line 1879 "syntaxe_projet.tab.c"
    break;

  case 48:
#line 398 "syntaxe_projet.y"
                {printf("\t\t\tAddition\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("+")),strdup((yyvsp[0].texte)));}
#line 1885 "syntaxe_projet.tab.c"
    break;

  case 49:
#line 401 "syntaxe_projet.y"
                {printf("\t\t\tSoustraction\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("-")),strdup((yyvsp[0].texte)));}
#line 1891 "syntaxe_projet.tab.c"
    break;

  case 50:
#line 404 "syntaxe_projet.y"
                {printf("\t\t\tOU logique\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("or")),strdup((yyvsp[0].texte)));}
#line 1897 "syntaxe_projet.tab.c"
    break;

  case 51:
#line 407 "syntaxe_projet.y"
                {}
#line 1903 "syntaxe_projet.tab.c"
    break;

  case 52:
#line 410 "syntaxe_projet.y"
                {printf("\t\t\tMultiplication\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("*")),strdup((yyvsp[0].texte)));}
#line 1909 "syntaxe_projet.tab.c"
    break;

  case 53:
#line 413 "syntaxe_projet.y"
                {printf("\t\t\tDivision\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("/")),strdup((yyvsp[0].texte)));}
#line 1915 "syntaxe_projet.tab.c"
    break;

  case 54:
#line 416 "syntaxe_projet.y"
                {printf("\t\t\tDiv\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("div")),strdup((yyvsp[0].texte)));}
#line 1921 "syntaxe_projet.tab.c"
    break;

  case 55:
#line 419 "syntaxe_projet.y"
                {printf("\t\t\tMod\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("mod")),strdup((yyvsp[0].texte)));}
#line 1927 "syntaxe_projet.tab.c"
    break;

  case 56:
#line 422 "syntaxe_projet.y"
                {printf("\t\t\ET logique\n");(yyval.texte)=strcat(strcat(strdup((yyvsp[-2].texte)),strdup("and")),strdup((yyvsp[0].texte)));}
#line 1933 "syntaxe_projet.tab.c"
    break;

  case 57:
#line 425 "syntaxe_projet.y"
                { }
#line 1939 "syntaxe_projet.tab.c"
    break;

  case 58:
#line 428 "syntaxe_projet.y"
                {Variable* var=g_hash_table_lookup(table_variable,(yyvsp[-3].texte));

                        if(var!=NULL && strcmp(var->type,"func")==0){
                                (yyval.texte)=strdup((yyvsp[-3].texte));
				printf("SUCCES : appel de fonction !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de fonction ayant le nom : %s) !\n",lineno,(yyvsp[-3].texte));
                                error_semantical=true;
                        }}
#line 1953 "syntaxe_projet.tab.c"
    break;

  case 59:
#line 439 "syntaxe_projet.y"
                {printf("\t\t\tNombre : %ld\n",(yyvsp[0].nombre));
                /* Comme le token TOK_NOMBRE est de type entier et que on a type 			expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. 			*/
                int length=snprintf(NULL,0,"%ld",(yyvsp[0].nombre));
                char* str=malloc(length+1);
                snprintf(str,length+1,"%ld",(yyvsp[0].nombre));
                (yyval.texte)=strdup(str);
                free(str);}
#line 1965 "syntaxe_projet.tab.c"
    break;

  case 60:
#line 448 "syntaxe_projet.y"
                {}
#line 1971 "syntaxe_projet.tab.c"
    break;

  case 61:
#line 451 "syntaxe_projet.y"
                {}
#line 1977 "syntaxe_projet.tab.c"
    break;

  case 62:
#line 454 "syntaxe_projet.y"
                {}
#line 1983 "syntaxe_projet.tab.c"
    break;

  case 63:
#line 457 "syntaxe_projet.y"
                {}
#line 1989 "syntaxe_projet.tab.c"
    break;

  case 64:
#line 459 "syntaxe_projet.y"
        {(yyval.texte) = NULL;}
#line 1995 "syntaxe_projet.tab.c"
    break;


#line 1999 "syntaxe_projet.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 462 "syntaxe_projet.y"

 
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
