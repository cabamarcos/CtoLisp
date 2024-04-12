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
#line 4 "trad5.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
} t_attr ;

#define YYSTYPE t_attr

char memoria [64] ;       // memoria para las id de las funciones
int variables[100];         // arreglo para almacenar los valores de las variables
int num_variables = 0;      // número de variables


#line 104 "trad5.tab.c"

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
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    PUTS = 264,                    /* PUTS  */
    PRINTF = 265,                  /* PRINTF  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    FOR = 268,                     /* FOR  */
    RETURN = 269,                  /* RETURN  */
    SWAP = 270,                    /* SWAP  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    EQUAL = 273,                   /* EQUAL  */
    NOT_EQUAL = 274,               /* NOT_EQUAL  */
    LESS_EQUAL = 275,              /* LESS_EQUAL  */
    GREATER_EQUAL = 276,           /* GREATER_EQUAL  */
    UNARY_SIGN = 277               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_PUTS = 9,                       /* PUTS  */
  YYSYMBOL_PRINTF = 10,                    /* PRINTF  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_SWAP = 15,                      /* SWAP  */
  YYSYMBOL_16_ = 16,                       /* '='  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_EQUAL = 19,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 20,                 /* NOT_EQUAL  */
  YYSYMBOL_21_ = 21,                       /* '<'  */
  YYSYMBOL_22_ = 22,                       /* '>'  */
  YYSYMBOL_LESS_EQUAL = 23,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 24,             /* GREATER_EQUAL  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 30,                /* UNARY_SIGN  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* ']'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_axioma = 40,                    /* axioma  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_r_expr = 43,                    /* r_expr  */
  YYSYMBOL_sentencia_var_globales = 44,    /* sentencia_var_globales  */
  YYSYMBOL_sentencia_dec_funciones = 45,   /* sentencia_dec_funciones  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_sentencia_arg = 47,             /* sentencia_arg  */
  YYSYMBOL_sentencia_main = 48,            /* sentencia_main  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_sentencia_var_locales = 50,     /* sentencia_var_locales  */
  YYSYMBOL_sentencia_r = 51,               /* sentencia_r  */
  YYSYMBOL_sentencia_estructura_control = 52, /* sentencia_estructura_control  */
  YYSYMBOL_sentencia_if = 53,              /* sentencia_if  */
  YYSYMBOL_incremento_decremento = 54,     /* incremento_decremento  */
  YYSYMBOL_sentencia = 55,                 /* sentencia  */
  YYSYMBOL_sentencia_declaraciones = 56,   /* sentencia_declaraciones  */
  YYSYMBOL_sentencia_declaracion_sucesion = 57, /* sentencia_declaracion_sucesion  */
  YYSYMBOL_sentencia_asignaciones = 58,    /* sentencia_asignaciones  */
  YYSYMBOL_sentencia_asignacion_sucesion = 59, /* sentencia_asignacion_sucesion  */
  YYSYMBOL_asignacion_sucesion = 60,       /* asignacion_sucesion  */
  YYSYMBOL_expresion_sucesion_imprimir = 61, /* expresion_sucesion_imprimir  */
  YYSYMBOL_expresion_sucesion = 62,        /* expresion_sucesion  */
  YYSYMBOL_expresion = 63,                 /* expresion  */
  YYSYMBOL_expresion_operacion = 64,       /* expresion_operacion  */
  YYSYMBOL_expresion_control = 65,         /* expresion_control  */
  YYSYMBOL_termino = 66,                   /* termino  */
  YYSYMBOL_operando = 67                   /* operando  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   636

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
       2,     2,     2,     2,     2,     2,     2,    29,     2,     2,
      35,    36,    27,    25,    32,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      21,    16,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    17,    18,    19,    20,    23,    24,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   103,   106,   106,   109,   113,   114,   128,
     131,   134,   137,   140,   143,   157,   157,   160,   177,   179,
     182,   197,   197,   210,   212,   228,   231,   234,   237,   240,
     243,   260,   263,   266,   269,   272,   288,   291,   294,   297,
     311,   314,   329,   332,   335,   338,   341,   344,   359,   362,
     365,   368,   371,   374,   388,   391,   394,   397,   400,   403,
     418,   421,   424,   427,   430,   433,   448,   451,   454,   457,
     460,   463,   478,   481,   496,   498,   513,   515,   529,   531,
     547,   549,   551,   553,   556,   559,   562,   565,   568,   571,
     574,   577,   580,   598,   600,   602,   604,   606,   608,   610,
     612,   614,   616,   618,   620,   622,   624,   626,   640,   641,
     643,   657,   659,   661,   663
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "MAIN", "WHILE", "PUTS", "PRINTF", "IF", "ELSE",
  "FOR", "RETURN", "SWAP", "'='", "OR", "AND", "EQUAL", "NOT_EQUAL", "'<'",
  "'>'", "LESS_EQUAL", "GREATER_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY_SIGN", "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "$accept", "axioma", "$@1", "$@2", "r_expr", "sentencia_var_globales",
  "sentencia_dec_funciones", "$@3", "sentencia_arg", "sentencia_main",
  "$@4", "sentencia_var_locales", "sentencia_r",
  "sentencia_estructura_control", "sentencia_if", "incremento_decremento",
  "sentencia", "sentencia_declaraciones", "sentencia_declaracion_sucesion",
  "sentencia_asignaciones", "sentencia_asignacion_sucesion",
  "asignacion_sucesion", "expresion_sucesion_imprimir",
  "expresion_sucesion", "expresion", "expresion_operacion",
  "expresion_control", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     152,  -220,    71,  -220,     3,    -7,  -220,  -220,    -3,   -10,
      11,    38,  -220,  -220,   152,   116,    62,    91,    62,   116,
      79,   152,  -220,  -220,   120,   108,  -220,   143,    22,    22,
      62,   354,  -220,  -220,  -220,    -4,  -220,   233,   112,   160,
    -220,    95,   161,    62,    58,   180,  -220,  -220,   190,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      91,    62,    91,    62,   182,   183,   216,   116,   216,   251,
    -220,   186,   370,  -220,   174,   582,   602,   602,   607,   607,
      31,    31,  -220,  -220,  -220,  -220,   386,  -220,   269,    91,
     210,   221,    68,   196,  -220,    68,  -220,  -220,    62,    91,
     212,  -220,   225,    97,    90,   201,   202,   208,   211,   222,
      62,   216,   207,    68,   217,  -220,   216,   209,  -220,  -220,
      62,   224,   232,    62,   260,    62,    62,   225,    62,    64,
     115,   259,   268,   115,     5,  -220,    68,  -220,  -220,    68,
    -220,  -220,   402,   225,   228,   418,   110,  -220,   287,   434,
     265,   305,  -220,   239,   151,   539,   246,   247,   252,   256,
     119,   262,   270,   261,  -220,    91,  -220,  -220,   260,    62,
     260,    62,   278,    91,    81,   284,  -220,    66,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,   274,  -220,    62,   280,   115,   115,    68,  -220,  -220,
     450,  -220,   323,   260,  -220,   286,   267,    62,   -20,   283,
     213,   334,   507,   519,   557,   569,   552,   552,   118,   154,
      72,   100,   102,    68,   292,   466,   608,   289,   298,  -220,
     260,   319,  -220,   225,   332,   482,   103,   299,  -220,    62,
      68,   300,   315,   343,   343,  -220,    62,  -220,   326,    91,
    -220,  -220,  -220,   352,    68,   350,   331,   333,   498,   225,
    -220,   340,  -220,   364,   341,   347,   260,   349,   608,   135,
      68,    68,  -220,  -220,   355,   391,   397,   363,   371,  -220,
    -220,  -220,  -220,  -220
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    15,     0,    21,     0,     0,     4,     6,     0,    12,
       0,     0,     1,     2,     7,    18,     0,     0,     0,    18,
       0,     7,     8,     5,     0,     0,   112,   111,     0,     0,
       0,    10,    79,    78,   108,    69,    11,     0,     0,     0,
       3,    20,     0,     0,     0,   111,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    23,    18,    23,     0,
      86,     0,    77,   113,    92,    91,    87,    88,    89,    90,
      80,    81,    82,    83,    84,     9,    67,    68,     0,     0,
       0,     0,     0,     0,    19,     0,   114,    85,     0,     0,
       0,    13,     0,    51,     0,     0,     0,     0,     0,     0,
       0,    23,     0,    28,     0,    46,    23,     0,    76,    66,
       0,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    22,    27,    26,
      24,    16,    71,     0,     0,    49,    57,    50,     0,    61,
       0,     0,    45,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,    72,    17,     0,     0,
       0,     0,    53,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    30,    70,    48,
      55,    56,     0,     0,    60,     0,     0,     0,    86,     0,
      92,    91,    87,    88,    89,    90,    97,    98,    80,    81,
      82,    83,    84,     0,     0,    75,     0,     0,     0,    29,
       0,     0,    52,     0,     0,    63,    85,     0,    42,     0,
      38,     0,     0,     0,     0,    54,     0,    64,     0,     0,
      31,    74,    39,    32,    36,     0,     0,     0,    59,     0,
      62,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    65,     0,     0,     0,     0,     0,    33,
      40,    41,    34,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,   410,  -220,  -220,   395,  -220,  -220,  -220,   -15,  -220,
    -220,   -60,   -65,  -219,   149,   181,  -213,   307,  -150,   308,
     -45,  -122,   187,   -79,   -16,  -220,  -132,  -220,   159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    22,    21,    14,    23,     5,     6,     8,    25,     7,
      11,    92,   112,   113,   241,   256,   114,    93,   147,   115,
      36,   122,   224,    71,    72,    32,   156,    33,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   159,    37,    12,    38,   150,    16,   240,    95,   160,
      91,  -107,    61,   242,    48,    85,  -107,    87,   199,   118,
     201,   166,    17,    18,    13,    26,    45,    69,    62,    63,
     117,   135,    15,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   101,    86,    19,    88,   138,   240,
     153,   136,    94,   232,   119,   242,   140,    30,    57,    58,
      59,    26,    27,   227,   228,    26,    27,    26,    27,    26,
      27,   163,   104,    20,   164,     9,   105,   106,   107,   108,
     245,   109,   110,    28,    29,   205,    10,    28,    29,    28,
      29,    28,    29,    30,    70,    35,   206,    30,   209,    30,
     152,    30,   208,  -103,   142,   111,   126,   145,  -103,   148,
     149,   247,   151,   123,   155,    39,   272,   155,    26,   154,
     198,    24,   127,   128,    41,   129,   169,    67,   204,   124,
     125,  -104,   229,  -105,  -106,   126,  -104,   267,  -105,  -106,
      28,    29,   170,   171,    42,    57,    58,    59,    65,  -101,
      30,   127,   128,   200,  -101,   202,     1,     2,   237,     3,
     275,   276,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   252,    43,   225,    44,   155,
     155,    57,    58,    59,    43,  -102,   177,    46,    47,   262,
    -102,   235,    50,    51,    52,    53,    54,    66,    68,    55,
      56,    57,    58,    59,   260,   277,   278,    49,    50,    51,
      52,    53,    54,    43,    89,    55,    56,    57,    58,    59,
      90,    91,    97,   225,   102,   103,    73,   116,   120,   121,
     258,    50,    51,    52,    53,    54,   130,   131,    55,    56,
      57,    58,    59,   132,  -100,   137,   133,   141,   139,  -100,
      49,    50,    51,    52,    53,    54,   143,   134,    55,    56,
      57,    58,    59,   144,   146,   157,   167,    64,    49,    50,
      51,    52,    53,    54,   158,   176,    55,    56,    57,    58,
      59,   174,   191,   192,   193,    96,    49,    50,    51,    52,
      53,    54,   194,   195,    55,    56,    57,    58,    59,   197,
     207,   196,   234,   100,    49,    50,    51,    52,    53,    54,
     203,   223,    55,    56,    57,    58,    59,   226,   233,   236,
     243,   172,    49,    50,    51,    52,    53,    54,   238,   244,
      55,    56,    57,    58,    59,   246,   248,   250,   253,   175,
      49,    50,    51,    52,    53,    54,   254,   255,    55,    56,
      57,    58,    59,    51,    52,    53,    54,   231,   259,    55,
      56,    57,    58,    59,   261,   -99,   263,   264,   269,   265,
     -99,    49,    50,    51,    52,    53,    54,   268,   270,    55,
      56,    57,    58,    59,   271,   273,    60,    49,    50,    51,
      52,    53,    54,   279,   280,    55,    56,    57,    58,    59,
     281,   282,    98,    49,    50,    51,    52,    53,    54,   283,
       4,    55,    56,    57,    58,    59,    40,   274,    99,    49,
      50,    51,    52,    53,    54,   257,   251,    55,    56,    57,
      58,    59,     0,     0,   165,    49,    50,    51,    52,    53,
      54,   161,   162,    55,    56,    57,    58,    59,     0,     0,
     168,    49,    50,    51,    52,    53,    54,     0,     0,    55,
      56,    57,    58,    59,     0,     0,   173,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
       0,     0,   230,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,     0,     0,   239,    49,
      50,    51,    52,    53,    54,     0,     0,    55,    56,    57,
      58,    59,     0,     0,   249,    49,    50,    51,    52,    53,
      54,     0,     0,    55,    56,    57,    58,    59,    53,    54,
     266,     0,    55,    56,    57,    58,    59,     0,   -93,     0,
      53,    54,     0,   -93,    55,    56,    57,    58,    59,     0,
     -94,     0,     0,     0,     0,   -94,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    49,
      50,    51,    52,    53,    54,     0,     0,    55,    56,    57,
      58,    59,    55,    56,    57,    58,    59,     0,   -95,     0,
       0,     0,     0,   -95,    55,    56,    57,    58,    59,     0,
     -96,    51,    52,    53,    54,   -96,     0,    55,    56,    57,
      58,    59,   104,     0,     0,     0,   105,   106,   107,   108,
       0,   109,   110,    53,    54,     0,     0,    55,    56,    57,
      58,    59,    55,    56,    57,    58,    59
};

static const yytype_int16 yycheck[] =
{
      16,   133,    18,     0,    19,   127,    16,   226,    68,     4,
       5,    31,    16,   226,    30,    60,    36,    62,   168,    98,
     170,   143,    32,    33,    31,     3,     4,    43,    32,    33,
      95,   110,    35,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    89,    61,    35,    63,   113,   268,
     129,   111,    67,   203,    99,   268,   116,    35,    27,    28,
      29,     3,     4,   195,   196,     3,     4,     3,     4,     3,
       4,   136,     4,    35,   139,     4,     8,     9,    10,    11,
     230,    13,    14,    25,    26,     4,    15,    25,    26,    25,
      26,    25,    26,    35,    36,     4,    15,    35,   177,    35,
      36,    35,    36,    31,   120,    37,    16,   123,    36,   125,
     126,   233,   128,    16,   130,    36,   266,   133,     3,     4,
     165,     5,    32,    33,     4,    35,    16,    32,   173,    32,
      33,    31,   197,    31,    31,    16,    36,   259,    36,    36,
      25,    26,    32,    33,    36,    27,    28,    29,    36,    31,
      35,    32,    33,   169,    36,   171,     4,     5,   223,     7,
      25,    26,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   240,    33,   193,    35,   195,
     196,    27,    28,    29,    33,    31,    35,    28,    29,   254,
      36,   207,    18,    19,    20,    21,    22,    37,    37,    25,
      26,    27,    28,    29,   249,   270,   271,    17,    18,    19,
      20,    21,    22,    33,    32,    25,    26,    27,    28,    29,
      37,     5,    36,   239,    14,     4,    36,    31,    16,     4,
     246,    18,    19,    20,    21,    22,    35,    35,    25,    26,
      27,    28,    29,    35,    31,    38,    35,    38,    31,    36,
      17,    18,    19,    20,    21,    22,    32,    35,    25,    26,
      27,    28,    29,    31,     4,     6,    38,    34,    17,    18,
      19,    20,    21,    22,     6,    36,    25,    26,    27,    28,
      29,    16,    36,    36,    32,    34,    17,    18,    19,    20,
      21,    22,    36,    31,    25,    26,    27,    28,    29,    38,
      16,    31,    35,    34,    17,    18,    19,    20,    21,    22,
      32,    37,    25,    26,    27,    28,    29,    37,    32,    36,
      31,    34,    17,    18,    19,    20,    21,    22,    36,    31,
      25,    26,    27,    28,    29,    16,     4,    38,    38,    34,
      17,    18,    19,    20,    21,    22,    31,     4,    25,    26,
      27,    28,    29,    19,    20,    21,    22,    34,    32,    25,
      26,    27,    28,    29,    12,    31,    16,    36,     4,    36,
      36,    17,    18,    19,    20,    21,    22,    37,    37,    25,
      26,    27,    28,    29,    37,    36,    32,    17,    18,    19,
      20,    21,    22,    38,     3,    25,    26,    27,    28,    29,
       3,    38,    32,    17,    18,    19,    20,    21,    22,    38,
       0,    25,    26,    27,    28,    29,    21,   268,    32,    17,
      18,    19,    20,    21,    22,   244,   239,    25,    26,    27,
      28,    29,    -1,    -1,    32,    17,    18,    19,    20,    21,
      22,   134,   134,    25,    26,    27,    28,    29,    -1,    -1,
      32,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    32,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    -1,    32,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    32,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    -1,    32,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    21,    22,
      32,    -1,    25,    26,    27,    28,    29,    -1,    31,    -1,
      21,    22,    -1,    36,    25,    26,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    27,
      28,    29,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    25,    26,    27,    28,    29,    -1,
      31,    19,    20,    21,    22,    36,    -1,    25,    26,    27,
      28,    29,     4,    -1,    -1,    -1,     8,     9,    10,    11,
      -1,    13,    14,    21,    22,    -1,    -1,    25,    26,    27,
      28,    29,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,    40,    44,    45,    48,    46,     4,
      15,    49,     0,    31,    42,    35,    16,    32,    33,    35,
      35,    41,    40,    43,     5,    47,     3,     4,    25,    26,
      35,    63,    64,    66,    67,     4,    59,    63,    47,    36,
      43,     4,    36,    33,    35,     4,    67,    67,    63,    17,
      18,    19,    20,    21,    22,    25,    26,    27,    28,    29,
      32,    16,    32,    33,    34,    36,    37,    32,    37,    63,
      36,    62,    63,    36,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    59,    63,    59,    63,    32,
      37,     5,    50,    56,    47,    50,    34,    36,    32,    32,
      34,    59,    14,     4,     4,     8,     9,    10,    11,    13,
      14,    37,    51,    52,    55,    58,    31,    51,    62,    59,
      16,     4,    60,    16,    32,    33,    16,    32,    33,    35,
      35,    35,    35,    35,    35,    62,    50,    38,    51,    31,
      50,    38,    63,    32,    31,    63,     4,    57,    63,    63,
      60,    63,    36,    62,     4,    63,    65,     6,     6,    65,
       4,    56,    58,    51,    51,    32,    60,    38,    32,    16,
      32,    33,    34,    32,    16,    34,    36,    35,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    36,    36,    32,    36,    31,    31,    38,    59,    57,
      63,    57,    63,    32,    59,     4,    15,    16,    36,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    37,    61,    63,    37,    65,    65,    51,
      32,    34,    57,    32,    35,    63,    36,    51,    36,    32,
      52,    53,    55,    31,    31,    57,    16,    60,     4,    32,
      38,    61,    51,    38,    31,     4,    54,    54,    63,    32,
      59,    12,    51,    16,    36,    36,    32,    60,    37,     4,
      37,    37,    57,    36,    53,    25,    26,    51,    51,    38,
       3,     3,    38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    41,    40,    42,    40,    40,    43,    43,    44,
      44,    44,    44,    44,    44,    46,    45,    45,    47,    47,
      47,    49,    48,    50,    50,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     1,     0,     1,     6,
       4,     4,     2,     7,     5,     0,     9,    10,     0,     4,
       2,     0,     8,     0,     3,     3,     2,     2,     1,     5,
       4,     7,     7,    11,    11,    11,     2,     3,     1,     2,
       5,     5,     6,     4,     4,     3,     1,     2,     6,     4,
       4,     2,     7,     5,     5,     3,     3,     1,     8,     6,
       5,     3,     8,     6,     7,    10,     5,     3,     3,     1,
       8,     6,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     1,     2,
       2,     1,     1,     3,     4
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
  case 2: /* $@1: %empty  */
#line 103 "trad5.y"
                                                      { printf ("%s\n", yyvsp[-1].code) ; }
#line 1461 "trad5.tab.c"
    break;

  case 3: /* axioma: sentencia_var_globales ';' $@1 r_expr  */
#line 104 "trad5.y"
                                       { ; }
#line 1467 "trad5.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 106 "trad5.y"
                                                   { printf ("%s\n", yyvsp[0].code) ; }
#line 1473 "trad5.tab.c"
    break;

  case 5: /* axioma: sentencia_dec_funciones $@2 r_expr  */
#line 107 "trad5.y"
                                       { ; }
#line 1479 "trad5.tab.c"
    break;

  case 6: /* axioma: sentencia_main  */
#line 109 "trad5.y"
                                   { printf ("%s\n", yyvsp[0].code) ; }
#line 1485 "trad5.tab.c"
    break;

  case 7: /* r_expr: %empty  */
#line 113 "trad5.y"
                                         { ; }
#line 1491 "trad5.tab.c"
    break;

  case 8: /* r_expr: axioma  */
#line 114 "trad5.y"
                                         { ; }
#line 1497 "trad5.tab.c"
    break;

  case 9: /* sentencia_var_globales: INTEGER IDENTIF '=' expresion ',' sentencia_asignacion_sucesion  */
#line 128 "trad5.y"
                                                                                         { sprintf (temp, "(setq %s %s) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1504 "trad5.tab.c"
    break;

  case 10: /* sentencia_var_globales: INTEGER IDENTIF '=' expresion  */
#line 131 "trad5.y"
                                            { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1511 "trad5.tab.c"
    break;

  case 11: /* sentencia_var_globales: INTEGER IDENTIF ',' sentencia_asignacion_sucesion  */
#line 134 "trad5.y"
                                                                { sprintf (temp, "(setq %s 0) %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1518 "trad5.tab.c"
    break;

  case 12: /* sentencia_var_globales: INTEGER IDENTIF  */
#line 137 "trad5.y"
                              { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1525 "trad5.tab.c"
    break;

  case 13: /* sentencia_var_globales: INTEGER IDENTIF '[' expresion ']' ',' sentencia_asignacion_sucesion  */
#line 140 "trad5.y"
                                                                                  { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[-1].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1532 "trad5.tab.c"
    break;

  case 14: /* sentencia_var_globales: INTEGER IDENTIF '[' expresion ']'  */
#line 143 "trad5.y"
                                                { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1539 "trad5.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 157 "trad5.y"
                                 { sprintf (memoria, "%s", yyvsp[0].code) ; }
#line 1545 "trad5.tab.c"
    break;

  case 16: /* sentencia_dec_funciones: IDENTIF $@3 '(' sentencia_arg ')' '{' sentencia_var_locales sentencia_r '}'  */
#line 157 "trad5.y"
                                                                                                                                        { sprintf (temp, "(defun %s (%s)\n\t(let (%s) %s)\n)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1552 "trad5.tab.c"
    break;

  case 17: /* sentencia_dec_funciones: INTEGER SWAP '(' sentencia_arg ')' '{' RETURN asignacion_sucesion ';' '}'  */
#line 160 "trad5.y"
                                                                                         { sprintf (temp, "(defun swap (%s)\n\t(return-from swap (values %s)\n))", yyvsp[-6].code, yyvsp[-2].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1559 "trad5.tab.c"
    break;

  case 18: /* sentencia_arg: %empty  */
#line 177 "trad5.y"
                                       {yyval.code = gen_code ("") ; }
#line 1565 "trad5.tab.c"
    break;

  case 19: /* sentencia_arg: INTEGER IDENTIF ',' sentencia_arg  */
#line 179 "trad5.y"
                                               { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1572 "trad5.tab.c"
    break;

  case 20: /* sentencia_arg: INTEGER IDENTIF  */
#line 182 "trad5.y"
                              { sprintf (temp, "%s", yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1579 "trad5.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 197 "trad5.y"
                      {sprintf (memoria, "%s", yyvsp[0].code) ; }
#line 1585 "trad5.tab.c"
    break;

  case 22: /* sentencia_main: MAIN $@4 '(' ')' '{' sentencia_var_locales sentencia_r '}'  */
#line 197 "trad5.y"
                                                                                                             { sprintf (temp, "(defun main ()\n\t(let (%s) %s)\n)", yyvsp[-2].code, yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1592 "trad5.tab.c"
    break;

  case 23: /* sentencia_var_locales: %empty  */
#line 210 "trad5.y"
                                               {yyval.code = gen_code ("") ; }
#line 1598 "trad5.tab.c"
    break;

  case 24: /* sentencia_var_locales: sentencia_declaraciones ';' sentencia_var_locales  */
#line 212 "trad5.y"
                                                                { sprintf (temp, "%s\n%s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1605 "trad5.tab.c"
    break;

  case 25: /* sentencia_r: sentencia ';' sentencia_r  */
#line 228 "trad5.y"
                                         { sprintf (temp, "\t%s\n\t%s", yyvsp[-2].code, yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1612 "trad5.tab.c"
    break;

  case 26: /* sentencia_r: sentencia ';'  */
#line 231 "trad5.y"
                                          { sprintf (temp, "\t%s", yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1619 "trad5.tab.c"
    break;

  case 27: /* sentencia_r: sentencia_estructura_control sentencia_r  */
#line 234 "trad5.y"
                                                         { sprintf (temp, "\t%s\n\t%s", yyvsp[-1].code, yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1626 "trad5.tab.c"
    break;

  case 28: /* sentencia_r: sentencia_estructura_control  */
#line 237 "trad5.y"
                                             { sprintf (temp, "\t%s", yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1633 "trad5.tab.c"
    break;

  case 29: /* sentencia_r: '{' sentencia_var_locales sentencia_r '}' sentencia_r  */
#line 240 "trad5.y"
                                                                      { sprintf (temp, "\t(let (%s) %s)\n\t%s", yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1640 "trad5.tab.c"
    break;

  case 30: /* sentencia_r: '{' sentencia_var_locales sentencia_r '}'  */
#line 243 "trad5.y"
                                                                      { sprintf (temp, "\t(let (%s) %s)\n", yyvsp[-2].code, yyvsp[-1].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 1647 "trad5.tab.c"
    break;

  case 31: /* sentencia_estructura_control: WHILE '(' expresion_control ')' '{' sentencia_r '}'  */
#line 260 "trad5.y"
                                                                                  { sprintf (temp, "(loop while %s do \n\t%s)", yyvsp[-4].code, yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1654 "trad5.tab.c"
    break;

  case 32: /* sentencia_estructura_control: IF '(' expresion_control ')' '{' sentencia_if '}'  */
#line 263 "trad5.y"
                                                                { sprintf (temp, "(if %s\n\t\t%s)", yyvsp[-4].code, yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1661 "trad5.tab.c"
    break;

  case 33: /* sentencia_estructura_control: IF '(' expresion_control ')' '{' sentencia_if '}' ELSE '{' sentencia_if '}'  */
#line 266 "trad5.y"
                                                                                          { sprintf (temp, "(if %s\n\t\t%s\n\t\t%s)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1668 "trad5.tab.c"
    break;

  case 34: /* sentencia_estructura_control: FOR '(' sentencia_declaraciones ';' expresion_control ';' incremento_decremento ')' '{' sentencia_r '}'  */
#line 269 "trad5.y"
                                                                                                                      { sprintf (temp, "(let (%s)\n(loop while %s do \n\t%s \n\t%s ))", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code ) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1675 "trad5.tab.c"
    break;

  case 35: /* sentencia_estructura_control: FOR '(' sentencia_asignaciones ';' expresion_control ';' incremento_decremento ')' '{' sentencia_r '}'  */
#line 272 "trad5.y"
                                                                                                                     { sprintf (temp, "%s\n(loop while %s do \n\t%s \n\t%s )", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code ) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1682 "trad5.tab.c"
    break;

  case 36: /* sentencia_if: sentencia ';'  */
#line 288 "trad5.y"
                                              {sprintf(temp, "%s", yyvsp[-1].code) ; 
                                               yyval.code = gen_code (temp) ; }
#line 1689 "trad5.tab.c"
    break;

  case 37: /* sentencia_if: sentencia ';' sentencia_r  */
#line 291 "trad5.y"
                                                {sprintf(temp, "(progn\n\t%s\n\t%s)", yyvsp[-2].code, yyvsp[0].code) ; 
                                               yyval.code = gen_code (temp) ; }
#line 1696 "trad5.tab.c"
    break;

  case 38: /* sentencia_if: sentencia_estructura_control  */
#line 294 "trad5.y"
                                             {sprintf(temp, "%s", yyvsp[0].code) ; 
                                               yyval.code = gen_code (temp) ; }
#line 1703 "trad5.tab.c"
    break;

  case 39: /* sentencia_if: sentencia_estructura_control sentencia_r  */
#line 297 "trad5.y"
                                                       {sprintf(temp, "(progn\n\t%s\n\t%s)", yyvsp[-1].code, yyvsp[0].code) ;
                                                  yyval.code = gen_code (temp) ; }
#line 1710 "trad5.tab.c"
    break;

  case 40: /* incremento_decremento: IDENTIF '=' IDENTIF '+' NUMBER  */
#line 311 "trad5.y"
                                                        { sprintf (temp, "(setq %s (+ %s %d))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].value) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1717 "trad5.tab.c"
    break;

  case 41: /* incremento_decremento: IDENTIF '=' IDENTIF '-' NUMBER  */
#line 314 "trad5.y"
                                             { sprintf (temp, "(setq %s (- %s %d))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].value) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1724 "trad5.tab.c"
    break;

  case 42: /* sentencia: PRINTF '(' STRING ',' expresion_sucesion_imprimir ')'  */
#line 329 "trad5.y"
                                                                    { sprintf (temp, "%s", yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1731 "trad5.tab.c"
    break;

  case 43: /* sentencia: PUTS '(' STRING ')'  */
#line 332 "trad5.y"
                                   { sprintf (temp, "(print \"%s\")", yyvsp[-1].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1738 "trad5.tab.c"
    break;

  case 44: /* sentencia: IDENTIF '(' expresion_sucesion ')'  */
#line 335 "trad5.y"
                                                 { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1745 "trad5.tab.c"
    break;

  case 45: /* sentencia: IDENTIF '(' ')'  */
#line 338 "trad5.y"
                              { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1752 "trad5.tab.c"
    break;

  case 46: /* sentencia: sentencia_asignaciones  */
#line 341 "trad5.y"
                                     { sprintf (temp, "\t%s", yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1759 "trad5.tab.c"
    break;

  case 47: /* sentencia: RETURN expresion_sucesion  */
#line 344 "trad5.y"
                                        { sprintf (temp, "(\treturn-from %s (values %s))",memoria, yyvsp[0].code) ; 
                                             yyval.code = gen_code (temp) ; }
#line 1766 "trad5.tab.c"
    break;

  case 48: /* sentencia_declaraciones: INTEGER IDENTIF '=' expresion ',' sentencia_declaracion_sucesion  */
#line 359 "trad5.y"
                                                                                          { sprintf (temp, "(%s %s) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1773 "trad5.tab.c"
    break;

  case 49: /* sentencia_declaraciones: INTEGER IDENTIF '=' expresion  */
#line 362 "trad5.y"
                                            { sprintf (temp, "(%s %s)", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1780 "trad5.tab.c"
    break;

  case 50: /* sentencia_declaraciones: INTEGER IDENTIF ',' sentencia_declaracion_sucesion  */
#line 365 "trad5.y"
                                                                 { sprintf (temp, "(%s 0) %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1787 "trad5.tab.c"
    break;

  case 51: /* sentencia_declaraciones: INTEGER IDENTIF  */
#line 368 "trad5.y"
                              { sprintf (temp, "(%s 0)", yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1794 "trad5.tab.c"
    break;

  case 52: /* sentencia_declaraciones: INTEGER IDENTIF '[' expresion ']' ',' sentencia_declaracion_sucesion  */
#line 371 "trad5.y"
                                                                                   { sprintf (temp, "(%s (make-array %s)) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[-1].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1801 "trad5.tab.c"
    break;

  case 53: /* sentencia_declaraciones: INTEGER IDENTIF '[' expresion ']'  */
#line 374 "trad5.y"
                                                { sprintf (temp, "(%s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1808 "trad5.tab.c"
    break;

  case 54: /* sentencia_declaracion_sucesion: IDENTIF '=' expresion ',' sentencia_declaracion_sucesion  */
#line 388 "trad5.y"
                                                                                            { sprintf (temp, "(%s %s) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1815 "trad5.tab.c"
    break;

  case 55: /* sentencia_declaracion_sucesion: IDENTIF '=' expresion  */
#line 391 "trad5.y"
                                    { sprintf (temp, "(%s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 1822 "trad5.tab.c"
    break;

  case 56: /* sentencia_declaracion_sucesion: IDENTIF ',' sentencia_declaracion_sucesion  */
#line 394 "trad5.y"
                                                         { sprintf (temp, "(%s 0) %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1829 "trad5.tab.c"
    break;

  case 57: /* sentencia_declaracion_sucesion: IDENTIF  */
#line 397 "trad5.y"
                      { sprintf (temp, "(%s 0)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1836 "trad5.tab.c"
    break;

  case 58: /* sentencia_declaracion_sucesion: IDENTIF '[' expresion ']' '=' expresion ',' sentencia_declaracion_sucesion  */
#line 400 "trad5.y"
                                                                                         { sprintf (temp, "((aref %s %s) %s) %s", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1843 "trad5.tab.c"
    break;

  case 59: /* sentencia_declaracion_sucesion: IDENTIF '[' expresion ']' '=' expresion  */
#line 403 "trad5.y"
                                                       { sprintf (temp, "((aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1850 "trad5.tab.c"
    break;

  case 60: /* sentencia_asignaciones: IDENTIF '=' expresion ',' sentencia_asignacion_sucesion  */
#line 418 "trad5.y"
                                                                                 { sprintf (temp, "(setq %s %s) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1857 "trad5.tab.c"
    break;

  case 61: /* sentencia_asignaciones: IDENTIF '=' expresion  */
#line 421 "trad5.y"
                                    { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 1864 "trad5.tab.c"
    break;

  case 62: /* sentencia_asignaciones: IDENTIF '[' expresion ']' '=' expresion ',' sentencia_asignacion_sucesion  */
#line 424 "trad5.y"
                                                                                        { sprintf (temp, "(setf (aref %s %s) %s) %s", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1871 "trad5.tab.c"
    break;

  case 63: /* sentencia_asignaciones: IDENTIF '[' expresion ']' '=' expresion  */
#line 427 "trad5.y"
                                                       { sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1878 "trad5.tab.c"
    break;

  case 64: /* sentencia_asignaciones: IDENTIF ',' asignacion_sucesion '=' IDENTIF ',' asignacion_sucesion  */
#line 430 "trad5.y"
                                                                                   { sprintf (temp, "(setf (values %s %s) (values %s %s))", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1885 "trad5.tab.c"
    break;

  case 65: /* sentencia_asignaciones: IDENTIF ',' asignacion_sucesion '=' SWAP '(' IDENTIF ',' asignacion_sucesion ')'  */
#line 433 "trad5.y"
                                                                                               { sprintf (temp, "(setf (values %s %s) (swap %s %s))", yyvsp[-9].code, yyvsp[-7].code, yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1892 "trad5.tab.c"
    break;

  case 66: /* sentencia_asignacion_sucesion: IDENTIF '=' expresion ',' sentencia_asignacion_sucesion  */
#line 448 "trad5.y"
                                                                                          { sprintf (temp, "(setq %s %s) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1899 "trad5.tab.c"
    break;

  case 67: /* sentencia_asignacion_sucesion: IDENTIF '=' expresion  */
#line 451 "trad5.y"
                                    { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 1906 "trad5.tab.c"
    break;

  case 68: /* sentencia_asignacion_sucesion: IDENTIF ',' sentencia_asignacion_sucesion  */
#line 454 "trad5.y"
                                                        { sprintf (temp, "(setq %s 0) %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1913 "trad5.tab.c"
    break;

  case 69: /* sentencia_asignacion_sucesion: IDENTIF  */
#line 457 "trad5.y"
                      { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1920 "trad5.tab.c"
    break;

  case 70: /* sentencia_asignacion_sucesion: IDENTIF '[' expresion ']' '=' expresion ',' sentencia_asignacion_sucesion  */
#line 460 "trad5.y"
                                                                                        { sprintf (temp, "(setf (aref %s %s) %s) %s", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1927 "trad5.tab.c"
    break;

  case 71: /* sentencia_asignacion_sucesion: IDENTIF '[' expresion ']' '=' expresion  */
#line 463 "trad5.y"
                                                       { sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1934 "trad5.tab.c"
    break;

  case 72: /* asignacion_sucesion: IDENTIF ',' asignacion_sucesion  */
#line 478 "trad5.y"
                                                      { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ; 
                                           yyval.code = gen_code (temp) ; }
#line 1941 "trad5.tab.c"
    break;

  case 73: /* asignacion_sucesion: IDENTIF  */
#line 481 "trad5.y"
                      { sprintf (temp, "%s", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1948 "trad5.tab.c"
    break;

  case 74: /* expresion_sucesion_imprimir: expresion ',' expresion_sucesion_imprimir  */
#line 496 "trad5.y"
                                                                       { sprintf (temp, "(print %s) %s", yyvsp[-2].code, yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1955 "trad5.tab.c"
    break;

  case 75: /* expresion_sucesion_imprimir: expresion  */
#line 498 "trad5.y"
                                         { sprintf (temp, "(print %s)", yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1962 "trad5.tab.c"
    break;

  case 76: /* expresion_sucesion: expresion ',' expresion_sucesion  */
#line 513 "trad5.y"
                                                     { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1969 "trad5.tab.c"
    break;

  case 77: /* expresion_sucesion: expresion  */
#line 515 "trad5.y"
                                         { sprintf (temp, "%s", yyvsp[0].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1976 "trad5.tab.c"
    break;

  case 78: /* expresion: termino  */
#line 529 "trad5.y"
                                         { yyval = yyvsp[0] ; }
#line 1982 "trad5.tab.c"
    break;

  case 79: /* expresion: expresion_operacion  */
#line 531 "trad5.y"
                                         { yyval = yyvsp[0] ; }
#line 1988 "trad5.tab.c"
    break;

  case 80: /* expresion_operacion: expresion '+' expresion  */
#line 547 "trad5.y"
                                              { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1995 "trad5.tab.c"
    break;

  case 81: /* expresion_operacion: expresion '-' expresion  */
#line 549 "trad5.y"
                                         { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2002 "trad5.tab.c"
    break;

  case 82: /* expresion_operacion: expresion '*' expresion  */
#line 551 "trad5.y"
                                         { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2009 "trad5.tab.c"
    break;

  case 83: /* expresion_operacion: expresion '/' expresion  */
#line 553 "trad5.y"
                                         { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2016 "trad5.tab.c"
    break;

  case 84: /* expresion_operacion: expresion '%' expresion  */
#line 556 "trad5.y"
                                         { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 2023 "trad5.tab.c"
    break;

  case 85: /* expresion_operacion: IDENTIF '(' expresion_sucesion ')'  */
#line 559 "trad5.y"
                                                   { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2030 "trad5.tab.c"
    break;

  case 86: /* expresion_operacion: IDENTIF '(' ')'  */
#line 562 "trad5.y"
                                { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2037 "trad5.tab.c"
    break;

  case 87: /* expresion_operacion: expresion EQUAL expresion  */
#line 565 "trad5.y"
                                           { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2044 "trad5.tab.c"
    break;

  case 88: /* expresion_operacion: expresion NOT_EQUAL expresion  */
#line 568 "trad5.y"
                                               { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 2051 "trad5.tab.c"
    break;

  case 89: /* expresion_operacion: expresion '<' expresion  */
#line 571 "trad5.y"
                                          { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;   
                                             yyval.code = gen_code (temp) ; }
#line 2058 "trad5.tab.c"
    break;

  case 90: /* expresion_operacion: expresion '>' expresion  */
#line 574 "trad5.y"
                                          { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2065 "trad5.tab.c"
    break;

  case 91: /* expresion_operacion: expresion AND expresion  */
#line 577 "trad5.y"
                                          { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2072 "trad5.tab.c"
    break;

  case 92: /* expresion_operacion: expresion OR expresion  */
#line 580 "trad5.y"
                                           { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2079 "trad5.tab.c"
    break;

  case 93: /* expresion_control: expresion EQUAL expresion  */
#line 598 "trad5.y"
                                              { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 2086 "trad5.tab.c"
    break;

  case 94: /* expresion_control: expresion NOT_EQUAL expresion  */
#line 600 "trad5.y"
                                              { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2093 "trad5.tab.c"
    break;

  case 95: /* expresion_control: expresion '<' expresion  */
#line 602 "trad5.y"
                                         { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 2100 "trad5.tab.c"
    break;

  case 96: /* expresion_control: expresion '>' expresion  */
#line 604 "trad5.y"
                                         { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2107 "trad5.tab.c"
    break;

  case 97: /* expresion_control: expresion LESS_EQUAL expresion  */
#line 606 "trad5.y"
                                               { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2114 "trad5.tab.c"
    break;

  case 98: /* expresion_control: expresion GREATER_EQUAL expresion  */
#line 608 "trad5.y"
                                                  { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2121 "trad5.tab.c"
    break;

  case 99: /* expresion_control: expresion AND expresion  */
#line 610 "trad5.y"
                                        { sprintf (temp, "(And %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2128 "trad5.tab.c"
    break;

  case 100: /* expresion_control: expresion OR expresion  */
#line 612 "trad5.y"
                                       { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2135 "trad5.tab.c"
    break;

  case 101: /* expresion_control: expresion '+' expresion  */
#line 614 "trad5.y"
                                         { sprintf (temp, "(/= 0 (+ %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2142 "trad5.tab.c"
    break;

  case 102: /* expresion_control: expresion '-' expresion  */
#line 616 "trad5.y"
                                         { sprintf (temp, "(/= 0 (- %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2149 "trad5.tab.c"
    break;

  case 103: /* expresion_control: expresion '*' expresion  */
#line 618 "trad5.y"
                                         { sprintf (temp, "(/= 0 (* %s %s))", yyvsp[-2].code, yyvsp[0].code) ;   
                                                yyval.code = gen_code (temp) ; }
#line 2156 "trad5.tab.c"
    break;

  case 104: /* expresion_control: expresion '/' expresion  */
#line 620 "trad5.y"
                                         { sprintf (temp, "(/= 0 (/ %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2163 "trad5.tab.c"
    break;

  case 105: /* expresion_control: expresion '%' expresion  */
#line 622 "trad5.y"
                                         { sprintf (temp, "(/= 0 (mod %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2170 "trad5.tab.c"
    break;

  case 106: /* expresion_control: IDENTIF '(' expresion_sucesion ')'  */
#line 624 "trad5.y"
                                                   { sprintf (temp, "(/= 0 (%s %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2177 "trad5.tab.c"
    break;

  case 107: /* expresion_control: IDENTIF '(' ')'  */
#line 626 "trad5.y"
                                { sprintf (temp, "(/= 0 (%s))", yyvsp[-2].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2184 "trad5.tab.c"
    break;

  case 108: /* termino: operando  */
#line 640 "trad5.y"
                                                   { yyval = yyvsp[0] ; }
#line 2190 "trad5.tab.c"
    break;

  case 109: /* termino: '+' operando  */
#line 641 "trad5.y"
                                                   { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2197 "trad5.tab.c"
    break;

  case 110: /* termino: '-' operando  */
#line 643 "trad5.y"
                                                   { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2204 "trad5.tab.c"
    break;

  case 111: /* operando: IDENTIF  */
#line 657 "trad5.y"
                                         { sprintf (temp, "%s", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2211 "trad5.tab.c"
    break;

  case 112: /* operando: NUMBER  */
#line 659 "trad5.y"
                                         { sprintf (temp, "%d", yyvsp[0].value) ;
                                           yyval.code = gen_code (temp) ; }
#line 2218 "trad5.tab.c"
    break;

  case 113: /* operando: '(' expresion ')'  */
#line 661 "trad5.y"
                                         { yyval = yyvsp[-1] ; }
#line 2224 "trad5.tab.c"
    break;

  case 114: /* operando: IDENTIF '[' expresion ']'  */
#line 663 "trad5.y"
                                            { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2231 "trad5.tab.c"
    break;


#line 2235 "trad5.tab.c"

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

#line 668 "trad5.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "if",          IF,
    "else",        ELSE,
    "for",         FOR,
    "return",      RETURN,
    "||",          OR,
    "&&",          AND,
    "==",          EQUAL,
    "!=",          NOT_EQUAL,
    "<=",          LESS_EQUAL,
    ">=",          GREATER_EQUAL,
    "swap",        SWAP,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*$,{}" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
