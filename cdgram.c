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
#line 1 "cdgram.y"

/* Yacc grammar for ANSI and C++ cdecl. */
/* The output of this file is included */
/* into the C file cdecl.c. */
char cdgramsccsid[] = "@(#)cdgram.y	2.2 3/30/88";

#line 78 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARRAY = 258,                   /* ARRAY  */
    AS = 259,                      /* AS  */
    CAST = 260,                    /* CAST  */
    COMMA = 261,                   /* COMMA  */
    DECLARE = 262,                 /* DECLARE  */
    DOUBLECOLON = 263,             /* DOUBLECOLON  */
    EXPLAIN = 264,                 /* EXPLAIN  */
    FUNCTION = 265,                /* FUNCTION  */
    BLOCK = 266,                   /* BLOCK  */
    HELP = 267,                    /* HELP  */
    INTO = 268,                    /* INTO  */
    OF = 269,                      /* OF  */
    MEMBER = 270,                  /* MEMBER  */
    POINTER = 271,                 /* POINTER  */
    REFERENCE = 272,               /* REFERENCE  */
    RETURNING = 273,               /* RETURNING  */
    SET = 274,                     /* SET  */
    TO = 275,                      /* TO  */
    CHAR = 276,                    /* CHAR  */
    CLASS = 277,                   /* CLASS  */
    CONSTVOLATILE = 278,           /* CONSTVOLATILE  */
    DOUBLE = 279,                  /* DOUBLE  */
    ENUM = 280,                    /* ENUM  */
    FLOAT = 281,                   /* FLOAT  */
    INT = 282,                     /* INT  */
    LONG = 283,                    /* LONG  */
    NAME = 284,                    /* NAME  */
    NUMBER = 285,                  /* NUMBER  */
    SHORT = 286,                   /* SHORT  */
    SIGNED = 287,                  /* SIGNED  */
    STRUCT = 288,                  /* STRUCT  */
    UNION = 289,                   /* UNION  */
    UNSIGNED = 290,                /* UNSIGNED  */
    VOID = 291,                    /* VOID  */
    AUTO = 292,                    /* AUTO  */
    EXTERN = 293,                  /* EXTERN  */
    REGISTER = 294,                /* REGISTER  */
    STATIC = 295                   /* STATIC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ARRAY 258
#define AS 259
#define CAST 260
#define COMMA 261
#define DECLARE 262
#define DOUBLECOLON 263
#define EXPLAIN 264
#define FUNCTION 265
#define BLOCK 266
#define HELP 267
#define INTO 268
#define OF 269
#define MEMBER 270
#define POINTER 271
#define REFERENCE 272
#define RETURNING 273
#define SET 274
#define TO 275
#define CHAR 276
#define CLASS 277
#define CONSTVOLATILE 278
#define DOUBLE 279
#define ENUM 280
#define FLOAT 281
#define INT 282
#define LONG 283
#define NAME 284
#define NUMBER 285
#define SHORT 286
#define SIGNED 287
#define STRUCT 288
#define UNION 289
#define UNSIGNED 290
#define VOID 291
#define AUTO 292
#define EXTERN 293
#define REGISTER 294
#define STATIC 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "cdgram.y"

	char *dynstr;
	struct {
		char *left;
		char *right;
		char *type;
	} halves;

#line 217 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ARRAY = 3,                      /* ARRAY  */
  YYSYMBOL_AS = 4,                         /* AS  */
  YYSYMBOL_CAST = 5,                       /* CAST  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_DECLARE = 7,                    /* DECLARE  */
  YYSYMBOL_DOUBLECOLON = 8,                /* DOUBLECOLON  */
  YYSYMBOL_EXPLAIN = 9,                    /* EXPLAIN  */
  YYSYMBOL_FUNCTION = 10,                  /* FUNCTION  */
  YYSYMBOL_BLOCK = 11,                     /* BLOCK  */
  YYSYMBOL_HELP = 12,                      /* HELP  */
  YYSYMBOL_INTO = 13,                      /* INTO  */
  YYSYMBOL_OF = 14,                        /* OF  */
  YYSYMBOL_MEMBER = 15,                    /* MEMBER  */
  YYSYMBOL_POINTER = 16,                   /* POINTER  */
  YYSYMBOL_REFERENCE = 17,                 /* REFERENCE  */
  YYSYMBOL_RETURNING = 18,                 /* RETURNING  */
  YYSYMBOL_SET = 19,                       /* SET  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_CHAR = 21,                      /* CHAR  */
  YYSYMBOL_CLASS = 22,                     /* CLASS  */
  YYSYMBOL_CONSTVOLATILE = 23,             /* CONSTVOLATILE  */
  YYSYMBOL_DOUBLE = 24,                    /* DOUBLE  */
  YYSYMBOL_ENUM = 25,                      /* ENUM  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_INT = 27,                       /* INT  */
  YYSYMBOL_LONG = 28,                      /* LONG  */
  YYSYMBOL_NAME = 29,                      /* NAME  */
  YYSYMBOL_NUMBER = 30,                    /* NUMBER  */
  YYSYMBOL_SHORT = 31,                     /* SHORT  */
  YYSYMBOL_SIGNED = 32,                    /* SIGNED  */
  YYSYMBOL_STRUCT = 33,                    /* STRUCT  */
  YYSYMBOL_UNION = 34,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 35,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_AUTO = 37,                      /* AUTO  */
  YYSYMBOL_EXTERN = 38,                    /* EXTERN  */
  YYSYMBOL_REGISTER = 39,                  /* REGISTER  */
  YYSYMBOL_STATIC = 40,                    /* STATIC  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_n_ = 43,                     /* '\n'  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '*'  */
  YYSYMBOL_46_ = 46,                       /* '&'  */
  YYSYMBOL_47_ = 47,                       /* '^'  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_prog = 51,                      /* prog  */
  YYSYMBOL_stmt = 52,                      /* stmt  */
  YYSYMBOL_NL = 53,                        /* NL  */
  YYSYMBOL_optNAME = 54,                   /* optNAME  */
  YYSYMBOL_cdecl = 55,                     /* cdecl  */
  YYSYMBOL_cdecl1 = 56,                    /* cdecl1  */
  YYSYMBOL_castlist = 57,                  /* castlist  */
  YYSYMBOL_adecllist = 58,                 /* adecllist  */
  YYSYMBOL_cast = 59,                      /* cast  */
  YYSYMBOL_cdims = 60,                     /* cdims  */
  YYSYMBOL_adecl = 61,                     /* adecl  */
  YYSYMBOL_adims = 62,                     /* adims  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_tinit = 64,                     /* tinit  */
  YYSYMBOL_c_type = 65,                    /* c_type  */
  YYSYMBOL_StrClaUniEnum = 66,             /* StrClaUniEnum  */
  YYSYMBOL_ClassStruct = 67,               /* ClassStruct  */
  YYSYMBOL_tname = 68,                     /* tname  */
  YYSYMBOL_mod_list = 69,                  /* mod_list  */
  YYSYMBOL_mod_list1 = 70,                 /* mod_list1  */
  YYSYMBOL_modifier = 71,                  /* modifier  */
  YYSYMBOL_opt_constvol_list = 72,         /* opt_constvol_list  */
  YYSYMBOL_constvol_list = 73,             /* constvol_list  */
  YYSYMBOL_storage = 74,                   /* storage  */
  YYSYMBOL_opt_storage = 75                /* opt_storage  */
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
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      43,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,     2,
      41,    42,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,    47,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    32,    39,    45,    57,    68,    78,    87,
      98,   108,   118,   129,   136,   137,   143,   147,   153,   161,
     167,   168,   178,   190,   203,   212,   224,   238,   249,   259,
     268,   279,   287,   296,   303,   308,   316,   323,   332,   344,
     351,   359,   368,   378,   387,   396,   405,   416,   425,   436,
     447,   453,   461,   484,   509,   532,   555,   585,   615,   649,
     684,   708,   714,   723,   734,   740,   747,   754,   762,   771,
     772,   773,   779,   780,   786,   793,   800,   807,   814,   822,
     830,   838,   845,   859,   866,   873,   880,   888,   903,   909,
     924,   925,   926,   927,   934,   941
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
  "\"end of file\"", "error", "\"invalid token\"", "ARRAY", "AS", "CAST",
  "COMMA", "DECLARE", "DOUBLECOLON", "EXPLAIN", "FUNCTION", "BLOCK",
  "HELP", "INTO", "OF", "MEMBER", "POINTER", "REFERENCE", "RETURNING",
  "SET", "TO", "CHAR", "CLASS", "CONSTVOLATILE", "DOUBLE", "ENUM", "FLOAT",
  "INT", "LONG", "NAME", "NUMBER", "SHORT", "SIGNED", "STRUCT", "UNION",
  "UNSIGNED", "VOID", "AUTO", "EXTERN", "REGISTER", "STATIC", "'('", "')'",
  "'\\n'", "';'", "'*'", "'&'", "'^'", "'['", "']'", "$accept", "prog",
  "stmt", "NL", "optNAME", "cdecl", "cdecl1", "castlist", "adecllist",
  "cast", "cdims", "adecl", "adims", "type", "tinit", "c_type",
  "StrClaUniEnum", "ClassStruct", "tname", "mod_list", "mod_list1",
  "modifier", "opt_constvol_list", "constvol_list", "storage",
  "opt_storage", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -104,   114,  -104,   -28,    38,   175,   183,   -28,    -9,  -104,
    -104,  -104,  -104,  -104,    16,   -12,    26,    55,   -28,   130,
      69,  -104,  -104,  -104,  -104,  -104,    59,    26,    61,    60,
    -104,  -104,   -28,  -104,    74,    59,    11,  -104,    59,  -104,
       6,    79,    89,  -104,   166,   188,   -28,  -104,    72,    26,
    -104,    72,  -104,    59,  -104,   116,    12,  -104,   -28,    59,
      11,   101,    59,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,    81,  -104,  -104,
     182,    63,    59,  -104,    98,   144,   133,    26,    26,   -28,
      37,   140,    26,   -28,  -104,    59,    11,   124,  -104,  -104,
      13,   120,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   -28,
     148,   126,    98,    98,    45,   121,    26,   119,    72,    72,
    -104,    15,    40,  -104,    72,  -104,  -104,   159,    59,   157,
       3,  -104,   139,  -104,    98,   111,   147,   147,    -9,  -104,
      72,    72,  -104,  -104,  -104,  -104,  -104,    21,  -104,   156,
    -104,   -28,  -104,    59,   167,    98,   134,   169,   -28,  -104,
     165,   160,  -104,    98,  -104,  -104,  -104,    59,   147,   170,
     106,  -104,   176,   210,   147,  -104,   107,  -104,    22,   109,
    -104,    24,  -104,  -104,    39,  -104,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,    88,    95,    95,     0,    19,    16,
      17,     3,    14,    15,    61,     0,    88,     0,     0,    64,
       0,    90,    91,    92,    93,    94,    88,    88,    94,    88,
       4,    18,     0,    62,     0,    88,    88,    87,    88,     8,
       0,     0,     0,    60,     0,    95,     0,    64,     0,    88,
      64,     0,    13,    88,    52,    36,     0,    37,     0,    88,
      88,    88,    88,    75,    73,    77,    70,    76,    74,    85,
      86,    84,    72,    71,    83,    78,    63,     0,    69,    66,
      65,    80,    88,     6,    39,    30,     0,    88,    88,     0,
      20,    87,    88,     0,    56,    88,    88,     0,     7,    54,
       0,     0,    57,    59,    68,    67,    82,    81,    79,     0,
       0,    39,    39,    39,     0,     0,    88,     0,     0,     0,
      10,    88,     0,    28,     0,    11,    38,    35,    88,     0,
       0,     5,     0,    40,    39,     0,    47,    48,    19,    49,
       0,     0,    29,    21,    23,    33,    24,     0,    64,     0,
      50,     0,    53,    88,     0,    39,     0,    45,     0,    22,
       0,    88,    27,    39,    51,     9,    55,    88,    46,     0,
      88,    12,     0,    31,    32,    58,    88,    41,     0,    88,
      43,     0,    42,    25,     0,    44,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,    19,    91,   -44,  -104,   -39,   -57,  -103,
     129,    -3,  -104,   -45,  -104,  -104,  -104,   100,   151,   152,
    -104,  -104,   -16,  -104,   226,    -2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    11,    12,    32,    89,    90,   147,    56,   114,
     139,    57,    34,    43,    44,    76,    77,    78,    79,    80,
     108,    81,    19,    51,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    18,    84,   100,    29,    92,    35,    93,   135,   136,
     137,    47,    48,    50,    14,     9,    10,   -34,    96,    96,
      31,    15,    13,    46,    59,    64,    30,   161,   161,    36,
     161,   156,    54,    91,    16,    58,    72,    39,    16,   127,
      55,    14,   117,    82,   145,   161,    33,    60,    15,    16,
      94,    52,   168,   -34,    97,   129,    99,   146,   102,   103,
     174,    16,    14,   162,   182,    83,   185,    17,    38,    15,
     149,   118,   119,    45,   143,   144,   124,    98,   121,   109,
     151,   186,    16,    49,    16,   122,   106,   138,    53,   150,
     -88,    69,   126,   122,    70,    71,   159,   160,    74,    61,
     141,    85,   -88,   163,    14,   148,   -88,   -88,   120,    62,
     104,    15,   125,    86,     2,     3,   101,    87,    88,     4,
      95,     5,   173,     6,    16,   152,     7,   110,   131,    16,
      16,   178,    16,     8,   130,   145,   145,   181,   145,   111,
     184,    40,   128,   112,   113,   148,    41,    42,   177,   180,
     166,   183,   115,   157,   148,   110,   132,     9,    10,   122,
     148,   142,    85,   148,   175,    96,   140,   111,   133,   -89,
     165,   112,   113,   134,    86,   153,   169,   171,    87,    88,
     116,   -89,   122,    16,   155,   -89,   -89,    63,    64,   145,
      65,    66,    67,    68,    69,   122,   167,    70,    71,    72,
      73,    74,    75,    63,    20,   164,    65,   172,    67,    68,
     170,   176,    21,    22,    23,    24,   161,   179,    75,   123,
      21,    22,    23,    24,    27,    21,    22,    23,    24,   158,
     154,   105,    28,   107
};

static const yytype_uint8 yycheck[] =
{
      16,     4,    47,    60,     6,    50,    18,    51,   111,   112,
     113,    27,    28,    29,     3,    43,    44,     6,     6,     6,
      29,    10,     3,    26,    18,    22,     7,     6,     6,    41,
       6,   134,    35,    49,    23,    38,    33,    18,    23,    96,
      29,     3,    86,    45,    29,     6,    30,    41,    10,    23,
      53,    32,   155,    42,    42,    42,    59,    42,    61,    62,
     163,    23,     3,    42,    42,    46,    42,    29,    13,    10,
      30,    87,    88,     4,   118,   119,    92,    58,    41,    82,
     124,    42,    23,    23,    23,    48,    23,    42,    14,    49,
      29,    28,    95,    48,    31,    32,   140,   141,    35,    20,
     116,    29,    41,   148,     3,   121,    45,    46,    89,    20,
      29,    10,    93,    41,     0,     1,    15,    45,    46,     5,
       4,     7,   161,     9,    23,   128,    12,    29,   109,    23,
      23,   170,    23,    19,    14,    29,    29,   176,    29,    41,
     179,    11,    18,    45,    46,   161,    16,    17,    42,    42,
     153,    42,     8,    42,   170,    29,     8,    43,    44,    48,
     176,    42,    29,   179,   167,     6,    45,    41,    42,    29,
     151,    45,    46,    47,    41,    18,    42,   158,    45,    46,
      47,    41,    48,    23,    45,    45,    46,    21,    22,    29,
      24,    25,    26,    27,    28,    48,    29,    31,    32,    33,
      34,    35,    36,    21,    29,    49,    24,    42,    26,    27,
      41,    41,    37,    38,    39,    40,     6,    41,    36,    90,
      37,    38,    39,    40,    41,    37,    38,    39,    40,   138,
     130,    80,     6,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     5,     7,     9,    12,    19,    43,
      44,    52,    53,    53,     3,    10,    23,    29,    61,    72,
      29,    37,    38,    39,    40,    74,    75,    41,    74,    75,
      53,    29,    54,    30,    62,    18,    41,    72,    13,    53,
      11,    16,    17,    63,    64,     4,    61,    72,    72,    23,
      72,    73,    53,    14,    61,    29,    58,    61,    61,    18,
      41,    20,    20,    21,    22,    24,    25,    26,    27,    28,
      31,    32,    33,    34,    35,    36,    65,    66,    67,    68,
      69,    71,    75,    53,    63,    29,    41,    45,    46,    55,
      56,    72,    63,    55,    61,     4,     6,    42,    53,    61,
      58,    15,    61,    61,    29,    68,    23,    69,    70,    61,
      29,    41,    45,    46,    59,     8,    47,    55,    72,    72,
      53,    41,    48,    60,    72,    53,    61,    58,    18,    42,
      14,    53,     8,    42,    47,    59,    59,    59,    42,    60,
      45,    72,    42,    55,    55,    29,    42,    57,    72,    30,
      49,    55,    61,    18,    67,    45,    59,    42,    54,    55,
      55,     6,    42,    63,    49,    53,    61,    29,    59,    42,
      41,    53,    42,    57,    59,    61,    41,    42,    57,    41,
      42,    57,    42,    42,    57,    42,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    64,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    72,    72,    73,
      74,    74,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     4,     5,     3,     7,
       5,     5,     8,     3,     1,     2,     1,     1,     1,     0,
       1,     3,     4,     3,     3,     7,     8,     4,     2,     3,
       1,     3,     3,     1,     0,     3,     1,     1,     3,     0,
       2,     5,     6,     6,     7,     3,     4,     2,     2,     2,
       2,     3,     3,     6,     4,     7,     4,     4,     8,     4,
       2,     0,     1,     2,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       1,     1,     1,     1,     1,     0
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
  case 3: /* prog: prog stmt  */
#line 33 "cdgram.y"
                        {
			prompt();
			prev = 0;
			}
#line 1405 "y.tab.c"
    break;

  case 4: /* stmt: HELP NL  */
#line 40 "cdgram.y"
                        {
			Debug((stderr, "stmt: help\n"));
			dohelp();
			}
#line 1414 "y.tab.c"
    break;

  case 5: /* stmt: DECLARE NAME AS opt_storage adecl NL  */
#line 46 "cdgram.y"
                        {
			Debug((stderr, "stmt: DECLARE NAME AS opt_storage adecl\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-4].dynstr)));
			Debug((stderr, "\topt_storage='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tacdecl.left='%s'\n", (yyvsp[-1].halves).left));
			Debug((stderr, "\tacdecl.right='%s'\n", (yyvsp[-1].halves).right));
			Debug((stderr, "\tacdecl.type='%s'\n", (yyvsp[-1].halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			dodeclare((yyvsp[-4].dynstr), (yyvsp[-2].dynstr), (yyvsp[-1].halves).left, (yyvsp[-1].halves).right, (yyvsp[-1].halves).type);
			}
#line 1429 "y.tab.c"
    break;

  case 6: /* stmt: DECLARE opt_storage adecl NL  */
#line 58 "cdgram.y"
                        {
			Debug((stderr, "stmt: DECLARE opt_storage adecl\n"));
			Debug((stderr, "\topt_storage='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tacdecl.left='%s'\n", (yyvsp[-1].halves).left));
			Debug((stderr, "\tacdecl.right='%s'\n", (yyvsp[-1].halves).right));
			Debug((stderr, "\tacdecl.type='%s'\n", (yyvsp[-1].halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			dodeclare(NullCP, (yyvsp[-2].dynstr), (yyvsp[-1].halves).left, (yyvsp[-1].halves).right, (yyvsp[-1].halves).type);
			}
#line 1443 "y.tab.c"
    break;

  case 7: /* stmt: CAST NAME INTO adecl NL  */
#line 69 "cdgram.y"
                        {
			Debug((stderr, "stmt: CAST NAME AS adecl\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tacdecl.left='%s'\n", (yyvsp[-1].halves).left));
			Debug((stderr, "\tacdecl.right='%s'\n", (yyvsp[-1].halves).right));
			Debug((stderr, "\tacdecl.type='%s'\n", (yyvsp[-1].halves).type));
			docast((yyvsp[-3].dynstr), (yyvsp[-1].halves).left, (yyvsp[-1].halves).right, (yyvsp[-1].halves).type);
			}
#line 1456 "y.tab.c"
    break;

  case 8: /* stmt: CAST adecl NL  */
#line 79 "cdgram.y"
                        {
			Debug((stderr, "stmt: CAST adecl\n"));
			Debug((stderr, "\tacdecl.left='%s'\n", (yyvsp[-1].halves).left));
			Debug((stderr, "\tacdecl.right='%s'\n", (yyvsp[-1].halves).right));
			Debug((stderr, "\tacdecl.type='%s'\n", (yyvsp[-1].halves).type));
			docast(NullCP, (yyvsp[-1].halves).left, (yyvsp[-1].halves).right, (yyvsp[-1].halves).type);
			}
#line 1468 "y.tab.c"
    break;

  case 9: /* stmt: EXPLAIN opt_storage opt_constvol_list type opt_constvol_list cdecl NL  */
#line 88 "cdgram.y"
                        {
			Debug((stderr, "stmt: EXPLAIN opt_storage opt_constvol_list type cdecl\n"));
			Debug((stderr, "\topt_storage='%s'\n", (yyvsp[-5].dynstr)));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-4].dynstr)));
			Debug((stderr, "\ttype='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			dodexplain((yyvsp[-5].dynstr), (yyvsp[-4].dynstr), (yyvsp[-2].dynstr), (yyvsp[-3].dynstr), (yyvsp[-1].dynstr));
			}
#line 1482 "y.tab.c"
    break;

  case 10: /* stmt: EXPLAIN storage opt_constvol_list cdecl NL  */
#line 99 "cdgram.y"
                        {
			Debug((stderr, "stmt: EXPLAIN storage opt_constvol_list cdecl\n"));
			Debug((stderr, "\tstorage='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			dodexplain((yyvsp[-3].dynstr), (yyvsp[-2].dynstr), NullCP, NullCP, (yyvsp[-1].dynstr));
			}
#line 1495 "y.tab.c"
    break;

  case 11: /* stmt: EXPLAIN opt_storage constvol_list cdecl NL  */
#line 109 "cdgram.y"
                        {
			Debug((stderr, "stmt: EXPLAIN opt_storage constvol_list cdecl\n"));
			Debug((stderr, "\topt_storage='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tconstvol_list='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			dodexplain((yyvsp[-3].dynstr), (yyvsp[-2].dynstr), NullCP, NullCP, (yyvsp[-1].dynstr));
			}
#line 1508 "y.tab.c"
    break;

  case 12: /* stmt: EXPLAIN '(' opt_constvol_list type cast ')' optNAME NL  */
#line 119 "cdgram.y"
                        {
			Debug((stderr, "stmt: EXPLAIN ( opt_constvol_list type cast ) optNAME\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-5].dynstr)));
			Debug((stderr, "\ttype='%s'\n", (yyvsp[-4].dynstr)));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			docexplain((yyvsp[-5].dynstr), (yyvsp[-4].dynstr), (yyvsp[-3].dynstr), (yyvsp[-1].dynstr));
			}
#line 1522 "y.tab.c"
    break;

  case 13: /* stmt: SET optNAME NL  */
#line 130 "cdgram.y"
                        {
			Debug((stderr, "stmt: SET optNAME\n"));
			Debug((stderr, "\toptNAME='%s'\n", (yyvsp[-1].dynstr)));
			doset((yyvsp[-1].dynstr));
			}
#line 1532 "y.tab.c"
    break;

  case 15: /* stmt: error NL  */
#line 138 "cdgram.y"
                        {
			yyerrok;
			}
#line 1540 "y.tab.c"
    break;

  case 16: /* NL: '\n'  */
#line 144 "cdgram.y"
                        {
			doprompt();
			}
#line 1548 "y.tab.c"
    break;

  case 17: /* NL: ';'  */
#line 148 "cdgram.y"
                        {
			noprompt();
			}
#line 1556 "y.tab.c"
    break;

  case 18: /* optNAME: NAME  */
#line 154 "cdgram.y"
                        {
			Debug((stderr, "optNAME: NAME\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 1566 "y.tab.c"
    break;

  case 19: /* optNAME: %empty  */
#line 161 "cdgram.y"
                        {
			Debug((stderr, "optNAME: EMPTY\n"));
			(yyval.dynstr) = ds(unknown_name);
			}
#line 1575 "y.tab.c"
    break;

  case 21: /* cdecl: '*' opt_constvol_list cdecl  */
#line 169 "cdgram.y"
                        {
			Debug((stderr, "cdecl: * opt_constvol_list cdecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[0].dynstr),(yyvsp[-1].dynstr),ds(strlen((yyvsp[-1].dynstr))?" pointer to ":"pointer to "),NullCP);
			prev = 'p';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1588 "y.tab.c"
    break;

  case 22: /* cdecl: NAME DOUBLECOLON '*' cdecl  */
#line 179 "cdgram.y"
                        {
			Debug((stderr, "cdecl: NAME DOUBLECOLON '*' cdecl\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[0].dynstr)));
			if (!CplusplusFlag)
				unsupp("pointer to member of class", NullCP);
			(yyval.dynstr) = cat((yyvsp[0].dynstr),ds("pointer to member of class "),(yyvsp[-3].dynstr),ds(" "),NullCP);
			prev = 'p';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1603 "y.tab.c"
    break;

  case 23: /* cdecl: '&' opt_constvol_list cdecl  */
#line 191 "cdgram.y"
                        {
			Debug((stderr, "cdecl: & opt_constvol_list cdecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[0].dynstr)));
			if (!CplusplusFlag)
				unsupp("reference", NullCP);
			(yyval.dynstr) = cat((yyvsp[0].dynstr),(yyvsp[-1].dynstr),ds(strlen((yyvsp[-1].dynstr))?" reference to ":"reference to "),NullCP);
			prev = 'r';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1618 "y.tab.c"
    break;

  case 24: /* cdecl1: cdecl1 '(' ')'  */
#line 204 "cdgram.y"
                        {
			Debug((stderr, "cdecl1: cdecl1()\n"));
			Debug((stderr, "\tcdecl1='%s'\n", (yyvsp[-2].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-2].dynstr),ds("function returning "),NullCP);
			prev = 'f';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1630 "y.tab.c"
    break;

  case 25: /* cdecl1: '(' '^' opt_constvol_list cdecl ')' '(' ')'  */
#line 213 "cdgram.y"
                        {
                            char *sp = "";
                            Debug((stderr, "cdecl1: (^ opt_constvol_list cdecl)()\n"));
                            Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-4].dynstr)));
                            Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-3].dynstr)));
                            if (strlen((yyvsp[-4].dynstr)) > 0)
                                sp = " ";
                            (yyval.dynstr) = cat((yyvsp[-3].dynstr), (yyvsp[-4].dynstr), ds(sp), ds("block returning "), NullCP);
                            prev = 'b';
                        }
#line 1645 "y.tab.c"
    break;

  case 26: /* cdecl1: '(' '^' opt_constvol_list cdecl ')' '(' castlist ')'  */
#line 225 "cdgram.y"
                        {
                            char *sp = "";
                            Debug((stderr, "cdecl1: (^ opt_constvol_list cdecl)( castlist )\n"));
                            Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-5].dynstr)));
                            Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-4].dynstr)));
                            Debug((stderr, "\tcastlist='%s'\n", (yyvsp[-1].dynstr)));
                            if (strlen((yyvsp[-5].dynstr)) > 0)
                                sp = " ";
                            (yyval.dynstr) = cat((yyvsp[-4].dynstr), (yyvsp[-5].dynstr), ds(sp), ds("block ("),
                                    (yyvsp[-1].dynstr), ds(") returning "), NullCP);
                            prev = 'b';
                        }
#line 1662 "y.tab.c"
    break;

  case 27: /* cdecl1: cdecl1 '(' castlist ')'  */
#line 239 "cdgram.y"
                        {
			Debug((stderr, "cdecl1: cdecl1(castlist)\n"));
			Debug((stderr, "\tcdecl1='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tcastlist='%s'\n", (yyvsp[-1].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-3].dynstr), ds("function ("),
				  (yyvsp[-1].dynstr), ds(") returning "), NullCP);
			prev = 'f';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1676 "y.tab.c"
    break;

  case 28: /* cdecl1: cdecl1 cdims  */
#line 250 "cdgram.y"
                        {
			Debug((stderr, "cdecl1: cdecl1 cdims\n"));
			Debug((stderr, "\tcdecl1='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tcdims='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds("array "),(yyvsp[0].dynstr),NullCP);
			prev = 'a';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1689 "y.tab.c"
    break;

  case 29: /* cdecl1: '(' cdecl ')'  */
#line 260 "cdgram.y"
                        {
			Debug((stderr, "cdecl1: (cdecl)\n"));
			Debug((stderr, "\tcdecl='%s'\n", (yyvsp[-1].dynstr)));
			(yyval.dynstr) = (yyvsp[-1].dynstr);
			/* prev = prev; */
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1701 "y.tab.c"
    break;

  case 30: /* cdecl1: NAME  */
#line 269 "cdgram.y"
                        {
			Debug((stderr, "cdecl1: NAME\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[0].dynstr)));
			savedname = (yyvsp[0].dynstr);
			(yyval.dynstr) = ds("");
			prev = 'n';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1714 "y.tab.c"
    break;

  case 31: /* castlist: castlist COMMA castlist  */
#line 280 "cdgram.y"
                        {
			Debug((stderr, "castlist: castlist1, castlist2\n"));
			Debug((stderr, "\tcastlist1='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tcastlist2='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-2].dynstr), ds(", "), (yyvsp[0].dynstr), NullCP);
			}
#line 1725 "y.tab.c"
    break;

  case 32: /* castlist: opt_constvol_list type cast  */
#line 288 "cdgram.y"
                        {
			Debug((stderr, "castlist: opt_constvol_list type cast\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\ttype='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[0].dynstr), (yyvsp[-2].dynstr), ds(strlen((yyvsp[-2].dynstr)) ? " " : ""), (yyvsp[-1].dynstr), NullCP);
			}
#line 1737 "y.tab.c"
    break;

  case 33: /* castlist: NAME  */
#line 297 "cdgram.y"
                        {
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 1745 "y.tab.c"
    break;

  case 34: /* adecllist: %empty  */
#line 303 "cdgram.y"
                        {
			Debug((stderr, "adecllist: EMPTY\n"));
			(yyval.dynstr) = ds("");
			}
#line 1754 "y.tab.c"
    break;

  case 35: /* adecllist: adecllist COMMA adecllist  */
#line 309 "cdgram.y"
                        {
			Debug((stderr, "adecllist: adecllist1, adecllist2\n"));
			Debug((stderr, "\tadecllist1='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tadecllist2='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-2].dynstr), ds(", "), (yyvsp[0].dynstr), NullCP);
			}
#line 1765 "y.tab.c"
    break;

  case 36: /* adecllist: NAME  */
#line 317 "cdgram.y"
                        {
			Debug((stderr, "adecllist: NAME\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 1775 "y.tab.c"
    break;

  case 37: /* adecllist: adecl  */
#line 324 "cdgram.y"
                        {
			Debug((stderr, "adecllist: adecl\n"));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			(yyval.dynstr) = cat((yyvsp[0].halves).type, ds(" "), (yyvsp[0].halves).left, (yyvsp[0].halves).right, NullCP);
			}
#line 1787 "y.tab.c"
    break;

  case 38: /* adecllist: NAME AS adecl  */
#line 333 "cdgram.y"
                        {
			Debug((stderr, "adecllist: NAME AS adecl\n"));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			(yyval.dynstr) = cat((yyvsp[0].halves).type, ds(" "), (yyvsp[0].halves).left, (yyvsp[-2].dynstr), (yyvsp[0].halves).right, NullCP);
			}
#line 1800 "y.tab.c"
    break;

  case 39: /* cast: %empty  */
#line 344 "cdgram.y"
                        {
			Debug((stderr, "cast: EMPTY\n"));
			(yyval.dynstr) = ds("");
			/* prev = prev; */
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1811 "y.tab.c"
    break;

  case 40: /* cast: '(' ')'  */
#line 352 "cdgram.y"
                        {
			Debug((stderr, "cast: ()\n"));
			(yyval.dynstr) = ds("function returning ");
			prev = 'f';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1822 "y.tab.c"
    break;

  case 41: /* cast: '(' cast ')' '(' ')'  */
#line 360 "cdgram.y"
                        {
			Debug((stderr, "cast: (cast)()\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-3].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-3].dynstr),ds("function returning "),NullCP);
			prev = 'f';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1834 "y.tab.c"
    break;

  case 42: /* cast: '(' cast ')' '(' castlist ')'  */
#line 369 "cdgram.y"
                        {
			Debug((stderr, "cast: (cast)(castlist)\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-4].dynstr)));
			Debug((stderr, "\tcastlist='%s'\n", (yyvsp[-1].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-4].dynstr),ds("function ("),(yyvsp[-1].dynstr),ds(") returning "),NullCP);
			prev = 'f';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1847 "y.tab.c"
    break;

  case 43: /* cast: '(' '^' cast ')' '(' ')'  */
#line 379 "cdgram.y"
                    {
			Debug((stderr, "cast: (^ cast)()\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-3].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-3].dynstr),ds("block returning "),NullCP);
			prev = 'b';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
                    }
#line 1859 "y.tab.c"
    break;

  case 44: /* cast: '(' '^' cast ')' '(' castlist ')'  */
#line 388 "cdgram.y"
                    {
			Debug((stderr, "cast: (^ cast)(castlist)\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-4].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-4].dynstr),ds("block ("), (yyvsp[-1].dynstr), ds(") returning "),NullCP);
			prev = 'b';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
                    }
#line 1871 "y.tab.c"
    break;

  case 45: /* cast: '(' cast ')'  */
#line 397 "cdgram.y"
                        {
			Debug((stderr, "cast: (cast)\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-1].dynstr)));
			(yyval.dynstr) = (yyvsp[-1].dynstr);
			/* prev = prev; */
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1883 "y.tab.c"
    break;

  case 46: /* cast: NAME DOUBLECOLON '*' cast  */
#line 406 "cdgram.y"
                        {
			Debug((stderr, "cast: NAME::*cast\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[0].dynstr)));
			if (!CplusplusFlag)
				unsupp("pointer to member of class", NullCP);
			(yyval.dynstr) = cat((yyvsp[0].dynstr),ds("pointer to member of class "),(yyvsp[-3].dynstr),ds(" "),NullCP);
			prev = 'p';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1897 "y.tab.c"
    break;

  case 47: /* cast: '*' cast  */
#line 417 "cdgram.y"
                        {
			Debug((stderr, "cast: *cast\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[0].dynstr),ds("pointer to "),NullCP);
			prev = 'p';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1909 "y.tab.c"
    break;

  case 48: /* cast: '&' cast  */
#line 426 "cdgram.y"
                        {
			Debug((stderr, "cast: &cast\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[0].dynstr)));
			if (!CplusplusFlag)
				unsupp("reference", NullCP);
			(yyval.dynstr) = cat((yyvsp[0].dynstr),ds("reference to "),NullCP);
			prev = 'r';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1923 "y.tab.c"
    break;

  case 49: /* cast: cast cdims  */
#line 437 "cdgram.y"
                        {
			Debug((stderr, "cast: cast cdims\n"));
			Debug((stderr, "\tcast='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tcdims='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds("array "),(yyvsp[0].dynstr),NullCP);
			prev = 'a';
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1936 "y.tab.c"
    break;

  case 50: /* cdims: '[' ']'  */
#line 448 "cdgram.y"
                        {
			Debug((stderr, "cdims: []\n"));
			(yyval.dynstr) = ds("of ");
			}
#line 1945 "y.tab.c"
    break;

  case 51: /* cdims: '[' NUMBER ']'  */
#line 454 "cdgram.y"
                        {
			Debug((stderr, "cdims: [NUMBER]\n"));
			Debug((stderr, "\tNUMBER='%s'\n", (yyvsp[-1].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(" of "),NullCP);
			}
#line 1955 "y.tab.c"
    break;

  case 52: /* adecl: FUNCTION RETURNING adecl  */
#line 462 "cdgram.y"
                        {
			Debug((stderr, "adecl: FUNCTION RETURNING adecl\n"));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'f')
				unsupp("Function returning function",
				       "function returning pointer to function");
			else if (prev=='A' || prev=='a')
				unsupp("Function returning array",
				       "function returning pointer");
			(yyval.halves).left = (yyvsp[0].halves).left;
			(yyval.halves).right = cat(ds("()"),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'f';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 1981 "y.tab.c"
    break;

  case 53: /* adecl: FUNCTION '(' adecllist ')' RETURNING adecl  */
#line 485 "cdgram.y"
                        {
			Debug((stderr, "adecl: FUNCTION (adecllist) RETURNING adecl\n"));
			Debug((stderr, "\tadecllist='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'f')
				unsupp("Function returning function",
				       "function returning pointer to function");
			else if (prev=='A' || prev=='a')
				unsupp("Function returning array",
				       "function returning pointer");
			(yyval.halves).left = (yyvsp[0].halves).left;
			(yyval.halves).right = cat(ds("("),(yyvsp[-3].dynstr),ds(")"),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'f';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2008 "y.tab.c"
    break;

  case 54: /* adecl: opt_constvol_list BLOCK RETURNING adecl  */
#line 510 "cdgram.y"
                        {
                        char *sp = "";
			Debug((stderr, "adecl: opt_constvol_list BLOCK RETURNING adecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'f')
				unsupp("Block returning function",
				       "block returning pointer to function");
			else if (prev=='A' || prev=='a')
				unsupp("Block returning array",
				       "block returning pointer");
			if (strlen((yyvsp[-3].dynstr)) != 0)
				sp = " ";
                        (yyval.halves).left = cat((yyvsp[0].halves).left, ds("(^"), ds(sp), (yyvsp[-3].dynstr), ds(sp), NullCP);
			(yyval.halves).right = cat(ds(")()"),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'b';

                        }
#line 2034 "y.tab.c"
    break;

  case 55: /* adecl: opt_constvol_list BLOCK '(' adecllist ')' RETURNING adecl  */
#line 533 "cdgram.y"
                        {
                        char *sp = "";
			Debug((stderr, "adecl: opt_constvol_list BLOCK RETURNING adecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-6].dynstr)));
			Debug((stderr, "\tadecllist='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'f')
				unsupp("Block returning function",
				       "block returning pointer to function");
			else if (prev=='A' || prev=='a')
				unsupp("Block returning array",
				       "block returning pointer");
                        if (strlen((yyvsp[-6].dynstr)) != 0)
                            sp = " ";
                        (yyval.halves).left = cat((yyvsp[0].halves).left, ds("(^"), ds(sp), (yyvsp[-6].dynstr), ds(sp), NullCP);
			(yyval.halves).right = cat(ds(")("), (yyvsp[-3].dynstr), ds(")"), (yyvsp[0].halves).right, NullCP);
                        (yyval.halves).type = (yyvsp[0].halves).type;
                        prev = 'b';
                        }
#line 2060 "y.tab.c"
    break;

  case 56: /* adecl: ARRAY adims OF adecl  */
#line 556 "cdgram.y"
                        {
			Debug((stderr, "adecl: ARRAY adims OF adecl\n"));
			Debug((stderr, "\tadims='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'f')
				unsupp("Array of function",
				       "array of pointer to function");
			else if (prev == 'a')
				unsupp("Inner array of unspecified size",
				       "array of pointer");
			else if (prev == 'v')
				unsupp("Array of void",
				       "pointer to void");
			if (arbdims)
				prev = 'a';
			else
				prev = 'A';
			(yyval.halves).left = (yyvsp[0].halves).left;
			(yyval.halves).right = cat((yyvsp[-2].dynstr),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2093 "y.tab.c"
    break;

  case 57: /* adecl: opt_constvol_list POINTER TO adecl  */
#line 586 "cdgram.y"
                        {
			char *op = "", *cp = "", *sp = "";

			Debug((stderr, "adecl: opt_constvol_list POINTER TO adecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (prev == 'a')
				unsupp("Pointer to array of unspecified dimension",
				       "pointer to object");
			if (prev=='a' || prev=='A' || prev=='f') {
				op = "(";
				cp = ")";
			}
			if (strlen((yyvsp[-3].dynstr)) != 0)
				sp = " ";
			(yyval.halves).left = cat((yyvsp[0].halves).left,ds(op),ds("*"),
				       ds(sp),(yyvsp[-3].dynstr),ds(sp),NullCP);
			(yyval.halves).right = cat(ds(cp),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'p';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2126 "y.tab.c"
    break;

  case 58: /* adecl: opt_constvol_list POINTER TO MEMBER OF ClassStruct NAME adecl  */
#line 616 "cdgram.y"
                        {
			char *op = "", *cp = "", *sp = "";

			Debug((stderr, "adecl: opt_constvol_list POINTER TO MEMBER OF ClassStruct NAME adecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-7].dynstr)));
			Debug((stderr, "\tClassStruct='%s'\n", (yyvsp[-2].dynstr)));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (!CplusplusFlag)
				unsupp("pointer to member of class", NullCP);
			if (prev == 'a')
				unsupp("Pointer to array of unspecified dimension",
				       "pointer to object");
			if (prev=='a' || prev=='A' || prev=='f') {
				op = "(";
				cp = ")";
			}
			if (strlen((yyvsp[-7].dynstr)) != 0)
				sp = " ";
			(yyval.halves).left = cat((yyvsp[0].halves).left,ds(op),(yyvsp[-1].dynstr),ds("::*"),
				      ds(sp),(yyvsp[-7].dynstr),ds(sp),NullCP);
			(yyval.halves).right = cat(ds(cp),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'p';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2163 "y.tab.c"
    break;

  case 59: /* adecl: opt_constvol_list REFERENCE TO adecl  */
#line 650 "cdgram.y"
                        {
			char *op = "", *cp = "", *sp = "";

			Debug((stderr, "adecl: opt_constvol_list REFERENCE TO adecl\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-3].dynstr)));
			Debug((stderr, "\tadecl.left='%s'\n", (yyvsp[0].halves).left));
			Debug((stderr, "\tadecl.right='%s'\n", (yyvsp[0].halves).right));
			Debug((stderr, "\tadecl.type='%s'\n", (yyvsp[0].halves).type));
			if (!CplusplusFlag)
				unsupp("reference", NullCP);
			if (prev == 'v')
				unsupp("Reference to void",
				       "pointer to void");
			else if (prev == 'a')
				unsupp("Reference to array of unspecified dimension",
				       "reference to object");
			if (prev=='a' || prev=='A' || prev=='f') {
				op = "(";
				cp = ")";
			}
			if (strlen((yyvsp[-3].dynstr)) != 0)
				sp = " ";
			(yyval.halves).left = cat((yyvsp[0].halves).left,ds(op),ds("&"),
				       ds(sp),(yyvsp[-3].dynstr),ds(sp),NullCP);
			(yyval.halves).right = cat(ds(cp),(yyvsp[0].halves).right,NullCP);
			(yyval.halves).type = (yyvsp[0].halves).type;
			prev = 'r';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2201 "y.tab.c"
    break;

  case 60: /* adecl: opt_constvol_list type  */
#line 685 "cdgram.y"
                        {
			Debug((stderr, "adecl: opt_constvol_list type\n"));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\ttype='%s'\n", (yyvsp[0].dynstr)));
			(yyval.halves).left = ds("");
			(yyval.halves).right = ds("");
			(yyval.halves).type = cat((yyvsp[-1].dynstr),ds(strlen((yyvsp[-1].dynstr))?" ":""),(yyvsp[0].dynstr),NullCP);
			if (strcmp((yyvsp[0].dynstr), "void") == 0)
			    prev = 'v';
			else if ((strncmp((yyvsp[0].dynstr), "struct", 6) == 0) ||
			         (strncmp((yyvsp[0].dynstr), "class", 5) == 0))
			    prev = 's';
			else
			    prev = 't';
			Debug((stderr, "\n\tadecl now =\n"));
			Debug((stderr, "\t\tadecl.left='%s'\n", (yyval.halves).left));
			Debug((stderr, "\t\tadecl.right='%s'\n", (yyval.halves).right));
			Debug((stderr, "\t\tadecl.type='%s'\n", (yyval.halves).type));
			Debug((stderr, "\tprev = '%s'\n", visible(prev)));
			}
#line 2226 "y.tab.c"
    break;

  case 61: /* adims: %empty  */
#line 708 "cdgram.y"
                        {
			Debug((stderr, "adims: EMPTY\n"));
			arbdims = 1;
			(yyval.dynstr) = ds("[]");
			}
#line 2236 "y.tab.c"
    break;

  case 62: /* adims: NUMBER  */
#line 715 "cdgram.y"
                        {
			Debug((stderr, "adims: NUMBER\n"));
			Debug((stderr, "\tNUMBER='%s'\n", (yyvsp[0].dynstr)));
			arbdims = 0;
			(yyval.dynstr) = cat(ds("["),(yyvsp[0].dynstr),ds("]"),NullCP);
			}
#line 2247 "y.tab.c"
    break;

  case 63: /* type: tinit c_type  */
#line 724 "cdgram.y"
                        {
			Debug((stderr, "type: tinit c_type\n"));
			Debug((stderr, "\ttinit=''\n"));
			Debug((stderr, "\tc_type='%s'\n", (yyvsp[0].dynstr)));
			mbcheck();
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2259 "y.tab.c"
    break;

  case 64: /* tinit: %empty  */
#line 734 "cdgram.y"
                        {
			Debug((stderr, "tinit: EMPTY\n"));
			modbits = 0;
			}
#line 2268 "y.tab.c"
    break;

  case 65: /* c_type: mod_list  */
#line 741 "cdgram.y"
                        {
			Debug((stderr, "c_type: mod_list\n"));
			Debug((stderr, "\tmod_list='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2278 "y.tab.c"
    break;

  case 66: /* c_type: tname  */
#line 748 "cdgram.y"
                        {
			Debug((stderr, "c_type: tname\n"));
			Debug((stderr, "\ttname='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2288 "y.tab.c"
    break;

  case 67: /* c_type: mod_list tname  */
#line 755 "cdgram.y"
                        {
			Debug((stderr, "c_type: mod_list tname\n"));
			Debug((stderr, "\tmod_list='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\ttname='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(" "),(yyvsp[0].dynstr),NullCP);
			}
#line 2299 "y.tab.c"
    break;

  case 68: /* c_type: StrClaUniEnum NAME  */
#line 763 "cdgram.y"
                        {
			Debug((stderr, "c_type: StrClaUniEnum NAME\n"));
			Debug((stderr, "\tStrClaUniEnum='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tNAME='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(" "),(yyvsp[0].dynstr),NullCP);
			}
#line 2310 "y.tab.c"
    break;

  case 71: /* StrClaUniEnum: UNION  */
#line 774 "cdgram.y"
                        {
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2318 "y.tab.c"
    break;

  case 73: /* ClassStruct: CLASS  */
#line 781 "cdgram.y"
                        {
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2326 "y.tab.c"
    break;

  case 74: /* tname: INT  */
#line 787 "cdgram.y"
                        {
			Debug((stderr, "tname: INT\n"));
			Debug((stderr, "\tINT='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_INT; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2336 "y.tab.c"
    break;

  case 75: /* tname: CHAR  */
#line 794 "cdgram.y"
                        {
			Debug((stderr, "tname: CHAR\n"));
			Debug((stderr, "\tCHAR='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_CHAR; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2346 "y.tab.c"
    break;

  case 76: /* tname: FLOAT  */
#line 801 "cdgram.y"
                        {
			Debug((stderr, "tname: FLOAT\n"));
			Debug((stderr, "\tFLOAT='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_FLOAT; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2356 "y.tab.c"
    break;

  case 77: /* tname: DOUBLE  */
#line 808 "cdgram.y"
                        {
			Debug((stderr, "tname: DOUBLE\n"));
			Debug((stderr, "\tDOUBLE='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_DOUBLE; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2366 "y.tab.c"
    break;

  case 78: /* tname: VOID  */
#line 815 "cdgram.y"
                        {
			Debug((stderr, "tname: VOID\n"));
			Debug((stderr, "\tVOID='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_VOID; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2376 "y.tab.c"
    break;

  case 79: /* mod_list: modifier mod_list1  */
#line 823 "cdgram.y"
                        {
			Debug((stderr, "mod_list: modifier mod_list1\n"));
			Debug((stderr, "\tmodifier='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\tmod_list1='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(" "),(yyvsp[0].dynstr),NullCP);
			}
#line 2387 "y.tab.c"
    break;

  case 80: /* mod_list: modifier  */
#line 831 "cdgram.y"
                        {
			Debug((stderr, "mod_list: modifier\n"));
			Debug((stderr, "\tmodifier='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2397 "y.tab.c"
    break;

  case 81: /* mod_list1: mod_list  */
#line 839 "cdgram.y"
                        {
			Debug((stderr, "mod_list1: mod_list\n"));
			Debug((stderr, "\tmod_list='%s'\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2407 "y.tab.c"
    break;

  case 82: /* mod_list1: CONSTVOLATILE  */
#line 846 "cdgram.y"
                        {
			Debug((stderr, "mod_list1: CONSTVOLATILE\n"));
			Debug((stderr, "\tCONSTVOLATILE='%s'\n", (yyvsp[0].dynstr)));
			if (PreANSIFlag)
				notsupported(" (Pre-ANSI Compiler)", (yyvsp[0].dynstr), NullCP);
			else if (RitchieFlag)
				notsupported(" (Ritchie Compiler)", (yyvsp[0].dynstr), NullCP);
			else if ((strcmp((yyvsp[0].dynstr), "noalias") == 0) && CplusplusFlag)
				unsupp((yyvsp[0].dynstr), NullCP);
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2423 "y.tab.c"
    break;

  case 83: /* modifier: UNSIGNED  */
#line 860 "cdgram.y"
                        {
			Debug((stderr, "modifier: UNSIGNED\n"));
			Debug((stderr, "\tUNSIGNED='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_UNSIGNED; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2433 "y.tab.c"
    break;

  case 84: /* modifier: SIGNED  */
#line 867 "cdgram.y"
                        {
			Debug((stderr, "modifier: SIGNED\n"));
			Debug((stderr, "\tSIGNED='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_SIGNED; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2443 "y.tab.c"
    break;

  case 85: /* modifier: LONG  */
#line 874 "cdgram.y"
                        {
			Debug((stderr, "modifier: LONG\n"));
			Debug((stderr, "\tLONG='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_LONG; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2453 "y.tab.c"
    break;

  case 86: /* modifier: SHORT  */
#line 881 "cdgram.y"
                        {
			Debug((stderr, "modifier: SHORT\n"));
			Debug((stderr, "\tSHORT='%s'\n", (yyvsp[0].dynstr)));
			modbits |= MB_SHORT; (yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2463 "y.tab.c"
    break;

  case 87: /* opt_constvol_list: CONSTVOLATILE opt_constvol_list  */
#line 889 "cdgram.y"
                        {
			Debug((stderr, "opt_constvol_list: CONSTVOLATILE opt_constvol_list\n"));
			Debug((stderr, "\tCONSTVOLATILE='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[0].dynstr)));
			if (PreANSIFlag)
				notsupported(" (Pre-ANSI Compiler)", (yyvsp[-1].dynstr), NullCP);
			else if (RitchieFlag)
				notsupported(" (Ritchie Compiler)", (yyvsp[-1].dynstr), NullCP);
			else if ((strcmp((yyvsp[-1].dynstr), "noalias") == 0) && CplusplusFlag)
				unsupp((yyvsp[-1].dynstr), NullCP);
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(strlen((yyvsp[0].dynstr)) ? " " : ""),(yyvsp[0].dynstr),NullCP);
			}
#line 2480 "y.tab.c"
    break;

  case 88: /* opt_constvol_list: %empty  */
#line 903 "cdgram.y"
                        {
			Debug((stderr, "opt_constvol_list: EMPTY\n"));
			(yyval.dynstr) = ds("");
			}
#line 2489 "y.tab.c"
    break;

  case 89: /* constvol_list: CONSTVOLATILE opt_constvol_list  */
#line 910 "cdgram.y"
                        {
			Debug((stderr, "constvol_list: CONSTVOLATILE opt_constvol_list\n"));
			Debug((stderr, "\tCONSTVOLATILE='%s'\n", (yyvsp[-1].dynstr)));
			Debug((stderr, "\topt_constvol_list='%s'\n", (yyvsp[0].dynstr)));
			if (PreANSIFlag)
				notsupported(" (Pre-ANSI Compiler)", (yyvsp[-1].dynstr), NullCP);
			else if (RitchieFlag)
				notsupported(" (Ritchie Compiler)", (yyvsp[-1].dynstr), NullCP);
			else if ((strcmp((yyvsp[-1].dynstr), "noalias") == 0) && CplusplusFlag)
				unsupp((yyvsp[-1].dynstr), NullCP);
			(yyval.dynstr) = cat((yyvsp[-1].dynstr),ds(strlen((yyvsp[0].dynstr)) ? " " : ""),(yyvsp[0].dynstr),NullCP);
			}
#line 2506 "y.tab.c"
    break;

  case 93: /* storage: STATIC  */
#line 928 "cdgram.y"
                        {
			Debug((stderr, "storage: AUTO,EXTERN,STATIC,REGISTER (%s)\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2515 "y.tab.c"
    break;

  case 94: /* opt_storage: storage  */
#line 935 "cdgram.y"
                        {
			Debug((stderr, "opt_storage: storage=%s\n", (yyvsp[0].dynstr)));
			(yyval.dynstr) = (yyvsp[0].dynstr);
			}
#line 2524 "y.tab.c"
    break;

  case 95: /* opt_storage: %empty  */
#line 941 "cdgram.y"
                        {
			Debug((stderr, "opt_storage: EMPTY\n"));
			(yyval.dynstr) = ds("");
			}
#line 2533 "y.tab.c"
    break;


#line 2537 "y.tab.c"

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

#line 946 "cdgram.y"

