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
#line 1 "hw3.y"

    #include <stdio.h>
    #define YYDEBUG 1
    void yyerror(const char* str);
    int yylex();
    int function = 0;
    int operation = 0;
    int _int = 0;
    int _char = 0;
    int pointer = 0;
    int array = 0;
    int selection = 0;
    int loop = 0;
    int _return = 0;
	int __init_dcl_counter = 0;
	int debug___ = 0;

#line 89 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    SIZEOF = 261,                  /* SIZEOF  */
    PTR_OP = 262,                  /* PTR_OP  */
    INC_OP = 263,                  /* INC_OP  */
    DEC_OP = 264,                  /* DEC_OP  */
    LEFT_OP = 265,                 /* LEFT_OP  */
    RIGHT_OP = 266,                /* RIGHT_OP  */
    LE_OP = 267,                   /* LE_OP  */
    GE_OP = 268,                   /* GE_OP  */
    EQ_OP = 269,                   /* EQ_OP  */
    NE_OP = 270,                   /* NE_OP  */
    AND_OP = 271,                  /* AND_OP  */
    OR_OP = 272,                   /* OR_OP  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 278,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 279,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 280,              /* AND_ASSIGN  */
    XOR_ASSIGN = 281,              /* XOR_ASSIGN  */
    OR_ASSIGN = 282,               /* OR_ASSIGN  */
    TYPE_NAME = 283,               /* TYPE_NAME  */
    TYPEDEF = 284,                 /* TYPEDEF  */
    EXTERN = 285,                  /* EXTERN  */
    STATIC = 286,                  /* STATIC  */
    AUTO = 287,                    /* AUTO  */
    REGISTER = 288,                /* REGISTER  */
    CHAR = 289,                    /* CHAR  */
    SHORT = 290,                   /* SHORT  */
    INT = 291,                     /* INT  */
    LONG = 292,                    /* LONG  */
    SIGNED = 293,                  /* SIGNED  */
    UNSIGNED = 294,                /* UNSIGNED  */
    FLOAT = 295,                   /* FLOAT  */
    DOUBLE = 296,                  /* DOUBLE  */
    CONST = 297,                   /* CONST  */
    VOLATILE = 298,                /* VOLATILE  */
    VOID = 299,                    /* VOID  */
    STRUCT = 300,                  /* STRUCT  */
    UNION = 301,                   /* UNION  */
    ENUM = 302,                    /* ENUM  */
    ELLIPSIS = 303,                /* ELLIPSIS  */
    CASE = 304,                    /* CASE  */
    DEFAULT = 305,                 /* DEFAULT  */
    IF = 306,                      /* IF  */
    ELSE = 307,                    /* ELSE  */
    SWITCH = 308,                  /* SWITCH  */
    WHILE = 309,                   /* WHILE  */
    DO = 310,                      /* DO  */
    FOR = 311,                     /* FOR  */
    GOTO = 312,                    /* GOTO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    RETURN = 315,                  /* RETURN  */
    INCLUDE_PP = 316,              /* INCLUDE_PP  */
    DEFINE_PP = 317,               /* DEFINE_PP  */
    STDLIB = 318,                  /* STDLIB  */
    TYPEDEF_NAME = 319,            /* TYPEDEF_NAME  */
    ENUMERATION_CONSTANT = 320     /* ENUMERATION_CONSTANT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315
#define INCLUDE_PP 316
#define DEFINE_PP 317
#define STDLIB 318
#define TYPEDEF_NAME 319
#define ENUMERATION_CONSTANT 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_INCLUDE_PP = 61,                /* INCLUDE_PP  */
  YYSYMBOL_DEFINE_PP = 62,                 /* DEFINE_PP  */
  YYSYMBOL_STDLIB = 63,                    /* STDLIB  */
  YYSYMBOL_TYPEDEF_NAME = 64,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 65,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_68_ = 68,                       /* '['  */
  YYSYMBOL_69_ = 69,                       /* ']'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_71_ = 71,                       /* ','  */
  YYSYMBOL_72_ = 72,                       /* '&'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '~'  */
  YYSYMBOL_77_ = 77,                       /* '!'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* '<'  */
  YYSYMBOL_81_ = 81,                       /* '>'  */
  YYSYMBOL_82_ = 82,                       /* '^'  */
  YYSYMBOL_83_ = 83,                       /* '|'  */
  YYSYMBOL_84_ = 84,                       /* '?'  */
  YYSYMBOL_85_ = 85,                       /* ':'  */
  YYSYMBOL_86_ = 86,                       /* '='  */
  YYSYMBOL_87_ = 87,                       /* ';'  */
  YYSYMBOL_88_ = 88,                       /* '{'  */
  YYSYMBOL_89_ = 89,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_primary_expression = 91,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 92,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_and_expression = 102,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 103,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 104,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 105,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 106,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 107,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 108,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 109,      /* assignment_operator  */
  YYSYMBOL_expression = 110,               /* expression  */
  YYSYMBOL_constant_expression = 111,      /* constant_expression  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 113,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 114,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 115,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 116,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 117,           /* type_specifier  */
  YYSYMBOL_integer_type_specifier = 118,   /* integer_type_specifier  */
  YYSYMBOL_character_type_specifier = 119, /* character_type_specifier  */
  YYSYMBOL_integer_declaration_specifiers = 120, /* integer_declaration_specifiers  */
  YYSYMBOL_character_declaration_specifiers = 121, /* character_declaration_specifiers  */
  YYSYMBOL_struct_or_union_specifier = 122, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 123,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 124,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 125,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 126, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 127,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 128,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 129,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 130,          /* enumerator_list  */
  YYSYMBOL_enumerator = 131,               /* enumerator  */
  YYSYMBOL_type_qualifier = 132,           /* type_qualifier  */
  YYSYMBOL_declarator = 133,               /* declarator  */
  YYSYMBOL_direct_declarator = 134,        /* direct_declarator  */
  YYSYMBOL_direct_array_declarator = 135,  /* direct_array_declarator  */
  YYSYMBOL_pointer = 136,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 137,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 138,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 139,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 140,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 141,          /* identifier_list  */
  YYSYMBOL_type_name = 142,                /* type_name  */
  YYSYMBOL_abstract_declarator = 143,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 144, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 145,              /* initializer  */
  YYSYMBOL_initializer_list = 146,         /* initializer_list  */
  YYSYMBOL_statement = 147,                /* statement  */
  YYSYMBOL_labeled_statement = 148,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 149,       /* compound_statement  */
  YYSYMBOL_list_of_list = 150,             /* list_of_list  */
  YYSYMBOL_code_block_list = 151,          /* code_block_list  */
  YYSYMBOL_declaration_list = 152,         /* declaration_list  */
  YYSYMBOL_expression_statement = 153,     /* expression_statement  */
  YYSYMBOL_selection_statement = 154,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 155,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 156,           /* jump_statement  */
  YYSYMBOL_translation_unit = 157,         /* translation_unit  */
  YYSYMBOL_preprocessor_declaration = 158, /* preprocessor_declaration  */
  YYSYMBOL_include_preprocessor = 159,     /* include_preprocessor  */
  YYSYMBOL_define_preprocessor = 160,      /* define_preprocessor  */
  YYSYMBOL_external_declaration = 161,     /* external_declaration  */
  YYSYMBOL_function_definition = 162       /* function_definition  */
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
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1523

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
       2,     2,     2,    77,     2,     2,     2,    79,    72,     2,
      66,    67,    73,    74,    71,    75,    70,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    87,
      80,    86,    81,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    83,    89,    76,     2,     2,     2,
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
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    39,    40,    41,    45,    46,    47,    48,
      49,    50,    51,    52,    56,    57,    61,    62,    63,    64,
      65,    66,    70,    71,    72,    73,    74,    75,    79,    80,
      84,    85,    86,    87,    91,    92,    93,    97,    98,    99,
     103,   104,   105,   106,   107,   111,   112,   113,   117,   118,
     122,   123,   127,   128,   132,   133,   137,   138,   142,   143,
     147,   148,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   166,   167,   171,   175,   176,   177,   178,
     182,   183,   184,   185,   186,   187,   193,   194,   198,   199,
     203,   204,   205,   206,   207,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   225,   229,   233,   234,
     235,   239,   240,   241,   245,   246,   247,   251,   252,   256,
     257,   261,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   277,   278,   282,   283,   284,   288,   289,   290,   294,
     295,   299,   300,   304,   305,   309,   310,   311,   315,   316,
     317,   318,   319,   323,   324,   325,   326,   330,   331,   332,
     333,   337,   338,   343,   344,   348,   349,   353,   354,   355,
     356,   357,   361,   362,   366,   367,   371,   372,   373,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   389,   390,
     391,   395,   396,   400,   401,   402,   403,   404,   405,   409,
     410,   411,   415,   416,   420,   421,   425,   426,   430,   431,
     435,   436,   440,   441,   445,   446,   447,   448,   449,   450,
     454,   455,   456,   457,   458,   462,   463,   467,   468,   472,
     473,   477,   480,   481,   482,   486,   487,   488,   489,   490,
     491,   492,   493
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "INCLUDE_PP",
  "DEFINE_PP", "STDLIB", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "integer_type_specifier", "character_type_specifier",
  "integer_declaration_specifiers", "character_declaration_specifiers",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator",
  "direct_array_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "list_of_list",
  "code_block_list", "declaration_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "preprocessor_declaration", "include_preprocessor",
  "define_preprocessor", "external_declaration", "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-242)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1079,    -1,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,     5,    19,    93,  -242,    37,    72,  -242,    67,  1400,
    1400,  -242,  -242,    37,    37,  -242,     9,  -242,  1428,  1240,
      53,    80,    77,  1033,  -242,  -242,  -242,  -242,  -242,   728,
     -17,   138,  -242,  -242,   168,   129,  -242,  -242,    72,  -242,
     -48,  -242,  1203,  -242,  -242,  -242,  -242,  -242,  -242,   -45,
    1203,    30,  1203,   120,  1459,  -242,  1428,  1428,   409,  -242,
      67,    37,    37,  -242,  1240,   970,   756,  -242,    53,  -242,
    -242,  -242,  -242,  -242,   954,   966,   966,   744,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,   149,  -242,   978,  -242,
     150,   152,   253,    50,   257,   161,   177,   178,   249,    10,
    -242,   200,   138,   190,   -43,  -242,  -242,  -242,  -242,  -242,
      37,  -242,   578,  -242,  1240,  -242,  -242,  1240,  -242,  -242,
    1240,  1459,  1459,  1459,  1459,   340,  -242,    22,  1459,   194,
     978,   196,   220,   222,   224,   561,   226,   295,   213,   216,
     637,  -242,  -242,   574,  -242,  -242,    68,  -242,  -242,  -242,
    -242,   484,  -242,  -242,  -242,  -242,  -242,   235,  -242,  -242,
    -242,  -242,    18,    37,    37,   256,   255,  -242,   -53,  -242,
     259,   744,  -242,   978,  -242,  -242,     1,   139,   263,   321,
    -242,  -242,   831,   978,   336,  -242,   978,   978,   978,   978,
     978,   978,   978,   978,   978,   978,   978,   978,   978,   978,
     978,   978,   978,   978,   978,  -242,   -34,   978,   138,  -242,
    -242,   578,  -242,  -242,  -242,  -242,  -242,  1166,  -242,  -242,
    -242,  -242,  -242,   978,  -242,    73,  -242,   261,  -242,   561,
     264,   561,   978,   978,   978,   294,   653,   265,  -242,  -242,
    -242,   123,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,   978,   978,  -242,  -242,  -242,  1125,   843,
    -242,    45,  -242,   105,  -242,  -242,  -242,  1363,  -242,   353,
    -242,   296,  -242,  1277,   185,  -242,   978,  -242,  -242,    75,
    -242,   172,  -242,  -242,  -242,  -242,   150,   150,   152,   152,
     253,   253,   253,   253,    50,    50,   257,   161,   177,   178,
     249,   131,  -242,  -242,  -242,  -242,     3,  -242,  -242,    17,
    -242,   978,  -242,   561,  -242,   164,   167,   175,   298,   669,
     669,  -242,  -242,  -242,  -242,  -242,   299,   302,  -242,   292,
     105,  1323,   855,  -242,  -242,  -242,  -242,  -242,  -242,   978,
    -242,   978,   502,  -242,  -242,  -242,  -242,   561,   561,   561,
     978,   867,   879,  -242,  -242,  -242,  -242,   303,  -242,   304,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   181,   561,   183,
     561,   191,  -242,  -242,   284,  -242,   561,  -242,   561,  -242,
    -242,  -242
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   148,   104,    90,    91,    92,    93,    94,   107,    96,
     106,    97,   100,   101,    98,    99,   143,   144,    95,   117,
     118,     0,     0,     0,   105,     0,   157,   234,     0,    80,
      82,   110,   113,     0,     0,   102,     0,   103,    84,     0,
     146,   147,     0,     0,   233,   227,   228,   225,   232,     0,
     138,     0,   229,   230,     0,     0,   161,   159,   158,    76,
       0,    86,    88,    81,   108,   111,    83,   109,   112,     0,
      88,     0,    88,   116,     0,    85,    80,    82,     0,   208,
       0,     0,     0,   242,     0,     0,     0,   148,   145,     1,
     226,     2,     3,     4,     0,     0,     0,     0,   154,    22,
      23,    24,    25,    26,    27,     6,    16,    28,     0,    30,
      34,    37,    40,    45,    48,    50,    52,    54,    56,    58,
      75,     0,     0,   141,     0,   139,   231,   149,   162,   160,
       0,    77,     0,   236,     0,    78,   238,     0,    79,   240,
       0,     0,   124,   126,   128,     0,   119,     0,   130,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   202,    28,    60,    73,     0,   206,   207,   193,
     194,     0,   204,   195,   196,   197,   198,    88,   209,   241,
     172,   152,   171,     0,     0,     0,   163,   165,     0,   156,
       0,     0,    20,     0,    17,    18,     0,   174,     0,     0,
      12,    13,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,   136,
      87,     0,   188,    89,   235,   237,   239,     0,   123,   125,
     127,   115,   120,     0,   121,     0,   131,   133,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   222,
     223,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    62,     0,     0,   211,   203,   205,     0,     0,
     167,   176,   170,   177,   168,   169,   150,     0,   151,     0,
     155,     0,     5,     0,   176,   175,     0,    11,     8,     0,
      14,     0,    10,    31,    32,    33,    35,    36,    38,    39,
      43,    44,    41,    42,    46,    47,    49,    51,    53,    55,
      57,     0,   137,   142,   140,   191,     0,   114,   134,     0,
     122,     0,   199,     0,   201,     0,     0,     0,     0,     0,
       0,   220,   224,    61,    74,   184,     0,     0,   180,     0,
     178,     0,     0,   164,   166,   173,    21,    29,     9,     0,
       7,     0,     0,   189,   132,   135,   200,     0,     0,     0,
       0,     0,     0,   185,   179,   181,   186,     0,   182,     0,
      15,    59,   190,   192,   212,   213,   214,     0,     0,     0,
       0,     0,   187,   183,     0,   218,     0,   216,     0,   215,
     219,   217
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -242,  -242,   -30,  -242,   -72,    65,    98,   119,
     100,   169,   173,   170,   174,   166,  -242,   -32,  -123,  -242,
     -87,   -75,    69,     0,    88,   262,    85,   -16,   163,   171,
       2,     4,  -242,  -242,   254,  -132,   -91,  -242,    70,  -242,
     272,   179,   199,    16,   -37,  -242,   -23,  -242,   -84,  -242,
     110,  -242,   207,   -33,   -80,  -224,  -242,   -31,  -242,   288,
    -242,   230,   160,  -241,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,   359,  -242
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   105,   106,   299,   163,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   164,   165,   273,
     166,   121,    79,    80,    60,    61,    29,    30,    31,    32,
      81,    82,    35,    36,   145,   146,   147,   245,   246,    37,
     124,   125,    38,   177,    40,    41,    42,    58,   346,   186,
     187,   188,   198,   347,   283,   233,   326,   168,   169,   170,
     171,   172,    84,   173,   174,   175,   176,    43,    44,    45,
      46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   185,    33,    57,    34,    88,   197,   325,    50,   232,
     196,   190,    73,   242,   288,   340,    39,   120,   289,   107,
       1,     1,    77,   130,    52,     1,   130,   223,   228,    63,
      66,    64,    67,    65,    68,   129,   205,   228,    75,   131,
       1,    55,   135,    28,    62,    33,   229,    34,    87,    70,
      72,   238,   239,   240,   120,   322,   107,   248,   142,    39,
      77,    77,   213,   214,   192,   194,   195,    49,   292,    27,
       1,   122,   274,   261,   362,   250,    63,    66,   107,   300,
      87,   142,    53,    25,   278,   182,   279,   183,    25,   184,
      26,    26,   363,    51,   224,    26,    54,    74,   371,   372,
     197,   130,   243,    25,   196,   242,   196,   243,   232,   244,
      26,   278,    27,   279,    16,    17,   301,   138,   120,    85,
     107,    69,    71,    76,   255,   142,   142,   142,   142,   142,
     215,   216,   142,    25,   303,   304,   305,   321,   383,   274,
      26,   123,   358,    25,   329,    26,   359,   167,    86,   282,
     343,   344,   323,   178,    59,   275,   199,   200,   201,   281,
     330,    76,    76,   247,   295,   335,   336,   337,   328,    69,
      71,   351,   126,   352,   294,   142,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   274,   120,   127,   107,   280,   284,
     285,   350,   274,   178,   349,   293,   178,   279,   141,   178,
     342,   120,    26,   107,   350,   202,   361,   203,   332,   204,
     334,   142,   134,   206,   357,    56,   209,   210,   207,   208,
     137,   367,   140,   219,   368,   274,   380,   143,   274,   232,
     167,   360,   369,   274,    88,   144,   274,   120,   394,   107,
     396,   293,   274,   279,   274,   281,   365,   128,   398,   220,
     143,   221,   274,   211,   212,   222,   107,   377,   144,   225,
     294,   217,   218,   148,   306,   307,   227,   379,   182,   249,
     183,   251,   184,   387,   389,   391,   252,   182,   253,   183,
     254,   184,   256,   182,    55,   183,   148,   184,   257,   120,
     258,   107,   366,   259,   143,   143,   143,   143,   143,   308,
     309,   143,   144,   144,   144,   144,   144,   314,   315,   144,
     120,   132,   107,   286,   297,   339,   287,    83,   290,   381,
     296,   107,   310,   311,   312,   313,   384,   385,   386,   302,
     148,   148,   148,   148,   148,   247,   331,   148,   338,   333,
     133,   182,   341,   183,   143,   184,   355,   395,   136,   397,
     139,   375,   144,   356,   370,   400,   373,   401,     2,   374,
     392,   399,   179,   393,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   316,   320,
     148,   318,   230,   317,   226,   237,   319,   354,   291,   364,
     143,   277,    90,     0,    24,     0,     0,   324,   144,     0,
       0,     0,   149,    92,    93,    94,     0,    95,    96,     0,
       0,     0,   234,     0,     0,   235,     0,     0,   236,   241,
       0,     0,     0,     0,     0,     0,   148,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,   150,   151,
     152,     0,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,    24,     0,    97,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,   149,    92,    93,
      94,     0,    95,    96,     0,     0,   161,    78,   162,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,     0,
      95,    96,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   150,   151,   152,     0,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,    24,     0,
      97,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,     0,     0,   149,    92,    93,    94,    97,    95,
      96,   161,    78,   276,    99,   100,   101,   102,   103,   104,
       0,    91,    92,    93,    94,     0,    95,    96,     0,     0,
     231,   382,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   151,   152,     0,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
      91,    92,    93,    94,    97,    95,    96,     0,   161,    78,
      99,   100,   101,   102,   103,   104,    91,    92,    93,    94,
     272,    95,    96,     0,     0,     0,   231,     0,     0,     0,
       0,     0,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,    97,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,     0,    24,     0,    97,
       0,     0,     0,     0,   260,    99,   100,   101,   102,   103,
     104,    91,    92,    93,    94,    97,    95,    96,     0,     0,
     161,    99,   100,   101,   102,   103,   104,    91,    92,    93,
      94,     0,    95,    96,     0,     0,   161,     0,     0,    91,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,    97,     0,     0,    98,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     0,    24,     0,
      97,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,    97,     0,     0,   189,     0,     0,    99,   100,
     101,   102,   103,   104,    91,    92,    93,    94,     0,    95,
      96,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
      91,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,    97,   298,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,    97,
       0,     0,   348,     0,     0,    99,   100,   101,   102,   103,
     104,    97,     0,     0,   378,     0,     0,    99,   100,   101,
     102,   103,   104,    97,   388,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,    97,   390,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,    91,
      92,    93,    94,   180,    95,    96,     0,     0,     0,     0,
       0,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
     191,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   193,    89,    24,     0,     1,   181,    99,   100,
     101,   102,   103,   104,    97,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,     0,    24,     0,    25,
       0,     0,     0,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,     0,    24,     0,    25,     0,     0,     0,     0,
       0,     0,    26,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   278,   345,   279,     2,     0,     0,     0,    26,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,   132,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,   293,   345,   279,     0,     0,     0,     0,
      26,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
     376,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     0,     9,    24,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,    24,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       0,    85,     0,    26,     0,    42,    97,   231,     3,   132,
      97,    86,     3,   145,    67,   256,     0,    49,    71,    49,
       3,     3,    38,    71,     5,     3,    71,    17,    71,    29,
      30,    29,    30,    29,    30,    58,   108,    71,    38,    87,
       3,    25,    87,    43,    28,    43,    89,    43,     3,    33,
      34,   142,   143,   144,    86,    89,    86,   148,    74,    43,
      76,    77,    12,    13,    94,    95,    96,    68,    67,     0,
       3,    88,    71,   160,    71,   150,    76,    77,   108,   202,
       3,    97,    63,    66,    66,    85,    68,    85,    66,    85,
      73,    73,    89,    88,    84,    73,     3,    88,   339,   340,
     191,    71,    85,    66,   191,   237,   193,    85,   231,    87,
      73,    66,    43,    68,    42,    43,   203,    87,   150,    66,
     150,    33,    34,    38,   155,   141,   142,   143,   144,   145,
      80,    81,   148,    66,   206,   207,   208,   224,   362,    71,
      73,     3,    67,    66,    71,    73,    71,    78,    68,   182,
     273,   274,   227,    84,    87,    87,     7,     8,     9,   182,
      87,    76,    77,   147,   197,   252,   253,   254,   243,    81,
      82,    66,     4,    68,   197,   191,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    71,   227,    67,   227,   182,   183,
     184,   281,    71,   134,   279,    66,   137,    68,    88,   140,
      87,   243,    73,   243,   294,    66,    85,    68,   249,    70,
     251,   237,    62,    73,   296,    26,    74,    75,    78,    79,
      70,    67,    72,    72,    67,    71,   359,    74,    71,   362,
     171,    69,    67,    71,   281,    74,    71,   279,    67,   279,
      67,    66,    71,    68,    71,   278,   331,    58,    67,    82,
      97,    83,    71,    10,    11,    16,   296,   351,    97,    69,
     293,    14,    15,    74,   209,   210,    86,   352,   278,    85,
     278,    85,   278,   370,   371,   372,    66,   287,    66,   287,
      66,   287,    66,   293,   278,   293,    97,   293,     3,   331,
      87,   331,   333,    87,   141,   142,   143,   144,   145,   211,
     212,   148,   141,   142,   143,   144,   145,   217,   218,   148,
     352,    86,   352,    67,     3,   256,    71,    39,    69,   361,
      67,   361,   213,   214,   215,   216,   367,   368,   369,     3,
     141,   142,   143,   144,   145,   329,    85,   148,    54,    85,
      62,   351,    87,   351,   191,   351,     3,   388,    70,   390,
      72,    69,   191,    67,    66,   396,    67,   398,    28,    67,
      67,    87,    84,    69,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   219,   223,
     191,   221,   130,   220,   122,   141,   222,   287,   191,   329,
     237,   171,    43,    -1,    64,    -1,    -1,   228,   237,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,   134,    -1,    -1,   137,    -1,    -1,   140,    89,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,     3,     4,     5,     6,    66,     8,
       9,    87,    88,    89,    72,    73,    74,    75,    76,    77,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      88,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
       3,     4,     5,     6,    66,     8,     9,    -1,    87,    88,
      72,    73,    74,    75,    76,    77,     3,     4,     5,     6,
      86,     8,     9,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    87,    72,    73,    74,    75,    76,
      77,     3,     4,     5,     6,    66,     8,     9,    -1,    -1,
      87,    72,    73,    74,    75,    76,    77,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    87,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    66,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    66,
      -1,    -1,    69,    -1,    -1,    72,    73,    74,    75,    76,
      77,    66,    -1,    -1,    69,    -1,    -1,    72,    73,    74,
      75,    76,    77,    66,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     3,     8,     9,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    66,     0,    64,    -1,     3,    67,    72,    73,
      74,    75,    76,    77,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    28,    -1,    -1,    -1,    73,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,
      73,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    64,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    64,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    62,    64,    66,    73,   112,   113,   116,
     117,   118,   119,   120,   121,   122,   123,   129,   132,   133,
     134,   135,   136,   157,   158,   159,   160,   161,   162,    68,
       3,    88,     5,    63,     3,   133,   132,   136,   137,    87,
     114,   115,   133,   113,   120,   121,   113,   120,   121,   114,
     133,   114,   133,     3,    88,   113,   116,   117,    88,   112,
     113,   120,   121,   149,   152,    66,    68,     3,   134,     0,
     161,     3,     4,     5,     6,     8,     9,    66,    69,    72,
      73,    74,    75,    76,    77,    91,    92,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   111,    88,     3,   130,   131,     4,    67,   132,   136,
      71,    87,    86,   149,   152,    87,   149,   152,    87,   149,
     152,    88,   117,   118,   119,   124,   125,   126,   132,     3,
      49,    50,    51,    53,    54,    55,    56,    57,    58,    59,
      60,    87,    89,    94,   107,   108,   110,   112,   147,   148,
     149,   150,   151,   153,   154,   155,   156,   133,   112,   149,
       3,    67,   113,   120,   121,   138,   139,   140,   141,    69,
     111,    66,    94,    66,    94,    94,   110,   126,   142,     7,
       8,     9,    66,    68,    70,    96,    73,    78,    79,    74,
      75,    10,    11,    12,    13,    80,    81,    14,    15,    72,
      82,    83,    16,    17,    84,    69,   130,    86,    71,    89,
     115,    88,   108,   145,   149,   149,   149,   124,   126,   126,
     126,    89,   125,    85,    87,   127,   128,   133,   126,    85,
     111,    85,    66,    66,    66,   147,    66,     3,    87,    87,
      87,   110,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    86,   109,    71,    87,    89,   151,    66,    68,
     133,   136,   143,   144,   133,   133,    67,    71,    67,    71,
      69,   142,    67,    66,   136,   143,    67,     3,    67,    93,
     108,   110,     3,    96,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   102,   103,   104,
     105,   110,    89,   111,   131,   145,   146,    89,   111,    71,
      87,    85,   147,    85,   147,   110,   110,   110,    54,   112,
     153,    87,    87,   108,   108,    67,   138,   143,    69,   111,
     144,    66,    68,    48,   140,     3,    67,    96,    67,    71,
      69,    85,    71,    89,   128,   111,   147,    67,    67,    67,
      66,   153,   153,    67,    67,    69,    67,   138,    69,   111,
     108,   107,    89,   145,   147,   147,   147,   110,    67,   110,
      67,   110,    67,    69,    67,   147,    67,   147,    67,    87,
     147,   147
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   119,   120,   120,
     120,   121,   121,   121,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   128,   128,   128,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   136,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     3,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     5,     4,     2,     1,     1,     1,
       2,     2,     3,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     3,     1,     2,     3,     4,     5,     2,     1,
       3,     1,     3,     1,     1,     2,     1,     1,     1,     3,
       4,     4,     3,     4,     3,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     2,
       2,     1,     1,     3,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       1,     2,     5,     5,     5,     7,     6,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     2,
       2,     3,     1,     1,     1,     4,     3,     4,     3,     4,
       3,     3,     2
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
  case 8: /* postfix_expression: postfix_expression '(' ')'  */
#line 47 "hw3.y"
                                     { function++; }
#line 1948 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 48 "hw3.y"
                                                              { function++; }
#line 1954 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 49 "hw3.y"
                                            { operation++; }
#line 1960 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 50 "hw3.y"
                                               { operation++; }
#line 1966 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 51 "hw3.y"
                                    { operation++; }
#line 1972 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 52 "hw3.y"
                                    { operation++; }
#line 1978 "y.tab.c"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 62 "hw3.y"
                                  { operation++; }
#line 1984 "y.tab.c"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 63 "hw3.y"
                                  { operation++; }
#line 1990 "y.tab.c"
    break;

  case 29: /* cast_expression: '(' type_name ')' cast_expression  */
#line 80 "hw3.y"
                                             { operation++; }
#line 1996 "y.tab.c"
    break;

  case 31: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 85 "hw3.y"
                                                        { operation++; }
#line 2002 "y.tab.c"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 86 "hw3.y"
                                                        { operation++; }
#line 2008 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 87 "hw3.y"
                                                        { operation++; }
#line 2014 "y.tab.c"
    break;

  case 35: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 92 "hw3.y"
                                                            { operation++; }
#line 2020 "y.tab.c"
    break;

  case 36: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 93 "hw3.y"
                                                            { operation++; }
#line 2026 "y.tab.c"
    break;

  case 38: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 98 "hw3.y"
                                                       { operation++; }
#line 2032 "y.tab.c"
    break;

  case 39: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 99 "hw3.y"
                                                        { operation++; }
#line 2038 "y.tab.c"
    break;

  case 41: /* relational_expression: relational_expression '<' shift_expression  */
#line 104 "hw3.y"
                                                     { operation++; }
#line 2044 "y.tab.c"
    break;

  case 42: /* relational_expression: relational_expression '>' shift_expression  */
#line 105 "hw3.y"
                                                     { operation++; }
#line 2050 "y.tab.c"
    break;

  case 43: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 106 "hw3.y"
                                                       { operation++; }
#line 2056 "y.tab.c"
    break;

  case 44: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 107 "hw3.y"
                                                       { operation++; }
#line 2062 "y.tab.c"
    break;

  case 46: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 112 "hw3.y"
                                                          { operation++; }
#line 2068 "y.tab.c"
    break;

  case 47: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 113 "hw3.y"
                                                          { operation++; }
#line 2074 "y.tab.c"
    break;

  case 49: /* and_expression: and_expression '&' equality_expression  */
#line 118 "hw3.y"
                                                 { operation++; }
#line 2080 "y.tab.c"
    break;

  case 51: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 123 "hw3.y"
                                                     { operation++; }
#line 2086 "y.tab.c"
    break;

  case 53: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 128 "hw3.y"
                                                              { operation++; }
#line 2092 "y.tab.c"
    break;

  case 55: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 133 "hw3.y"
                                                                { operation++; }
#line 2098 "y.tab.c"
    break;

  case 57: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 138 "hw3.y"
                                                             { operation++; }
#line 2104 "y.tab.c"
    break;

  case 61: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 148 "hw3.y"
                                                                     { operation++; }
#line 2110 "y.tab.c"
    break;

  case 77: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 176 "hw3.y"
                                                          { __init_dcl_counter = 0;}
#line 2116 "y.tab.c"
    break;

  case 78: /* declaration: integer_declaration_specifiers init_declarator_list ';'  */
#line 177 "hw3.y"
                                                                  { _int += __init_dcl_counter; __init_dcl_counter = 0;}
#line 2122 "y.tab.c"
    break;

  case 79: /* declaration: character_declaration_specifiers init_declarator_list ';'  */
#line 178 "hw3.y"
                                                                    { _char += __init_dcl_counter; __init_dcl_counter = 0;}
#line 2128 "y.tab.c"
    break;

  case 86: /* init_declarator_list: init_declarator  */
#line 193 "hw3.y"
                          { __init_dcl_counter++; }
#line 2134 "y.tab.c"
    break;

  case 87: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 194 "hw3.y"
                                                   { __init_dcl_counter++; }
#line 2140 "y.tab.c"
    break;

  case 89: /* init_declarator: declarator '=' initializer  */
#line 199 "hw3.y"
                                     { operation++; }
#line 2146 "y.tab.c"
    break;

  case 145: /* declarator: pointer direct_declarator  */
#line 309 "hw3.y"
                                    { pointer++; }
#line 2152 "y.tab.c"
    break;

  case 147: /* declarator: direct_array_declarator  */
#line 311 "hw3.y"
                                  { array++; }
#line 2158 "y.tab.c"
    break;

  case 168: /* parameter_declaration: integer_declaration_specifiers declarator  */
#line 354 "hw3.y"
                                                    { _int++; }
#line 2164 "y.tab.c"
    break;

  case 169: /* parameter_declaration: character_declaration_specifiers declarator  */
#line 355 "hw3.y"
                                                      { _char++; }
#line 2170 "y.tab.c"
    break;

  case 176: /* abstract_declarator: pointer  */
#line 371 "hw3.y"
                  { pointer++; }
#line 2176 "y.tab.c"
    break;

  case 178: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 373 "hw3.y"
                                             { pointer++; }
#line 2182 "y.tab.c"
    break;

  case 196: /* statement: selection_statement  */
#line 403 "hw3.y"
                              { selection++; }
#line 2188 "y.tab.c"
    break;

  case 197: /* statement: iteration_statement  */
#line 404 "hw3.y"
                              { loop++; }
#line 2194 "y.tab.c"
    break;

  case 223: /* jump_statement: RETURN ';'  */
#line 457 "hw3.y"
                     { _return++; }
#line 2200 "y.tab.c"
    break;

  case 224: /* jump_statement: RETURN expression ';'  */
#line 458 "hw3.y"
                                { _return++; }
#line 2206 "y.tab.c"
    break;

  case 232: /* external_declaration: function_definition  */
#line 480 "hw3.y"
                              { function++; }
#line 2212 "y.tab.c"
    break;

  case 233: /* external_declaration: preprocessor_declaration  */
#line 481 "hw3.y"
                                   { debug___++;}
#line 2218 "y.tab.c"
    break;


#line 2222 "y.tab.c"

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

#line 496 "hw3.y"

#include <stdio.h>

extern char yytext[];
extern int column;

int main(void) {
	yydebug = 1;
    yyparse();
    
    printf("\nfunction = %d\n", function);
    printf("operation = %d\n", operation);
    printf("int = %d\n", _int);
    printf("char = %d\n", _char);
    printf("pointer = %d\n", pointer);
    printf("array = %d\n", array);
    printf("selection = %d\n", selection);
    printf("loop = %d\n", loop);
    printf("return = %d\n", _return);
    printf("debug___ = %d\n", debug___);

    return 0;
}

void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
