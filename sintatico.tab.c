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
#line 3 "sintatico.y"

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern char* yytext;
extern void print_token();

extern char linha_buffer[];

void yyerror(const char *s);



#line 86 "sintatico.tab.c"

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

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_INC = 12,                       /* INC  */
  YYSYMBOL_DEC = 13,                       /* DEC  */
  YYSYMBOL_LOGICAL_AND = 14,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 15,                /* LOGICAL_OR  */
  YYSYMBOL_EQUAL = 16,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 17,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 18,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 19,             /* GREATER_EQUAL  */
  YYSYMBOL_R_SHIFT = 20,                   /* R_SHIFT  */
  YYSYMBOL_L_SHIFT = 21,                   /* L_SHIFT  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 23,              /* MINUS_ASSIGN  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 26,                  /* MULTIPLY  */
  YYSYMBOL_DIV = 27,                       /* DIV  */
  YYSYMBOL_REMAINDER = 28,                 /* REMAINDER  */
  YYSYMBOL_BITWISE_AND = 29,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_OR = 30,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_NOT = 31,               /* BITWISE_NOT  */
  YYSYMBOL_BITWISE_XOR = 32,               /* BITWISE_XOR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_LESS_THAN = 34,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 35,              /* GREATER_THAN  */
  YYSYMBOL_ASSIGN = 36,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_L_PAREN = 40,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 41,                   /* R_PAREN  */
  YYSYMBOL_L_CURLY_BRACKET = 42,           /* L_CURLY_BRACKET  */
  YYSYMBOL_R_CURLY_BRACKET = 43,           /* R_CURLY_BRACKET  */
  YYSYMBOL_L_SQUARE_BRACKET = 44,          /* L_SQUARE_BRACKET  */
  YYSYMBOL_R_SQUARE_BRACKET = 45,          /* R_SQUARE_BRACKET  */
  YYSYMBOL_TERNARY_CONDITIONAL = 46,       /* TERNARY_CONDITIONAL  */
  YYSYMBOL_NUMBER_SIGN = 47,               /* NUMBER_SIGN  */
  YYSYMBOL_POINTER = 48,                   /* POINTER  */
  YYSYMBOL_PRINTF = 49,                    /* PRINTF  */
  YYSYMBOL_SCANF = 50,                     /* SCANF  */
  YYSYMBOL_DEFINE = 51,                    /* DEFINE  */
  YYSYMBOL_EXIT = 52,                      /* EXIT  */
  YYSYMBOL_IDENTIFIER = 53,                /* IDENTIFIER  */
  YYSYMBOL_NUM_HEXA = 54,                  /* NUM_HEXA  */
  YYSYMBOL_NUM_OCTAL = 55,                 /* NUM_OCTAL  */
  YYSYMBOL_NUM_INTEGER = 56,               /* NUM_INTEGER  */
  YYSYMBOL_CHARACTER = 57,                 /* CHARACTER  */
  YYSYMBOL_STRING = 58,                    /* STRING  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_SWITCH = 60,                    /* SWITCH  */
  YYSYMBOL_CASE = 61,                      /* CASE  */
  YYSYMBOL_DEFAULT = 62,                   /* DEFAULT  */
  YYSYMBOL_TYPEDEF = 63,                   /* TYPEDEF  */
  YYSYMBOL_STRUCT = 64,                    /* STRUCT  */
  YYSYMBOL_LOWER_THAN_ELSE = 65,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_UNARY_MINUS = 66,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 67,                /* UNARY_PLUS  */
  YYSYMBOL_POINTER_REF = 68,               /* POINTER_REF  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_Programa = 70,                  /* Programa  */
  YYSYMBOL_Declaracoes = 71,               /* Declaracoes  */
  YYSYMBOL_Funcao = 72,                    /* Funcao  */
  YYSYMBOL_Ponteiro = 73,                  /* Ponteiro  */
  YYSYMBOL_ListaDeclaracoes = 74,          /* ListaDeclaracoes  */
  YYSYMBOL_DeclaracaoVariaveis = 75,       /* DeclaracaoVariaveis  */
  YYSYMBOL_LoopDeclaracaoVariaveis = 76,   /* LoopDeclaracaoVariaveis  */
  YYSYMBOL_IgualExpressaoAtribuicao = 77,  /* IgualExpressaoAtribuicao  */
  YYSYMBOL_LoopVirgulaDeclaracaoVariaveis = 78, /* LoopVirgulaDeclaracaoVariaveis  */
  YYSYMBOL_DeclaracaoPrototipo = 79,       /* DeclaracaoPrototipo  */
  YYSYMBOL_Parametros = 80,                /* Parametros  */
  YYSYMBOL_LoopParametro = 81,             /* LoopParametro  */
  YYSYMBOL_LoopVirgula = 82,               /* LoopVirgula  */
  YYSYMBOL_LoopExpressaoColchetes = 83,    /* LoopExpressaoColchetes  */
  YYSYMBOL_Tipo = 84,                      /* Tipo  */
  YYSYMBOL_Bloco = 85,                     /* Bloco  */
  YYSYMBOL_Comandos = 86,                  /* Comandos  */
  YYSYMBOL_ListaComandos = 87,             /* ListaComandos  */
  YYSYMBOL_VirgulaExpressao = 88,          /* VirgulaExpressao  */
  YYSYMBOL_Expressao = 89,                 /* Expressao  */
  YYSYMBOL_ExpressaoOpcional = 90,         /* ExpressaoOpcional  */
  YYSYMBOL_ExpressaoAtribuicao = 91,       /* ExpressaoAtribuicao  */
  YYSYMBOL_OperadoresIgual = 92,           /* OperadoresIgual  */
  YYSYMBOL_ExpressaoCondicional = 93,      /* ExpressaoCondicional  */
  YYSYMBOL_ExpressaoORLogico = 94,         /* ExpressaoORLogico  */
  YYSYMBOL_ExpressaoANDLogico = 95,        /* ExpressaoANDLogico  */
  YYSYMBOL_ExpressaoOR = 96,               /* ExpressaoOR  */
  YYSYMBOL_ExpressaoXOR = 97,              /* ExpressaoXOR  */
  YYSYMBOL_ExpressaoAND = 98,              /* ExpressaoAND  */
  YYSYMBOL_ExpressaoIgualdade = 99,        /* ExpressaoIgualdade  */
  YYSYMBOL_IgualOuDiferente = 100,         /* IgualOuDiferente  */
  YYSYMBOL_ExpressaoRelacional = 101,      /* ExpressaoRelacional  */
  YYSYMBOL_MaiorMenor = 102,               /* MaiorMenor  */
  YYSYMBOL_ExpressaoShift = 103,           /* ExpressaoShift  */
  YYSYMBOL_ShiftEsqDir = 104,              /* ShiftEsqDir  */
  YYSYMBOL_ExpressaoAditiva = 105,         /* ExpressaoAditiva  */
  YYSYMBOL_MaisOuMenos = 106,              /* MaisOuMenos  */
  YYSYMBOL_ExpressaoMultiplicativa = 107,  /* ExpressaoMultiplicativa  */
  YYSYMBOL_DivMultResto = 108,             /* DivMultResto  */
  YYSYMBOL_ExpressaoCast = 109,            /* ExpressaoCast  */
  YYSYMBOL_ExpressaoUnaria = 110,          /* ExpressaoUnaria  */
  YYSYMBOL_OperadoresUnarios = 111,        /* OperadoresUnarios  */
  YYSYMBOL_ExpressaoPosFixa = 112,         /* ExpressaoPosFixa  */
  YYSYMBOL_DecisaoExpressaoPosFixa = 113,  /* DecisaoExpressaoPosFixa  */
  YYSYMBOL_VirgulaExpressaoAtribuicao = 114, /* VirgulaExpressaoAtribuicao  */
  YYSYMBOL_ExpressaoPrimaria = 115,        /* ExpressaoPrimaria  */
  YYSYMBOL_Numero = 116                    /* Numero  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   104,   105,   108,   109,   110,   111,   114,
     115,   118,   119,   122,   123,   126,   127,   130,   133,   134,
     137,   138,   141,   142,   145,   146,   147,   150,   151,   154,
     155,   158,   159,   160,   163,   164,   165,   168,   169,   172,
     173,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   196,   197,
     200,   201,   204,   205,   208,   209,   212,   213,   214,   217,
     218,   221,   222,   225,   226,   229,   230,   233,   234,   237,
     238,   241,   242,   245,   246,   249,   250,   253,   254,   255,
     256,   259,   260,   263,   264,   267,   268,   271,   272,   275,
     276,   279,   280,   281,   284,   285,   288,   289,   290,   291,
     294,   295,   296,   297,   298,   299,   302,   303,   306,   307,
     308,   309,   310,   311,   314,   315,   318,   319,   320,   321,
     322,   323,   326,   327,   328
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "CHAR",
  "RETURN", "DO", "WHILE", "FOR", "IF", "ELSE", "INC", "DEC",
  "LOGICAL_AND", "LOGICAL_OR", "EQUAL", "NOT_EQUAL", "LESS_EQUAL",
  "GREATER_EQUAL", "R_SHIFT", "L_SHIFT", "ADD_ASSIGN", "MINUS_ASSIGN",
  "PLUS", "MINUS", "MULTIPLY", "DIV", "REMAINDER", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_NOT", "BITWISE_XOR", "NOT", "LESS_THAN",
  "GREATER_THAN", "ASSIGN", "SEMICOLON", "COMMA", "COLON", "L_PAREN",
  "R_PAREN", "L_CURLY_BRACKET", "R_CURLY_BRACKET", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "TERNARY_CONDITIONAL", "NUMBER_SIGN", "POINTER",
  "PRINTF", "SCANF", "DEFINE", "EXIT", "IDENTIFIER", "NUM_HEXA",
  "NUM_OCTAL", "NUM_INTEGER", "CHARACTER", "STRING", "BREAK", "SWITCH",
  "CASE", "DEFAULT", "TYPEDEF", "STRUCT", "LOWER_THAN_ELSE", "UNARY_MINUS",
  "UNARY_PLUS", "POINTER_REF", "$accept", "Programa", "Declaracoes",
  "Funcao", "Ponteiro", "ListaDeclaracoes", "DeclaracaoVariaveis",
  "LoopDeclaracaoVariaveis", "IgualExpressaoAtribuicao",
  "LoopVirgulaDeclaracaoVariaveis", "DeclaracaoPrototipo", "Parametros",
  "LoopParametro", "LoopVirgula", "LoopExpressaoColchetes", "Tipo",
  "Bloco", "Comandos", "ListaComandos", "VirgulaExpressao", "Expressao",
  "ExpressaoOpcional", "ExpressaoAtribuicao", "OperadoresIgual",
  "ExpressaoCondicional", "ExpressaoORLogico", "ExpressaoANDLogico",
  "ExpressaoOR", "ExpressaoXOR", "ExpressaoAND", "ExpressaoIgualdade",
  "IgualOuDiferente", "ExpressaoRelacional", "MaiorMenor",
  "ExpressaoShift", "ShiftEsqDir", "ExpressaoAditiva", "MaisOuMenos",
  "ExpressaoMultiplicativa", "DivMultResto", "ExpressaoCast",
  "ExpressaoUnaria", "OperadoresUnarios", "ExpressaoPosFixa",
  "DecisaoExpressaoPosFixa", "VirgulaExpressaoAtribuicao",
  "ExpressaoPrimaria", "Numero", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-173)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,  -173,  -173,  -173,   -45,    10,    13,    13,  -173,  -173,
      11,    15,  -173,  -173,  -173,    -3,    54,    36,    78,   367,
    -173,  -173,    85,  -173,  -173,   542,   542,  -173,  -173,  -173,
    -173,  -173,  -173,    87,  -173,  -173,  -173,  -173,  -173,  -173,
      79,  -173,  -173,   -11,   105,    94,    96,   103,    34,    75,
      81,    71,   111,  -173,     4,   577,   118,  -173,  -173,   113,
      20,   402,     6,   116,   437,  -173,  -173,   120,    54,    31,
     577,   577,   577,   577,   577,   577,   577,  -173,  -173,   577,
    -173,  -173,  -173,  -173,   577,  -173,  -173,   577,  -173,  -173,
     577,  -173,  -173,  -173,   577,  -173,  -173,  -173,   577,  -173,
    -173,  -173,  -173,   262,   577,  -173,  -173,   124,  -173,   127,
      29,   112,   -16,  -173,  -173,   151,   577,   133,  -173,   131,
    -173,  -173,   105,    69,    94,    96,   103,    34,    75,    81,
      71,   111,  -173,  -173,   132,  -173,  -173,    43,    -6,  -173,
    -173,  -173,   130,  -173,   136,   169,   151,    11,  -173,    54,
    -173,   577,   577,  -173,   577,  -173,  -173,   136,  -173,   147,
     297,   143,   146,   148,   149,  -173,   227,   150,   152,   159,
    -173,   144,   169,   122,  -173,   138,  -173,  -173,  -173,  -173,
     163,  -173,   160,    79,   167,   197,   472,   332,   507,     9,
     164,   155,   156,   577,  -173,  -173,  -173,   136,   151,  -173,
    -173,  -173,   168,   174,    65,   175,   173,   176,    95,  -173,
    -173,   182,   191,   108,  -173,   577,   143,   143,   143,   577,
     143,   143,   577,   189,   202,   195,   110,  -173,  -173,  -173,
     201,  -173,   230,    79,   205,   190,  -173,   207,   577,   143,
    -173,   204,  -173,   206,  -173,   209,   143,  -173,  -173
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    36,    34,    35,     0,     0,     4,     4,     7,     8,
       0,     0,     1,     2,     3,     0,    12,     0,     0,     0,
      16,    11,     0,    15,     6,     0,     0,   112,   113,   111,
     110,   114,   115,     0,   126,   133,   134,   132,   128,   129,
       5,    60,    64,    69,    71,    73,    75,    77,    79,    81,
      85,    91,    95,    99,   104,     0,   106,   116,   127,     0,
       0,     0,     0,    19,     0,   107,   108,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    83,     0,
      88,    90,    87,    89,     0,    94,    93,     0,    97,    98,
       0,   101,   102,   103,     0,    67,    68,    66,     0,   109,
     104,   119,   120,     0,     0,   117,    23,     0,    25,     0,
       0,     0,     0,    10,    22,    14,     0,    21,   131,     0,
     130,    61,    72,     0,    74,    76,    78,    80,    82,    86,
      92,    96,   100,    65,     0,   122,   124,     0,     0,    26,
      24,    28,     0,    32,    33,     0,    14,     0,    18,    12,
      17,     0,     0,   123,     0,   121,   118,    33,    31,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
      56,     0,     0,     0,    13,     0,    20,   105,    70,   125,
      30,    57,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    39,    54,    33,     0,    27,
      53,    52,     0,     0,     0,     0,     0,     0,     0,    38,
      37,    59,     0,     0,    29,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,    46,    45,    48,
       0,    44,    42,    58,     0,     0,    51,     0,    63,     0,
      49,     0,    41,     0,    43,     0,     0,    50,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,   157,  -173,  -173,    -5,   102,  -102,   100,  -173,  -173,
    -173,  -173,    52,  -173,  -124,   -32,  -142,  -101,  -173,  -173,
     -19,  -172,   -67,  -173,   107,  -173,   183,   184,   181,   186,
     192,  -173,   187,  -173,   178,  -173,   185,  -173,   188,  -173,
     -53,   -17,  -173,  -173,  -173,  -173,  -173,  -173
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,   175,   145,     8,    18,   117,   150,
       9,    62,   109,   199,    63,    10,   170,   171,   172,   223,
     183,   184,    41,    98,    42,    43,    44,    45,    46,    47,
      48,    79,    49,    84,    50,    87,    51,    90,    52,    94,
      53,    54,    55,    56,   105,   137,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    68,    99,   121,    71,    17,    11,   113,    65,    66,
      12,    21,    15,   146,    69,   206,     1,     2,     3,   185,
     158,   107,    70,     1,     2,     3,    95,    96,   110,   144,
     141,   133,    70,   180,    20,    72,   136,    16,   100,   156,
      97,   132,   112,   114,   146,    69,   181,   230,   115,   148,
      77,    78,   209,   123,   100,    16,   100,   100,   100,   100,
       4,   108,   100,   119,   -12,   190,   243,   100,    19,    70,
     100,   195,   120,   100,   227,   228,   229,   100,   231,   232,
      16,   154,   -12,   147,   155,   138,    59,   179,    67,    22,
       1,     2,     3,    80,    81,    88,    89,   244,   177,    25,
      26,    85,    86,    70,   248,   142,   217,    70,   152,    82,
      83,    27,    28,    29,   147,    23,    30,    70,    31,    73,
      32,   -33,   -33,   -33,    74,    60,   173,    33,    75,    61,
     101,   102,    76,    70,   100,   100,   221,    91,    92,    93,
      34,    35,    36,    37,    38,    39,    70,   173,    70,   225,
     106,   237,   116,   173,     1,     2,     3,   143,   103,   196,
      70,   118,   104,    13,    14,   139,   110,   204,   140,   208,
     159,   149,   151,   153,   213,   160,   161,   162,   163,   164,
      61,    25,    26,   157,   181,   166,   186,   194,   187,   188,
     191,   197,   192,    27,    28,    29,   226,   200,    30,   193,
      31,   198,    32,   233,   201,   202,   165,   210,   215,    33,
     219,   166,   -40,   211,   212,   216,   218,   220,   167,   168,
     222,   169,    34,    35,    36,    37,    38,    39,   189,   224,
     234,   235,   236,   160,   161,   162,   163,   164,   238,    25,
      26,   239,   240,   241,   242,   245,   247,   246,   174,   176,
     214,    27,    28,    29,   122,   125,    30,   124,    31,   178,
      32,   126,   129,   134,   165,     0,   128,    33,   127,   166,
     -40,     0,   130,     0,    25,    26,   167,   168,   131,   169,
      34,    35,    36,    37,    38,    39,    27,    28,    29,     0,
       0,    30,     0,    31,     0,    32,     0,     0,   182,     0,
       0,     0,    33,   135,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    27,    28,    29,     0,     0,    30,     0,    31,     0,
      32,     0,     0,   205,   -63,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    27,    28,    29,     0,
       0,    30,     0,    31,     0,    32,     0,     0,    24,   -63,
       0,     0,    33,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    27,    28,    29,     0,     0,    30,     0,    31,     0,
      32,     0,     0,   111,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    27,    28,    29,     0,
       0,    30,     0,    31,     0,    32,     0,     0,    67,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    27,    28,    29,     0,     0,    30,     0,    31,     0,
      32,     0,     0,   203,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    27,    28,    29,     0,
       0,    30,     0,    31,     0,    32,     0,     0,   207,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    27,    28,    29,     0,     0,    30,     0,    31,     0,
      32,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    27,    28,    29,     0,
       0,    30,     0,    31,     0,    32,     0,     0,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    27,    28,    29,     0,     0,    30,     0,    31,     0,
      32,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      19,    33,    55,    70,    15,    10,    51,     1,    25,    26,
       0,    16,     1,   115,    33,   187,     3,     4,     5,   161,
     144,     1,    38,     3,     4,     5,    22,    23,    60,    45,
       1,    98,    38,   157,    37,    46,   103,    26,    55,    45,
      36,    94,    61,    37,   146,    64,    37,   219,    42,   116,
      16,    17,    43,    72,    71,    26,    73,    74,    75,    76,
      47,    41,    79,    68,    53,   166,   238,    84,    53,    38,
      87,   172,    41,    90,   216,   217,   218,    94,   220,   221,
      26,    38,    53,   115,    41,   104,     1,   154,     1,    53,
       3,     4,     5,    18,    19,    24,    25,   239,   151,    12,
      13,    20,    21,    38,   246,   110,    41,    38,    39,    34,
      35,    24,    25,    26,   146,    37,    29,    38,    31,    14,
      33,    36,    37,    38,    30,    40,   145,    40,    32,    44,
      12,    13,    29,    38,   151,   152,    41,    26,    27,    28,
      53,    54,    55,    56,    57,    58,    38,   166,    38,    41,
      37,    41,    36,   172,     3,     4,     5,    45,    40,    37,
      38,    41,    44,     6,     7,    41,   198,   186,    41,   188,
       1,    38,    41,    41,   193,     6,     7,     8,     9,    10,
      44,    12,    13,    53,    37,    42,    40,    43,    40,    40,
      40,    53,    40,    24,    25,    26,   215,    37,    29,    40,
      31,    38,    33,   222,    37,     8,    37,    43,    40,    40,
      37,    42,    43,    58,    58,    41,    41,    41,    49,    50,
      38,    52,    53,    54,    55,    56,    57,    58,     1,    38,
      41,    29,    37,     6,     7,     8,     9,    10,    37,    12,
      13,    11,    37,    53,    37,    41,    37,    41,   146,   149,
     198,    24,    25,    26,    71,    74,    29,    73,    31,   152,
      33,    75,    84,     1,    37,    -1,    79,    40,    76,    42,
      43,    -1,    87,    -1,    12,    13,    49,    50,    90,    52,
      53,    54,    55,    56,    57,    58,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    -1,     1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,     1,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    -1,     1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,     1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    -1,     1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,     1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    -1,     1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    47,    70,    71,    72,    75,    79,
      84,    51,     0,    70,    70,     1,    26,    73,    76,    53,
      37,    73,    53,    37,     1,    12,    13,    24,    25,    26,
      29,    31,    33,    40,    53,    54,    55,    56,    57,    58,
      89,    91,    93,    94,    95,    96,    97,    98,    99,   101,
     103,   105,   107,   109,   110,   111,   112,   115,   116,     1,
      40,    44,    80,    83,    40,   110,   110,     1,    84,    89,
      38,    15,    46,    14,    30,    32,    29,    16,    17,   100,
      18,    19,    34,    35,   102,    20,    21,   104,    24,    25,
     106,    26,    27,    28,   108,    22,    23,    36,    92,   109,
     110,    12,    13,    40,    44,   113,    37,     1,    41,    81,
      84,     1,    89,     1,    37,    42,    36,    77,    41,    73,
      41,    91,    95,    89,    96,    97,    98,    99,   101,   103,
     105,   107,   109,    91,     1,    41,    91,   114,    89,    41,
      41,     1,    73,    45,    45,    74,    75,    84,    91,    38,
      78,    41,    39,    41,    38,    41,    45,    53,    83,     1,
       6,     7,     8,     9,    10,    37,    42,    49,    50,    52,
      85,    86,    87,    89,    74,    73,    76,   109,    93,    91,
      83,    37,     1,    89,    90,    85,    40,    40,    40,     1,
      86,    40,    40,    40,    43,    86,    37,    53,    38,    82,
      37,    37,     8,     1,    89,     1,    90,     1,    89,    43,
      43,    58,    58,    89,    81,    40,    41,    41,    41,    37,
      41,    41,    38,    88,    38,    41,    89,    85,    85,    85,
      90,    85,    85,    89,    41,    29,    37,    41,    37,    11,
      37,    53,    37,    90,    85,    41,    41,    37,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   116,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     4,     4,     1,     1,     8,
       5,     2,     0,     2,     0,     3,     3,     5,     2,     0,
       2,     0,     5,     5,     3,     2,     3,     5,     2,     2,
       0,     4,     3,     0,     1,     1,     1,     3,     3,     2,
       0,     7,     5,     7,     5,     5,     5,     9,     5,     6,
       8,     5,     3,     3,     2,     1,     1,     2,     2,     0,
       1,     3,     1,     0,     1,     3,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     3,     2,     3,     1,     3,     1,     1,     1,     1,
       3,     3,     1,     1,     1
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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6: /* Declaracoes: NUMBER_SIGN DEFINE IDENTIFIER error  */
#line 109 "sintatico.y"
                                                  { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1568 "sintatico.tab.c"
    break;

  case 10: /* Funcao: Tipo Ponteiro IDENTIFIER Parametros error  */
#line 115 "sintatico.y"
                                                  { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1574 "sintatico.tab.c"
    break;

  case 16: /* DeclaracaoVariaveis: Tipo error SEMICOLON  */
#line 127 "sintatico.y"
                                          { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1580 "sintatico.tab.c"
    break;

  case 23: /* DeclaracaoPrototipo: Tipo Ponteiro IDENTIFIER error SEMICOLON  */
#line 142 "sintatico.y"
                                                              { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1586 "sintatico.tab.c"
    break;

  case 26: /* Parametros: L_PAREN error R_PAREN  */
#line 147 "sintatico.y"
                                  { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1592 "sintatico.tab.c"
    break;

  case 28: /* LoopParametro: Tipo error  */
#line 151 "sintatico.y"
                          { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1598 "sintatico.tab.c"
    break;

  case 32: /* LoopExpressaoColchetes: L_SQUARE_BRACKET error R_SQUARE_BRACKET  */
#line 159 "sintatico.y"
                                                                  { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1604 "sintatico.tab.c"
    break;

  case 38: /* Bloco: L_CURLY_BRACKET error R_CURLY_BRACKET  */
#line 169 "sintatico.y"
                                             { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1610 "sintatico.tab.c"
    break;

  case 44: /* ListaComandos: IF L_PAREN error R_PAREN Bloco  */
#line 179 "sintatico.y"
                                              { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1616 "sintatico.tab.c"
    break;

  case 46: /* ListaComandos: WHILE L_PAREN error R_PAREN Bloco  */
#line 181 "sintatico.y"
                                                 { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1622 "sintatico.tab.c"
    break;

  case 48: /* ListaComandos: FOR L_PAREN error R_PAREN Bloco  */
#line 183 "sintatico.y"
                                               { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1628 "sintatico.tab.c"
    break;

  case 53: /* ListaComandos: RETURN error SEMICOLON  */
#line 188 "sintatico.y"
                                      { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1634 "sintatico.tab.c"
    break;

  case 57: /* ListaComandos: error SEMICOLON  */
#line 192 "sintatico.y"
                               { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1640 "sintatico.tab.c"
    break;

  case 123: /* DecisaoExpressaoPosFixa: L_PAREN error R_PAREN  */
#line 311 "sintatico.y"
                                                { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1646 "sintatico.tab.c"
    break;

  case 131: /* ExpressaoPrimaria: L_PAREN error R_PAREN  */
#line 323 "sintatico.y"
                                         { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
#line 1652 "sintatico.tab.c"
    break;


#line 1656 "sintatico.tab.c"

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
  *++yylsp = yyloc;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 331 "sintatico.y"


void report_error(const char* s)
{
    print_token("error:syntax:%d:%d: %s", 
        yylloc.line,
        yylloc.column,
        yytext);

    print_token("%s", linha_buffer);

    for(int i = 1; i < yylloc.column; i++)
        print_token(" ");

    print_token("^");
}

void yyerror(const char *s)
{
    report_error(s);
    exit(1);
}

int main(int argc, char** argv)
{
    if (yyparse() == 0) {
        print_token("SUCCESSFUL COMPILATION.");
    }
    return 0;
}
