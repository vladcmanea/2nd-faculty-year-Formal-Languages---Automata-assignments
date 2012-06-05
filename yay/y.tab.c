/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMENTARIU = 258,
     SALUT = 259,
     PAPA = 260,
     DECLAR = 261,
     GATA = 262,
     DEFINESC = 263,
     REZOLV = 264,
     SI = 265,
     DEVINE = 266,
     SCRIE = 267,
     CITESTE = 268,
     DACA = 269,
     ATUNCI = 270,
     ALTFEL = 271,
     CATTIMP = 272,
     PANACAND = 273,
     FUNCTIA = 274,
     CAREPRIMESTE = 275,
     CAREINTOARCE = 276,
     CARENUPRIMESTE = 277,
     CARENUINTOARCE = 278,
     CAREEXECUTA = 279,
     VARIABILA = 280,
     DETIPUL = 281,
     CUVALOAREA = 282,
     NUMERIC = 283,
     SIRDECARACTERE = 284,
     BINAR = 285,
     CAREINSEAMNA = 286,
     INDICE = 287,
     REZOLUTIE = 288,
     ADEVARAT = 289,
     FALS = 290,
     NR = 291,
     SIR = 292
   };
#endif
/* Tokens.  */
#define COMENTARIU 258
#define SALUT 259
#define PAPA 260
#define DECLAR 261
#define GATA 262
#define DEFINESC 263
#define REZOLV 264
#define SI 265
#define DEVINE 266
#define SCRIE 267
#define CITESTE 268
#define DACA 269
#define ATUNCI 270
#define ALTFEL 271
#define CATTIMP 272
#define PANACAND 273
#define FUNCTIA 274
#define CAREPRIMESTE 275
#define CAREINTOARCE 276
#define CARENUPRIMESTE 277
#define CARENUINTOARCE 278
#define CAREEXECUTA 279
#define VARIABILA 280
#define DETIPUL 281
#define CUVALOAREA 282
#define NUMERIC 283
#define SIRDECARACTERE 284
#define BINAR 285
#define CAREINSEAMNA 286
#define INDICE 287
#define REZOLUTIE 288
#define ADEVARAT 289
#define FALS 290
#define NR 291
#define SIR 292




/* Copy the first part of user declarations.  */
#line 1 "yay.y"


#include <stdio.h>

extern FILE* yyin;
extern FILE* yyout;

extern char* yytext;
extern int yylineno;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 192 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,    50,    39,     2,
      51,    52,    48,    46,     2,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    43,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    38,     2,    42,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    17,    19,    23,    27,
      31,    35,    37,    41,    43,    47,    49,    51,    53,    55,
      63,    70,    76,    81,    83,    87,    91,    95,   101,   106,
     111,   116,   124,   128,   130,   134,   136,   142,   146,   150,
     152,   154,   156,   158,   160,   171,   181,   190,   198,   202,
     204,   211,   218,   225,   233,   239,   243,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   269,   273,   277,
     280,   284,   289,   293,   297,   301,   306,   311,   315,   319,
     323,   328,   333,   336,   340,   344,   347,   350,   354,   358,
     362,   366,   370,   375,   377,   381,   385,   390,   392,   394,
     396,   398,   400,   402,   404,   411,   416,   423,   428,   432,
     434,   436,   438,   441,   445,   448,   451,   462,   469,   475,
     481,   485,   487,   492,   496,   499
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,     4,    55,     5,    -1,    56,    57,    58,
      -1,    57,    58,    -1,    56,    58,    -1,    58,    -1,     6,
      59,     7,    -1,     8,    60,     7,    -1,     9,    61,     7,
      -1,    59,    10,    62,    -1,    62,    -1,    60,    10,    70,
      -1,    70,    -1,    61,    10,    80,    -1,    80,    -1,    63,
      -1,    65,    -1,    68,    -1,    19,    37,    20,    66,     7,
      21,    64,    -1,    19,    37,    20,    66,     7,    23,    -1,
      19,    37,    22,    21,    64,    -1,    19,    37,    22,    23,
      -1,    65,    -1,    25,    26,    28,    -1,    25,    26,    29,
      -1,    25,    26,    30,    -1,    25,    26,    31,    66,     7,
      -1,    25,    37,    26,    28,    -1,    25,    37,    26,    29,
      -1,    25,    37,    26,    30,    -1,    25,    37,    26,    37,
      31,    67,     7,    -1,    66,    10,    64,    -1,    64,    -1,
      67,    10,    65,    -1,    65,    -1,    26,    37,    31,    69,
       7,    -1,    69,    10,    64,    -1,    69,    10,    63,    -1,
      64,    -1,    63,    -1,    71,    -1,    73,    -1,    74,    -1,
      19,    37,    20,    72,     7,    24,    61,     7,    21,    73,
      -1,    19,    37,    20,    72,     7,    24,    61,     7,    23,
      -1,    19,    37,    22,    24,    61,     7,    21,    73,    -1,
      19,    37,    22,    24,    61,     7,    23,    -1,    72,    10,
      73,    -1,    73,    -1,    25,    37,    26,    28,    27,    78,
      -1,    25,    37,    26,    29,    27,    79,    -1,    25,    37,
      26,    30,    27,    77,    -1,    25,    37,    26,    37,    31,
      60,     7,    -1,    26,    37,    31,    75,     7,    -1,    75,
      10,    73,    -1,    75,    10,    71,    -1,    73,    -1,    71,
      -1,    78,    -1,    79,    -1,    77,    -1,    82,    -1,    85,
      -1,    34,    -1,    35,    -1,    77,    39,    77,    -1,    77,
      38,    77,    -1,    77,    40,    77,    -1,    42,    77,    -1,
      51,    77,    52,    -1,    30,    51,    76,    52,    -1,    78,
      43,    78,    -1,    78,    45,    78,    -1,    78,    44,    78,
      -1,    78,    45,    43,    78,    -1,    78,    44,    43,    78,
      -1,    79,    43,    79,    -1,    79,    45,    79,    -1,    79,
      44,    79,    -1,    79,    45,    43,    79,    -1,    79,    44,
      43,    79,    -1,    41,    77,    -1,    78,    46,    78,    -1,
      78,    47,    78,    -1,    46,    78,    -1,    47,    78,    -1,
      78,    48,    78,    -1,    78,    49,    78,    -1,    78,    50,
      78,    -1,    51,    78,    52,    -1,    38,    79,    38,    -1,
      28,    51,    76,    52,    -1,    36,    -1,    79,    46,    79,
      -1,    51,    79,    52,    -1,    29,    51,    76,    52,    -1,
      37,    -1,    88,    -1,    87,    -1,    89,    -1,    90,    -1,
      81,    -1,    86,    -1,    19,    91,    20,    83,     7,    23,
      -1,    19,    91,    22,    23,    -1,    19,    91,    20,    83,
       7,    21,    -1,    19,    91,    22,    21,    -1,    83,    10,
      84,    -1,    84,    -1,    86,    -1,    76,    -1,    25,    92,
      -1,    85,    11,    76,    -1,    12,    76,    -1,    13,    85,
      -1,    14,    77,    15,    24,    61,     7,    16,    24,    61,
       7,    -1,    14,    77,    15,    24,    61,     7,    -1,    17,
      77,    24,    61,     7,    -1,    24,    61,     7,    18,    77,
      -1,    91,    33,    37,    -1,    37,    -1,    92,    33,    37,
      32,    -1,    92,    33,    37,    -1,    37,    32,    -1,    37,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    50,    51,    54,    57,    60,
      63,    64,    67,    68,    71,    72,    75,    76,    77,    80,
      81,    82,    83,    86,    87,    88,    89,    90,    93,    94,
      95,    96,    99,   100,   103,   104,   107,   110,   111,   112,
     113,   116,   117,   118,   121,   122,   123,   124,   127,   128,
     131,   132,   133,   134,   137,   140,   141,   142,   143,   146,
     147,   148,   149,   150,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   178,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   194,   195,   196,   197,   200,   201,
     202,   203,   204,   205,   208,   209,   212,   213,   216,   217,
     220,   221,   224,   227,   230,   233,   236,   237,   240,   241,
     244,   245,   248,   249,   250,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMENTARIU", "SALUT", "PAPA", "DECLAR",
  "GATA", "DEFINESC", "REZOLV", "SI", "DEVINE", "SCRIE", "CITESTE", "DACA",
  "ATUNCI", "ALTFEL", "CATTIMP", "PANACAND", "FUNCTIA", "CAREPRIMESTE",
  "CAREINTOARCE", "CARENUPRIMESTE", "CARENUINTOARCE", "CAREEXECUTA",
  "VARIABILA", "DETIPUL", "CUVALOAREA", "NUMERIC", "SIRDECARACTERE",
  "BINAR", "CAREINSEAMNA", "INDICE", "REZOLUTIE", "ADEVARAT", "FALS", "NR",
  "SIR", "'|'", "'&'", "'^'", "'!'", "'~'", "'='", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'('", "')'", "$accept", "program", "corp",
  "blocdec", "blocdef", "blocrez", "declaratii", "definitii", "rezolvari",
  "declaratie", "declaratiefunctie", "declaratievariabilascurta",
  "declaratievariabila", "declaratiivariabilescurte",
  "declaratiivariabile", "declaratietip", "declaratiiintip", "definitie",
  "definitiefunctie", "definitiivariabile", "definitievariabila",
  "definitietip", "definitiiintip", "exp", "eb", "en", "es", "rezolvare",
  "apelsimplu", "apelintorc", "listafunctie", "elementfunctie",
  "variabila", "atribuire", "scriere", "citire", "test", "bucla", "fun",
  "var", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   124,    38,
      94,    33,   126,    61,    62,    60,    43,    45,    42,    47,
      37,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    56,    57,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    73,    74,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    86,    87,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     1,     3,     3,     3,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     7,
       6,     5,     4,     1,     3,     3,     3,     5,     4,     4,
       4,     7,     3,     1,     3,     1,     5,     3,     3,     1,
       1,     1,     1,     1,    10,     9,     8,     7,     3,     1,
       6,     6,     6,     7,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       3,     4,     3,     3,     3,     4,     4,     3,     3,     3,
       4,     4,     2,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     4,     1,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     6,     4,     6,     4,     3,     1,
       1,     1,     2,     3,     2,     2,    10,     6,     5,     5,
       3,     1,     4,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       1,     0,     0,     0,     0,    11,    16,    17,    18,     0,
       0,     0,     0,    13,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    15,   102,     0,   103,    99,
      98,   100,   101,     2,     0,     5,     4,     0,     0,     0,
       7,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,    64,    65,    93,    97,     0,     0,     0,     0,     0,
       0,   114,    61,    59,    60,    62,    63,   115,     0,     0,
       0,     0,   121,     0,     0,   125,   112,     9,     0,     0,
       3,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    82,    69,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,    14,   113,
       0,    33,    23,     0,     0,    22,    28,    29,    30,     0,
      40,    39,     0,     0,    49,     0,     0,     0,     0,     0,
      58,    57,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    70,    90,    95,    67,    66,    68,    72,     0,    74,
       0,    73,    83,    84,    87,    88,    89,    77,     0,    79,
       0,    78,    94,     0,     0,   111,     0,   109,    63,   110,
     105,   120,     0,   123,     0,     0,     0,    21,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,   107,    92,    96,    71,    76,    75,    81,    80,     0,
     118,     0,     0,   119,   122,    24,    25,    26,     0,     0,
      20,    32,    35,     0,    38,    37,     0,    48,     0,    50,
      51,    52,     0,    56,    55,     0,   117,   104,   108,     0,
      19,    31,     0,     0,     0,    47,    53,   106,     0,    27,
      34,     0,    46,     0,     0,    45,     0,    44,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,     8,     9,    14,    22,    34,    15,
      16,   141,   142,   143,   243,    18,   152,    23,    24,   153,
      25,    26,   162,   195,    72,    79,    80,    35,    36,    75,
     196,   197,    37,    38,    39,    40,    41,    42,    83,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -118
static const yytype_int16 yypact[] =
{
      24,   294,    64,    47,   184,   224,    42,    93,    77,  -118,
    -118,   116,   142,   143,    30,  -118,  -118,  -118,  -118,   163,
     183,   195,   130,  -118,  -118,  -118,  -118,   193,    91,   -12,
     -12,   196,   224,   232,   145,  -118,  -118,   235,  -118,  -118,
    -118,  -118,  -118,  -118,    77,  -118,  -118,   138,   219,   248,
    -118,    47,   167,   259,   260,  -118,   184,   196,   250,   272,
     273,  -118,  -118,  -118,  -118,    20,   -12,   -12,   150,   150,
     -12,  -118,   288,   228,   244,  -118,  -118,  -118,    21,   228,
     244,   133,  -118,    -1,   157,   300,   301,  -118,   224,   193,
    -118,   313,   122,   165,    37,  -118,   314,   306,   233,    74,
    -118,    11,   193,   193,   193,    20,     5,  -118,  -118,   150,
     245,    27,    29,   208,    90,   -12,   -12,   -12,   150,   103,
     123,   150,   150,   150,   150,   150,    20,   139,   155,    20,
     316,   224,   193,   318,   307,   319,  -118,   317,  -118,  -118,
       1,  -118,  -118,   197,   313,  -118,  -118,  -118,  -118,   320,
    -118,  -118,   204,   209,  -118,   224,   321,   322,   323,   324,
    -118,  -118,   240,   193,   325,   284,   290,   291,    86,  -118,
     234,  -118,  -118,  -118,    72,   326,  -118,   218,   150,   218,
     150,   218,   245,    27,    79,   295,  -118,   327,    20,   327,
      20,   327,  -118,   224,   297,  -118,   298,  -118,   235,  -118,
    -118,  -118,   -12,   328,   268,   203,   313,  -118,   331,  -118,
      37,   329,   314,   299,   150,    20,   -12,   184,  -118,    74,
     303,  -118,  -118,  -118,  -118,   218,   218,   327,   327,   304,
    -118,   334,   193,   288,  -118,  -118,  -118,  -118,   313,   313,
    -118,  -118,  -118,   305,  -118,  -118,   224,  -118,   308,   218,
     327,   288,   309,  -118,  -118,   337,   336,  -118,  -118,   310,
    -118,  -118,   331,   311,   314,  -118,  -118,  -118,   335,  -118,
    -118,   312,  -118,   224,   314,  -118,   315,  -118,  -118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   340,     6,  -118,   144,   -31,   330,
     -83,   -92,    -3,   124,  -118,  -118,  -118,   332,   -93,  -118,
     -89,  -118,  -118,   -24,   -25,   -15,    -7,   275,  -118,  -118,
     201,   135,   -19,  -117,  -118,  -118,  -118,  -118,   333,  -118
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      17,    84,   151,    71,    78,    81,   160,   154,    76,    77,
     161,   150,    73,    45,    46,   199,    58,    59,    60,   132,
      74,   133,    61,    62,    63,    64,    65,   204,     1,    66,
      67,   163,   134,   164,    68,    69,   130,    50,    48,    70,
      51,   107,   108,   169,   134,   112,   199,    43,    17,    59,
      90,   129,   207,   110,   111,   113,    11,    64,   106,   115,
     116,   117,   140,   114,    10,   139,    11,   115,   116,   117,
      76,   105,    12,    13,    73,   123,   124,   125,   165,   166,
     167,   171,    74,    76,    76,    76,     5,    73,    73,    73,
     174,   175,   176,    19,   170,    74,    74,    74,   168,    20,
     194,     4,     5,   177,   179,   181,   182,   183,   184,   185,
     186,   116,   117,   198,   241,   199,    33,    73,   245,   187,
     189,   191,   192,   247,   213,    74,   253,   244,   124,   125,
     254,    58,   129,   126,   127,   128,   129,    55,   173,    63,
      56,    65,   173,   144,   198,   145,   178,   260,    73,    68,
      69,    58,    87,    47,   109,    88,    74,   131,    91,    63,
      92,    65,   229,   225,   135,   226,   180,    88,    59,    68,
      69,   115,   116,   117,   109,   272,    64,   233,    58,    48,
      49,   227,   188,   228,    59,   277,    63,    96,    65,    97,
     105,   251,    64,   146,   147,   148,    68,    69,   190,   249,
      52,   109,   149,    19,   205,   242,   105,   206,   250,    20,
      21,   209,    57,   198,   210,   263,   211,    73,    33,   212,
      53,    58,    59,    60,   239,    74,   240,    61,    62,    63,
      64,    65,    54,    82,    66,    67,    27,    28,    29,    68,
      69,    30,   276,    31,    70,    93,    89,   218,    32,    33,
     219,   118,   119,   120,   121,   122,   123,   124,   125,   270,
     172,   156,   157,   158,   121,   122,   123,   124,   125,    85,
     159,   118,   119,   120,   121,   122,   123,   124,   125,    94,
     121,   122,   123,   124,   125,    98,   172,   126,   127,   128,
     129,    99,   122,   123,   124,   125,   235,   236,   237,   238,
       3,   102,     4,     5,   230,   231,   248,    88,   232,    88,
     255,   256,   261,   232,    88,   262,   266,   269,   271,    56,
     206,    88,   278,   103,   104,    88,   115,   116,   117,   264,
     155,   265,   136,   274,   137,   275,   222,   202,   140,    20,
     193,   200,   223,   224,   201,   125,   221,    44,   214,   215,
     216,   208,   268,   246,   203,   217,    12,   257,   267,   273,
     234,   252,   259,   138,   220,     0,   117,   258,     0,     0,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,   100,     0,
     101
};

static const yytype_int16 yycheck[] =
{
       3,    32,    94,    27,    29,    30,    99,    96,    27,    28,
      99,    94,    27,     7,     8,   132,    28,    29,    30,    20,
      27,    22,    34,    35,    36,    37,    38,    26,     4,    41,
      42,    20,    33,    22,    46,    47,    15,     7,    37,    51,
      10,    66,    67,    38,    33,    70,   163,     5,    51,    29,
      44,    46,   144,    68,    69,    70,    19,    37,    65,    38,
      39,    40,    25,    70,     0,    89,    19,    38,    39,    40,
      89,    51,    25,    26,    89,    48,    49,    50,   102,   103,
     104,    52,    89,   102,   103,   104,     9,   102,   103,   104,
     115,   116,   117,    19,   109,   102,   103,   104,   105,    25,
     131,     8,     9,   118,   119,   120,   121,   122,   123,   124,
     125,    39,    40,   132,   206,   232,    25,   132,   210,   126,
     127,   128,   129,   212,   155,   132,   219,   210,    49,    50,
     219,    28,    46,    43,    44,    45,    46,     7,    52,    36,
      10,    38,    52,    21,   163,    23,    43,   239,   163,    46,
      47,    28,     7,    37,    51,    10,   163,    24,    20,    36,
      22,    38,   193,   178,     7,   180,    43,    10,    29,    46,
      47,    38,    39,    40,    51,   264,    37,   202,    28,    37,
      37,   188,    43,   190,    29,   274,    36,    20,    38,    22,
      51,   216,    37,    28,    29,    30,    46,    47,    43,   214,
      37,    51,    37,    19,     7,   208,    51,    10,   215,    25,
      26,     7,    19,   232,    10,   246,     7,   232,    25,    10,
      37,    28,    29,    30,    21,   232,    23,    34,    35,    36,
      37,    38,    37,    37,    41,    42,    12,    13,    14,    46,
      47,    17,   273,    19,    51,    26,    11,     7,    24,    25,
      10,    43,    44,    45,    46,    47,    48,    49,    50,   262,
      52,    28,    29,    30,    46,    47,    48,    49,    50,    37,
      37,    43,    44,    45,    46,    47,    48,    49,    50,    31,
      46,    47,    48,    49,    50,    26,    52,    43,    44,    45,
      46,    31,    47,    48,    49,    50,    28,    29,    30,    31,
       6,    51,     8,     9,     7,     7,     7,    10,    10,    10,
       7,     7,     7,    10,    10,    10,     7,     7,     7,    10,
      10,    10,     7,    51,    51,    10,    38,    39,    40,    21,
      24,    23,    32,    21,    33,    23,    52,    18,    25,    25,
      24,    23,    52,    52,    37,    50,    21,     7,    27,    27,
      27,    31,    16,    24,    37,    31,    25,    23,    21,    24,
      32,   217,   238,    88,   163,    -1,    40,   232,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    54,     6,     8,     9,    55,    56,    57,    58,
       0,    19,    25,    26,    59,    62,    63,    65,    68,    19,
      25,    26,    60,    70,    71,    73,    74,    12,    13,    14,
      17,    19,    24,    25,    61,    80,    81,    85,    86,    87,
      88,    89,    90,     5,    57,    58,    58,    37,    37,    37,
       7,    10,    37,    37,    37,     7,    10,    19,    28,    29,
      30,    34,    35,    36,    37,    38,    41,    42,    46,    47,
      51,    76,    77,    78,    79,    82,    85,    85,    77,    78,
      79,    77,    37,    91,    61,    37,    92,     7,    10,    11,
      58,    20,    22,    26,    31,    62,    20,    22,    26,    31,
      70,    91,    51,    51,    51,    51,    79,    77,    77,    51,
      78,    78,    77,    78,    79,    38,    39,    40,    43,    44,
      45,    46,    47,    48,    49,    50,    43,    44,    45,    46,
      15,    24,    20,    22,    33,     7,    32,    33,    80,    76,
      25,    64,    65,    66,    21,    23,    28,    29,    30,    37,
      63,    64,    69,    72,    73,    24,    28,    29,    30,    37,
      71,    73,    75,    20,    22,    76,    76,    76,    79,    38,
      78,    52,    52,    52,    77,    77,    77,    78,    43,    78,
      43,    78,    78,    78,    78,    78,    78,    79,    43,    79,
      43,    79,    79,    24,    61,    76,    83,    84,    85,    86,
      23,    37,    18,    37,    26,     7,    10,    64,    31,     7,
      10,     7,    10,    61,    27,    27,    27,    31,     7,    10,
      83,    21,    52,    52,    52,    78,    78,    79,    79,    61,
       7,     7,    10,    77,    32,    28,    29,    30,    31,    21,
      23,    64,    65,    67,    63,    64,    24,    73,     7,    78,
      79,    77,    60,    71,    73,     7,     7,    23,    84,    66,
      64,     7,    10,    61,    21,    23,     7,    21,    16,     7,
      65,     7,    73,    24,    21,    23,    61,    73,     7
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 45 "yay.y"
    { fprintf(yyout, "program -> salut corp papa\n"); }
    break;

  case 3:
#line 48 "yay.y"
    { fprintf(yyout, "corp -> blocdec blocdef blocrez\n"); }
    break;

  case 4:
#line 49 "yay.y"
    { fprintf(yyout, "corp -> blocdef blocrez\n"); }
    break;

  case 5:
#line 50 "yay.y"
    { fprintf(yyout, "corp -> blocdec blocrez\n"); }
    break;

  case 6:
#line 51 "yay.y"
    { fprintf(yyout, "corp -> blocrez\n"); }
    break;

  case 7:
#line 54 "yay.y"
    { fprintf(yyout, "blocdec -> declar declaratii gata\n"); }
    break;

  case 8:
#line 57 "yay.y"
    { fprintf(yyout, "blocdef -> definesc definitii gata\n"); }
    break;

  case 9:
#line 60 "yay.y"
    { fprintf(yyout, "blocrez -> rezolv rezolvari gata\n"); }
    break;

  case 10:
#line 63 "yay.y"
    { fprintf(yyout, "declaratii -> declaratii si declaratie\n"); }
    break;

  case 11:
#line 64 "yay.y"
    { fprintf(yyout, "declaratii -> declaratie\n"); }
    break;

  case 12:
#line 67 "yay.y"
    { fprintf(yyout, "definitii -> definitii si definitie\n"); }
    break;

  case 13:
#line 68 "yay.y"
    { fprintf(yyout, "definitii -> definitie\n"); }
    break;

  case 14:
#line 71 "yay.y"
    { fprintf(yyout, "rezolvari -> rezolvari si rezolvare\n"); }
    break;

  case 15:
#line 72 "yay.y"
    { fprintf(yyout, "rezolvari -> rezolvare\n"); }
    break;

  case 16:
#line 75 "yay.y"
    { fprintf(yyout, "declaratie -> declaratiefunctie\n"); }
    break;

  case 17:
#line 76 "yay.y"
    { fprintf(yyout, "declaratie -> declaratievariabila\n"); }
    break;

  case 18:
#line 77 "yay.y"
    { fprintf(yyout, "declaratie -> declaratietip\n"); }
    break;

  case 19:
#line 80 "yay.y"
    { fprintf(yyout, "declaratiefunctie -> functia sir careprimeste declaratiivariabilescurte gata careintoarce declaratievariabilascurta\n"); }
    break;

  case 20:
#line 81 "yay.y"
    { fprintf(yyout, "declaratiefunctie -> functia sir careprimeste declaratiivariabilescurte gata carenuintoarce\n"); }
    break;

  case 21:
#line 82 "yay.y"
    { fprintf(yyout, "declaratiefunctie -> functia sir carenuprimeste careintoarce declaratievariabilascurta\n"); }
    break;

  case 22:
#line 83 "yay.y"
    { fprintf(yyout, "declaratiefunctie -> carenuprimeste carenuintoarce\n"); }
    break;

  case 23:
#line 86 "yay.y"
    { fprintf(yyout, "declaratievariabilascurta -> declaratievariabila\n"); }
    break;

  case 24:
#line 87 "yay.y"
    { fprintf(yyout, "declaratievariabilascurta -> variabila detipul numeric\n"); }
    break;

  case 25:
#line 88 "yay.y"
    { fprintf(yyout, "declaratievariabilascurta -> variabil detipul sirdecaractere\n"); }
    break;

  case 26:
#line 89 "yay.y"
    { fprintf(yyout, "declaratievariabilascurta -> variaila detipul binar\n"); }
    break;

  case 27:
#line 90 "yay.y"
    { fprintf(yyout, "declaratievariabilascurta -> variabila detipul sir care inseamna declaratiivariabilescurte gata\n"); }
    break;

  case 28:
#line 93 "yay.y"
    { fprintf(yyout, "declaratievariabila -> variabila sir detipul numeric\n"); }
    break;

  case 29:
#line 94 "yay.y"
    { fprintf(yyout, "declaratievariabila -> variabila sir detipul sirdecaractere\n"); }
    break;

  case 30:
#line 95 "yay.y"
    { fprintf(yyout, "declaratievariabila -> variabila sir detipul binar\n"); }
    break;

  case 31:
#line 96 "yay.y"
    { fprintf(yyout, "declaratievariabila -> variabila sir detipul sir careinseamna declaratiivariabile gata\n"); }
    break;

  case 32:
#line 99 "yay.y"
    { fprintf(yyout, "declaratiivariabilescurte -> declaratiivariabilescurte si declaratievariabilascurta\n"); }
    break;

  case 33:
#line 100 "yay.y"
    { fprintf(yyout, "declaratiivariabilescurte -> declaratievariabilascurta\n"); }
    break;

  case 34:
#line 103 "yay.y"
    { fprintf(yyout, "declaratiivariabile -> declaratiivariabile si declaratievariabila\n"); }
    break;

  case 35:
#line 104 "yay.y"
    { fprintf(yyout, "declaratiivariabile -> declaratievariabila\n"); }
    break;

  case 36:
#line 107 "yay.y"
    { fprintf(yyout, "declaratietip -> tipul sir careinseamna declaratiiintip gata\n"); }
    break;

  case 37:
#line 110 "yay.y"
    { fprintf(yyout, "declaratiiintip -> declaratiiintip si declaratievariabilascurta\n"); }
    break;

  case 38:
#line 111 "yay.y"
    { fprintf(yyout, "declaratiiintip -> declaratiiintip si declaratiefunctie\n"); }
    break;

  case 39:
#line 112 "yay.y"
    { fprintf(yyout, "declaratiiintip -> declaratievariabilascurta\n"); }
    break;

  case 40:
#line 113 "yay.y"
    { fprintf(yyout, "declaratiiintip -> declaratiefunctie\n"); }
    break;

  case 41:
#line 116 "yay.y"
    { fprintf(yyout, "definitie -> definitiefunctie\n"); }
    break;

  case 42:
#line 117 "yay.y"
    { fprintf(yyout, "definitie -> definitievariabila\n"); }
    break;

  case 43:
#line 118 "yay.y"
    { fprintf(yyout, "definitie -> definitieintip\n"); }
    break;

  case 44:
#line 121 "yay.y"
    { fprintf(yyout, "definitiefunctie -> functia sir careprimeste declaratiivariabile gata careexecuta rezolvari gata careintoarce definitievariabila\n"); }
    break;

  case 45:
#line 122 "yay.y"
    { fprintf(yyout, "definitiefunctie -> functia sir careprimeste declaratiivariabile gata careexecuta rezolvari gata carenuintoarce\n"); }
    break;

  case 46:
#line 123 "yay.y"
    { fprintf(yyout, "definitiefunctie -> functia sir carenuprimeste gata careexecuta rezolvari gata careintoarce definitievariabila\n"); }
    break;

  case 47:
#line 124 "yay.y"
    { fprintf(yyout, "definitiefunctie -> functia sir carenuprimeste declaratiivariabile gata careexecuta rezolvari gata carenuintoarce\n"); }
    break;

  case 48:
#line 127 "yay.y"
    { fprintf(yyout, "definitiifunctie -> definitiivariabile si definitievariabila\n"); }
    break;

  case 49:
#line 128 "yay.y"
    { fprintf(yyout, "definitiivariabile -> definitievariabila\n"); }
    break;

  case 50:
#line 131 "yay.y"
    { fprintf(yyout, "definitievariabila -> variabila sir detipul numeric cuvaloarea en\n"); }
    break;

  case 51:
#line 132 "yay.y"
    { fprintf(yyout, "definitievariabila -> variabila sir detipul sirdecaractere cuvaloarea es\n"); }
    break;

  case 52:
#line 133 "yay.y"
    { fprintf(yyout, "definitievariabila -> variabila sir detipul binar cuvaloarea eb\n"); }
    break;

  case 53:
#line 134 "yay.y"
    { fprintf(yyout, "definitievariabila -> variabila sir detipul sir careinseamna definitii gata\n"); }
    break;

  case 54:
#line 137 "yay.y"
    { fprintf(yyout, "definitietip -> tipul sir careinseamna definitiiintip gata\n"); }
    break;

  case 55:
#line 140 "yay.y"
    { fprintf(yyout, "definitiiintip -> definitiiintip si definitievariabila\n"); }
    break;

  case 56:
#line 141 "yay.y"
    { fprintf(yyout, "definitiiintip -> definitiiintip si definitiefunctie\n"); }
    break;

  case 57:
#line 142 "yay.y"
    { fprintf(yyout, "definitiiintip -> definitievariabila\n"); }
    break;

  case 58:
#line 143 "yay.y"
    { fprintf(yyout, "definitiiintip -> definitiefunctie\n"); }
    break;

  case 59:
#line 146 "yay.y"
    { fprintf(yyout, "exp -> en\n"); }
    break;

  case 60:
#line 147 "yay.y"
    { fprintf(yyout, "exp -> es\n"); }
    break;

  case 61:
#line 148 "yay.y"
    { fprintf(yyout, "exp -> eb\n"); }
    break;

  case 62:
#line 149 "yay.y"
    { fprintf(yyout, "exp -> apelintorc\n"); }
    break;

  case 63:
#line 150 "yay.y"
    { fprintf(yyout, "exp -> variabila\n"); }
    break;

  case 64:
#line 153 "yay.y"
    { fprintf(yyout, "eb -> adevarat\n"); }
    break;

  case 65:
#line 154 "yay.y"
    { fprintf(yyout, "eb -> fals\n"); }
    break;

  case 66:
#line 155 "yay.y"
    { fprintf(yyout, "eb -> eb & eb\n"); }
    break;

  case 67:
#line 156 "yay.y"
    { fprintf(yyout, "eb -> eb | eb\n"); }
    break;

  case 68:
#line 157 "yay.y"
    { fprintf(yyout, "eb -> eb ^ eb\n"); }
    break;

  case 69:
#line 158 "yay.y"
    { fprintf(yyout, "eb -> ~ eb\n"); }
    break;

  case 70:
#line 159 "yay.y"
    { fprintf(yyout, "eb -> ( eb )\n"); }
    break;

  case 71:
#line 160 "yay.y"
    { fprintf(yyout, "eb -> binar ( exp )\n"); }
    break;

  case 72:
#line 161 "yay.y"
    { fprintf(yyout, "eb -> en = en\n"); }
    break;

  case 73:
#line 162 "yay.y"
    { fprintf(yyout, "eb -> en < en\n"); }
    break;

  case 74:
#line 163 "yay.y"
    { fprintf(yyout, "eb -> en > en\n"); }
    break;

  case 75:
#line 164 "yay.y"
    { fprintf(yyout, "eb -> en <= en\n"); }
    break;

  case 76:
#line 165 "yay.y"
    { fprintf(yyout, "eb -> en >= en\n"); }
    break;

  case 77:
#line 166 "yay.y"
    { fprintf(yyout, "eb -> es = es\n"); }
    break;

  case 78:
#line 167 "yay.y"
    { fprintf(yyout, "eb -> es < es\n"); }
    break;

  case 79:
#line 168 "yay.y"
    { fprintf(yyout, "eb -> es > es\n"); }
    break;

  case 80:
#line 169 "yay.y"
    { fprintf(yyout, "eb -> es <= es\n"); }
    break;

  case 81:
#line 170 "yay.y"
    { fprintf(yyout, "eb -> es >= es\n"); }
    break;

  case 82:
#line 178 "yay.y"
    { fprintf(yyout, "eb -> ! eb\n"); }
    break;

  case 83:
#line 181 "yay.y"
    { fprintf(yyout, "en -> en + en\n"); }
    break;

  case 84:
#line 182 "yay.y"
    { fprintf(yyout, "en -> en - en\n"); }
    break;

  case 85:
#line 183 "yay.y"
    { fprintf(yyout, "en -> + en\n"); }
    break;

  case 86:
#line 184 "yay.y"
    { fprintf(yyout, "en -> - en\n"); }
    break;

  case 87:
#line 185 "yay.y"
    { fprintf(yyout, "en -> en * en\n"); }
    break;

  case 88:
#line 186 "yay.y"
    { fprintf(yyout, "en -> en /div/ en\n"); }
    break;

  case 89:
#line 187 "yay.y"
    { fprintf(yyout, "en -> en /mod/ en\n"); }
    break;

  case 90:
#line 188 "yay.y"
    { fprintf(yyout, "en -> ( en )\n"); }
    break;

  case 91:
#line 189 "yay.y"
    { fprintf(yyout, "en -> | es |\n"); }
    break;

  case 92:
#line 190 "yay.y"
    { fprintf(yyout, "en -> numeric ( exp )\n"); }
    break;

  case 93:
#line 191 "yay.y"
    { fprintf(yyout, "en -> numar\n"); }
    break;

  case 94:
#line 194 "yay.y"
    { fprintf(yyout, "es -> es + es\n"); }
    break;

  case 95:
#line 195 "yay.y"
    { fprintf(yyout, "es -> ( es )\n"); }
    break;

  case 96:
#line 196 "yay.y"
    { fprintf(yyout, "es -> ( exp )\n"); }
    break;

  case 97:
#line 197 "yay.y"
    { fprintf(yyout, "en -> sir\n"); }
    break;

  case 98:
#line 200 "yay.y"
    { fprintf(yyout, "rezolvare -> citire\n"); }
    break;

  case 99:
#line 201 "yay.y"
    { fprintf(yyout, "rezolvare -> scriere\n"); }
    break;

  case 100:
#line 202 "yay.y"
    { fprintf(yyout, "rezolvare -> test\n"); }
    break;

  case 101:
#line 203 "yay.y"
    { fprintf(yyout, "rezolvare -> bucla\n"); }
    break;

  case 102:
#line 204 "yay.y"
    { fprintf(yyout, "rezolvare -> apelsimplu\n"); }
    break;

  case 103:
#line 205 "yay.y"
    { fprintf(yyout, "rezolvare -> atribuire\n"); }
    break;

  case 104:
#line 208 "yay.y"
    { fprintf(yyout, "apelsimplu -> functia fun careprimeste listafunctie gata carenuintoarce\n"); }
    break;

  case 105:
#line 209 "yay.y"
    { fprintf(yyout, "apelsimplu -> functia fun carenuprimeste carenuintoarce\n"); }
    break;

  case 106:
#line 212 "yay.y"
    { fprintf(yyout, "apelintorc -> functia fun careprimeste listafunctie gata careintoarce\n"); }
    break;

  case 107:
#line 213 "yay.y"
    { fprintf(yyout, "apelintorc -> functia fun carenuprimeste careintoarce\n"); }
    break;

  case 108:
#line 216 "yay.y"
    { fprintf(yyout, "listafunctie -> listafunctie si elementfunctie\n"); }
    break;

  case 109:
#line 217 "yay.y"
    { fprintf(yyout, "listafunctie -> elementfunctie\n"); }
    break;

  case 110:
#line 220 "yay.y"
    { fprintf(yyout, "elementfunctie -> atribuire\n"); }
    break;

  case 111:
#line 221 "yay.y"
    { fprintf(yyout, "elementfunctie -> exp\n"); }
    break;

  case 112:
#line 224 "yay.y"
    { fprintf(yyout, "variabila -> var\n"); }
    break;

  case 113:
#line 227 "yay.y"
    { fprintf(yyout, "atribuire -> variabila devine exp\n"); }
    break;

  case 114:
#line 230 "yay.y"
    { fprintf(yyout, "scriere -> scrie exp\n"); }
    break;

  case 115:
#line 233 "yay.y"
    { fprintf(yyout, "citire -> citeste variabila\n"); }
    break;

  case 116:
#line 236 "yay.y"
    { fprintf(yyout, "test -> daca eb atunci careexecuta rezolvari gata altfel careexecuta rezolvari gata \n"); }
    break;

  case 117:
#line 237 "yay.y"
    { fprintf(yyout, "test -> daca eb atunci careexecuta rezolvari gata\n"); }
    break;

  case 118:
#line 240 "yay.y"
    { fprintf(yyout, "bucla -> cattimp eb careexecuta rezolvari gata\n"); }
    break;

  case 119:
#line 241 "yay.y"
    { fprintf(yyout, "bucla -> careexecuta rezolvari gata panacand eb\n"); }
    break;

  case 120:
#line 244 "yay.y"
    { fprintf(yyout, "fun -> fun rezolutie sir\n"); }
    break;

  case 121:
#line 245 "yay.y"
    { fprintf(yyout, "fun -> sir\n"); }
    break;

  case 122:
#line 248 "yay.y"
    { fprintf(yyout, "var -> var rezolutie sir indice\n"); }
    break;

  case 123:
#line 249 "yay.y"
    { fprintf(yyout, "var -> var rezolutie sir\n"); }
    break;

  case 124:
#line 250 "yay.y"
    { fprintf(yyout, "var -> sir indice\n"); }
    break;

  case 125:
#line 251 "yay.y"
    { fprintf(yyout, "var -> sir\n"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2278 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 254 "yay.y"


int yyerror(char * s)
{
	fprintf(yyout, "eroarea %s la linia %d\n", s, yylineno);
}

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		printf("Comanda corecta: ./yay <fisier.intrare> <fisier.iesire>\n");
		return 0;
	}

	if (!(yyin = fopen(argv[1], "r")))
	{
		printf("Fisierul de intrare <%s> nu a putut fi deschis\n", argv[1]);
		return 0;
	}

	if (!(yyout = fopen(argv[2], "w")))
	{
		printf("Fisierul de iesire <%s> nu a putut fi deschis\n", argv[2]);
		return 0;
	}

	yyparse();

	fclose(yyin);
	fclose(yyout);

	return 0;
} 

