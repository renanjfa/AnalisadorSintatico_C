/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    VOID = 258,                    /* VOID  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    RETURN = 261,                  /* RETURN  */
    DO = 262,                      /* DO  */
    WHILE = 263,                   /* WHILE  */
    FOR = 264,                     /* FOR  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    INC = 267,                     /* INC  */
    DEC = 268,                     /* DEC  */
    LOGICAL_AND = 269,             /* LOGICAL_AND  */
    LOGICAL_OR = 270,              /* LOGICAL_OR  */
    EQUAL = 271,                   /* EQUAL  */
    NOT_EQUAL = 272,               /* NOT_EQUAL  */
    LESS_EQUAL = 273,              /* LESS_EQUAL  */
    GREATER_EQUAL = 274,           /* GREATER_EQUAL  */
    R_SHIFT = 275,                 /* R_SHIFT  */
    L_SHIFT = 276,                 /* L_SHIFT  */
    ADD_ASSIGN = 277,              /* ADD_ASSIGN  */
    MINUS_ASSIGN = 278,            /* MINUS_ASSIGN  */
    PLUS = 279,                    /* PLUS  */
    MINUS = 280,                   /* MINUS  */
    MULTIPLY = 281,                /* MULTIPLY  */
    DIV = 282,                     /* DIV  */
    REMAINDER = 283,               /* REMAINDER  */
    BITWISE_AND = 284,             /* BITWISE_AND  */
    BITWISE_OR = 285,              /* BITWISE_OR  */
    BITWISE_NOT = 286,             /* BITWISE_NOT  */
    BITWISE_XOR = 287,             /* BITWISE_XOR  */
    NOT = 288,                     /* NOT  */
    LESS_THAN = 289,               /* LESS_THAN  */
    GREATER_THAN = 290,            /* GREATER_THAN  */
    ASSIGN = 291,                  /* ASSIGN  */
    SEMICOLON = 292,               /* SEMICOLON  */
    COMMA = 293,                   /* COMMA  */
    COLON = 294,                   /* COLON  */
    L_PAREN = 295,                 /* L_PAREN  */
    R_PAREN = 296,                 /* R_PAREN  */
    L_CURLY_BRACKET = 297,         /* L_CURLY_BRACKET  */
    R_CURLY_BRACKET = 298,         /* R_CURLY_BRACKET  */
    L_SQUARE_BRACKET = 299,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 300,        /* R_SQUARE_BRACKET  */
    TERNARY_CONDITIONAL = 301,     /* TERNARY_CONDITIONAL  */
    NUMBER_SIGN = 302,             /* NUMBER_SIGN  */
    POINTER = 303,                 /* POINTER  */
    PRINTF = 304,                  /* PRINTF  */
    SCANF = 305,                   /* SCANF  */
    DEFINE = 306,                  /* DEFINE  */
    EXIT = 307,                    /* EXIT  */
    IDENTIFIER = 308,              /* IDENTIFIER  */
    NUM_HEXA = 309,                /* NUM_HEXA  */
    NUM_OCTAL = 310,               /* NUM_OCTAL  */
    NUM_INTEGER = 311,             /* NUM_INTEGER  */
    CHARACTER = 312,               /* CHARACTER  */
    STRING = 313,                  /* STRING  */
    BREAK = 314,                   /* BREAK  */
    SWITCH = 315,                  /* SWITCH  */
    CASE = 316,                    /* CASE  */
    DEFAULT = 317,                 /* DEFAULT  */
    TYPEDEF = 318,                 /* TYPEDEF  */
    STRUCT = 319,                  /* STRUCT  */
    LOWER_THAN_ELSE = 320,         /* LOWER_THAN_ELSE  */
    UNARY_MINUS = 321,             /* UNARY_MINUS  */
    UNARY_PLUS = 322,              /* UNARY_PLUS  */
    POINTER_REF = 323              /* POINTER_REF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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


#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
