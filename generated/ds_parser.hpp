/* A Bison parser, made by GNU Bison 3.2.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_D_COMMON_INFO_GAIJINGITHUB_DASCRIPT_GENERATED_DS_PARSER_HPP_INCLUDED
# define YY_YY_D_COMMON_INFO_GAIJINGITHUB_DASCRIPT_GENERATED_DS_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser/ds_parser.ypp" /* yacc.c:1906  */

	#include "daScript/misc/platform.h"
	#include "daScript/ast/ast.h"
    
    namespace das { extern ProgramPtr g_Program; }
    using namespace das;
    
    struct VariableDeclaration {
        VariableDeclaration ( const LineInfo & a, vector<string> * n, TypeDecl * t, Expression * i )
            : at(a), pNameList(n), pTypeDecl(t), pInit(i) {}
        ~VariableDeclaration () { delete pNameList; delete pTypeDecl; delete pInit; }
        LineInfo        at;
        vector<string>  *pNameList;
        TypeDecl        *pTypeDecl;
        Expression      *pInit;
        bool            move_to_init = false;
    };
    
    ExprLooksLikeCall * parseFunctionArguments ( ExprLooksLikeCall * pCall, Expression * arguments );
    vector<ExpressionPtr> sequenceToList ( Expression * arguments );
    void deleteVariableDeclarationList ( vector<VariableDeclaration *> * list );
    
    LineInfo tokAt ( const struct YYLTYPE & li );
    
    Annotation * findAnnotation ( const string & name, const LineInfo & at );

#line 74 "D:/common_info/GaijinGitHub/daScript/generated/ds_parser.hpp" /* yacc.c:1906  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEXER_ERROR = 258,
    _STRUCT = 259,
    _LET = 260,
    _DEF = 261,
    _WHILE = 262,
    _IF = 263,
    _ELSE = 264,
    _FOR = 265,
    _CATCH = 266,
    _TRUE = 267,
    _FALSE = 268,
    _SIZEOF = 269,
    _NEWT = 270,
    _TYPE = 271,
    _IN = 272,
    _ELIF = 273,
    _ARRAY = 274,
    _RETURN = 275,
    _NULL = 276,
    _BREAK = 277,
    _TRY = 278,
    _OPTIONS = 279,
    _TABLE = 280,
    _EXPECT = 281,
    _CONST = 282,
    _REQUIRE = 283,
    _OPERATOR = 284,
    _ENUM = 285,
    _TBOOL = 286,
    _TVOID = 287,
    _TSTRING = 288,
    _TAUTO = 289,
    _TINT = 290,
    _TINT2 = 291,
    _TINT3 = 292,
    _TINT4 = 293,
    _TUINT = 294,
    _TUINT2 = 295,
    _TUINT3 = 296,
    _TUINT4 = 297,
    _TFLOAT = 298,
    _TFLOAT2 = 299,
    _TFLOAT3 = 300,
    _TFLOAT4 = 301,
    _TRANGE = 302,
    _TURANGE = 303,
    _TBLOCK = 304,
    _TINT64 = 305,
    _TUINT64 = 306,
    _TYPENAME = 307,
    ADDEQU = 308,
    SUBEQU = 309,
    DIVEQU = 310,
    MULEQU = 311,
    MODEQU = 312,
    ANDEQU = 313,
    OREQU = 314,
    XOREQU = 315,
    ADDADD = 316,
    SUBSUB = 317,
    LEEQU = 318,
    GREQU = 319,
    EQUEQU = 320,
    NOTEQU = 321,
    RARROW = 322,
    LARROW = 323,
    QQ = 324,
    QDOT = 325,
    LPIPE = 326,
    LBPIPE = 327,
    RPIPE = 328,
    INTEGER = 329,
    LONG_INTEGER = 330,
    UNSIGNED_INTEGER = 331,
    UNSIGNED_LONG_INTEGER = 332,
    DOUBLE = 333,
    NAME = 334,
    BEGIN_STRING = 335,
    STRING_CHARACTER = 336,
    END_STRING = 337,
    BEGIN_STRING_EXPR = 338,
    END_STRING_EXPR = 339,
    UNARY_MINUS = 340,
    UNARY_PLUS = 341,
    PRE_INC = 342,
    PRE_DEC = 343,
    POST_INC = 344,
    POST_DEC = 345,
    COLCOL = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "src/parser/ds_parser.ypp" /* yacc.c:1906  */

    char                            ch;
    bool                            b;
    int32_t                         i;
    uint32_t                        ui;
    int64_t                         i64;
    uint64_t                        ui64;
    double                          d;
    string *                        s;
    vector<string> *                pNameList;
    VariableDeclaration *           pVarDecl;
    vector<VariableDeclaration*> *  pVarDeclList;
    TypeDecl *                      pTypeDecl;
    Expression *                    pExpression;
    Type                            type;
    AnnotationArgument *            aa;
    AnnotationArgumentList *        aaList;
    AnnotationDeclaration *         fa;
    AnnotationList *                faList;
    MakeStruct *                    pMakeStruct;
    Enumeration *                   pEnum;

#line 201 "D:/common_info/GaijinGitHub/daScript/generated/ds_parser.hpp" /* yacc.c:1906  */
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

#endif /* !YY_YY_D_COMMON_INFO_GAIJINGITHUB_DASCRIPT_GENERATED_DS_PARSER_HPP_INCLUDED  */
