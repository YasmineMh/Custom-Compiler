
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 22 "syntaxe_projet.y"

        long nombre;
        char* texte;



/* Line 1676 of yacc.c  */
#line 97 "syntaxe_projet.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


