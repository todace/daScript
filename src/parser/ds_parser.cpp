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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS_YYSTYPE
#define YYLTYPE         DAS_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das_yyparse
#define yylex           das_yylex
#define yyerror         das_yyerror
#define yydebug         das_yydebug
#define yynerrs         das_yynerrs

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS_YYSTYPE;
    struct DAS_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex.yy.h"

    void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS_YYSTYPE *lvalp, DAS_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das_yybegin_reader ( yyscan_t yyscanner );
    void das_yyend_reader ( yyscan_t yyscanner );
    void das_accept_sequence ( yyscan_t yyscanner, const char * seq, size_t seqLen, int lineNo, FileInfo * info );

    namespace das { class Module; }
    void das_collect_keywords ( das::Module * mod, yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


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

#include "ds_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEXER_ERROR = 3,                /* "lexer error"  */
  YYSYMBOL_DAS_STRUCT = 4,                 /* "struct"  */
  YYSYMBOL_DAS_CLASS = 5,                  /* "class"  */
  YYSYMBOL_DAS_LET = 6,                    /* "let"  */
  YYSYMBOL_DAS_DEF = 7,                    /* "def"  */
  YYSYMBOL_DAS_WHILE = 8,                  /* "while"  */
  YYSYMBOL_DAS_IF = 9,                     /* "if"  */
  YYSYMBOL_DAS_STATIC_IF = 10,             /* "static_if"  */
  YYSYMBOL_DAS_ELSE = 11,                  /* "else"  */
  YYSYMBOL_DAS_FOR = 12,                   /* "for"  */
  YYSYMBOL_DAS_CATCH = 13,                 /* "recover"  */
  YYSYMBOL_DAS_TRUE = 14,                  /* "true"  */
  YYSYMBOL_DAS_FALSE = 15,                 /* "false"  */
  YYSYMBOL_DAS_NEWT = 16,                  /* "new"  */
  YYSYMBOL_DAS_TYPEINFO = 17,              /* "typeinfo"  */
  YYSYMBOL_DAS_TYPE = 18,                  /* "type"  */
  YYSYMBOL_DAS_IN = 19,                    /* "in"  */
  YYSYMBOL_DAS_IS = 20,                    /* "is"  */
  YYSYMBOL_DAS_AS = 21,                    /* "as"  */
  YYSYMBOL_DAS_ELIF = 22,                  /* "elif"  */
  YYSYMBOL_DAS_STATIC_ELIF = 23,           /* "static_elif"  */
  YYSYMBOL_DAS_ARRAY = 24,                 /* "array"  */
  YYSYMBOL_DAS_RETURN = 25,                /* "return"  */
  YYSYMBOL_DAS_NULL = 26,                  /* "null"  */
  YYSYMBOL_DAS_BREAK = 27,                 /* "break"  */
  YYSYMBOL_DAS_TRY = 28,                   /* "try"  */
  YYSYMBOL_DAS_OPTIONS = 29,               /* "options"  */
  YYSYMBOL_DAS_TABLE = 30,                 /* "table"  */
  YYSYMBOL_DAS_EXPECT = 31,                /* "expect"  */
  YYSYMBOL_DAS_CONST = 32,                 /* "const"  */
  YYSYMBOL_DAS_REQUIRE = 33,               /* "require"  */
  YYSYMBOL_DAS_OPERATOR = 34,              /* "operator"  */
  YYSYMBOL_DAS_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_DAS_FINALLY = 36,               /* "finally"  */
  YYSYMBOL_DAS_DELETE = 37,                /* "delete"  */
  YYSYMBOL_DAS_DEREF = 38,                 /* "deref"  */
  YYSYMBOL_DAS_TYPEDEF = 39,               /* "typedef"  */
  YYSYMBOL_DAS_TYPEDECL = 40,              /* "typedecl"  */
  YYSYMBOL_DAS_WITH = 41,                  /* "with"  */
  YYSYMBOL_DAS_AKA = 42,                   /* "aka"  */
  YYSYMBOL_DAS_ASSUME = 43,                /* "assume"  */
  YYSYMBOL_DAS_CAST = 44,                  /* "cast"  */
  YYSYMBOL_DAS_OVERRIDE = 45,              /* "override"  */
  YYSYMBOL_DAS_ABSTRACT = 46,              /* "abstract"  */
  YYSYMBOL_DAS_UPCAST = 47,                /* "upcast"  */
  YYSYMBOL_DAS_ITERATOR = 48,              /* "iterator"  */
  YYSYMBOL_DAS_VAR = 49,                   /* "var"  */
  YYSYMBOL_DAS_ADDR = 50,                  /* "addr"  */
  YYSYMBOL_DAS_CONTINUE = 51,              /* "continue"  */
  YYSYMBOL_DAS_WHERE = 52,                 /* "where"  */
  YYSYMBOL_DAS_PASS = 53,                  /* "pass"  */
  YYSYMBOL_DAS_REINTERPRET = 54,           /* "reinterpret"  */
  YYSYMBOL_DAS_MODULE = 55,                /* "module"  */
  YYSYMBOL_DAS_PUBLIC = 56,                /* "public"  */
  YYSYMBOL_DAS_LABEL = 57,                 /* "label"  */
  YYSYMBOL_DAS_GOTO = 58,                  /* "goto"  */
  YYSYMBOL_DAS_IMPLICIT = 59,              /* "implicit"  */
  YYSYMBOL_DAS_EXPLICIT = 60,              /* "explicit"  */
  YYSYMBOL_DAS_SHARED = 61,                /* "shared"  */
  YYSYMBOL_DAS_PRIVATE = 62,               /* "private"  */
  YYSYMBOL_DAS_SMART_PTR = 63,             /* "smart_ptr"  */
  YYSYMBOL_DAS_UNSAFE = 64,                /* "unsafe"  */
  YYSYMBOL_DAS_INSCOPE = 65,               /* "inscope"  */
  YYSYMBOL_DAS_STATIC = 66,                /* "static"  */
  YYSYMBOL_DAS_FIXED_ARRAY = 67,           /* "fixed_array"  */
  YYSYMBOL_DAS_TBOOL = 68,                 /* "bool"  */
  YYSYMBOL_DAS_TVOID = 69,                 /* "void"  */
  YYSYMBOL_DAS_TSTRING = 70,               /* "string"  */
  YYSYMBOL_DAS_TAUTO = 71,                 /* "auto"  */
  YYSYMBOL_DAS_TINT = 72,                  /* "int"  */
  YYSYMBOL_DAS_TINT2 = 73,                 /* "int2"  */
  YYSYMBOL_DAS_TINT3 = 74,                 /* "int3"  */
  YYSYMBOL_DAS_TINT4 = 75,                 /* "int4"  */
  YYSYMBOL_DAS_TUINT = 76,                 /* "uint"  */
  YYSYMBOL_DAS_TBITFIELD = 77,             /* "bitfield"  */
  YYSYMBOL_DAS_TUINT2 = 78,                /* "uint2"  */
  YYSYMBOL_DAS_TUINT3 = 79,                /* "uint3"  */
  YYSYMBOL_DAS_TUINT4 = 80,                /* "uint4"  */
  YYSYMBOL_DAS_TFLOAT = 81,                /* "float"  */
  YYSYMBOL_DAS_TFLOAT2 = 82,               /* "float2"  */
  YYSYMBOL_DAS_TFLOAT3 = 83,               /* "float3"  */
  YYSYMBOL_DAS_TFLOAT4 = 84,               /* "float4"  */
  YYSYMBOL_DAS_TRANGE = 85,                /* "range"  */
  YYSYMBOL_DAS_TURANGE = 86,               /* "urange"  */
  YYSYMBOL_DAS_TRANGE64 = 87,              /* "range64"  */
  YYSYMBOL_DAS_TURANGE64 = 88,             /* "urange64"  */
  YYSYMBOL_DAS_TBLOCK = 89,                /* "block"  */
  YYSYMBOL_DAS_TINT64 = 90,                /* "int64"  */
  YYSYMBOL_DAS_TUINT64 = 91,               /* "uint64"  */
  YYSYMBOL_DAS_TDOUBLE = 92,               /* "double"  */
  YYSYMBOL_DAS_TFUNCTION = 93,             /* "function"  */
  YYSYMBOL_DAS_TLAMBDA = 94,               /* "lambda"  */
  YYSYMBOL_DAS_TINT8 = 95,                 /* "int8"  */
  YYSYMBOL_DAS_TUINT8 = 96,                /* "uint8"  */
  YYSYMBOL_DAS_TINT16 = 97,                /* "int16"  */
  YYSYMBOL_DAS_TUINT16 = 98,               /* "uint16"  */
  YYSYMBOL_DAS_TTUPLE = 99,                /* "tuple"  */
  YYSYMBOL_DAS_TVARIANT = 100,             /* "variant"  */
  YYSYMBOL_DAS_GENERATOR = 101,            /* "generator"  */
  YYSYMBOL_DAS_YIELD = 102,                /* "yield"  */
  YYSYMBOL_DAS_SEALED = 103,               /* "sealed"  */
  YYSYMBOL_ADDEQU = 104,                   /* "+="  */
  YYSYMBOL_SUBEQU = 105,                   /* "-="  */
  YYSYMBOL_DIVEQU = 106,                   /* "/="  */
  YYSYMBOL_MULEQU = 107,                   /* "*="  */
  YYSYMBOL_MODEQU = 108,                   /* "%="  */
  YYSYMBOL_ANDEQU = 109,                   /* "&="  */
  YYSYMBOL_OREQU = 110,                    /* "|="  */
  YYSYMBOL_XOREQU = 111,                   /* "^="  */
  YYSYMBOL_SHL = 112,                      /* "<<"  */
  YYSYMBOL_SHR = 113,                      /* ">>"  */
  YYSYMBOL_ADDADD = 114,                   /* "++"  */
  YYSYMBOL_SUBSUB = 115,                   /* "--"  */
  YYSYMBOL_LEEQU = 116,                    /* "<="  */
  YYSYMBOL_SHLEQU = 117,                   /* "<<="  */
  YYSYMBOL_SHREQU = 118,                   /* ">>="  */
  YYSYMBOL_GREQU = 119,                    /* ">="  */
  YYSYMBOL_EQUEQU = 120,                   /* "=="  */
  YYSYMBOL_NOTEQU = 121,                   /* "!="  */
  YYSYMBOL_RARROW = 122,                   /* "->"  */
  YYSYMBOL_LARROW = 123,                   /* "<-"  */
  YYSYMBOL_QQ = 124,                       /* "??"  */
  YYSYMBOL_QDOT = 125,                     /* "?."  */
  YYSYMBOL_QBRA = 126,                     /* "?["  */
  YYSYMBOL_LPIPE = 127,                    /* "<|"  */
  YYSYMBOL_LBPIPE = 128,                   /* " <|"  */
  YYSYMBOL_LLPIPE = 129,                   /* "$ <|"  */
  YYSYMBOL_LAPIPE = 130,                   /* "@ <|"  */
  YYSYMBOL_LFPIPE = 131,                   /* "@@ <|"  */
  YYSYMBOL_RPIPE = 132,                    /* "|>"  */
  YYSYMBOL_CLONEEQU = 133,                 /* ":="  */
  YYSYMBOL_ROTL = 134,                     /* "<<<"  */
  YYSYMBOL_ROTR = 135,                     /* ">>>"  */
  YYSYMBOL_ROTLEQU = 136,                  /* "<<<="  */
  YYSYMBOL_ROTREQU = 137,                  /* ">>>="  */
  YYSYMBOL_MAPTO = 138,                    /* "=>"  */
  YYSYMBOL_COLCOL = 139,                   /* "::"  */
  YYSYMBOL_ANDAND = 140,                   /* "&&"  */
  YYSYMBOL_OROR = 141,                     /* "||"  */
  YYSYMBOL_XORXOR = 142,                   /* "^^"  */
  YYSYMBOL_ANDANDEQU = 143,                /* "&&="  */
  YYSYMBOL_OROREQU = 144,                  /* "||="  */
  YYSYMBOL_XORXOREQU = 145,                /* "^^="  */
  YYSYMBOL_DOTDOT = 146,                   /* ".."  */
  YYSYMBOL_MTAG_E = 147,                   /* "$$"  */
  YYSYMBOL_MTAG_I = 148,                   /* "$i"  */
  YYSYMBOL_MTAG_V = 149,                   /* "$v"  */
  YYSYMBOL_MTAG_B = 150,                   /* "$b"  */
  YYSYMBOL_MTAG_A = 151,                   /* "$a"  */
  YYSYMBOL_MTAG_T = 152,                   /* "$t"  */
  YYSYMBOL_MTAG_C = 153,                   /* "$c"  */
  YYSYMBOL_MTAG_F = 154,                   /* "$f"  */
  YYSYMBOL_MTAG_DOTDOTDOT = 155,           /* "..."  */
  YYSYMBOL_BRABRAB = 156,                  /* "[["  */
  YYSYMBOL_BRACBRB = 157,                  /* "[{"  */
  YYSYMBOL_CBRCBRB = 158,                  /* "{{"  */
  YYSYMBOL_INTEGER = 159,                  /* "integer constant"  */
  YYSYMBOL_LONG_INTEGER = 160,             /* "long integer constant"  */
  YYSYMBOL_UNSIGNED_INTEGER = 161,         /* "unsigned integer constant"  */
  YYSYMBOL_UNSIGNED_LONG_INTEGER = 162,    /* "unsigned long integer constant"  */
  YYSYMBOL_UNSIGNED_INT8 = 163,            /* "unsigned int8 constant"  */
  YYSYMBOL_FLOAT = 164,                    /* "floating point constant"  */
  YYSYMBOL_DOUBLE = 165,                   /* "double constant"  */
  YYSYMBOL_NAME = 166,                     /* "name"  */
  YYSYMBOL_KEYWORD = 167,                  /* "keyword"  */
  YYSYMBOL_TYPE_FUNCTION = 168,            /* "type function"  */
  YYSYMBOL_BEGIN_STRING = 169,             /* "start of the string"  */
  YYSYMBOL_STRING_CHARACTER = 170,         /* STRING_CHARACTER  */
  YYSYMBOL_STRING_CHARACTER_ESC = 171,     /* STRING_CHARACTER_ESC  */
  YYSYMBOL_END_STRING = 172,               /* "end of the string"  */
  YYSYMBOL_BEGIN_STRING_EXPR = 173,        /* "{"  */
  YYSYMBOL_END_STRING_EXPR = 174,          /* "}"  */
  YYSYMBOL_END_OF_READ = 175,              /* "end of failed eader macro"  */
  YYSYMBOL_SEMICOLON_CUR_CUR = 176,        /* ";}}"  */
  YYSYMBOL_SEMICOLON_CUR_SQR = 177,        /* ";}]"  */
  YYSYMBOL_SEMICOLON_SQR_SQR = 178,        /* ";]]"  */
  YYSYMBOL_COMMA_SQR_SQR = 179,            /* ",]]"  */
  YYSYMBOL_COMMA_CUR_SQR = 180,            /* ",}]"  */
  YYSYMBOL_181_ = 181,                     /* ','  */
  YYSYMBOL_182_ = 182,                     /* '='  */
  YYSYMBOL_183_ = 183,                     /* '?'  */
  YYSYMBOL_184_ = 184,                     /* ':'  */
  YYSYMBOL_185_ = 185,                     /* '|'  */
  YYSYMBOL_186_ = 186,                     /* '^'  */
  YYSYMBOL_187_ = 187,                     /* '&'  */
  YYSYMBOL_188_ = 188,                     /* '<'  */
  YYSYMBOL_189_ = 189,                     /* '>'  */
  YYSYMBOL_190_ = 190,                     /* '-'  */
  YYSYMBOL_191_ = 191,                     /* '+'  */
  YYSYMBOL_192_ = 192,                     /* '*'  */
  YYSYMBOL_193_ = 193,                     /* '/'  */
  YYSYMBOL_194_ = 194,                     /* '%'  */
  YYSYMBOL_UNARY_MINUS = 195,              /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 196,               /* UNARY_PLUS  */
  YYSYMBOL_197_ = 197,                     /* '~'  */
  YYSYMBOL_198_ = 198,                     /* '!'  */
  YYSYMBOL_PRE_INC = 199,                  /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 200,                  /* PRE_DEC  */
  YYSYMBOL_POST_INC = 201,                 /* POST_INC  */
  YYSYMBOL_POST_DEC = 202,                 /* POST_DEC  */
  YYSYMBOL_DEREF = 203,                    /* DEREF  */
  YYSYMBOL_204_ = 204,                     /* '.'  */
  YYSYMBOL_205_ = 205,                     /* '['  */
  YYSYMBOL_206_ = 206,                     /* ']'  */
  YYSYMBOL_207_ = 207,                     /* '('  */
  YYSYMBOL_208_ = 208,                     /* ')'  */
  YYSYMBOL_209_ = 209,                     /* '$'  */
  YYSYMBOL_210_ = 210,                     /* '@'  */
  YYSYMBOL_211_ = 211,                     /* ';'  */
  YYSYMBOL_212_ = 212,                     /* '{'  */
  YYSYMBOL_213_ = 213,                     /* '}'  */
  YYSYMBOL_214_ = 214,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 215,                 /* $accept  */
  YYSYMBOL_program = 216,                  /* program  */
  YYSYMBOL_top_level_reader_macro = 217,   /* top_level_reader_macro  */
  YYSYMBOL_optional_public_or_private_module = 218, /* optional_public_or_private_module  */
  YYSYMBOL_module_name = 219,              /* module_name  */
  YYSYMBOL_module_declaration = 220,       /* module_declaration  */
  YYSYMBOL_character_sequence = 221,       /* character_sequence  */
  YYSYMBOL_string_constant = 222,          /* string_constant  */
  YYSYMBOL_string_builder_body = 223,      /* string_builder_body  */
  YYSYMBOL_string_builder = 224,           /* string_builder  */
  YYSYMBOL_reader_character_sequence = 225, /* reader_character_sequence  */
  YYSYMBOL_expr_reader = 226,              /* expr_reader  */
  YYSYMBOL_227_1 = 227,                    /* $@1  */
  YYSYMBOL_options_declaration = 228,      /* options_declaration  */
  YYSYMBOL_require_declaration = 229,      /* require_declaration  */
  YYSYMBOL_keyword_or_name = 230,          /* keyword_or_name  */
  YYSYMBOL_require_module_name = 231,      /* require_module_name  */
  YYSYMBOL_require_module = 232,           /* require_module  */
  YYSYMBOL_is_public_module = 233,         /* is_public_module  */
  YYSYMBOL_expect_declaration = 234,       /* expect_declaration  */
  YYSYMBOL_expect_list = 235,              /* expect_list  */
  YYSYMBOL_expect_error = 236,             /* expect_error  */
  YYSYMBOL_expression_label = 237,         /* expression_label  */
  YYSYMBOL_expression_goto = 238,          /* expression_goto  */
  YYSYMBOL_elif_or_static_elif = 239,      /* elif_or_static_elif  */
  YYSYMBOL_expression_else = 240,          /* expression_else  */
  YYSYMBOL_if_or_static_if = 241,          /* if_or_static_if  */
  YYSYMBOL_expression_else_one_liner = 242, /* expression_else_one_liner  */
  YYSYMBOL_243_2 = 243,                    /* $@2  */
  YYSYMBOL_expression_if_one_liner = 244,  /* expression_if_one_liner  */
  YYSYMBOL_expression_if_then_else = 245,  /* expression_if_then_else  */
  YYSYMBOL_246_3 = 246,                    /* $@3  */
  YYSYMBOL_expression_for_loop = 247,      /* expression_for_loop  */
  YYSYMBOL_248_4 = 248,                    /* $@4  */
  YYSYMBOL_expression_unsafe = 249,        /* expression_unsafe  */
  YYSYMBOL_expression_while_loop = 250,    /* expression_while_loop  */
  YYSYMBOL_expression_with = 251,          /* expression_with  */
  YYSYMBOL_expression_with_alias = 252,    /* expression_with_alias  */
  YYSYMBOL_253_5 = 253,                    /* $@5  */
  YYSYMBOL_annotation_argument_value = 254, /* annotation_argument_value  */
  YYSYMBOL_annotation_argument_value_list = 255, /* annotation_argument_value_list  */
  YYSYMBOL_annotation_argument_name = 256, /* annotation_argument_name  */
  YYSYMBOL_annotation_argument = 257,      /* annotation_argument  */
  YYSYMBOL_annotation_argument_list = 258, /* annotation_argument_list  */
  YYSYMBOL_annotation_declaration_name = 259, /* annotation_declaration_name  */
  YYSYMBOL_annotation_declaration_basic = 260, /* annotation_declaration_basic  */
  YYSYMBOL_annotation_declaration = 261,   /* annotation_declaration  */
  YYSYMBOL_annotation_list = 262,          /* annotation_list  */
  YYSYMBOL_optional_annotation_list = 263, /* optional_annotation_list  */
  YYSYMBOL_optional_function_argument_list = 264, /* optional_function_argument_list  */
  YYSYMBOL_optional_function_type = 265,   /* optional_function_type  */
  YYSYMBOL_function_name = 266,            /* function_name  */
  YYSYMBOL_global_function_declaration = 267, /* global_function_declaration  */
  YYSYMBOL_optional_public_or_private_function = 268, /* optional_public_or_private_function  */
  YYSYMBOL_function_declaration_header = 269, /* function_declaration_header  */
  YYSYMBOL_function_declaration = 270,     /* function_declaration  */
  YYSYMBOL_271_6 = 271,                    /* $@6  */
  YYSYMBOL_expression_block = 272,         /* expression_block  */
  YYSYMBOL_expression_any = 273,           /* expression_any  */
  YYSYMBOL_expressions = 274,              /* expressions  */
  YYSYMBOL_expr_keyword = 275,             /* expr_keyword  */
  YYSYMBOL_optional_expr_list = 276,       /* optional_expr_list  */
  YYSYMBOL_expression_keyword = 277,       /* expression_keyword  */
  YYSYMBOL_278_7 = 278,                    /* $@7  */
  YYSYMBOL_279_8 = 279,                    /* $@8  */
  YYSYMBOL_280_9 = 280,                    /* $@9  */
  YYSYMBOL_281_10 = 281,                   /* $@10  */
  YYSYMBOL_expr_pipe = 282,                /* expr_pipe  */
  YYSYMBOL_name_in_namespace = 283,        /* name_in_namespace  */
  YYSYMBOL_expression_delete = 284,        /* expression_delete  */
  YYSYMBOL_new_type_declaration = 285,     /* new_type_declaration  */
  YYSYMBOL_286_11 = 286,                   /* $@11  */
  YYSYMBOL_287_12 = 287,                   /* $@12  */
  YYSYMBOL_expr_new = 288,                 /* expr_new  */
  YYSYMBOL_expression_break = 289,         /* expression_break  */
  YYSYMBOL_expression_continue = 290,      /* expression_continue  */
  YYSYMBOL_expression_return_no_pipe = 291, /* expression_return_no_pipe  */
  YYSYMBOL_expression_return = 292,        /* expression_return  */
  YYSYMBOL_expression_yield_no_pipe = 293, /* expression_yield_no_pipe  */
  YYSYMBOL_expression_yield = 294,         /* expression_yield  */
  YYSYMBOL_expression_try_catch = 295,     /* expression_try_catch  */
  YYSYMBOL_kwd_let = 296,                  /* kwd_let  */
  YYSYMBOL_optional_in_scope = 297,        /* optional_in_scope  */
  YYSYMBOL_tuple_expansion = 298,          /* tuple_expansion  */
  YYSYMBOL_tuple_expansion_variable_declaration = 299, /* tuple_expansion_variable_declaration  */
  YYSYMBOL_expression_let = 300,           /* expression_let  */
  YYSYMBOL_expr_cast = 301,                /* expr_cast  */
  YYSYMBOL_302_13 = 302,                   /* $@13  */
  YYSYMBOL_303_14 = 303,                   /* $@14  */
  YYSYMBOL_304_15 = 304,                   /* $@15  */
  YYSYMBOL_305_16 = 305,                   /* $@16  */
  YYSYMBOL_306_17 = 306,                   /* $@17  */
  YYSYMBOL_307_18 = 307,                   /* $@18  */
  YYSYMBOL_expr_type_decl = 308,           /* expr_type_decl  */
  YYSYMBOL_309_19 = 309,                   /* $@19  */
  YYSYMBOL_310_20 = 310,                   /* $@20  */
  YYSYMBOL_expr_type_info = 311,           /* expr_type_info  */
  YYSYMBOL_expr_list = 312,                /* expr_list  */
  YYSYMBOL_block_or_simple_block = 313,    /* block_or_simple_block  */
  YYSYMBOL_block_or_lambda = 314,          /* block_or_lambda  */
  YYSYMBOL_capture_entry = 315,            /* capture_entry  */
  YYSYMBOL_capture_list = 316,             /* capture_list  */
  YYSYMBOL_optional_capture_list = 317,    /* optional_capture_list  */
  YYSYMBOL_expr_block = 318,               /* expr_block  */
  YYSYMBOL_expr_numeric_const = 319,       /* expr_numeric_const  */
  YYSYMBOL_expr_assign = 320,              /* expr_assign  */
  YYSYMBOL_expr_assign_pipe = 321,         /* expr_assign_pipe  */
  YYSYMBOL_expr_named_call = 322,          /* expr_named_call  */
  YYSYMBOL_expr_method_call = 323,         /* expr_method_call  */
  YYSYMBOL_func_addr_name = 324,           /* func_addr_name  */
  YYSYMBOL_func_addr_expr = 325,           /* func_addr_expr  */
  YYSYMBOL_326_21 = 326,                   /* $@21  */
  YYSYMBOL_327_22 = 327,                   /* $@22  */
  YYSYMBOL_328_23 = 328,                   /* $@23  */
  YYSYMBOL_329_24 = 329,                   /* $@24  */
  YYSYMBOL_expr_field = 330,               /* expr_field  */
  YYSYMBOL_331_25 = 331,                   /* $@25  */
  YYSYMBOL_332_26 = 332,                   /* $@26  */
  YYSYMBOL_expr = 333,                     /* expr  */
  YYSYMBOL_334_27 = 334,                   /* $@27  */
  YYSYMBOL_335_28 = 335,                   /* $@28  */
  YYSYMBOL_336_29 = 336,                   /* $@29  */
  YYSYMBOL_337_30 = 337,                   /* $@30  */
  YYSYMBOL_338_31 = 338,                   /* $@31  */
  YYSYMBOL_339_32 = 339,                   /* $@32  */
  YYSYMBOL_expr_mtag = 340,                /* expr_mtag  */
  YYSYMBOL_optional_field_annotation = 341, /* optional_field_annotation  */
  YYSYMBOL_optional_override = 342,        /* optional_override  */
  YYSYMBOL_optional_constant = 343,        /* optional_constant  */
  YYSYMBOL_optional_public_or_private_member_variable = 344, /* optional_public_or_private_member_variable  */
  YYSYMBOL_optional_static_member_variable = 345, /* optional_static_member_variable  */
  YYSYMBOL_structure_variable_declaration = 346, /* structure_variable_declaration  */
  YYSYMBOL_struct_variable_declaration_list = 347, /* struct_variable_declaration_list  */
  YYSYMBOL_348_33 = 348,                   /* $@33  */
  YYSYMBOL_349_34 = 349,                   /* $@34  */
  YYSYMBOL_350_35 = 350,                   /* $@35  */
  YYSYMBOL_function_argument_declaration = 351, /* function_argument_declaration  */
  YYSYMBOL_function_argument_list = 352,   /* function_argument_list  */
  YYSYMBOL_tuple_type = 353,               /* tuple_type  */
  YYSYMBOL_tuple_type_list = 354,          /* tuple_type_list  */
  YYSYMBOL_tuple_alias_type_list = 355,    /* tuple_alias_type_list  */
  YYSYMBOL_variant_type = 356,             /* variant_type  */
  YYSYMBOL_variant_type_list = 357,        /* variant_type_list  */
  YYSYMBOL_variant_alias_type_list = 358,  /* variant_alias_type_list  */
  YYSYMBOL_copy_or_move = 359,             /* copy_or_move  */
  YYSYMBOL_variable_declaration = 360,     /* variable_declaration  */
  YYSYMBOL_copy_or_move_or_clone = 361,    /* copy_or_move_or_clone  */
  YYSYMBOL_optional_ref = 362,             /* optional_ref  */
  YYSYMBOL_let_variable_name_with_pos_list = 363, /* let_variable_name_with_pos_list  */
  YYSYMBOL_let_variable_declaration = 364, /* let_variable_declaration  */
  YYSYMBOL_global_variable_declaration_list = 365, /* global_variable_declaration_list  */
  YYSYMBOL_366_36 = 366,                   /* $@36  */
  YYSYMBOL_optional_shared = 367,          /* optional_shared  */
  YYSYMBOL_optional_public_or_private_variable = 368, /* optional_public_or_private_variable  */
  YYSYMBOL_global_let = 369,               /* global_let  */
  YYSYMBOL_370_37 = 370,                   /* $@37  */
  YYSYMBOL_enum_list = 371,                /* enum_list  */
  YYSYMBOL_optional_public_or_private_alias = 372, /* optional_public_or_private_alias  */
  YYSYMBOL_single_alias = 373,             /* single_alias  */
  YYSYMBOL_374_38 = 374,                   /* $@38  */
  YYSYMBOL_alias_list = 375,               /* alias_list  */
  YYSYMBOL_alias_declaration = 376,        /* alias_declaration  */
  YYSYMBOL_377_39 = 377,                   /* $@39  */
  YYSYMBOL_optional_public_or_private_enum = 378, /* optional_public_or_private_enum  */
  YYSYMBOL_enum_name = 379,                /* enum_name  */
  YYSYMBOL_enum_declaration = 380,         /* enum_declaration  */
  YYSYMBOL_381_40 = 381,                   /* $@40  */
  YYSYMBOL_382_41 = 382,                   /* $@41  */
  YYSYMBOL_383_42 = 383,                   /* $@42  */
  YYSYMBOL_384_43 = 384,                   /* $@43  */
  YYSYMBOL_optional_structure_parent = 385, /* optional_structure_parent  */
  YYSYMBOL_optional_sealed = 386,          /* optional_sealed  */
  YYSYMBOL_structure_name = 387,           /* structure_name  */
  YYSYMBOL_class_or_struct = 388,          /* class_or_struct  */
  YYSYMBOL_optional_public_or_private_structure = 389, /* optional_public_or_private_structure  */
  YYSYMBOL_optional_struct_variable_declaration_list = 390, /* optional_struct_variable_declaration_list  */
  YYSYMBOL_structure_declaration = 391,    /* structure_declaration  */
  YYSYMBOL_392_44 = 392,                   /* $@44  */
  YYSYMBOL_393_45 = 393,                   /* $@45  */
  YYSYMBOL_variable_name_with_pos_list = 394, /* variable_name_with_pos_list  */
  YYSYMBOL_basic_type_declaration = 395,   /* basic_type_declaration  */
  YYSYMBOL_enum_basic_type_declaration = 396, /* enum_basic_type_declaration  */
  YYSYMBOL_structure_type_declaration = 397, /* structure_type_declaration  */
  YYSYMBOL_auto_type_declaration = 398,    /* auto_type_declaration  */
  YYSYMBOL_bitfield_bits = 399,            /* bitfield_bits  */
  YYSYMBOL_bitfield_alias_bits = 400,      /* bitfield_alias_bits  */
  YYSYMBOL_bitfield_type_declaration = 401, /* bitfield_type_declaration  */
  YYSYMBOL_402_46 = 402,                   /* $@46  */
  YYSYMBOL_403_47 = 403,                   /* $@47  */
  YYSYMBOL_table_type_pair = 404,          /* table_type_pair  */
  YYSYMBOL_type_declaration_no_options = 405, /* type_declaration_no_options  */
  YYSYMBOL_406_48 = 406,                   /* $@48  */
  YYSYMBOL_407_49 = 407,                   /* $@49  */
  YYSYMBOL_408_50 = 408,                   /* $@50  */
  YYSYMBOL_409_51 = 409,                   /* $@51  */
  YYSYMBOL_410_52 = 410,                   /* $@52  */
  YYSYMBOL_411_53 = 411,                   /* $@53  */
  YYSYMBOL_412_54 = 412,                   /* $@54  */
  YYSYMBOL_413_55 = 413,                   /* $@55  */
  YYSYMBOL_414_56 = 414,                   /* $@56  */
  YYSYMBOL_415_57 = 415,                   /* $@57  */
  YYSYMBOL_416_58 = 416,                   /* $@58  */
  YYSYMBOL_417_59 = 417,                   /* $@59  */
  YYSYMBOL_418_60 = 418,                   /* $@60  */
  YYSYMBOL_419_61 = 419,                   /* $@61  */
  YYSYMBOL_420_62 = 420,                   /* $@62  */
  YYSYMBOL_421_63 = 421,                   /* $@63  */
  YYSYMBOL_422_64 = 422,                   /* $@64  */
  YYSYMBOL_423_65 = 423,                   /* $@65  */
  YYSYMBOL_424_66 = 424,                   /* $@66  */
  YYSYMBOL_425_67 = 425,                   /* $@67  */
  YYSYMBOL_426_68 = 426,                   /* $@68  */
  YYSYMBOL_427_69 = 427,                   /* $@69  */
  YYSYMBOL_428_70 = 428,                   /* $@70  */
  YYSYMBOL_429_71 = 429,                   /* $@71  */
  YYSYMBOL_430_72 = 430,                   /* $@72  */
  YYSYMBOL_431_73 = 431,                   /* $@73  */
  YYSYMBOL_type_declaration = 432,         /* type_declaration  */
  YYSYMBOL_tuple_alias_declaration = 433,  /* tuple_alias_declaration  */
  YYSYMBOL_434_74 = 434,                   /* $@74  */
  YYSYMBOL_435_75 = 435,                   /* $@75  */
  YYSYMBOL_436_76 = 436,                   /* $@76  */
  YYSYMBOL_437_77 = 437,                   /* $@77  */
  YYSYMBOL_variant_alias_declaration = 438, /* variant_alias_declaration  */
  YYSYMBOL_439_78 = 439,                   /* $@78  */
  YYSYMBOL_440_79 = 440,                   /* $@79  */
  YYSYMBOL_441_80 = 441,                   /* $@80  */
  YYSYMBOL_442_81 = 442,                   /* $@81  */
  YYSYMBOL_bitfield_alias_declaration = 443, /* bitfield_alias_declaration  */
  YYSYMBOL_444_82 = 444,                   /* $@82  */
  YYSYMBOL_445_83 = 445,                   /* $@83  */
  YYSYMBOL_446_84 = 446,                   /* $@84  */
  YYSYMBOL_447_85 = 447,                   /* $@85  */
  YYSYMBOL_make_decl = 448,                /* make_decl  */
  YYSYMBOL_make_struct_fields = 449,       /* make_struct_fields  */
  YYSYMBOL_make_struct_dim = 450,          /* make_struct_dim  */
  YYSYMBOL_optional_block = 451,           /* optional_block  */
  YYSYMBOL_optional_trailing_semicolon_cur_cur = 452, /* optional_trailing_semicolon_cur_cur  */
  YYSYMBOL_optional_trailing_semicolon_cur_sqr = 453, /* optional_trailing_semicolon_cur_sqr  */
  YYSYMBOL_optional_trailing_semicolon_sqr_sqr = 454, /* optional_trailing_semicolon_sqr_sqr  */
  YYSYMBOL_optional_trailing_delim_sqr_sqr = 455, /* optional_trailing_delim_sqr_sqr  */
  YYSYMBOL_optional_trailing_delim_cur_sqr = 456, /* optional_trailing_delim_cur_sqr  */
  YYSYMBOL_make_struct_decl = 457,         /* make_struct_decl  */
  YYSYMBOL_make_tuple = 458,               /* make_tuple  */
  YYSYMBOL_make_map_tuple = 459,           /* make_map_tuple  */
  YYSYMBOL_make_tuple_call = 460,          /* make_tuple_call  */
  YYSYMBOL_make_dim = 461,                 /* make_dim  */
  YYSYMBOL_make_dim_decl = 462,            /* make_dim_decl  */
  YYSYMBOL_463_86 = 463,                   /* $@86  */
  YYSYMBOL_464_87 = 464,                   /* $@87  */
  YYSYMBOL_465_88 = 465,                   /* $@88  */
  YYSYMBOL_466_89 = 466,                   /* $@89  */
  YYSYMBOL_make_table = 467,               /* make_table  */
  YYSYMBOL_expr_map_tuple_list = 468,      /* expr_map_tuple_list  */
  YYSYMBOL_make_table_decl = 469,          /* make_table_decl  */
  YYSYMBOL_array_comprehension_where = 470, /* array_comprehension_where  */
  YYSYMBOL_array_comprehension = 471       /* array_comprehension  */
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  215
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  257
/* YYNRULES -- Number of rules.  */
#define YYNRULES  790
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1398

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   442


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   198,     2,   214,   209,   194,   187,     2,
     207,   208,   192,   191,   181,   190,   204,   193,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   184,   211,
     188,   182,   189,   183,   210,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   205,     2,   206,   186,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   212,   185,   213,   197,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   195,   196,   199,   200,
     201,   202,   203
};

#if DAS_YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   515,   515,   516,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   537,   543,   544,
     545,   549,   550,   554,   572,   573,   574,   575,   579,   583,
     588,   597,   605,   621,   626,   634,   634,   673,   700,   704,
     705,   706,   710,   713,   717,   723,   732,   735,   741,   742,
     746,   750,   751,   755,   758,   764,   770,   773,   779,   780,
     784,   785,   786,   795,   796,   800,   801,   801,   807,   808,
     809,   810,   811,   815,   821,   821,   827,   827,   833,   841,
     851,   860,   860,   867,   868,   869,   870,   871,   872,   876,
     881,   889,   890,   891,   895,   896,   897,   898,   899,   900,
     901,   902,   908,   911,   917,   918,   919,   923,   931,   944,
     947,   955,   966,   977,   988,   991,   998,  1002,  1009,  1010,
    1014,  1015,  1016,  1020,  1023,  1030,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1122,  1144,  1145,  1146,  1150,  1156,  1156,  1173,  1177,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,
    1212,  1217,  1223,  1229,  1240,  1241,  1245,  1245,  1245,  1253,
    1253,  1253,  1266,  1300,  1303,  1306,  1312,  1313,  1324,  1328,
    1331,  1339,  1339,  1339,  1342,  1348,  1351,  1354,  1358,  1364,
    1368,  1372,  1375,  1378,  1386,  1389,  1392,  1400,  1403,  1411,
    1414,  1417,  1425,  1431,  1432,  1436,  1437,  1441,  1446,  1454,
    1460,  1472,  1475,  1481,  1481,  1481,  1484,  1484,  1484,  1489,
    1489,  1489,  1497,  1497,  1497,  1503,  1513,  1524,  1539,  1542,
    1548,  1549,  1556,  1567,  1568,  1569,  1573,  1574,  1575,  1576,
    1580,  1585,  1593,  1594,  1598,  1603,  1610,  1611,  1612,  1613,
    1614,  1615,  1616,  1620,  1621,  1622,  1623,  1624,  1625,  1626,
    1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,
    1637,  1638,  1642,  1643,  1644,  1645,  1646,  1647,  1651,  1658,
    1670,  1675,  1685,  1689,  1696,  1699,  1699,  1699,  1704,  1704,
    1704,  1717,  1721,  1725,  1731,  1738,  1738,  1738,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,
    1777,  1778,  1779,  1780,  1786,  1787,  1788,  1789,  1790,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1798,  1802,  1806,  1809,
    1812,  1813,  1814,  1815,  1818,  1821,  1822,  1825,  1825,  1825,
    1828,  1833,  1837,  1841,  1841,  1841,  1846,  1849,  1853,  1853,
    1853,  1858,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,
    1869,  1871,  1875,  1876,  1881,  1885,  1886,  1887,  1888,  1889,
    1890,  1891,  1895,  1899,  1903,  1907,  1911,  1915,  1919,  1923,
    1927,  1934,  1935,  1939,  1940,  1941,  1945,  1946,  1950,  1951,
    1952,  1956,  1957,  1961,  1972,  1975,  1975,  1994,  1993,  2008,
    2007,  2020,  2029,  2035,  2040,  2050,  2051,  2055,  2058,  2067,
    2068,  2072,  2075,  2078,  2094,  2103,  2104,  2108,  2111,  2114,
    2128,  2129,  2133,  2139,  2145,  2148,  2152,  2158,  2167,  2168,
    2169,  2173,  2174,  2178,  2185,  2190,  2199,  2205,  2216,  2219,
    2224,  2229,  2237,  2248,  2251,  2251,  2271,  2272,  2276,  2277,
    2278,  2282,  2285,  2285,  2304,  2307,  2310,  2325,  2344,  2345,
    2346,  2351,  2351,  2373,  2374,  2378,  2379,  2379,  2383,  2384,
    2385,  2389,  2399,  2404,  2399,  2416,  2421,  2416,  2436,  2437,
    2441,  2442,  2446,  2452,  2453,  2457,  2458,  2459,  2463,  2466,
    2472,  2477,  2472,  2491,  2498,  2503,  2512,  2518,  2529,  2530,
    2531,  2532,  2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,
    2541,  2542,  2543,  2544,  2545,  2546,  2547,  2548,  2549,  2550,
    2551,  2552,  2553,  2554,  2555,  2559,  2560,  2561,  2562,  2563,
    2564,  2568,  2579,  2583,  2590,  2602,  2609,  2618,  2623,  2626,
    2639,  2639,  2639,  2652,  2656,  2663,  2664,  2665,  2666,  2667,
    2688,  2694,  2694,  2694,  2698,  2703,  2710,  2714,  2718,  2723,
    2728,  2733,  2738,  2742,  2746,  2751,  2755,  2759,  2764,  2764,
    2764,  2770,  2777,  2777,  2777,  2782,  2782,  2782,  2788,  2788,
    2788,  2793,  2797,  2797,  2797,  2802,  2802,  2802,  2811,  2815,
    2815,  2815,  2820,  2820,  2820,  2829,  2833,  2833,  2833,  2838,
    2838,  2838,  2847,  2847,  2847,  2853,  2853,  2853,  2862,  2865,
    2876,  2892,  2892,  2897,  2902,  2892,  2927,  2927,  2932,  2938,
    2927,  2963,  2963,  2968,  2973,  2963,  3003,  3004,  3005,  3006,
    3007,  3011,  3018,  3025,  3031,  3037,  3044,  3051,  3057,  3067,
    3072,  3079,  3080,  3085,  3086,  3090,  3091,  3095,  3096,  3100,
    3101,  3102,  3106,  3107,  3108,  3113,  3119,  3126,  3134,  3141,
    3149,  3161,  3164,  3170,  3184,  3190,  3196,  3205,  3210,  3217,
    3222,  3229,  3237,  3237,  3237,  3245,  3252,  3252,  3252,  3262,
    3267,  3274,  3277,  3283,  3292,  3300,  3308,  3321,  3322,  3326,
    3329
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"lexer error\"",
  "\"struct\"", "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"typedecl\"",
  "\"with\"", "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"",
  "\"abstract\"", "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"",
  "\"continue\"", "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"",
  "\"public\"", "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"",
  "\"shared\"", "\"private\"", "\"smart_ptr\"", "\"unsafe\"",
  "\"inscope\"", "\"static\"", "\"fixed_array\"", "\"bool\"", "\"void\"",
  "\"string\"", "\"auto\"", "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"",
  "\"uint\"", "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"",
  "\"float\"", "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"",
  "\"urange\"", "\"range64\"", "\"urange64\"", "\"block\"", "\"int64\"",
  "\"uint64\"", "\"double\"", "\"function\"", "\"lambda\"", "\"int8\"",
  "\"uint8\"", "\"int16\"", "\"uint16\"", "\"tuple\"", "\"variant\"",
  "\"generator\"", "\"yield\"", "\"sealed\"", "\"+=\"", "\"-=\"", "\"/=\"",
  "\"*=\"", "\"%=\"", "\"&=\"", "\"|=\"", "\"^=\"", "\"<<\"", "\">>\"",
  "\"++\"", "\"--\"", "\"<=\"", "\"<<=\"", "\">>=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"->\"", "\"<-\"", "\"??\"", "\"?.\"", "\"?[\"", "\"<|\"",
  "\" <|\"", "\"$ <|\"", "\"@ <|\"", "\"@@ <|\"", "\"|>\"", "\":=\"",
  "\"<<<\"", "\">>>\"", "\"<<<=\"", "\">>>=\"", "\"=>\"", "\"::\"",
  "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"", "\"||=\"", "\"^^=\"", "\"..\"",
  "\"$$\"", "\"$i\"", "\"$v\"", "\"$b\"", "\"$a\"", "\"$t\"", "\"$c\"",
  "\"$f\"", "\"...\"", "\"[[\"", "\"[{\"", "\"{{\"",
  "\"integer constant\"", "\"long integer constant\"",
  "\"unsigned integer constant\"", "\"unsigned long integer constant\"",
  "\"unsigned int8 constant\"", "\"floating point constant\"",
  "\"double constant\"", "\"name\"", "\"keyword\"", "\"type function\"",
  "\"start of the string\"", "STRING_CHARACTER", "STRING_CHARACTER_ESC",
  "\"end of the string\"", "\"{\"", "\"}\"",
  "\"end of failed eader macro\"", "\";}}\"", "\";}]\"", "\";]]\"",
  "\",]]\"", "\",}]\"", "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "UNARY_MINUS",
  "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC", "POST_INC", "POST_DEC",
  "DEREF", "'.'", "'['", "']'", "'('", "')'", "'$'", "'@'", "';'", "'{'",
  "'}'", "'#'", "$accept", "program", "top_level_reader_macro",
  "optional_public_or_private_module", "module_name", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "reader_character_sequence", "expr_reader", "$@1",
  "options_declaration", "require_declaration", "keyword_or_name",
  "require_module_name", "require_module", "is_public_module",
  "expect_declaration", "expect_list", "expect_error", "expression_label",
  "expression_goto", "elif_or_static_elif", "expression_else",
  "if_or_static_if", "expression_else_one_liner", "$@2",
  "expression_if_one_liner", "expression_if_then_else", "$@3",
  "expression_for_loop", "$@4", "expression_unsafe",
  "expression_while_loop", "expression_with", "expression_with_alias",
  "$@5", "annotation_argument_value", "annotation_argument_value_list",
  "annotation_argument_name", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration_basic", "annotation_declaration",
  "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@6", "expression_block", "expression_any",
  "expressions", "expr_keyword", "optional_expr_list",
  "expression_keyword", "$@7", "$@8", "$@9", "$@10", "expr_pipe",
  "name_in_namespace", "expression_delete", "new_type_declaration", "$@11",
  "$@12", "expr_new", "expression_break", "expression_continue",
  "expression_return_no_pipe", "expression_return",
  "expression_yield_no_pipe", "expression_yield", "expression_try_catch",
  "kwd_let", "optional_in_scope", "tuple_expansion",
  "tuple_expansion_variable_declaration", "expression_let", "expr_cast",
  "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "expr_type_decl", "$@19",
  "$@20", "expr_type_info", "expr_list", "block_or_simple_block",
  "block_or_lambda", "capture_entry", "capture_list",
  "optional_capture_list", "expr_block", "expr_numeric_const",
  "expr_assign", "expr_assign_pipe", "expr_named_call", "expr_method_call",
  "func_addr_name", "func_addr_expr", "$@21", "$@22", "$@23", "$@24",
  "expr_field", "$@25", "$@26", "expr", "$@27", "$@28", "$@29", "$@30",
  "$@31", "$@32", "expr_mtag", "optional_field_annotation",
  "optional_override", "optional_constant",
  "optional_public_or_private_member_variable",
  "optional_static_member_variable", "structure_variable_declaration",
  "struct_variable_declaration_list", "$@33", "$@34", "$@35",
  "function_argument_declaration", "function_argument_list", "tuple_type",
  "tuple_type_list", "tuple_alias_type_list", "variant_type",
  "variant_type_list", "variant_alias_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_name_with_pos_list", "let_variable_declaration",
  "global_variable_declaration_list", "$@36", "optional_shared",
  "optional_public_or_private_variable", "global_let", "$@37", "enum_list",
  "optional_public_or_private_alias", "single_alias", "$@38", "alias_list",
  "alias_declaration", "$@39", "optional_public_or_private_enum",
  "enum_name", "enum_declaration", "$@40", "$@41", "$@42", "$@43",
  "optional_structure_parent", "optional_sealed", "structure_name",
  "class_or_struct", "optional_public_or_private_structure",
  "optional_struct_variable_declaration_list", "structure_declaration",
  "$@44", "$@45", "variable_name_with_pos_list", "basic_type_declaration",
  "enum_basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "bitfield_bits", "bitfield_alias_bits",
  "bitfield_type_declaration", "$@46", "$@47", "table_type_pair",
  "type_declaration_no_options", "$@48", "$@49", "$@50", "$@51", "$@52",
  "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61",
  "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70",
  "$@71", "$@72", "$@73", "type_declaration", "tuple_alias_declaration",
  "$@74", "$@75", "$@76", "$@77", "variant_alias_declaration", "$@78",
  "$@79", "$@80", "$@81", "bitfield_alias_declaration", "$@82", "$@83",
  "$@84", "$@85", "make_decl", "make_struct_fields", "make_struct_dim",
  "optional_block", "optional_trailing_semicolon_cur_cur",
  "optional_trailing_semicolon_cur_sqr",
  "optional_trailing_semicolon_sqr_sqr", "optional_trailing_delim_sqr_sqr",
  "optional_trailing_delim_cur_sqr", "make_struct_decl", "make_tuple",
  "make_map_tuple", "make_tuple_call", "make_dim", "make_dim_decl", "$@86",
  "$@87", "$@88", "$@89", "make_table", "expr_map_tuple_list",
  "make_table_decl", "array_comprehension_where", "array_comprehension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-700)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1211,    66, -1211, -1211,    17,   -97,   286,  -139, -1211,   -81,
     220,   220,   220,    62,    28, -1211, -1211, -1211,   -86, -1211,
   -1211, -1211,   258, -1211,    53, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211,   102, -1211,   182,   216,   416,
   -1211, -1211, -1211, -1211,   286, -1211,    13, -1211,   220,   220,
   -1211, -1211,    53, -1211, -1211, -1211, -1211, -1211,   435,   465,
   -1211, -1211, -1211,    28,    28,    28,   406, -1211,   525,    80,
   -1211, -1211, -1211, -1211,   478,   538,   555, -1211,   560,    26,
      17,   466,   -97,   420,   483, -1211,   527,   527, -1211,   497,
     469,     1,   479,   567,   530,   545,   546, -1211,   547,   549,
   -1211, -1211,   -53,    17,    28,    28,    28,    28, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211,   550, -1211, -1211, -1211, -1211,
   -1211,   508, -1211, -1211, -1211, -1211, -1211,   504,    68, -1211,
   -1211, -1211, -1211,   665, -1211, -1211, -1211, -1211, -1211,   511,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,   553,
   -1211,    38, -1211,   430,   585,   525, 12266, -1211,    63,   623,
   -1211,   573, -1211, -1211,   528, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211,    73, -1211,   548, -1211,   516,   519,   521, -1211,
   -1211, 11236, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211,   700,   701, -1211,
     529,   541,   446, -1211, -1211,   571, -1211,   526,    17,   251,
   -1211, -1211, -1211,    68, -1211,  8084, -1211, -1211, -1211,   574,
     575, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211,   588,   552, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211,   734, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,   590,   554,
   -1211, -1211,   -91,   580, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211,   556, -1211,   581,   561, -1211,   573,   149,   559,
     725,   412, -1211, -1211,   582,   584,   586,   562,   587,   591,
   -1211, -1211, -1211,   579, -1211, -1211, -1211, -1211, -1211,   592,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211,   600, -1211, -1211, -1211,   606,   607, -1211, -1211, -1211,
   -1211,   610,   614,   599,    62, -1211, -1211, -1211, -1211, -1211,
     772,   593, -1211, -1211, -1211, -1211, -1211, -1211, -1211,   643,
     677, -1211,   604, -1211,     4, -1211,    14,  8084, -1211,  1730,
   -1211,   -70,    62, -1211, -1211, -1211,   251,   612,  7457,   646,
     647,  8084, -1211,   147, -1211, -1211, -1211,  7457, -1211, -1211,
     654, -1211,   340,   344,   375, -1211, -1211,  7457,   615, -1211,
   -1211, -1211,    -7, -1211, -1211, -1211,     6,  4079, -1211,   226,
     -33,  7798,   -30, -1211, -1211,  7457,   417,   617,   779, -1211,
     -74, -1211,   300,   593, -1211,  7457, -1211, -1211, -1211, -1211,
   -1211,   380,   619,   639,   225,  2746, -1211, -1211,   541,   367,
    4266,   622,  7457,   662,   642,   648,   627, -1211,   624,   650,
     680,  4453,   426,   379, -1211,   634,   656,  2933,  7457,  7457,
     287,   287,   287,   635,   640,   641,   645,   649,   655, -1211,
    1464,  7620,  7457, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
    4640,   658, -1211,  7457,  7457,  7457,  7457,  7457,  7457, -1211,
     653, -1211,   813, -1211, -1211,   657,   660,  7457,   841, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
     -68,   663, -1211,   667,   668,   669, -1211,   670, -1211, -1211,
     800, -1211, -1211, -1211, -1211,   678, -1211, -1211,   -84, -1211,
   -1211, -1211, -1211, -1211,  7621, -1211,   675, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211,  -135, -1211,   672, -1211,    25, -1211,
   -1211,   679,   699,  8464, -1211,   825,   731, -1211, -1211, -1211,
    3319,  8084,  8084,  8084,  8499,  8084,  8084,   681,   727,  8084,
     529,  8084,   529,  8084,   529,  8184,   728,  8596,  7457, -1211,
   -1211, -1211, -1211,   685, -1211, -1211, 10754, -1211,   772,   684,
   -1211,   686,    29, -1211,   689,   593,   694,   724, -1211,   698,
     697,  8693, -1211,  7457,   745, -1211,   746, -1211,  8084, -1211,
    3319, -1211,  1238,   417, -1211,   709, -1211, -1211,    62, -1211,
   -1211,  7457,  3319, -1211,   736,   791, 11126,   907,  8084,  7457,
    7457, 11597,  7457,  1238,   740, -1211, -1211,  7457, -1211, -1211,
     739,   765, 11597,  7457, -1211, -1211,  7457,  7457,  8084,  3319,
   -1211, 11126,   505,   505,   715, -1211, -1211, -1211,  7457,  7457,
    7457,  7457,  7457,  7457,   417,  2143,   417,  2344, 11271, -1211,
      42, -1211,  1238, -1211,   515,   505,   505,   -67,   505,   505,
    8728,   -37,   714, -1211, -1211,  1238, -1211, -1211,  3880, -1211,
   -1211, -1211, -1211, -1211, -1211,   423,   771,   287, -1211, 12109,
   12140,  7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,
    7457, -1211, -1211,  7457,  7457,  7457,  7457,  7457,  7457,   762,
    3506,  7457,   192,  7457,  7457,  7457,  7457,  7457,  7457,  7457,
    7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,  3693,  4827,
    7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,  7457,
     -48,  7457,  5014,   -70,  7457, -1211, -1211,    28, -1211,   922,
     573, -1211,   764, -1211,  3319, -1211,  7799,   346,   451,   744,
     177, -1211,   454,   456, -1211, -1211,    79,   457,   580,   462,
     580,   467,   580, -1211,   153, -1211,   343, -1211,   726,   736,
   11597, -1211, -1211, -1211, -1211,  8084, -1211, -1211,  8084, -1211,
   -1211, -1211,  8825, -1211,   893,   -59, -1211, 11126, -1211,    18,
    8084,  5201,  5388,  8084,  8084,   179, -1211,   736,  7457,  7457,
    7457,   541,   232, -1211,   186, 11597,  8922, -1211, -1211,  8084,
    8084,  8957,  8084, -1211, -1211,  9054,  8084,   194,   199,   325,
   -1211, 11126, -1211,  9151,  9186,  9283,  9380,  9415,  9512,    23,
     287,   730,   146,  2545,  5575, 11368,   759,    -9,   295,   760,
     -29,    35,  5762,    -9,   184,  7457, -1211,  7457,   733, -1211,
    8084, -1211,  8084, -1211,  7457,   534, -1211,   737,   741,   377,
   -1211, -1211, -1211,   558,  7457,   301, -1211,   230,   777, -1211,
   -1211,   150,   529, -1211,   761,   743, -1211, -1211,   763,   747,
   -1211, -1211, 11597, 11597, 11597, 11597, 11597, 11597, 11597, 11597,
    1499,  1499,  1454, 11597, 11597,  1454, 11971, 11971,   749,   287,
     287,   287, 11597,    83,   750, -1211, 10789,   -51,   -51,   675,
   11597,  1499,  1499, 11597, 11597, 11855,   911, 11826, 11597, 11597,
   11597, 11694,   287,   287,   287, 11597, 12235, 11465, 11942,  7946,
     557,  1454,  1454,    47,    47,    83,    83,    83,   341,  7457,
     751,   753,   421,  7457,   946, 10886, -1211,   267,   752,  8175,
     227,   572,   886,   742, -1211, -1211,  7907, -1211, -1211, -1211,
   -1211,  8084, -1211, -1211, -1211,   797, -1211,   775, -1211,   778,
   -1211,   780, -1211,  8184, -1211,   728, -1211,   593,   593, -1211,
     804,  7457,  7457,   470, -1211,   280,   805,  9609,   472,   683,
   -1211, 11597, -1211,   766,  8084,  7457, -1211, -1211,  7457,  1652,
    2065, -1211,  2464, -1211,  2544, -1211, -1211,   771, -1211, -1211,
   -1211, -1211, -1211,   767,  7457, -1211,  7457,  7457,  7457,    34,
    7457,   436,   301,   295, -1211, -1211,   769, -1211,  7457, -1211,
     770,  7457, -1211,  7457,   301,    44, -1211,   773, -1211, 11597,
   -1211, -1211,  2665,  2930, 11500,  7457,  7457,  8084,   529,  1943,
     541, -1211, -1211,  7457, -1211,  1200,   243,   233,  5949, -1211,
   -1211,   303,   806,   815,   816,   817, -1211,   304,   580, -1211,
    7457, -1211,  7457,  6148, -1211, -1211, -1211,  7457, -1211, -1211,
   -1211, -1211,   796,   782, -1211, -1211,  7457,   784, -1211, 10983,
    7457,  6335,   785, -1211, 11018, -1211, -1211, -1211, -1211, -1211,
     755, -1211, -1211,    78, -1211,    39, -1211, -1211, -1211, -1211,
   -1211,   593, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, 11597,    55, -1211,
   -1211,   374, -1211, -1211, -1211,  7457,  3877, -1211, 11597, -1211,
   -1211, -1211, -1211,   786,  6522,   -61,  9644, 11597, 11597,    -9,
     295, 11597,   787,   249,   759, -1211, -1211, 11597, -1211,   760,
      61,    -9, -1211, -1211,   789, -1211, -1211, -1211, -1211, -1211,
    9741,  9838,  5946,   580, -1211, -1211,  1238, -1211,   774,   788,
     301,   831,   792, -1211, -1211, -1211, -1211,   150,   793,   -93,
    8084,  9873,  8084,  9970, -1211,   283, 10067, -1211,  7457, 11729,
    7457, -1211, 10102, -1211,   284,  7457, -1211, -1211, -1211,   970,
      39, -1211, -1211,   572, -1211, -1211, -1211, -1211, -1211,  7457,
     837, -1211,   798,   305,   799,  7457,  7457,  7457,   801,  6709,
   -1211,   308,  7457,   260,   295, -1211,  7457,  7457,  7457,  7457,
      44, -1211,  7457,   802, -1211, -1211, -1211,   818,   558,  3132,
   -1211, -1211,   317, -1211,   236, -1211, -1211,  6896, -1211, -1211,
    7456, -1211,   473, -1211, -1211, -1211,  8084, 10199, 10296, -1211,
   -1211, 10331, -1211, -1211,   970,   417, 10428,   821,  7457, -1211,
    7457,  1454,  1454,  1454,  7457, -1211, 10525, -1211,  8213,  7457,
    7457, -1211, 10560, 11597, 11597,  8213, -1211,  1454,  7457,    -8,
   -1211, -1211,  7083,  7270, -1211, -1211, -1211, -1211, -1211, 11597,
     803,  8084,   147,  7457, 11694, -1211, -1211,   475, -1211, -1211,
   -1211, 12266, -1211, -1211, -1211,  7457,   309,   312,   313, -1211,
     952,   807, 11597, 11597,   268,   809,   808, -1211,    -8,  7457,
    7457, 11597, -1211,   594,  7457, 11729, -1211, -1211, -1211,   823,
   12266, 10657, -1211, -1211, -1211,  7457,   811,  7457,  7457,   812,
   -1211, -1211, 11597,  7457,  8321, -1211, -1211,   541, -1211, 11597,
   -1211, 11597, 11597, -1211,  8356, -1211, -1211, -1211
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,   118,     1,   283,     0,     0,     0,   566,   284,     0,
     558,   558,   558,     0,     0,    16,    15,     3,     0,    10,
       9,     8,     0,     7,   546,     6,    11,     5,     4,    13,
      12,    14,    92,    93,    91,   100,   102,    37,    53,    50,
      51,    39,    40,    41,     0,    42,    48,    38,   558,   558,
      22,    21,   546,   560,   559,   721,   711,   716,     0,   256,
      35,   105,   106,     0,     0,     0,   107,   109,   116,     0,
     104,    17,   584,   583,   211,   568,   585,   547,   548,     0,
       0,     0,     0,    43,     0,    49,     0,     0,    46,     0,
       0,   558,     0,    18,     0,     0,     0,   258,     0,     0,
     115,   110,     0,     0,     0,     0,     0,     0,   119,   213,
     212,   215,   210,   570,   569,     0,   587,   586,   590,   550,
     549,   552,    98,    99,    96,    97,    95,     0,     0,    94,
     103,    54,    52,    48,    45,    44,   561,   563,   565,     0,
     567,    19,    20,    23,   722,   712,   717,   257,    33,    36,
     114,     0,   111,   112,   113,   117,     0,   571,     0,   580,
     543,   481,    24,    25,     0,    87,    88,    85,    86,    84,
      83,    89,     0,    47,     0,   564,     0,     0,     0,    34,
     108,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,   125,
     120,     0,     0,   572,   581,     0,   591,   544,     0,     0,
      26,    27,    28,     0,   101,     0,   723,   713,   718,   179,
     180,   177,   128,   129,   131,   130,   132,   133,   134,   135,
     161,   162,   159,   160,   152,   163,   164,   153,   150,   151,
     178,   172,     0,   176,   165,   166,   167,   168,   139,   140,
     141,   136,   137,   138,   149,     0,   155,   156,   154,   147,
     148,   143,   142,   144,   145,   146,   127,   126,   171,     0,
     157,   158,   481,   123,   240,   216,   625,   628,   626,   629,
     627,   630,     0,   554,   578,   588,   551,   481,     0,     0,
     533,   531,   553,    90,     0,     0,     0,     0,     0,     0,
     598,   618,   599,   632,   600,   604,   605,   606,   607,   624,
     611,   612,   613,   614,   615,   616,   617,   619,   620,   621,
     622,   681,   603,   610,   623,   688,   695,   601,   608,   602,
     609,     0,     0,     0,     0,   631,   645,   648,   646,   647,
     708,   562,   637,   511,   517,   181,   182,   175,   170,   183,
     173,   169,     0,   121,     0,   505,     0,     0,   214,     0,
     575,   573,     0,   582,   494,   592,     0,     0,     0,     0,
       0,     0,   532,     0,   651,   672,   675,     0,   678,   668,
       0,   640,   682,   689,   696,   702,   705,     0,     0,   658,
     663,   657,     0,   671,   667,   660,     0,     0,   662,     0,
     724,   714,   719,   184,   174,     0,     0,     0,   593,   502,
     522,   122,   481,   124,   242,     0,    63,    64,    76,   384,
     385,     0,     0,     0,     0,   271,   378,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,   624,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,   326,   328,   327,   329,   330,   331,   332,
       0,     0,    29,     0,     0,     0,     0,     0,     0,   313,
     314,   219,   217,   382,   381,     0,     0,     0,     0,   235,
     230,   227,   226,   228,   229,   324,   241,   221,   464,   220,
     379,     0,   455,    71,    72,    69,   233,    70,   234,   236,
     286,   225,   454,   453,   452,   118,   458,   380,     0,   222,
     457,   456,   425,   386,   333,   387,     0,   383,   726,   730,
     727,   728,   729,   554,     0,   555,     0,   579,   495,   545,
     482,     0,     0,     0,   535,   536,     0,   529,   530,   528,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,   120,     0,   120,     0,     0,     0,   244,   665,
     666,   659,   661,     0,   664,   650,     0,   710,   709,     0,
     638,     0,   256,   512,     0,   507,     0,     0,   518,     0,
       0,     0,   503,     0,     0,   521,     0,   520,     0,   523,
       0,   506,     0,     0,   261,   265,   264,   268,     0,   302,
     772,     0,     0,   275,   272,     0,   308,     0,     0,     0,
       0,   259,     0,     0,     0,   293,   296,     0,   239,   299,
       0,     0,    57,     0,    78,   776,     0,     0,     0,     0,
     280,   277,   414,   415,   314,   255,   253,   254,     0,     0,
       0,     0,     0,     0,     0,   741,     0,     0,   765,   779,
       0,   246,     0,   249,     0,   391,   390,   430,   389,   388,
       0,   315,     0,   237,   238,     0,    74,   462,     0,   224,
     231,   232,   274,   279,   285,     0,   322,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   416,   417,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     375,     0,     0,   576,     0,   556,   574,     0,   589,     0,
     481,   534,     0,   538,     0,   542,   333,     0,     0,     0,
     643,   654,     0,     0,   633,   635,     0,     0,   123,     0,
     123,     0,   123,   509,     0,   515,     0,   634,     0,   245,
     308,   656,   649,   639,   725,     0,   513,   715,     0,   519,
     720,   504,     0,   595,   596,   524,   527,   526,    79,     0,
       0,     0,     0,     0,     0,     0,   276,   273,     0,     0,
       0,     0,     0,   781,     0,   260,     0,    80,    81,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
     281,   278,   315,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,     0,   761,   739,   741,     0,   767,
       0,     0,     0,   741,     0,     0,   744,     0,     0,   783,
       0,   243,     0,    32,     0,    30,   418,     0,     0,   365,
     362,   364,   240,    60,     0,     0,   426,     0,     0,   292,
     291,     0,   120,   252,     0,     0,   441,   440,     0,     0,
     442,   446,   343,   344,   346,   345,   347,   337,   338,   339,
     392,   393,   405,   348,   349,   406,   403,   404,     0,     0,
       0,     0,   335,   435,     0,   423,     0,   459,   460,   461,
     336,   394,   395,   350,   351,   410,   411,   412,   340,   341,
     342,   413,     0,     0,     0,   334,     0,     0,   408,   409,
     407,   401,   402,   397,   396,   398,   399,   400,     0,     0,
       0,   371,     0,     0,     0,     0,   428,     0,     0,     0,
       0,   488,   491,     0,   537,   540,   333,   541,   652,   673,
     676,     0,   679,   669,   641,     0,   683,     0,   690,     0,
     697,     0,   703,     0,   706,     0,   655,   508,   514,   594,
       0,     0,     0,     0,   266,     0,     0,     0,     0,     0,
     771,   309,   282,     0,     0,     0,   784,   431,     0,     0,
       0,   432,     0,   463,     0,   775,   766,   322,   465,   466,
     467,   468,   469,     0,     0,   742,     0,     0,     0,   741,
       0,     0,     0,     0,   750,   751,     0,   756,     0,   748,
       0,     0,   769,     0,     0,     0,   746,     0,   770,   764,
     780,   743,     0,     0,     0,     0,     0,     0,   120,     0,
       0,    58,    59,     0,    73,    65,     0,     0,     0,   427,
     287,     0,     0,     0,     0,     0,   320,     0,   123,   437,
       0,   443,     0,     0,   357,   355,   356,     0,   421,   354,
     352,   353,     0,     0,   447,   451,     0,     0,   424,     0,
       0,     0,     0,   372,     0,   376,   419,   429,   577,   557,
     119,   489,   490,   491,   492,   483,   496,   539,   653,   674,
     677,   644,   680,   670,   642,   636,   684,   686,   691,   693,
     698,   700,   704,   510,   707,   516,   597,   525,     0,   262,
     267,     0,   305,   303,   773,     0,     0,   782,    82,   294,
     297,   300,   777,     0,     0,     0,     0,   732,   731,   741,
       0,   762,     0,     0,   740,   755,   749,   763,   747,   768,
       0,   741,   753,   754,     0,   759,   745,   247,   250,    31,
       0,     0,     0,   123,   218,    61,     0,    66,     0,     0,
       0,     0,     0,   318,   319,   317,   316,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,   448,     0,   436,
       0,   422,     0,   373,     0,     0,   420,   377,   501,   486,
     483,   484,   485,   488,   687,   694,   701,    77,   263,     0,
       0,   304,     0,     0,     0,     0,     0,     0,     0,     0,
     471,     0,     0,     0,     0,   757,     0,     0,     0,     0,
       0,   752,     0,     0,   363,   480,   366,     0,    60,     0,
      75,   358,     0,   288,   531,   321,   323,     0,   310,   325,
       0,   479,     0,   477,   361,   474,     0,     0,     0,   473,
     374,     0,   487,   497,   486,     0,     0,     0,     0,   785,
       0,   295,   298,   301,     0,   433,     0,   472,   787,     0,
       0,   758,     0,   734,   733,   787,   760,   248,   244,     0,
     369,    62,   271,     0,    67,    71,    72,    69,    70,    68,
       0,     0,     0,     0,   311,   438,   444,     0,   478,   476,
     475,     0,   499,   493,   306,     0,     0,     0,     0,   434,
       0,     0,   736,   735,     0,     0,     0,   367,     0,     0,
       0,   277,   359,     0,     0,   312,   439,   445,   449,     0,
       0,     0,   774,   786,   778,     0,     0,     0,     0,     0,
     251,   370,   278,     0,     0,   450,   498,     0,   307,   788,
     789,   738,   737,   790,     0,   290,   500,   289
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1211, -1211, -1211, -1211, -1211, -1211,   338,   935, -1211, -1211,
   -1211,  1014, -1211, -1211, -1211,   621,   975, -1211,   896, -1211,
   -1211,   957, -1211, -1211, -1211,  -227, -1211, -1211, -1211,  -225,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,   819,
   -1211, -1211,   969,   -55, -1211, -1211,   365,   299,  -198,  -557,
    -752, -1211, -1211, -1211, -1206, -1211, -1211,  -209, -1211,   170,
   -1211,  -261, -1211, -1211, -1211, -1211, -1211,  -426,   -13, -1211,
   -1211, -1211, -1211, -1211,  -211,  -210,  -207, -1211,  -206, -1211,
   -1211,  1059, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211,  -566, -1211, -1211,
    -142, -1211,    41,  -438, -1211,  -363, -1211, -1211, -1211, -1210,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,   418, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211,  -151,  -164,  -224,  -162,
     -54, -1211, -1211, -1211, -1211, -1211,   651, -1211,  -559, -1211,
   -1211,  -568, -1211, -1211,  -416,  -411,  -549,  -202, -1211,  -347,
   -1211, -1211,  1022, -1211, -1211, -1211,   532,   691,    21, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,  -534,
    -222, -1211,   659, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
    -370, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211,  -192, -1211, -1211,
   -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211, -1211,
   -1211, -1211, -1211,   661,  -866,  -649,  -836, -1211, -1211, -1211,
   -1023,  -178, -1211,    33,  -458, -1211,   419, -1211, -1211, -1211,
   -1211, -1211, -1211, -1109, -1211,  -228, -1211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    16,   143,    52,    17,   164,   170,   674,   493,
     149,   494,    99,    19,    20,    45,    46,    47,    88,    21,
      39,    40,   495,   496,  1073,  1074,   497,  1198,  1269,   498,
     499,   884,   500,   613,   501,   502,   503,   504,  1018,   171,
     172,    35,    36,    37,    66,    67,    68,    69,    22,   283,
     368,   210,    23,   111,   211,   112,   156,   505,   506,   369,
     507,   788,   508,   870,  1262,   872,  1263,   509,   510,   511,
     615,   810,  1238,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   695,  1081,   889,   521,   522,   829,  1245,   830,
    1246,   832,  1247,   523,   813,  1241,   524,   624,  1279,   525,
    1086,  1087,   892,   526,   527,   625,   529,   530,   531,   881,
     532,  1067,  1319,  1068,  1358,   533,   964,  1227,   790,  1210,
    1366,  1212,  1367,  1286,  1385,   535,   364,  1233,  1293,  1123,
    1125,   973,   548,   760,  1341,  1370,   365,   366,   594,   784,
     411,   599,   786,   412,  1038,   419,   560,   383,   301,   302,
     217,   297,    78,   121,    25,   161,   371,    89,    90,   174,
      91,    26,    49,   115,   158,    27,   293,   546,   543,   968,
     373,   215,   216,    76,   118,   375,    28,   159,   295,   420,
     536,   292,   347,   348,   776,   410,   349,   568,  1134,   769,
     350,   561,  1128,   566,  1133,   562,  1129,   563,  1130,   565,
    1132,   569,  1136,   570,  1234,   571,  1138,   572,  1235,   573,
    1140,   574,  1236,   575,  1142,   576,  1144,   595,    29,    95,
     177,   353,   596,    30,    96,   178,   354,   600,    31,    94,
     176,   352,   591,   537,   856,   857,   858,   869,  1058,  1052,
    1047,  1185,   538,   859,   823,   539,   860,   540,   814,  1242,
     836,  1248,   670,   824,   541,  1351,   542
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    70,   285,   346,   610,   602,   528,   764,   785,   623,
     219,   556,   789,   778,   669,   780,   783,   782,   863,  1077,
    1175,  1043,   655,   656,   657,   579,   987,  1055,   989,   549,
     991,   650,  -118,   351,    84,    32,    33,  1002,   581,   588,
     122,   123,  1034,   850,   697,  1277,  1243,   754,   151,   605,
      70,    70,    70,   416,  1053,   815,   817,    53,   722,   723,
     362,    61,    38,    54,   605,   218,     2,   699,   700,    85,
      92,   719,     3,    48,   722,   723,   755,   958,   959,   809,
     837,   838,   165,   166,  1231,    50,   850,   104,   105,   106,
      62,    70,    70,    70,    70,     4,   544,     5,   687,     6,
     665,   667,    58,   699,   700,     7,   960,   606,   607,  1357,
     608,   877,   139,   609,    77,     8,   878,   363,   961,   284,
     818,     9,   887,   607,  1229,    71,   409,   698,    51,    59,
     849,    58,   861,   589,   765,  1369,   597,   750,   751,   688,
     877,   545,  1232,    10,  1124,   346,   376,  1255,  1381,  1049,
    1252,   879,   417,   750,   751,   150,   962,   963,    59,   346,
      63,   711,   712,   298,  1387,    11,    12,    58,    98,   719,
     418,   721,   722,   723,   724,   423,  1174,  1050,   590,   725,
     580,   598,  1051,    34,   806,   124,   967,   346,   851,   346,
     125,  1347,   126,   582,    59,   127,   816,   711,   712,   606,
    1076,    58,  1042,  1170,   606,   719,    86,   721,   722,   723,
     724,   583,   345,   795,   138,   725,   606,    87,   866,    80,
     584,  1182,   421,   840,  1183,   422,    64,   167,    59,   627,
     757,  1311,   168,   128,   169,    65,   818,   127,   758,   747,
     748,   749,   818,   644,   304,  1005,   180,   212,   346,   346,
     305,   750,   751,   867,   223,   868,   306,  1184,   822,   893,
      13,   107,    72,    73,   399,    74,   307,   284,   984,   605,
     557,    14,  1259,  1082,   308,   213,    53,    15,   839,  1037,
     558,   224,    54,  1083,    79,    98,   108,   750,   751,   309,
     985,   400,   401,    75,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   696,   607,   559,
      80,   398,  1084,  1254,  1272,  1088,  1209,  1085,   975,   346,
     346,   346,   992,   346,   346,  1260,   924,   346,   890,   346,
     759,   346,   402,   346,   345,   377,   403,   399,   925,   547,
     818,  1056,   409,    80,   993,    58,   605,  1015,   345,   767,
     768,   770,   605,   772,   773,   818,  1037,   777,   343,   779,
     818,   781,  1257,   605,   400,   401,   346,  1010,   981,  1001,
    1169,   605,    59,  1309,  1016,  1051,   345,  1057,   345,   299,
      81,  1377,  1025,   808,   434,  1181,   346,  1026,   107,  1060,
     439,  1078,  1035,   620,  1041,   404,   805,   300,   345,   405,
    1331,  1013,   406,   382,   827,   607,   346,  1145,   100,   101,
     102,   607,   621,  1120,  1143,   344,  1148,   407,  1079,  1199,
     587,  1267,   607,  1014,  1009,   402,   408,   453,   818,   403,
     607,   362,    41,    42,    43,   851,   218,   345,   345,  1019,
    1020,   818,  1022,   871,   818,   818,  1024,  1076,  1165,   152,
     153,   154,   155,  1044,  1045,  1117,   883,   897,   901,   455,
      44,  1094,  1095,  1096,  1201,  1207,  1015,  1180,  1150,   818,
     818,  1284,  1290,  1015,   818,  1107,   489,   654,  1041,   284,
    1062,  1046,  1063,   929,  1099,  1100,  1101,  1108,   404,  1202,
    1208,  1193,   405,  1299,  1027,   406,  1307,  1372,   286,    58,
    1373,  1374,   287,  1330,  -685,   699,   700,  1215,  -692,  -685,
     407,   409,   994,  -692,   109,   978,   470,   471,   472,   408,
     110,   288,   289,   290,   291,  1224,    59,  -685,   345,   345,
     345,  -692,   345,   345,   995,   628,   345,  1157,   345,  -699,
     345,  -368,   345,  1239,  -699,   417,  -368,   645,   614,  1070,
     104,   299,   106,   346,   629,  1112,   346,   699,   700,   888,
    1071,  1072,  -699,   418,  -368,  1240,   646,  1113,   346,   300,
    1172,   346,   346,   380,   113,   345,   381,    82,  1251,   382,
     114,    97,  1173,   997,    98,   812,   998,   346,   346,   972,
     346,   116,  1012,   103,   346,   345,   119,   117,  1003,   711,
     712,  1008,   120,   141,    87,   131,   399,   719,  1121,   142,
     722,   723,   724,   643,  1122,   345,   409,   725,   284,   409,
     979,   409,   409,   982,  1156,   983,   986,   409,   346,   133,
     346,   988,   409,   400,   401,   409,   990,   409,   409,  1149,
     409,  1153,  1336,   136,  1368,   104,   105,   106,   880,   709,
     710,   711,   712,   713,   162,   163,   716,   717,   718,   719,
     137,   721,   722,   723,   724,   162,   163,   873,   874,   725,
     140,   727,   728,    41,    42,    43,   144,  1192,   220,   221,
     222,    55,    56,    57,   220,   221,   528,   134,   135,   750,
     751,   145,   146,   147,   402,   399,   157,   557,   403,   148,
     160,    85,   175,   179,  1105,   104,   214,   558,   226,   218,
     225,   227,  1346,   228,   280,   281,   282,   294,  1348,   296,
     355,   356,   400,   401,    70,   743,   744,   745,   746,   747,
     748,   749,   789,   284,   357,   359,   360,  1258,   358,   346,
     361,   750,   751,   399,   367,   372,   378,   379,   370,   387,
     384,   346,   385,   374,   386,   388,   559,   404,   409,   389,
     391,   405,   345,  1364,   406,   345,   390,   534,   392,  1131,
     400,   401,   346,   817,   393,   394,   553,   345,   395,   407,
     345,   345,   396,   402,   399,   564,   397,   403,   408,   413,
     414,   415,   554,   555,  1383,   577,   345,   345,   550,   345,
     567,   604,   578,   345,   603,   586,   618,   619,   634,   632,
     635,   400,   401,   601,   637,   638,   636,  1310,   639,   640,
    1280,   647,   658,   612,   648,   346,   673,   659,   660,   682,
     686,   402,   661,   626,   557,   403,   662,   345,   631,   345,
     633,  1195,   663,   681,   558,   694,   404,   762,   683,   642,
     405,   684,  1154,   406,   689,   651,   652,   653,   690,   691,
     692,   693,   752,    14,  1343,   756,   643,   671,   407,   774,
     668,   791,   402,   775,   597,   793,   403,   408,   672,   794,
     796,   675,   676,   677,   678,   679,   680,   797,   798,   799,
     800,   803,   804,   559,   404,   685,   811,   818,   405,   697,
     821,   406,   828,   833,   834,   842,   882,   891,   918,   971,
     974,   699,   700,   980,   996,  1000,   407,  1036,  1378,  1237,
    1041,  1048,   763,  1080,  1065,   408,  1061,  1115,  1066,  1089,
    1090,  1091,  1124,  1126,  1092,   404,  1093,  1097,  1110,   405,
    1111,  1363,   406,  1135,  1137,  1118,  1228,  1139,   345,  1141,
    1146,  1151,  1203,  1155,  1164,  1176,  1178,   407,   766,  1186,
     345,  1204,  1205,  1206,  1217,  1270,   408,  1268,   346,  1218,
     346,  1220,  1225,  1249,  1256,  1261,  1271,  1273,  1274,  1276,
    1278,   345,  1292,  1297,  1375,  1298,  1300,  1320,  1304,  1318,
    1345,  1362,   875,  1376,   129,    18,  1380,  1390,  1393,    83,
    1282,   802,  1379,   709,   710,   711,   712,   713,   807,   173,
     716,   717,   718,   719,  1386,   721,   722,   723,   724,   132,
     626,  1321,   303,   725,  1324,   727,   728,   668,   825,   130,
     826,   731,  1069,   733,   345,   831,   970,  1356,  1325,  1326,
      24,   835,  1327,  1328,   346,  1275,  1294,   841,  1163,  1230,
    1342,  1295,  1332,   611,    93,   753,   843,   844,   845,   846,
     847,   848,  1316,   855,  1179,   855,   864,  1355,     0,     0,
     616,     0,   617,     0,  1337,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,   346,
       0,     0,     0,     0,     0,   750,   751,     0,     0,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   911,     0,
       0,   912,   913,   914,   915,   916,   917,     0,   922,   923,
       0,   926,   927,   928,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   945,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,     0,   965,
       0,     0,   969,     0,     0,     0,     0,     0,  1396,     0,
       0,     0,   976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,     0,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1197,     0,     0,     0,     0,     0,     0,     0,     0,
     699,   700,     0,     0,     0,     0,     0,     0,     0,     0,
    1007,     0,     0,     0,     0,     0,  1011,   922,   945,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   699,   700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   680,   345,     0,     0,     0,     0,     0,     0,
     680,     0,     0,  1059,     0,   668,     0,     0,     0,     0,
       0,     0,  1064,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1075,     0,     0,     0,   880,     0,     0,     0,
       0,     0,   709,   710,   711,   712,   713,     0,   345,   716,
     717,   718,   719,     0,   721,   722,   723,   724,     0,     0,
       0,     0,   725,     0,   727,   728,     0,     0,     0,     0,
     731,   732,   733,     0,     0,   880,   737,     0,     0,     0,
     709,   710,   711,   712,   713,     0,     0,   716,   717,   718,
     719,     0,   721,   722,   723,   724,     0,     0,     0,     0,
     725,     0,   727,   728,     0,     0,     0,  1109,   731,   732,
     733,  1114,     0,   739,   737,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   750,   751,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1147,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   668,     0,     0,  1158,     0,     0,     0,
       0,     0,   750,   751,     0,     0,     0,     0,     0,     0,
     284,     0,     0,     0,  1166,  1167,  1168,     0,  1171,     0,
       0,     0,     0,     0,     0,     0,  1177,     0,     0,   855,
       0,     0,     0,     0,   699,   700,   664,     0,     0,     0,
       0,     0,   304,  1190,  1191,     0,     0,   534,   305,     0,
       0,  1196,     0,     0,   306,     0,  1011,     0,     0,     0,
       0,     0,     0,     0,   307,     0,     0,     0,  1211,     0,
    1213,     0,   308,     0,     0,  1216,     0,     0,     0,   699,
     700,     0,     0,     0,  1219,     0,     0,   309,  1222,     0,
       0,     0,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,   709,   710,   711,   712,
       0,     0,     0,   668,     0,     0,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   711,   712,     0,   343,     0,     0,     0,
       0,   719,     0,   721,   722,   723,   724,     0,     0,     0,
      59,   725,     0,     0,     0,     0,  1287,     0,  1288,     0,
       0,     0,     0,  1291,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,  1296,   750,   751,
       0,     0,     0,  1301,  1302,  1303,     0,  1306,     0,     0,
    1308,     0,     0,   344,  1312,  1313,  1314,  1315,     0,     0,
    1317,     0,     0,     0,   399,     0,     0,  1329,     0,   745,
     746,   747,   748,   749,     0,  1334,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,     0,     0,     0,
       0,   400,   401,     0,     0,     0,     0,     0,   668,     0,
       0,     0,     0,     0,     0,     0,     0,  1352,  1353,     0,
       0,   424,     0,     0,     0,     0,     3,     0,   425,   426,
     427,  1361,   428,     0,   429,   430,   431,   432,   433,     0,
       0,  1365,     0,     0,   434,   435,   436,   437,   438,     0,
     439,     0,     0,  1371,     0,     0,     0,   440,   441,     0,
       0,   442,   402,   443,   444,     0,   403,   445,  1382,     8,
     446,   447,  1384,   448,   449,     0,     0,   450,   451,     0,
       0,     0,     0,  1389,   452,  1391,  1392,   453,   310,   311,
     312,  1394,   314,   315,   316,   317,   318,   454,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,   455,
       0,   456,   457,     0,     0,   404,     0,     0,     0,   405,
       0,  1159,   406,     0,   458,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,     0,   460,
     461,   462,     0,     0,     0,     0,   408,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   463,   464,   465,
     466,   467,     0,   468,     0,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,    59,   480,   481,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     483,   484,   485,     0,    13,     0,     0,   486,   487,     0,
       0,     0,     0,     0,     0,     0,     0,   488,     0,   489,
     490,   491,   284,   492,   424,     0,     0,     0,     0,     3,
       0,   425,   426,   427,     0,   428,     0,   429,   430,   431,
     432,   433,     0,     0,     0,     0,     0,   434,   435,   436,
     437,   438,     0,   439,     0,     0,     0,     0,     0,     0,
     440,   441,     0,     0,   442,     0,   443,   444,     0,     0,
     445,     0,     8,   446,   447,     0,   448,   449,     0,     0,
     450,   451,     0,     0,     0,     0,     0,   452,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   460,   461,   462,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,   399,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    59,
     480,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,     0,     0,     0,     0,
       0,     0,     0,   483,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,     0,     0,     0,     0,     0,     0,
     488,     0,   489,   490,   491,   284,  1194,   429,   430,   431,
     432,   433,     0,     0,     0,     0,     0,   434,     0,   436,
       0,     0,     0,   439,     0,   399,     0,     0,     0,     0,
       0,   441,     0,     0,     0,   402,     0,   444,     0,   403,
     445,     0,     0,   446,     0,   850,     0,   449,     0,     0,
       0,     0,   400,   401,     0,     0,     0,   551,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,     0,     0,     0,   404,     0,
       0,     0,   405,     0,  1160,   406,     0,   458,   459,     0,
       0,     0,     0,   402,     0,     0,     0,   403,     0,     0,
     407,     0,     0,     0,     0,     0,     0,     0,     0,   408,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,   851,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   852,
     552,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   404,     0,     0,     0,
     405,     0,     0,   853,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,     0,     0,     0,     0,   407,     0,
     854,     0,   489,   490,     0,   284,     0,   408,   429,   430,
     431,   432,   433,     0,     0,     0,     0,     0,   434,     0,
     436,     0,     0,     0,   439,     0,   399,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,   444,     0,
       0,   445,     0,     0,   446,     0,     0,     0,   449,     0,
       0,     0,     0,   400,   401,     0,     0,     0,   551,     0,
       0,   453,   310,   311,   312,     0,   314,   315,   316,   317,
     318,   454,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   455,     0,   456,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   458,   459,
       0,     0,     0,     0,   402,     0,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   463,   464,   465,   466,   467,   399,   468,   851,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     852,   552,   481,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   400,   401,     0,     0,   404,     0,     0,
       0,   405,     0,     0,   853,   484,   485,     0,    13,     0,
       0,   486,   487,     0,     0,     0,     0,     0,     0,   407,
       0,   862,     0,   489,   490,     0,   284,     0,   408,   429,
     430,   431,   432,   433,     0,     0,     0,     0,     0,   434,
       0,   436,     0,     0,     0,   439,   399,   581,     0,     0,
       0,     0,     0,   441,   402,     0,     0,     0,   403,   444,
       0,     0,   445,     0,     0,   446,     0,     0,     0,   449,
       0,     0,     0,   400,   401,     0,     0,     0,     0,   551,
       0,     0,   453,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   454,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   455,     0,   456,   404,     0,     0,
       0,   405,     0,  1161,   406,     0,     0,     0,     0,   458,
     459,     0,     0,     0,   402,     0,     0,     0,   403,   407,
       0,     0,     0,     0,     0,     0,     0,     0,   408,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   463,   464,   465,   466,   467,   399,   468,     0,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,    59,   552,   481,   482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,     0,   404,     0,     0,
       0,   405,   582,  1162,   406,   483,   484,   485,     0,    13,
       0,     0,   486,   487,     0,     0,     0,     0,     0,   407,
     583,     0,   488,     0,   489,   490,     0,   284,   408,   584,
     429,   430,   431,   432,   433,     0,     0,     0,     0,     0,
     434,     0,   436,     0,     0,     0,   439,     0,     0,     0,
       0,     0,     0,     0,   441,   402,     0,     0,     0,   403,
     444,     0,     0,   445,     0,     0,   446,     0,     0,     0,
     449,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,     0,     0,   453,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   454,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   455,     0,   456,   404,     0,
       0,     0,   405,     0,  1187,   406,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,   622,
     407,     0,     0,     0,     0,   460,   461,   462,     0,   408,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   463,   464,   465,   466,   467,     0,   468,
       0,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,    59,   552,   481,   482,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,   484,   485,     0,
      13,     0,     0,   486,   487,     0,     0,   429,   430,   431,
     432,   433,     0,   488,     0,   489,   490,   434,   284,   436,
       0,     0,   399,   439,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,   444,     0,     0,
     445,     0,     0,   446,     0,     0,     0,   449,     0,   400,
     401,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
     402,     0,     0,     0,   403,     0,   649,     0,     0,     0,
       0,     0,   460,   461,   462,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,     0,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    59,
     552,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   404,     0,     0,     0,   405,     0,  1188,
     406,     0,     0,   483,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,     0,   407,     0,     0,     0,     0,
     488,     0,   489,   490,   408,   284,   429,   430,   431,   432,
     433,     0,     0,     0,     0,     0,   434,  1322,   436,   437,
       0,     0,   439,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,   444,     0,     0,   445,
       0,     0,   446,   447,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,   453,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   454,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   455,     0,   456,  1323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   463,
     464,   465,   466,   467,     0,   468,     0,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,    59,   552,
     481,   482,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,   484,   485,     0,    13,     0,     0,   486,
     487,     0,     0,   429,   430,   431,   432,   433,     0,   488,
       0,   489,   490,   434,   284,   436,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,   444,     0,     0,   445,     0,     0,   446,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   551,     0,     0,   453,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   454,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   455,     0,
     456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,   461,
     462,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   463,   464,   465,   466,
     467,     0,   468,     0,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,    59,   552,   481,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     484,   485,     0,    13,     0,     0,   486,   487,     0,     0,
     429,   430,   431,   432,   433,     0,   488,     0,   489,   490,
     434,   284,   436,     0,     0,     0,   439,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
     444,     0,     0,   445,     0,     0,   446,     0,     0,     0,
     449,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,     0,     0,   453,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   454,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   455,     0,   456,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   919,   920,   921,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   463,   464,   465,   466,   467,     0,   468,
       0,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,    59,   552,   481,   482,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,   484,   485,     0,
      13,     0,     0,   486,   487,     0,     0,   429,   430,   431,
     432,   433,     0,   488,     0,   489,   490,   434,   284,   436,
       0,     0,     0,   439,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,   444,     0,     0,
     445,     0,     0,   446,     0,     0,     0,   449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   942,   943,   944,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,     0,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    59,
     552,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,   429,   430,   431,   432,   433,     0,
     488,     0,   489,   490,   434,   284,   436,     0,     0,   399,
     439,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,   444,     0,     0,   445,     0,     0,
     446,     0,     0,     0,   449,     0,   400,   401,     0,     0,
       0,     0,     0,     0,   551,     0,     0,   453,   310,   311,
     312,     0,   314,   315,   316,   317,   318,   454,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,   455,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   458,   459,     0,   402,     0,     0,
       0,   403,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   463,   464,   465,
     466,   467,     0,   468,     0,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,    59,   552,   481,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     404,     0,     0,     0,   405,     0,  1244,   406,     0,     0,
     483,   484,   485,     0,    13,     0,     0,   486,   487,     0,
       0,     0,   407,     0,     0,   885,     0,   488,   886,   489,
     490,   408,   284,   429,   430,   431,   432,   433,     0,     0,
       0,     0,     0,   434,     0,   436,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,   444,     0,     0,   445,     0,     0,   446,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   551,     0,     0,   453,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   454,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   455,     0,
     456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   463,   464,   465,   466,
     467,     0,   468,     0,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,    59,   552,   481,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     484,   485,     0,    13,     0,     0,   486,   487,     0,     0,
     429,   430,   431,   432,   433,   585,   488,     0,   489,   490,
     434,   284,   436,     0,     0,     0,   439,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
     444,     0,     0,   445,     0,     0,   446,     0,     0,     0,
     449,     0,     0,     0,     0,     0,   630,     0,     0,     0,
     551,     0,     0,   453,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   454,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   455,     0,   456,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   463,   464,   465,   466,   467,     0,   468,
       0,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,    59,   552,   481,   482,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,   484,   485,     0,
      13,     0,     0,   486,   487,     0,     0,   429,   430,   431,
     432,   433,     0,   488,     0,   489,   490,   434,   284,   436,
       0,     0,     0,   439,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,   444,     0,     0,
     445,     0,     0,   446,     0,     0,     0,   449,     0,     0,
     641,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,     0,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    59,
     552,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,   429,   430,   431,   432,   433,     0,
     488,     0,   489,   490,   434,   284,   436,     0,     0,     0,
     439,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,   444,     0,     0,   445,     0,     0,
     446,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   551,     0,     0,   453,   310,   311,
     312,     0,   314,   315,   316,   317,   318,   454,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,   455,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   458,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   463,   464,   465,
     466,   467,     0,   468,     0,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,    59,   552,   481,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   671,     0,
     483,   484,   485,     0,    13,     0,     0,   486,   487,     0,
       0,   429,   430,   431,   432,   433,     0,   488,   946,   489,
     490,   434,   284,   436,     0,     0,     0,   439,     0,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,   444,     0,     0,   445,     0,     0,   446,     0,     0,
       0,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   551,     0,     0,   453,   310,   311,   312,     0,   314,
     315,   316,   317,   318,   454,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,   332,   333,   334,
       0,     0,   337,   338,   339,   340,   455,     0,   456,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   459,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,   463,   464,   465,   466,   467,     0,
     468,     0,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,    59,   552,   481,   482,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   483,   484,   485,
       0,    13,     0,     0,   486,   487,     0,     0,   429,   430,
     431,   432,   433,     0,   488,     0,   489,   490,   434,   284,
     436,     0,     0,     0,   439,     0,     0,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,   444,     0,
       0,   445,     0,     0,   446,     0,     0,     0,   449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   551,     0,
       0,   453,   310,   311,   312,     0,   314,   315,   316,   317,
     318,   454,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   455,     0,   456,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   458,   459,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   463,   464,   465,   466,   467,     0,   468,     0,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
      59,   552,   481,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   483,   484,   485,     0,    13,     0,
       0,   486,   487,     0,     0,   429,   430,   431,   432,   433,
       0,   488,   966,   489,   490,   434,   284,   436,     0,     0,
       0,   439,     0,     0,     0,     0,     0,     0,     0,   441,
       0,     0,     0,     0,     0,   444,     0,     0,   445,     0,
       0,   446,     0,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   551,     0,     0,   453,   310,
     311,   312,     0,   314,   315,   316,   317,   318,   454,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,   332,   333,   334,     0,     0,   337,   338,   339,   340,
     455,     0,   456,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   458,   459,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   463,   464,
     465,   466,   467,     0,   468,     0,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,    59,   552,   481,
     482,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   483,   484,   485,     0,    13,     0,     0,   486,   487,
       0,     0,   429,   430,   431,   432,   433,     0,   488,  1004,
     489,   490,   434,   284,   436,     0,     0,     0,   439,     0,
       0,     0,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,   444,     0,     0,   445,     0,     0,   446,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   551,     0,     0,   453,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   454,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   455,     0,   456,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   458,   459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   463,   464,   465,   466,   467,
       0,   468,     0,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,    59,   552,   481,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,     0,   483,   484,
     485,     0,    13,     0,     0,   486,   487,     0,     0,   429,
     430,   431,   432,   433,     0,   488,     0,   489,   490,   434,
     284,   436,     0,     0,     0,   439,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,   444,
       0,     0,   445,     0,     0,   446,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   551,
       0,     0,   453,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   454,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   455,     0,   456,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   458,
     459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   463,   464,   465,   466,   467,     0,   468,     0,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,    59,   552,   481,   482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   483,   484,   485,     0,    13,
       0,     0,   486,   487,     0,     0,   429,   430,   431,   432,
     433,     0,   488,  1039,   489,   490,   434,   284,   436,     0,
       0,     0,   439,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,   444,     0,     0,   445,
       0,     0,   446,     0,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,   453,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   454,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   455,     0,   456,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   463,
     464,   465,   466,   467,     0,   468,     0,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,    59,   552,
     481,   482,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,   484,   485,     0,    13,     0,     0,   486,
     487,     0,     0,   429,   430,   431,   432,   433,     0,   488,
    1054,   489,   490,   434,   284,   436,     0,     0,   399,   439,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,   444,     0,     0,   445,     0,     0,   446,
       0,     0,     0,   449,     0,   400,   401,     0,     0,     0,
       0,     0,     0,   551,     0,     0,   453,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   454,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   455,     0,
     456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,   459,     0,   402,     0,     0,     0,
     403,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   463,   464,   465,   466,
     467,     0,   468,     0,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,    59,   552,   481,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   404,
       0,     0,     0,   405,     0,  1266,   406,     0,     0,   483,
     484,   485,     0,    13,     0,     0,   486,   487,     0,     0,
       0,   407,     0,     0,  1200,     0,   488,     0,   489,   490,
     408,   284,   429,   430,   431,   432,   433,     0,     0,     0,
       0,     0,   434,     0,   436,     0,     0,     0,   439,     0,
       0,     0,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,   444,     0,     0,   445,     0,     0,   446,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   551,     0,     0,   453,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   454,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   455,     0,   456,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   458,   459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   463,   464,   465,   466,   467,
       0,   468,     0,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,    59,   552,   481,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   483,   484,
     485,     0,    13,     0,     0,   486,   487,     0,     0,   429,
     430,   431,   432,   433,     0,   488,  1214,   489,   490,   434,
     284,   436,     0,     0,     0,   439,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,   444,
       0,     0,   445,     0,     0,   446,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   551,
       0,     0,   453,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   454,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   455,     0,   456,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   458,
     459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   463,   464,   465,   466,   467,     0,   468,     0,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,    59,   552,   481,   482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   483,   484,   485,     0,    13,
       0,     0,   486,   487,     0,     0,   429,   430,   431,   432,
     433,     0,   488,  1223,   489,   490,   434,   284,   436,     0,
       0,     0,   439,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,   444,     0,     0,   445,
       0,     0,   446,     0,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,   453,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   454,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   455,     0,   456,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   463,
     464,   465,   466,   467,     0,   468,     0,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,    59,   552,
     481,   482,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,   484,   485,     0,    13,     0,     0,   486,
     487,     0,     0,   429,   430,   431,   432,   433,     0,   488,
    1250,   489,   490,   434,   284,   436,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,   444,     0,     0,   445,     0,     0,   446,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   551,     0,     0,   453,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   454,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   455,     0,
     456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   463,   464,   465,   466,
     467,     0,   468,     0,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,    59,   552,   481,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     484,   485,     0,    13,     0,     0,   486,   487,     0,     0,
     429,   430,   431,   432,   433,     0,   488,  1305,   489,   490,
     434,   284,   436,     0,     0,     0,   439,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
     444,     0,     0,   445,     0,     0,   446,     0,     0,     0,
     449,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,     0,     0,   453,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   454,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   455,     0,   456,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,  1333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   463,   464,   465,   466,   467,     0,   468,
       0,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,    59,   552,   481,   482,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,   484,   485,     0,
      13,     0,     0,   486,   487,     0,     0,   429,   430,   431,
     432,   433,     0,   488,     0,   489,   490,   434,   284,   436,
       0,     0,     0,   439,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,   444,     0,     0,
     445,     0,     0,   446,     0,     0,     0,   449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     453,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     454,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   455,     0,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
       0,     0,     0,     0,     0,     0,  1359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     463,   464,   465,   466,   467,     0,   468,     0,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    59,
     552,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,   484,   485,     0,    13,     0,     0,
     486,   487,     0,     0,   429,   430,   431,   432,   433,     0,
     488,     0,   489,   490,   434,   284,   436,     0,     0,     0,
     439,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,   444,     0,     0,   445,     0,     0,
     446,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   551,     0,     0,   453,   310,   311,
     312,     0,   314,   315,   316,   317,   318,   454,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,   455,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   458,   459,     0,     0,     0,     0,
       0,     0,     0,  1360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   463,   464,   465,
     466,   467,     0,   468,     0,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,    59,   552,   481,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     483,   484,   485,     0,    13,     0,     0,   486,   487,     0,
       0,   429,   430,   431,   432,   433,     0,   488,     0,   489,
     490,   434,   284,   436,     0,     0,     0,   439,   399,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,   444,     0,     0,   445,     0,     0,   446,     0,     0,
       0,   449,     0,     0,     0,   400,   401,     0,     0,     0,
       0,   551,     0,     0,   453,   310,   311,   312,     0,   314,
     315,   316,   317,   318,   454,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,   332,   333,   334,
       0,     0,   337,   338,   339,   340,   455,     0,   456,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   459,     0,     0,     0,   402,     0,     0,     0,
     403,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,   463,   464,   465,   466,   467,     0,
     468,     0,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,    59,   552,   481,   482,     0,     0,     0,
     -68,     0,   666,     0,     0,     0,     0,     0,   304,   404,
       0,   699,   700,   405,   305,  1335,   406,   483,   484,   485,
     306,    13,     0,     0,   486,   487,     0,     0,     0,     0,
     307,   407,     0,     0,   488,     0,   489,   490,   308,   284,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,     0,     0,     0,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   724,     0,
       0,     0,     0,   725,   726,   727,   728,   729,   730,    58,
       0,   731,   732,   733,   734,   735,   736,   737,     0,     0,
       0,     0,   343,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   738,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   304,     0,     0,   699,
     700,     0,   305,     0,     0,   750,   751,     0,   306,   344,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,     0,     0,     0,     0,     0,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   309,     0,     0,     0,     0,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,     0,
       0,     0,     0,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   819,   721,   722,   723,   724,   699,   700,     0,
       0,   725,   726,   727,   728,   729,   730,    58,     0,   731,
     732,   733,   734,   735,   736,   737,     0,     0,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   592,     0,   699,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   820,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,   344,     0,   593,
     977,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     819,   721,   722,   723,   724,     0,     0,     0,     0,   725,
     726,   727,   728,   729,   730,     0,     0,   731,   732,   733,
     734,   735,   736,   737,     0,     0,     0,     0,   709,   710,
     711,   712,   713,     0,     0,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,     0,     0,     0,   820,
     739,     0,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   304,     0,     0,     0,     0,     0,   305,     0,
       0,   750,   751,     0,   306,     0,     0,     0,  1127,     0,
       0,     0,     0,     0,   307,     0,     0,     0,     0,     0,
       0,     0,   308,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,   309,     0,     0,
     750,   751,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   699,   700,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,     0,   305,     0,
       0,     0,     0,     0,   306,     0,     0,     0,     0,     0,
       0,     0,     0,    58,   307,     0,     0,     0,     0,     0,
       0,     0,   308,   699,   700,     0,   343,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   309,     0,     0,
      59,     0,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,   709,   710,   711,
     712,   713,     0,   344,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,     0,     0,     0,     0,   731,   732,   733,     0,     0,
       0,   737,     0,    58,     0,   709,   710,   711,   712,   713,
       0,     0,   716,   717,   718,   719,   343,   721,   722,   723,
     724,   699,   700,     0,     0,   725,     0,   727,   728,     0,
     592,     0,     0,   731,   732,   733,     0,     0,   739,   737,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,     0,     0,   699,   700,     0,   750,
     751,     0,     0,     0,     0,     0,  1119,     0,     0,     0,
       0,     0,     0,   344,     0,     0,   739,     0,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   751,     0,
       0,     0,     0,     0,  1350,     0,     0,     0,     0,     0,
       0,     0,     0,   709,   710,   711,   712,   713,     0,     0,
     716,   717,   718,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,     0,
       0,   731,   732,   733,     0,     0,     0,   737,   709,   710,
     711,   712,   713,     0,     0,   716,   717,   718,   719,     0,
     721,   722,   723,   724,   699,   700,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,   731,   732,   733,     0,
       0,     0,   737,     0,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,   699,
     700,     0,     0,     0,     0,   750,   751,     0,     0,     0,
       0,     0,  1395,     0,     0,     0,     0,     0,     0,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,     0,     0,     0,  1397,     0,     0,
       0,     0,     0,     0,     0,     0,   709,   710,   711,   712,
     713,     0,     0,   716,   717,   718,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,   731,   732,   733,     0,     0,     0,
     737,   709,   710,   711,   712,   713,   699,   700,   716,   717,
     718,   719,     0,   721,   722,   723,   724,     0,     0,     0,
       0,   725,     0,   727,   728,     0,     0,     0,     0,   731,
     732,   733,     0,     0,     0,   737,     0,   739,     0,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,   751,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,   771,   709,   710,
     711,   712,   713,   699,   700,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,   731,   732,   733,     0,
       0,     0,   737,     0,     0,     0,     0,     0,   699,   700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,   787,   709,   710,   711,   712,   713,
       0,     0,   716,   717,   718,   719,     0,   721,   722,   723,
     724,     0,     0,     0,     0,   725,     0,   727,   728,     0,
       0,     0,     0,   731,   732,   733,     0,     0,     0,   737,
     709,   710,   711,   712,   713,   699,   700,   716,   717,   718,
     719,     0,   721,   722,   723,   724,     0,     0,     0,     0,
     725,     0,   727,   728,     0,     0,     0,     0,   731,   732,
     733,     0,     0,     0,   737,     0,   739,     0,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   751,     0,
       0,   801,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   751,     0,     0,   876,   709,   710,   711,
     712,   713,   699,   700,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,     0,     0,     0,     0,   731,   732,   733,     0,     0,
       0,   737,     0,     0,     0,     0,     0,   699,   700,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   739,     0,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
     751,     0,     0,   999,   709,   710,   711,   712,   713,     0,
       0,   716,   717,   718,   719,     0,   721,   722,   723,   724,
       0,     0,     0,     0,   725,     0,   727,   728,     0,     0,
       0,     0,   731,   732,   733,     0,     0,     0,   737,   709,
     710,   711,   712,   713,   699,   700,   716,   717,   718,   719,
       0,   721,   722,   723,   724,     0,     0,     0,     0,   725,
       0,   727,   728,     0,     0,     0,     0,   731,   732,   733,
       0,     0,     0,   737,     0,   739,     0,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   750,   751,     0,     0,
    1017,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     739,     0,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   750,   751,     0,     0,  1021,   709,   710,   711,   712,
     713,   699,   700,   716,   717,   718,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,   731,   732,   733,     0,     0,     0,
     737,     0,     0,     0,     0,     0,   699,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   739,     0,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,   751,
       0,     0,  1023,   709,   710,   711,   712,   713,     0,     0,
     716,   717,   718,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,     0,
       0,   731,   732,   733,     0,     0,     0,   737,   709,   710,
     711,   712,   713,   699,   700,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,   731,   732,   733,     0,
       0,     0,   737,     0,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,   751,     0,     0,  1028,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,  1029,   709,   710,   711,   712,   713,
     699,   700,   716,   717,   718,   719,     0,   721,   722,   723,
     724,     0,     0,     0,     0,   725,     0,   727,   728,     0,
       0,     0,     0,   731,   732,   733,     0,     0,     0,   737,
       0,     0,     0,     0,     0,   699,   700,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   739,     0,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   751,     0,
       0,  1030,   709,   710,   711,   712,   713,     0,     0,   716,
     717,   718,   719,     0,   721,   722,   723,   724,     0,     0,
       0,     0,   725,     0,   727,   728,     0,     0,     0,     0,
     731,   732,   733,     0,     0,     0,   737,   709,   710,   711,
     712,   713,   699,   700,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,     0,     0,     0,     0,   731,   732,   733,     0,     0,
       0,   737,     0,   739,     0,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   750,   751,     0,     0,  1031,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   739,     0,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
     751,     0,     0,  1032,   709,   710,   711,   712,   713,   699,
     700,   716,   717,   718,   719,     0,   721,   722,   723,   724,
       0,     0,     0,     0,   725,     0,   727,   728,     0,     0,
       0,     0,   731,   732,   733,     0,     0,     0,   737,     0,
       0,     0,     0,     0,   699,   700,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   739,     0,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   750,   751,     0,     0,
    1033,   709,   710,   711,   712,   713,     0,     0,   716,   717,
     718,   719,     0,   721,   722,   723,   724,     0,     0,     0,
       0,   725,     0,   727,   728,     0,     0,     0,     0,   731,
     732,   733,     0,     0,     0,   737,   709,   710,   711,   712,
     713,   699,   700,   716,   717,   718,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,   731,   732,   733,     0,     0,     0,
     737,     0,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,  1152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   739,     0,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,   751,
       0,     0,  1253,   709,   710,   711,   712,   713,   699,   700,
     716,   717,   718,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,     0,
       0,   731,   732,   733,     0,     0,     0,   737,     0,     0,
       0,     0,     0,   699,   700,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,   751,     0,     0,  1264,
     709,   710,   711,   712,   713,     0,     0,   716,   717,   718,
     719,     0,   721,   722,   723,   724,     0,     0,     0,     0,
     725,     0,   727,   728,     0,     0,     0,     0,   731,   732,
     733,     0,     0,     0,   737,   709,   710,   711,   712,   713,
     699,   700,   716,   717,   718,   719,     0,   721,   722,   723,
     724,     0,     0,     0,     0,   725,     0,   727,   728,     0,
       0,     0,     0,   731,   732,   733,     0,     0,     0,   737,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   751,     0,     0,  1265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   739,     0,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   751,     0,
       0,  1281,   709,   710,   711,   712,   713,   699,   700,   716,
     717,   718,   719,     0,   721,   722,   723,   724,     0,     0,
       0,     0,   725,     0,   727,   728,     0,     0,     0,     0,
     731,   732,   733,     0,     0,     0,   737,     0,     0,     0,
       0,     0,   699,   700,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   739,     0,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   750,   751,     0,     0,  1283,   709,
     710,   711,   712,   713,     0,     0,   716,   717,   718,   719,
       0,   721,   722,   723,   724,     0,     0,     0,     0,   725,
       0,   727,   728,     0,     0,     0,     0,   731,   732,   733,
       0,     0,     0,   737,   709,   710,   711,   712,   713,   699,
     700,   716,   717,   718,   719,     0,   721,   722,   723,   724,
       0,     0,     0,     0,   725,     0,   727,   728,     0,     0,
       0,     0,   731,   732,   733,     0,     0,     0,   737,     0,
     739,     0,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   750,   751,     0,     0,  1285,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   739,     0,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   750,   751,     0,     0,
    1289,   709,   710,   711,   712,   713,   699,   700,   716,   717,
     718,   719,     0,   721,   722,   723,   724,     0,     0,     0,
       0,   725,     0,   727,   728,     0,     0,     0,     0,   731,
     732,   733,     0,     0,     0,   737,     0,     0,     0,     0,
       0,   699,   700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,  1338,   709,   710,
     711,   712,   713,     0,     0,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,   731,   732,   733,     0,
       0,     0,   737,   709,   710,   711,   712,   713,   699,   700,
     716,   717,   718,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,     0,
       0,   731,   732,   733,     0,     0,     0,   737,     0,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,  1339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,   751,     0,     0,  1340,
     709,   710,   711,   712,   713,   699,   700,   716,   717,   718,
     719,     0,   721,   722,   723,   724,     0,     0,     0,     0,
     725,     0,   727,   728,     0,     0,     0,     0,   731,   732,
     733,     0,     0,     0,   737,     0,     0,     0,     0,     0,
     699,   700,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   751,     0,     0,  1344,   709,   710,   711,
     712,   713,     0,     0,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,     0,     0,     0,     0,   731,   732,   733,     0,     0,
       0,   737,   709,   710,   711,   712,   713,   699,   700,   716,
     717,   718,   719,     0,   721,   722,   723,   724,     0,     0,
       0,     0,   725,     0,   727,   728,     0,     0,     0,     0,
     731,   732,   733,     0,     0,     0,   737,     0,   739,     0,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
     751,     0,     0,  1349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   739,     0,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   750,   751,     0,     0,  1354,   709,
     710,   711,   712,   713,   699,   700,   716,   717,   718,   719,
       0,   721,   722,   723,   724,     0,     0,     0,     0,   725,
       0,   727,   728,     0,     0,     0,     0,   731,   732,   733,
       0,     0,     0,   737,     0,     0,     0,     0,     0,   699,
     700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     739,     0,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   750,   751,     0,     0,  1388,   709,   710,   711,   712,
     713,     0,     0,   716,   717,   718,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,   731,   732,   733,     0,     0,     0,
     737,   709,   710,   711,   712,   713,   699,   700,   716,   717,
     718,   719,     0,   721,   722,   723,   724,     0,     0,     0,
       0,   725,     0,   727,   728,     0,     0,     0,     0,   731,
     732,   733,     0,     0,     0,   737,     0,   739,     0,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,   751,
     792,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,  1098,     0,     0,   709,   710,
     711,   712,   713,   699,   700,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,     0,     0,     0,     0,   731,   732,   733,     0,
       0,     0,   737,     0,     0,     0,     0,     0,   699,   700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,  1116,     0,     0,   709,   710,   711,   712,   713,
       0,     0,   716,   717,   718,   719,     0,   721,   722,   723,
     724,     0,     0,     0,     0,   725,     0,   727,   728,     0,
       0,     0,     0,   731,   732,   733,     0,     0,     0,   737,
     709,   710,   711,   712,   713,     0,     0,   716,   717,   718,
     719,     0,   721,   722,   723,   724,   699,   700,     0,     0,
     725,     0,   727,   728,     0,     0,     0,     0,   731,   732,
     733,     0,     0,     0,   737,     0,   739,     0,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   751,  1221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   751,  1226,     0,     0,     0,     0,     0,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   819,
     721,   722,   723,   724,  -333,     0,   229,   230,   725,   726,
     727,   728,   729,   730,     0,     0,   731,   732,   733,   734,
     735,   736,   737,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   699,   700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   820,   739,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,     0,     0,     0,     0,     0,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,     0,     0,
     250,   251,   252,     0,     0,     0,     0,     0,     0,   253,
     254,   255,   256,   257,     0,     0,   258,   259,   260,   261,
     262,   263,   264,   709,   710,   711,   712,   713,   699,   700,
     716,   717,   718,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,   865,
       0,   731,   732,   733,     0,     0,     0,   737,     0,   265,
       0,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,     0,   276,   277,     0,     0,     0,     0,     0,
     278,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   739,     0,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,   751,     0,     0,     0,
     709,   710,   711,   712,   713,   699,   700,   716,   717,   718,
     719,     0,   721,   722,   723,   724,     0,     0,     0,     0,
     725,     0,   727,   728,     0,     0,  1040,     0,   731,   732,
     733,     0,     0,     0,   737,     0,     0,     0,     0,     0,
     699,   700,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   739,     0,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   751,     0,     0,     0,   709,   710,   711,
     712,   713,     0,     0,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,     0,     0,     0,     0,   731,   732,   733,     0,     0,
       0,   737,   709,   710,   711,   712,   713,   699,   700,   716,
     717,   718,   719,     0,   721,   722,   723,   724,     0,     0,
       0,     0,   725,     0,   727,   728,     0,     0,     0,     0,
     731,   732,   733,     0,     0,     0,   737,     0,   739,  1106,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
     751,     0,     0,     0,  1189,     0,     0,     0,     0,     0,
       0,     0,     0,   739,     0,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   750,   751,     0,     0,     0,   709,
     710,   711,   712,   713,   699,   700,   716,   717,   718,   719,
       0,   721,   722,   723,   724,     0,     0,     0,     0,   725,
       0,   727,   728,     0,     0,     0,     0,   731,   732,   733,
       0,     0,     0,   737,     0,     0,     0,     0,     0,   699,
     700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     739,     0,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   750,   751,     0,     0,     0,   709,   710,   711,   712,
     713,     0,     0,   716,   717,   718,   719,     0,   721,   722,
     723,   724,     0,     0,     0,     0,   725,     0,   727,   728,
       0,     0,     0,     0,   731,   732,   733,     0,     0,     0,
    -700,   709,   710,   711,   712,   713,   699,   700,   716,   717,
     718,   719,     0,   721,   722,   723,   724,     0,     0,     0,
       0,   725,     0,   727,   728,     0,     0,     0,     0,   731,
     732,   733,     0,     0,     0,   699,   700,   739,     0,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,   751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   739,     0,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   750,   751,     0,     0,     0,   709,   710,
     711,   712,   713,     0,     0,   716,   717,   718,   719,     0,
     721,   722,   723,   724,     0,     0,     0,     0,   725,     0,
     727,   728,   699,   700,     0,     0,   731,   709,   710,   711,
     712,   713,     0,     0,   716,   717,   718,   719,     0,   721,
     722,   723,   724,     0,     0,     0,     0,   725,     0,   727,
     728,   699,   700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     750,   751,     0,     0,     0,     0,     0,     0,     0,     0,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
       0,     0,     0,     0,   709,   710,   711,   712,   713,   750,
     751,   716,   717,   718,   719,     0,   721,   722,   723,   724,
       0,     0,     0,     0,   725,     0,   727,   728,     0,     0,
       0,     0,     0,   709,   710,   711,   712,   713,     0,     0,
     716,     0,     0,   719,     0,   721,   722,   723,   724,     0,
       0,     0,     0,   725,     0,   727,   728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   894,   741,   742,
     743,   744,   745,   746,   747,   748,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   750,   751,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   898,   743,
     744,   745,   746,   747,   748,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,   751,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   454,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   310,   311,
     312,     0,   314,   315,   316,   317,   318,   454,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   895,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   896,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   899,     0,     0,     0,     0,     0,
     181,     0,     0,   310,   311,   312,   900,   314,   315,   316,
     317,   318,   454,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   182,     0,   183,     0,   184,   185,
     186,   187,   188,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,     0,   200,   201,   202,     0,
       0,   203,   204,   205,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,     0,     0,     0,     0,  1103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209
};

static const yytype_int16 yycheck[] =
{
      13,    14,   211,   225,   420,   416,   369,   556,   576,   435,
     161,   381,   578,   570,   472,   572,   575,   574,   667,   885,
    1043,   857,   460,   461,   462,    32,   778,   863,   780,   376,
     782,   457,     7,   225,    21,    18,    19,    19,    32,   409,
      14,    15,    19,    52,   128,   138,  1155,   182,   103,   123,
      63,    64,    65,    49,    19,   621,   622,    56,   125,   126,
     151,    33,   159,    62,   123,   156,     0,    20,    21,    56,
      49,   122,     6,   212,   125,   126,   211,   125,   126,   613,
     646,   647,    14,    15,    45,   166,    52,   140,   141,   142,
      62,   104,   105,   106,   107,    29,   166,    31,   166,    33,
     470,   471,   139,    20,    21,    39,   154,   181,   182,  1319,
     184,   148,    91,   187,    61,    49,   153,   208,   166,   212,
     181,    55,   688,   182,    46,   211,   185,   211,   209,   166,
     664,   139,   666,   166,   560,  1341,   166,   204,   205,   207,
     148,   211,   103,    77,    66,   367,   297,  1170,  1358,   178,
     211,   188,   148,   204,   205,   208,   204,   205,   166,   381,
     132,   114,   115,   218,  1370,    99,   100,   139,   139,   122,
     166,   124,   125,   126,   127,   367,  1042,   206,   211,   132,
     187,   211,   211,   166,   610,   159,   752,   409,   154,   411,
     164,  1300,   166,   187,   166,   169,   622,   114,   115,   181,
     166,   139,   211,  1039,   181,   122,   193,   124,   125,   126,
     127,   205,   225,   184,   213,   132,   181,   204,   176,   181,
     214,   177,   208,   649,   180,   211,   198,   159,   166,   438,
     205,  1254,   164,   207,   166,   207,   181,   169,   213,   192,
     193,   194,   181,   452,    18,   811,   208,   184,   470,   471,
      24,   204,   205,   211,   181,   213,    30,   213,   628,   697,
     194,   181,     4,     5,    32,     7,    40,   212,   189,   123,
     123,   205,   211,   123,    48,   212,    56,   211,   648,   133,
     133,   208,    62,   133,   182,   139,   206,   204,   205,    63,
     211,    59,    60,    35,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   525,   182,   182,
     181,   344,   182,  1169,  1200,   892,  1088,   187,   764,   561,
     562,   563,   189,   565,   566,  1181,   154,   569,   695,   571,
     548,   573,   120,   575,   367,   206,   124,    32,   166,   372,
     181,   177,   185,   181,   211,   139,   123,   181,   381,   561,
     562,   563,   123,   565,   566,   181,   133,   569,   152,   571,
     181,   573,   133,   123,    59,    60,   608,   208,   211,   805,
    1039,   123,   166,   133,   208,   211,   409,   213,   411,   148,
     184,   133,   208,   612,    24,  1054,   628,   208,   181,   867,
      30,   181,   850,   188,   181,   183,   608,   166,   431,   187,
     184,   189,   190,   187,   633,   182,   648,   995,    63,    64,
      65,   182,   207,   206,   993,   209,  1002,   205,   208,   206,
     214,  1193,   182,   211,   814,   120,   214,    67,   181,   124,
     182,   151,   166,   167,   168,   154,   156,   470,   471,   829,
     830,   181,   832,   672,   181,   181,   836,   166,  1034,   104,
     105,   106,   107,   178,   179,   208,   685,   699,   700,    99,
     194,   919,   920,   921,   181,   181,   181,  1053,   208,   181,
     181,   208,   208,   181,   181,   154,   209,   210,   181,   212,
     870,   206,   872,   725,   942,   943,   944,   166,   183,   206,
     206,  1068,   187,   208,   189,   190,   208,   208,    72,   139,
     208,   208,    76,   206,   184,    20,    21,  1093,   184,   189,
     205,   185,   189,   189,    56,   189,   156,   157,   158,   214,
      62,    95,    96,    97,    98,  1111,   166,   207,   561,   562,
     563,   207,   565,   566,   211,   188,   569,  1015,   571,   184,
     573,   184,   575,   189,   189,   148,   189,   188,   188,    11,
     140,   148,   142,   795,   207,   154,   798,    20,    21,   156,
      22,    23,   207,   166,   207,   211,   207,   166,   810,   166,
     154,   813,   814,   181,    56,   608,   184,   181,  1164,   187,
      62,   166,   166,   795,   139,   618,   798,   829,   830,   760,
     832,    56,   821,   207,   836,   628,    56,    62,   810,   114,
     115,   813,    62,    56,   204,   159,    32,   122,    56,    62,
     125,   126,   127,   207,    62,   648,   185,   132,   212,   185,
     189,   185,   185,   189,  1014,   189,   189,   185,   870,   166,
     872,   189,   185,    59,    60,   185,   189,   185,   185,   189,
     185,   189,   189,   166,   189,   140,   141,   142,   681,   112,
     113,   114,   115,   116,   170,   171,   119,   120,   121,   122,
     211,   124,   125,   126,   127,   170,   171,   172,   173,   132,
     211,   134,   135,   166,   167,   168,   166,  1067,   170,   171,
     172,    10,    11,    12,   170,   171,  1069,    86,    87,   204,
     205,   166,   166,   166,   120,    32,   166,   123,   124,   170,
     212,    56,   211,   170,   946,   140,   103,   133,   212,   156,
     182,   212,  1298,   212,    34,    34,   207,   166,  1304,   213,
     166,   166,    59,    60,   757,   188,   189,   190,   191,   192,
     193,   194,  1318,   212,   166,    21,   166,  1173,   206,   981,
     206,   204,   205,    32,   184,   184,   207,    42,   212,   207,
     188,   993,   188,   212,   188,   188,   182,   183,   185,   188,
     188,   187,   795,  1332,   190,   798,   207,   369,   188,   981,
      59,    60,  1014,  1359,   188,   188,   378,   810,   188,   205,
     813,   814,   188,   120,    32,   387,   207,   124,   214,   166,
     133,   207,   166,   166,  1363,   397,   829,   830,   206,   832,
     166,    42,   207,   836,   207,   407,   207,   188,   166,   207,
     188,    59,    60,   415,   207,   211,   188,  1253,   188,   159,
    1210,   207,   207,   425,   188,  1067,   188,   207,   207,    36,
       9,   120,   207,   435,   123,   124,   207,   870,   440,   872,
     442,  1070,   207,   210,   133,    65,   183,    42,   211,   451,
     187,   211,   189,   190,   211,   457,   458,   459,   211,   211,
     211,   211,   207,   205,  1295,   213,   207,   188,   205,   208,
     472,   206,   120,   166,   166,   211,   124,   214,   480,   213,
     211,   483,   484,   485,   486,   487,   488,   213,   184,   211,
     213,   166,   166,   182,   183,   497,   207,   181,   187,   128,
      13,   190,   182,   184,   159,   210,   212,   156,   166,     7,
     166,    20,    21,   189,   208,    42,   205,   207,  1354,  1148,
     181,   181,   211,   166,   207,   214,   213,     1,   207,   188,
     207,   188,    66,   211,   207,   183,   207,   207,   207,   187,
     207,  1331,   190,   166,   189,   213,   211,   189,   981,   189,
     166,   166,   166,   207,   207,   206,   206,   205,   560,   206,
     993,   166,   166,   166,   188,   211,   214,  1196,  1210,   207,
    1212,   207,   207,   207,   207,   206,   208,   166,   206,   206,
    1209,  1014,    32,   166,    52,   207,   207,   189,   207,   207,
     189,   208,   674,   206,    79,     1,   208,   206,   206,    44,
    1212,   603,   213,   112,   113,   114,   115,   116,   610,   133,
     119,   120,   121,   122,   211,   124,   125,   126,   127,    82,
     622,  1268,   223,   132,  1269,   134,   135,   629,   630,    80,
     632,   140,   882,   142,  1067,   637,   757,  1318,  1269,  1269,
       1,   643,  1269,  1269,  1286,  1207,  1230,   649,  1027,  1123,
    1294,  1233,  1274,   422,    52,   543,   658,   659,   660,   661,
     662,   663,  1260,   665,  1051,   667,   667,  1315,    -1,    -1,
     431,    -1,   431,    -1,  1286,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,  1331,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,    -1,
      -1,   713,   714,   715,   716,   717,   718,    -1,   720,   721,
      -1,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,    -1,   751,
      -1,    -1,   754,    -1,    -1,    -1,    -1,    -1,  1387,    -1,
      -1,    -1,   764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1210,    -1,  1212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     812,    -1,    -1,    -1,    -1,    -1,   818,   819,   820,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   853,   854,  1286,    -1,    -1,    -1,    -1,    -1,    -1,
     862,    -1,    -1,   865,    -1,   867,    -1,    -1,    -1,    -1,
      -1,    -1,   874,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   884,    -1,    -1,    -1,  1319,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,    -1,  1331,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,  1358,   146,    -1,    -1,    -1,
     112,   113,   114,   115,   116,    -1,    -1,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,   959,   140,   141,
     142,   963,    -1,   183,   146,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,  1015,    -1,    -1,  1018,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,  1036,  1037,  1038,    -1,  1040,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1048,    -1,    -1,  1051,
      -1,    -1,    -1,    -1,    20,    21,    12,    -1,    -1,    -1,
      -1,    -1,    18,  1065,  1066,    -1,    -1,  1069,    24,    -1,
      -1,  1073,    -1,    -1,    30,    -1,  1078,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,  1090,    -1,
    1092,    -1,    48,    -1,    -1,  1097,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,  1106,    -1,    -1,    63,  1110,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   112,   113,   114,   115,
      -1,    -1,    -1,  1155,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,   152,    -1,    -1,    -1,
      -1,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
     166,   132,    -1,    -1,    -1,    -1,  1218,    -1,  1220,    -1,
      -1,    -1,    -1,  1225,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1239,   204,   205,
      -1,    -1,    -1,  1245,  1246,  1247,    -1,  1249,    -1,    -1,
    1252,    -1,    -1,   209,  1256,  1257,  1258,  1259,    -1,    -1,
    1262,    -1,    -1,    -1,    32,    -1,    -1,  1269,    -1,   190,
     191,   192,   193,   194,    -1,  1277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,  1300,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1309,  1310,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,
      10,  1323,    12,    -1,    14,    15,    16,    17,    18,    -1,
      -1,  1333,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      30,    -1,    -1,  1345,    -1,    -1,    -1,    37,    38,    -1,
      -1,    41,   120,    43,    44,    -1,   124,    47,  1360,    49,
      50,    51,  1364,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,  1375,    64,  1377,  1378,    67,    68,    69,
      70,  1383,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   183,    -1,    -1,    -1,   187,
      -1,   189,   190,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   129,
     130,   131,    -1,    -1,    -1,    -1,   214,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,
     210,   211,   212,   213,     1,    -1,    -1,    -1,    -1,     6,
      -1,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    43,    44,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    32,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,    -1,   209,   210,   211,   212,   213,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,   120,    -1,    44,    -1,   124,
      47,    -1,    -1,    50,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,   183,    -1,
      -1,    -1,   187,    -1,   189,   190,    -1,   114,   115,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,   124,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
     187,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,    -1,   209,   210,    -1,   212,    -1,   214,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    32,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,   183,    -1,    -1,
      -1,   187,    -1,    -1,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,    -1,   209,   210,    -1,   212,    -1,   214,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    26,    -1,    -1,    -1,    30,    32,    32,    -1,    -1,
      -1,    -1,    -1,    38,   120,    -1,    -1,    -1,   124,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,   183,    -1,    -1,
      -1,   187,    -1,   189,   190,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    32,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,   183,    -1,    -1,
      -1,   187,   187,   189,   190,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,   205,
     205,    -1,   207,    -1,   209,   210,    -1,   212,   214,   214,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,   120,    -1,    -1,    -1,   124,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,   183,    -1,
      -1,    -1,   187,    -1,   189,   190,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     205,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,   214,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,
      17,    18,    -1,   207,    -1,   209,   210,    24,   212,    26,
      -1,    -1,    32,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
     120,    -1,    -1,    -1,   124,    -1,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,   187,    -1,   189,
     190,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
     207,    -1,   209,   210,   214,   212,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
      -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      14,    15,    16,    17,    18,    -1,   207,    -1,   209,   210,
      24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,
      17,    18,    -1,   207,    -1,   209,   210,    24,   212,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    14,    15,    16,    17,    18,    -1,
     207,    -1,   209,   210,    24,   212,    26,    -1,    -1,    32,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,   120,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,   187,    -1,   189,   190,    -1,    -1,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,
      -1,    -1,   205,    -1,    -1,   205,    -1,   207,   208,   209,
     210,   214,   212,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      14,    15,    16,    17,    18,   206,   207,    -1,   209,   210,
      24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,
      17,    18,    -1,   207,    -1,   209,   210,    24,   212,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    14,    15,    16,    17,    18,    -1,
     207,    -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,
      -1,    14,    15,    16,    17,    18,    -1,   207,    21,   209,
     210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,
      -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,
      16,    17,    18,    -1,   207,    -1,   209,   210,    24,   212,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,    -1,    -1,    14,    15,    16,    17,    18,
      -1,   207,   208,   209,   210,    24,   212,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,   198,
      -1,    -1,    14,    15,    16,    17,    18,    -1,   207,   208,
     209,   210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,
      15,    16,    17,    18,    -1,   207,    -1,   209,   210,    24,
     212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,   208,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
     208,   209,   210,    24,   212,    26,    -1,    -1,    32,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,   120,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,   187,    -1,   189,   190,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      -1,   205,    -1,    -1,   205,    -1,   207,    -1,   209,   210,
     214,   212,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,
      15,    16,    17,    18,    -1,   207,   208,   209,   210,    24,
     212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,   208,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
     208,   209,   210,    24,   212,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      14,    15,    16,    17,    18,    -1,   207,   208,   209,   210,
      24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,
      17,    18,    -1,   207,    -1,   209,   210,    24,   212,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    14,    15,    16,    17,    18,    -1,
     207,    -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,
      -1,    14,    15,    16,    17,    18,    -1,   207,    -1,   209,
     210,    24,   212,    26,    -1,    -1,    -1,    30,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,   120,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,    -1,
       9,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,   183,
      -1,    20,    21,   187,    24,   189,   190,   190,   191,   192,
      30,   194,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,
      40,   205,    -1,    -1,   207,    -1,   209,   210,    48,   212,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,   137,   139,
      -1,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    18,    -1,    -1,    20,
      21,    -1,    24,    -1,    -1,   204,   205,    -1,    30,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    20,    21,    -1,
      -1,   132,   133,   134,   135,   136,   137,   139,    -1,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   209,    -1,   211,
     211,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,    -1,    -1,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,   204,   205,    -1,    30,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
     204,   205,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    20,    21,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
     166,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,   112,   113,   114,
     115,   116,    -1,   209,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,   139,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,   152,   124,   125,   126,
     127,    20,    21,    -1,    -1,   132,    -1,   134,   135,    -1,
     166,    -1,    -1,   140,   141,   142,    -1,    -1,   183,   146,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    20,    21,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,   114,
     115,   116,    20,    21,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,   112,   113,   114,   115,   116,    -1,
      -1,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,   112,   113,   114,   115,
     116,    20,    21,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,   112,   113,   114,   115,   116,    -1,    -1,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,   112,   113,   114,   115,   116,
      20,    21,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,   112,   113,   114,   115,   116,    -1,    -1,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   112,   113,   114,
     115,   116,    20,    21,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,   112,   113,   114,   115,   116,    20,
      21,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,   112,   113,   114,   115,   116,    -1,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,   112,   113,   114,   115,
     116,    20,    21,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,   112,   113,   114,   115,   116,    20,    21,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
     112,   113,   114,   115,   116,    -1,    -1,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   112,   113,   114,   115,   116,
      20,    21,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,
     113,   114,   115,   116,    -1,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   112,   113,   114,   115,   116,    20,
      21,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   112,   113,   114,   115,   116,    20,    21,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,   206,    -1,    -1,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,    -1,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     112,   113,   114,   115,   116,    -1,    -1,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    20,    21,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    20,    21,   132,   133,
     134,   135,   136,   137,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,   112,   113,   114,   115,   116,    20,    21,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,   138,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,    20,    21,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    20,    21,    -1,    -1,   140,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,   204,
     205,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    68,    69,    70,   166,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    68,    -1,    70,    -1,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   166
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   216,     0,     6,    29,    31,    33,    39,    49,    55,
      77,    99,   100,   194,   205,   211,   217,   220,   226,   228,
     229,   234,   263,   267,   296,   369,   376,   380,   391,   433,
     438,   443,    18,    19,   166,   256,   257,   258,   159,   235,
     236,   166,   167,   168,   194,   230,   231,   232,   212,   377,
     166,   209,   219,    56,    62,   372,   372,   372,   139,   166,
     283,    33,    62,   132,   198,   207,   259,   260,   261,   262,
     283,   211,     4,     5,     7,    35,   388,    61,   367,   182,
     181,   184,   181,   231,    21,    56,   193,   204,   233,   372,
     373,   375,   373,   367,   444,   434,   439,   166,   139,   227,
     261,   261,   261,   207,   140,   141,   142,   181,   206,    56,
      62,   268,   270,    56,    62,   378,    56,    62,   389,    56,
      62,   368,    14,    15,   159,   164,   166,   169,   207,   222,
     257,   159,   236,   166,   230,   230,   166,   211,   213,   373,
     211,    56,    62,   218,   166,   166,   166,   166,   170,   225,
     208,   258,   261,   261,   261,   261,   271,   166,   379,   392,
     212,   370,   170,   171,   221,    14,    15,   159,   164,   166,
     222,   254,   255,   233,   374,   211,   445,   435,   440,   170,
     208,    34,    68,    70,    72,    73,    74,    75,    76,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      90,    91,    92,    95,    96,    97,    98,   114,   115,   166,
     266,   269,   184,   212,   103,   386,   387,   365,   156,   341,
     170,   171,   172,   181,   208,   182,   212,   212,   212,    20,
      21,    37,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   125,   126,   133,   134,   135,   136,   137,   140,   141,
     142,   143,   144,   145,   146,   183,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   197,   198,   204,   205,
      34,    34,   207,   264,   212,   272,    72,    76,    95,    96,
      97,    98,   396,   381,   166,   393,   213,   366,   258,   148,
     166,   363,   364,   254,    18,    24,    30,    40,    48,    63,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   152,   209,   283,   395,   397,   398,   401,
     405,   432,   446,   436,   441,   166,   166,   166,   206,    21,
     166,   206,   151,   208,   341,   351,   352,   184,   265,   274,
     212,   371,   184,   385,   212,   390,   341,   206,   207,    42,
     181,   184,   187,   362,   188,   188,   188,   207,   188,   188,
     207,   188,   188,   188,   188,   188,   188,   207,   283,    32,
      59,    60,   120,   124,   183,   187,   190,   205,   214,   185,
     400,   355,   358,   166,   133,   207,    49,   148,   166,   360,
     394,   208,   211,   432,     1,     8,     9,    10,    12,    14,
      15,    16,    17,    18,    24,    25,    26,    27,    28,    30,
      37,    38,    41,    43,    44,    47,    50,    51,    53,    54,
      57,    58,    64,    67,    77,    99,   101,   102,   114,   115,
     129,   130,   131,   147,   148,   149,   150,   151,   153,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     167,   168,   169,   190,   191,   192,   197,   198,   207,   209,
     210,   211,   213,   224,   226,   237,   238,   241,   244,   245,
     247,   249,   250,   251,   252,   272,   273,   275,   277,   282,
     283,   284,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   300,   301,   308,   311,   314,   318,   319,   320,   321,
     322,   323,   325,   330,   333,   340,   395,   448,   457,   460,
     462,   469,   471,   383,   166,   211,   382,   283,   347,   364,
     206,    64,   167,   333,   166,   166,   405,   123,   133,   182,
     361,   406,   410,   412,   333,   414,   408,   166,   402,   416,
     418,   420,   422,   424,   426,   428,   430,   333,   207,    32,
     187,    32,   187,   205,   214,   206,   333,   214,   405,   166,
     211,   447,   166,   211,   353,   432,   437,   166,   211,   356,
     442,   333,   360,   207,    42,   123,   181,   182,   184,   187,
     359,   351,   333,   248,   188,   285,   397,   448,   207,   188,
     188,   207,   123,   282,   312,   320,   333,   272,   188,   207,
      60,   333,   207,   333,   166,   188,   188,   207,   211,   188,
     159,    57,   333,   207,   272,   188,   207,   207,   188,   123,
     282,   333,   333,   333,   210,   318,   318,   318,   207,   207,
     207,   207,   207,   207,    12,   405,    12,   405,   333,   459,
     467,   188,   333,   188,   223,   333,   333,   333,   333,   333,
     333,   210,    36,   211,   211,   333,     9,   166,   207,   211,
     211,   211,   211,   211,    65,   297,   263,   128,   211,    20,
      21,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   132,   133,   134,   135,   136,
     137,   140,   141,   142,   143,   144,   145,   146,   182,   183,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     204,   205,   207,   371,   182,   211,   213,   205,   213,   263,
     348,   208,    42,   211,   361,   282,   333,   432,   432,   404,
     432,   208,   432,   432,   208,   166,   399,   432,   264,   432,
     264,   432,   264,   353,   354,   356,   357,   208,   276,   312,
     333,   206,   206,   211,   213,   184,   211,   213,   184,   211,
     213,   208,   333,   166,   166,   432,   282,   333,   272,   394,
     286,   207,   283,   309,   463,   312,   282,   312,   181,   123,
     182,    13,   405,   459,   468,   333,   333,   272,   182,   302,
     304,   333,   306,   184,   159,   333,   465,   312,   312,   405,
     282,   333,   210,   333,   333,   333,   333,   333,   333,   394,
      52,   154,   166,   190,   207,   333,   449,   450,   451,   458,
     461,   394,   207,   450,   461,   138,   176,   211,   213,   452,
     278,   272,   280,   172,   173,   221,   208,   148,   153,   188,
     283,   324,   212,   272,   246,   205,   208,   312,   156,   299,
     364,   156,   317,   318,    18,   154,   166,   395,    18,   154,
     166,   395,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   166,   129,
     130,   131,   333,   333,   154,   166,   333,   333,   333,   395,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   129,   130,   131,   333,    21,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   125,   126,
     154,   166,   204,   205,   331,   333,   208,   312,   384,   333,
     262,     7,   341,   346,   166,   282,   333,   211,   189,   189,
     189,   211,   189,   189,   189,   211,   189,   265,   189,   265,
     189,   265,   189,   211,   189,   211,   208,   432,   432,   208,
      42,   359,    19,   432,   208,   312,   188,   333,   432,   405,
     208,   333,   272,   189,   211,   181,   208,   208,   253,   405,
     405,   208,   405,   208,   405,   208,   208,   189,   208,   208,
     208,   208,   208,   208,    19,   318,   207,   133,   359,   208,
     138,   181,   211,   451,   178,   179,   206,   455,   181,   178,
     206,   211,   454,    19,   208,   451,   177,   213,   453,   333,
     459,   213,   405,   405,   333,   207,   207,   326,   328,   274,
      11,    22,    23,   239,   240,   333,   166,   449,   181,   208,
     166,   298,   123,   133,   182,   187,   315,   316,   264,   188,
     207,   188,   207,   207,   318,   318,   318,   207,   206,   318,
     318,   318,    18,   154,   166,   395,   184,   154,   166,   333,
     207,   207,   154,   166,   333,     1,   206,   208,   213,   211,
     206,    56,    62,   344,    66,   345,   211,   211,   407,   411,
     413,   432,   415,   409,   403,   166,   417,   189,   421,   189,
     425,   189,   429,   353,   431,   356,   166,   333,   312,   189,
     208,   166,   208,   189,   189,   207,   405,   459,   333,   189,
     189,   189,   189,   317,   207,   312,   333,   333,   333,   450,
     451,   333,   154,   166,   449,   455,   206,   333,   206,   458,
     312,   450,   177,   180,   213,   456,   206,   189,   189,   174,
     333,   333,   405,   264,   213,   272,   333,    11,   242,   206,
     205,   181,   206,   166,   166,   166,   166,   181,   206,   265,
     334,   333,   336,   333,   208,   312,   333,   188,   207,   333,
     207,   206,   333,   208,   312,   207,   206,   332,   211,    46,
     345,    45,   103,   342,   419,   423,   427,   272,   287,   189,
     211,   310,   464,   468,   189,   303,   305,   307,   466,   207,
     208,   312,   211,   208,   451,   455,   207,   133,   359,   211,
     451,   206,   279,   281,   208,   208,   189,   265,   272,   243,
     211,   208,   449,   166,   206,   315,   206,   138,   272,   313,
     405,   208,   432,   208,   208,   208,   338,   333,   333,   208,
     208,   333,    32,   343,   342,   344,   333,   166,   207,   208,
     207,   333,   333,   333,   207,   208,   333,   208,   333,   133,
     359,   455,   333,   333,   333,   333,   456,   333,   207,   327,
     189,   240,    25,   102,   244,   289,   290,   291,   293,   333,
     206,   184,   362,   123,   333,   189,   189,   432,   208,   208,
     208,   349,   343,   360,   208,   189,   312,   468,   312,   208,
     211,   470,   333,   333,   208,   470,   276,   324,   329,   123,
     123,   333,   208,   405,   361,   333,   335,   337,   189,   269,
     350,   333,   208,   208,   208,    52,   206,   133,   359,   213,
     208,   324,   333,   361,   333,   339,   211,   269,   208,   333,
     206,   333,   333,   206,   333,   211,   272,   211
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   218,   218,
     218,   219,   219,   220,   221,   221,   221,   221,   222,   223,
     223,   223,   224,   225,   225,   227,   226,   228,   229,   230,
     230,   230,   231,   231,   231,   231,   232,   232,   233,   233,
     234,   235,   235,   236,   236,   237,   238,   238,   239,   239,
     240,   240,   240,   241,   241,   242,   243,   242,   244,   244,
     244,   244,   244,   245,   246,   245,   248,   247,   249,   250,
     251,   253,   252,   254,   254,   254,   254,   254,   254,   255,
     255,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     257,   257,   258,   258,   259,   259,   259,   260,   260,   261,
     261,   261,   261,   261,   261,   261,   262,   262,   263,   263,
     264,   264,   264,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   268,   268,   268,   269,   271,   270,   272,   272,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     274,   274,   274,   275,   276,   276,   278,   279,   277,   280,
     281,   277,   282,   282,   282,   282,   283,   283,   283,   284,
     284,   286,   287,   285,   285,   288,   288,   288,   288,   289,
     290,   291,   291,   291,   292,   292,   292,   293,   293,   294,
     294,   294,   295,   296,   296,   297,   297,   298,   298,   299,
     299,   300,   300,   302,   303,   301,   304,   305,   301,   306,
     307,   301,   309,   310,   308,   311,   311,   311,   312,   312,
     313,   313,   313,   314,   314,   314,   315,   315,   315,   315,
     316,   316,   317,   317,   318,   318,   319,   319,   319,   319,
     319,   319,   319,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   321,   321,   321,   321,   321,   322,   322,
     323,   323,   324,   324,   325,   326,   327,   325,   328,   329,
     325,   330,   330,   330,   330,   331,   332,   330,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   334,   335,   333,
     333,   333,   333,   336,   337,   333,   333,   333,   338,   339,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   341,   341,   342,   342,   342,   343,   343,   344,   344,
     344,   345,   345,   346,   347,   348,   347,   349,   347,   350,
     347,   347,   351,   351,   351,   352,   352,   353,   353,   354,
     354,   355,   355,   355,   356,   357,   357,   358,   358,   358,
     359,   359,   360,   360,   360,   360,   360,   360,   361,   361,
     361,   362,   362,   363,   363,   363,   363,   363,   364,   364,
     364,   364,   364,   365,   366,   365,   367,   367,   368,   368,
     368,   369,   370,   369,   371,   371,   371,   371,   372,   372,
     372,   374,   373,   375,   375,   376,   377,   376,   378,   378,
     378,   379,   381,   382,   380,   383,   384,   380,   385,   385,
     386,   386,   387,   388,   388,   389,   389,   389,   390,   390,
     392,   393,   391,   394,   394,   394,   394,   394,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   396,   396,   396,   396,   396,
     396,   397,   398,   398,   398,   399,   399,   400,   400,   400,
     402,   403,   401,   404,   404,   405,   405,   405,   405,   405,
     405,   406,   407,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   408,   409,
     405,   405,   410,   411,   405,   412,   413,   405,   414,   415,
     405,   405,   416,   417,   405,   418,   419,   405,   405,   420,
     421,   405,   422,   423,   405,   405,   424,   425,   405,   426,
     427,   405,   428,   429,   405,   430,   431,   405,   432,   432,
     432,   434,   435,   436,   437,   433,   439,   440,   441,   442,
     438,   444,   445,   446,   447,   443,   448,   448,   448,   448,
     448,   449,   449,   449,   449,   449,   449,   449,   449,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   455,   456,   456,   456,   457,   457,   457,   457,   457,
     457,   458,   458,   458,   459,   459,   460,   461,   461,   462,
     462,   462,   463,   464,   462,   462,   465,   466,   462,   467,
     467,   468,   468,   469,   469,   469,   469,   470,   470,   471,
     471
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     1,
       1,     1,     1,     4,     1,     1,     2,     2,     3,     0,
       2,     4,     3,     1,     2,     0,     4,     2,     2,     1,
       1,     1,     1,     2,     3,     3,     2,     4,     0,     1,
       2,     1,     3,     1,     3,     3,     3,     2,     1,     1,
       0,     2,     4,     1,     1,     0,     0,     3,     1,     1,
       1,     1,     1,     4,     0,     6,     0,     6,     2,     3,
       3,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     4,     1,
       2,     3,     3,     3,     3,     2,     1,     3,     0,     3,
       0,     2,     3,     0,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     2,     2,     3,     4,     3,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3,     0,     4,     3,     7,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     2,     2,     2,
       0,     2,     2,     3,     0,     1,     0,     0,     7,     0,
       0,     9,     3,     2,     2,     2,     1,     3,     2,     2,
       3,     0,     0,     5,     1,     2,     4,     5,     2,     1,
       1,     1,     2,     3,     2,     2,     3,     2,     3,     2,
       2,     3,     4,     1,     1,     1,     0,     1,     3,     9,
       8,     3,     3,     0,     0,     7,     0,     0,     7,     0,
       0,     7,     0,     0,     6,     5,     8,    10,     1,     3,
       1,     2,     3,     1,     1,     2,     2,     2,     2,     2,
       1,     3,     0,     4,     1,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     6,     8,
       5,     6,     1,     4,     3,     0,     0,     8,     0,     0,
       9,     3,     4,     5,     6,     0,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     4,
       5,     4,     5,     3,     4,     1,     3,     4,     3,     4,
       2,     4,     4,     7,     8,     3,     5,     0,     0,     8,
       3,     3,     3,     0,     0,     8,     3,     4,     0,     0,
       9,     4,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2,     4,     1,     4,     4,     4,     4,     4,
       1,     6,     7,     6,     6,     7,     7,     6,     7,     6,
       6,     0,     4,     0,     1,     1,     0,     1,     0,     1,
       1,     0,     1,     5,     0,     0,     4,     0,     9,     0,
      10,     5,     2,     3,     4,     1,     3,     1,     3,     1,
       3,     0,     2,     3,     3,     1,     3,     0,     2,     3,
       1,     1,     1,     2,     3,     5,     3,     3,     1,     1,
       1,     0,     1,     1,     4,     3,     3,     5,     4,     6,
       5,     5,     4,     0,     0,     4,     0,     1,     0,     1,
       1,     6,     0,     6,     0,     2,     3,     5,     0,     1,
       1,     0,     5,     2,     3,     4,     0,     4,     0,     1,
       1,     1,     0,     0,     9,     0,     0,    11,     0,     2,
       0,     1,     3,     1,     1,     0,     1,     1,     0,     3,
       0,     0,     7,     1,     4,     3,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     3,     0,     2,     3,
       0,     0,     6,     1,     3,     1,     1,     1,     1,     4,
       3,     0,     0,     6,     4,     5,     4,     2,     2,     3,
       2,     3,     2,     2,     3,     3,     3,     2,     0,     0,
       6,     2,     0,     0,     6,     0,     0,     6,     0,     0,
       6,     1,     0,     0,     6,     0,     0,     7,     1,     0,
       0,     6,     0,     0,     7,     1,     0,     0,     6,     0,
       0,     7,     0,     0,     6,     0,     0,     6,     1,     3,
       3,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      10,     0,     0,     0,     0,    10,     1,     1,     1,     1,
       1,     3,     3,     5,     5,     6,     6,     8,     8,     1,
       3,     0,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     2,     1,     1,     5,     4,     6,     7,     5,
       7,     1,     3,     3,     3,     1,     4,     1,     3,     4,
       4,     4,     0,     0,     9,     4,     0,     0,     9,     1,
       3,     1,     3,     3,     4,     7,     9,     0,     3,    10,
      10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = DAS_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == DAS_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use DAS_YYerror or DAS_YYUNDEF. */
#define YYERRCODE DAS_YYUNDEF

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
#if DAS_YYDEBUG

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

#  elif defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

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
                  Kind, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
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
                 int yyrule, yyscan_t scanner)
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
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS_YYDEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_KEYWORD: /* "keyword"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_TYPE_FUNCTION: /* "type function"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_module_name: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_character_sequence: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_constant: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_builder_body: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_string_builder: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_reader: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_keyword_or_name: /* keyword_or_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_require_module_name: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_label: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_goto: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else_one_liner: /* expression_else_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_one_liner: /* expression_if_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_then_else: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_for_loop: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_unsafe: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_while_loop: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with_alias: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_annotation_argument_value: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_value_list: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_argument_name: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_argument: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_list: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_declaration_name: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_declaration_basic: /* annotation_declaration_basic  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_declaration: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_list: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_annotation_list: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_function_argument_list: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_optional_function_type: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_function_name: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_function_declaration_header: /* function_declaration_header  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_function_declaration: /* function_declaration  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_expression_block: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_any: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expressions: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_keyword: /* expr_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_expr_list: /* optional_expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_keyword: /* expression_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_pipe: /* expr_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_name_in_namespace: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_delete: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_new_type_declaration: /* new_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_expr_new: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_break: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_continue: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return_no_pipe: /* expression_return_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield_no_pipe: /* expression_yield_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_try_catch: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_tuple_expansion: /* tuple_expansion  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_tuple_expansion_variable_declaration: /* tuple_expansion_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_expression_let: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_cast: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_decl: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_info: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_block_or_simple_block: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_capture_entry: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case YYSYMBOL_capture_list: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_optional_capture_list: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_expr_block: /* expr_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_numeric_const: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign_pipe: /* expr_assign_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_named_call: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_method_call: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_name: /* func_addr_name  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_expr: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_field: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_mtag: /* expr_mtag  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_field_annotation: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_structure_variable_declaration: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_struct_variable_declaration_list: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_function_argument_declaration: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_function_argument_list: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_type: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_tuple_type_list: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_alias_type_list: /* tuple_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_type: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_variant_type_list: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_alias_type_list: /* variant_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_declaration: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_let_variable_name_with_pos_list: /* let_variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_let_variable_declaration: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_global_variable_declaration_list: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_enum_name: /* enum_name  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_optional_structure_parent: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_optional_struct_variable_declaration_list: /* optional_struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_name_with_pos_list: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_structure_type_declaration: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_auto_type_declaration: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_bitfield_bits: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_alias_bits: /* bitfield_alias_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_type_declaration: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_table_type_pair: /* table_type_pair  */
            { delete ((*yyvaluep).aTypePair).firstType; delete ((*yyvaluep).aTypePair).secondType; }
        break;

    case YYSYMBOL_type_declaration_no_options: /* type_declaration_no_options  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_type_declaration: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_make_decl: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_fields: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case YYSYMBOL_make_struct_dim: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_block: /* optional_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_decl: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple: /* make_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_map_tuple: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple_call: /* make_tuple_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim: /* make_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim_decl: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table: /* make_table  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_map_tuple_list: /* expr_map_tuple_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table_decl: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension_where: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = DAS_YYEMPTY; /* Cause a token to be read.  */

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
  if (yychar == DAS_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= DAS_YYEOF)
    {
      yychar = DAS_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == DAS_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = DAS_YYUNDEF;
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
  yychar = DAS_YYEMPTY;
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
  case 3: /* program: program module_declaration  */
                                   {
            if ( yyextra->das_has_type_declarations ) {
                das_yyerror(scanner,"module name has to be first declaration",tokAt(scanner,(yylsp[0])), CompilationError::syntax_error);
            }
        }
    break;

  case 4: /* program: program structure_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 5: /* program: program enum_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 6: /* program: program global_let  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 7: /* program: program global_function_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 11: /* program: program alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 12: /* program: program variant_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 13: /* program: program tuple_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 14: /* program: program bitfield_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 17: /* top_level_reader_macro: expr_reader ';'  */
                             {
        delete (yyvsp[-1].pExpression);    // we do nothing, we don't even attemp to 'visit'
    }
    break;

  case 18: /* optional_public_or_private_module: %empty  */
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 19: /* optional_public_or_private_module: "public"  */
                        { (yyval.b) = true; }
    break;

  case 20: /* optional_public_or_private_module: "private"  */
                        { (yyval.b) = false; }
    break;

  case 21: /* module_name: '$'  */
                    { (yyval.s) = new string("$"); }
    break;

  case 22: /* module_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 23: /* module_declaration: "module" module_name optional_shared optional_public_or_private_module  */
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 24: /* character_sequence: STRING_CHARACTER  */
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 25: /* character_sequence: STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 26: /* character_sequence: character_sequence STRING_CHARACTER  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 27: /* character_sequence: character_sequence STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 28: /* string_constant: "start of the string" character_sequence "end of the string"  */
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 29: /* string_builder_body: %empty  */
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 30: /* string_builder_body: string_builder_body character_sequence  */
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 31: /* string_builder_body: string_builder_body "{" expr "}"  */
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 32: /* string_builder: "start of the string" string_builder_body "end of the string"  */
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 33: /* reader_character_sequence: STRING_CHARACTER  */
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 34: /* reader_character_sequence: reader_character_sequence STRING_CHARACTER  */
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 35: /* $@1: %empty  */
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das_yybegin_reader(scanner);
        }
    }
    break;

  case 36: /* expr_reader: '%' name_in_namespace $@1 reader_character_sequence  */
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        int thisLine = 0;
        FileInfo * info = nullptr;
        if ( auto seqt = yyextra->g_ReaderMacro->suffix(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, thisLine, info, tokAt(scanner,(yylsp[0]))) ) {
            das_accept_sequence(scanner,seqt,strlen(seqt),thisLine,info);
            yylloc.first_column = (yylsp[0]).first_column;
            yylloc.first_line = (yylsp[0]).first_line;
            yylloc.last_column = (yylsp[0]).last_column;
            yylloc.last_line = (yylsp[0]).last_line;
        }
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 37: /* options_declaration: "options" annotation_argument_list  */
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            for ( auto & opt : *(yyvsp[0].aaList) ) {
                if ( yyextra->g_Access->isOptionAllowed(opt.name, yyextra->g_Program->thisModuleName) ) {
                    yyextra->g_Program->options.push_back(opt);
                } else {
                    das_yyerror(scanner,"option " + opt.name + " is not allowed here",
                        tokAt(scanner,(yylsp[0])), CompilationError::invalid_option);
                }
            }
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        auto opt = yyextra->g_Program->options.find("indenting", tInt);
        if (opt)
        {
            if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
                yyextra->das_tab_size = yyextra->das_def_tab_size;
            else
                yyextra->das_tab_size = opt->iValue ? opt->iValue : yyextra->das_def_tab_size;//0 is default
            yyextra->g_FileAccessStack.back()->tabSize = yyextra->das_tab_size;
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 39: /* keyword_or_name: "name"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 40: /* keyword_or_name: "keyword"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 41: /* keyword_or_name: "type function"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 42: /* require_module_name: keyword_or_name  */
                              {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 43: /* require_module_name: '%' require_module_name  */
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 44: /* require_module_name: require_module_name '.' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 45: /* require_module_name: require_module_name '/' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 46: /* require_module: require_module_name is_public_module  */
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 47: /* require_module: require_module_name "as" "name" is_public_module  */
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 48: /* is_public_module: %empty  */
                    { (yyval.b) = false; }
    break;

  case 49: /* is_public_module: "public"  */
                    { (yyval.b) = true; }
    break;

  case 53: /* expect_error: "integer constant"  */
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 54: /* expect_error: "integer constant" ':' "integer constant"  */
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 55: /* expression_label: "label" "integer constant" ':'  */
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 56: /* expression_goto: "goto" "label" "integer constant"  */
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 57: /* expression_goto: "goto" expr  */
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 58: /* elif_or_static_elif: "elif"  */
                          { (yyval.b) = false; }
    break;

  case 59: /* elif_or_static_elif: "static_elif"  */
                          { (yyval.b) = true; }
    break;

  case 60: /* expression_else: %empty  */
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 61: /* expression_else: "else" expression_block  */
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 62: /* expression_else: elif_or_static_elif expr expression_block expression_else  */
                                                                                          {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 63: /* if_or_static_if: "if"  */
                        { (yyval.b) = false; }
    break;

  case 64: /* if_or_static_if: "static_if"  */
                        { (yyval.b) = true; }
    break;

  case 65: /* expression_else_one_liner: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 66: /* $@2: %empty  */
                      { yyextra->das_need_oxford_comma = true; }
    break;

  case 67: /* expression_else_one_liner: "else" $@2 expression_if_one_liner  */
                                                                                                 {
            (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 68: /* expression_if_one_liner: expr  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 69: /* expression_if_one_liner: expression_return_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 70: /* expression_if_one_liner: expression_yield_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 71: /* expression_if_one_liner: expression_break  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 72: /* expression_if_one_liner: expression_continue  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 73: /* expression_if_then_else: if_or_static_if expr expression_block expression_else  */
                                                                                      {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 74: /* $@3: %empty  */
                                                     { yyextra->das_need_oxford_comma = true; }
    break;

  case 75: /* expression_if_then_else: expression_if_one_liner "if" $@3 expr expression_else_one_liner ';'  */
                                                                                                                                                   {
        (yyval.pExpression) = new ExprIfThenElse(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr(ast_wrapInBlock((yyvsp[-5].pExpression))),(yyvsp[-1].pExpression) ? ExpressionPtr(ast_wrapInBlock((yyvsp[-1].pExpression))) : nullptr);
    }
    break;

  case 76: /* $@4: %empty  */
                     { yyextra->das_need_oxford_comma=false; }
    break;

  case 77: /* expression_for_loop: "for" $@4 variable_name_with_pos_list "in" expr_list expression_block  */
                                                                                                                                                 {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-3].pNameWithPosList),(yyvsp[-1].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 78: /* expression_unsafe: "unsafe" expression_block  */
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 79: /* expression_while_loop: "while" expr expression_block  */
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 80: /* expression_with: "with" expr expression_block  */
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 81: /* $@5: %empty  */
                                        { yyextra->das_need_oxford_comma=true; }
    break;

  case 82: /* expression_with_alias: "assume" "name" '=' $@5 expr  */
                                                                                               {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-4])), *(yyvsp[-3].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-3].s);
    }
    break;

  case 83: /* annotation_argument_value: string_constant  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 84: /* annotation_argument_value: "name"  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 85: /* annotation_argument_value: "integer constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 86: /* annotation_argument_value: "floating point constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 87: /* annotation_argument_value: "true"  */
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 88: /* annotation_argument_value: "false"  */
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 89: /* annotation_argument_value_list: annotation_argument_value  */
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 90: /* annotation_argument_value_list: annotation_argument_value_list ',' annotation_argument_value  */
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 91: /* annotation_argument_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 92: /* annotation_argument_name: "type"  */
                    { (yyval.s) = new string("type"); }
    break;

  case 93: /* annotation_argument_name: "in"  */
                    { (yyval.s) = new string("in"); }
    break;

  case 94: /* annotation_argument: annotation_argument_name '=' string_constant  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 95: /* annotation_argument: annotation_argument_name '=' "name"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 96: /* annotation_argument: annotation_argument_name '=' "integer constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 97: /* annotation_argument: annotation_argument_name '=' "floating point constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 98: /* annotation_argument: annotation_argument_name '=' "true"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 99: /* annotation_argument: annotation_argument_name '=' "false"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 100: /* annotation_argument: annotation_argument_name  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 101: /* annotation_argument: annotation_argument_name '=' '(' annotation_argument_value_list ')'  */
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 102: /* annotation_argument_list: annotation_argument  */
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 103: /* annotation_argument_list: annotation_argument_list ',' annotation_argument  */
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 104: /* annotation_declaration_name: name_in_namespace  */
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 105: /* annotation_declaration_name: "require"  */
                                    { (yyval.s) = new string("require"); }
    break;

  case 106: /* annotation_declaration_name: "private"  */
                                    { (yyval.s) = new string("private"); }
    break;

  case 107: /* annotation_declaration_basic: annotation_declaration_name  */
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
    break;

  case 108: /* annotation_declaration_basic: annotation_declaration_name '(' annotation_argument_list ')'  */
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 109: /* annotation_declaration: annotation_declaration_basic  */
                                          {
        (yyval.fa) = (yyvsp[0].fa);
    }
    break;

  case 110: /* annotation_declaration: '!' annotation_declaration  */
                                              {
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Not,(yyvsp[0].fa),nullptr);
    }
    break;

  case 111: /* annotation_declaration: annotation_declaration "&&" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::And,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 112: /* annotation_declaration: annotation_declaration "||" annotation_declaration  */
                                                                            {
        if ( !(yyvsp[-2].fa)->annotation || !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation || !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Or,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 113: /* annotation_declaration: annotation_declaration "^^" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Xor,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 114: /* annotation_declaration: '(' annotation_declaration ')'  */
                                            {
        (yyval.fa) = (yyvsp[-1].fa);
    }
    break;

  case 115: /* annotation_declaration: "|>" annotation_declaration  */
                                          {
        (yyval.fa) = (yyvsp[0].fa);
        (yyvsp[0].fa)->inherited = true;
    }
    break;

  case 116: /* annotation_list: annotation_declaration  */
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 117: /* annotation_list: annotation_list ',' annotation_declaration  */
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 118: /* optional_annotation_list: %empty  */
                                        { (yyval.faList) = nullptr; }
    break;

  case 119: /* optional_annotation_list: '[' annotation_list ']'  */
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 120: /* optional_function_argument_list: %empty  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 121: /* optional_function_argument_list: '(' ')'  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 122: /* optional_function_argument_list: '(' function_argument_list ')'  */
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 123: /* optional_function_type: %empty  */
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 124: /* optional_function_type: ':' type_declaration  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 125: /* function_name: "name"  */
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 126: /* function_name: "operator" '!'  */
                             { (yyval.s) = new string("!"); }
    break;

  case 127: /* function_name: "operator" '~'  */
                             { (yyval.s) = new string("~"); }
    break;

  case 128: /* function_name: "operator" "+="  */
                             { (yyval.s) = new string("+="); }
    break;

  case 129: /* function_name: "operator" "-="  */
                             { (yyval.s) = new string("-="); }
    break;

  case 130: /* function_name: "operator" "*="  */
                             { (yyval.s) = new string("*="); }
    break;

  case 131: /* function_name: "operator" "/="  */
                             { (yyval.s) = new string("/="); }
    break;

  case 132: /* function_name: "operator" "%="  */
                             { (yyval.s) = new string("%="); }
    break;

  case 133: /* function_name: "operator" "&="  */
                             { (yyval.s) = new string("&="); }
    break;

  case 134: /* function_name: "operator" "|="  */
                             { (yyval.s) = new string("|="); }
    break;

  case 135: /* function_name: "operator" "^="  */
                             { (yyval.s) = new string("^="); }
    break;

  case 136: /* function_name: "operator" "&&="  */
                                { (yyval.s) = new string("&&="); }
    break;

  case 137: /* function_name: "operator" "||="  */
                                { (yyval.s) = new string("||="); }
    break;

  case 138: /* function_name: "operator" "^^="  */
                                { (yyval.s) = new string("^^="); }
    break;

  case 139: /* function_name: "operator" "&&"  */
                             { (yyval.s) = new string("&&"); }
    break;

  case 140: /* function_name: "operator" "||"  */
                             { (yyval.s) = new string("||"); }
    break;

  case 141: /* function_name: "operator" "^^"  */
                             { (yyval.s) = new string("^^"); }
    break;

  case 142: /* function_name: "operator" '+'  */
                             { (yyval.s) = new string("+"); }
    break;

  case 143: /* function_name: "operator" '-'  */
                             { (yyval.s) = new string("-"); }
    break;

  case 144: /* function_name: "operator" '*'  */
                             { (yyval.s) = new string("*"); }
    break;

  case 145: /* function_name: "operator" '/'  */
                             { (yyval.s) = new string("/"); }
    break;

  case 146: /* function_name: "operator" '%'  */
                             { (yyval.s) = new string("%"); }
    break;

  case 147: /* function_name: "operator" '<'  */
                             { (yyval.s) = new string("<"); }
    break;

  case 148: /* function_name: "operator" '>'  */
                             { (yyval.s) = new string(">"); }
    break;

  case 149: /* function_name: "operator" ".."  */
                             { (yyval.s) = new string("interval"); }
    break;

  case 150: /* function_name: "operator" "=="  */
                             { (yyval.s) = new string("=="); }
    break;

  case 151: /* function_name: "operator" "!="  */
                             { (yyval.s) = new string("!="); }
    break;

  case 152: /* function_name: "operator" "<="  */
                             { (yyval.s) = new string("<="); }
    break;

  case 153: /* function_name: "operator" ">="  */
                             { (yyval.s) = new string(">="); }
    break;

  case 154: /* function_name: "operator" '&'  */
                             { (yyval.s) = new string("&"); }
    break;

  case 155: /* function_name: "operator" '|'  */
                             { (yyval.s) = new string("|"); }
    break;

  case 156: /* function_name: "operator" '^'  */
                             { (yyval.s) = new string("^"); }
    break;

  case 157: /* function_name: "++" "operator"  */
                             { (yyval.s) = new string("++"); }
    break;

  case 158: /* function_name: "--" "operator"  */
                             { (yyval.s) = new string("--"); }
    break;

  case 159: /* function_name: "operator" "++"  */
                             { (yyval.s) = new string("+++"); }
    break;

  case 160: /* function_name: "operator" "--"  */
                             { (yyval.s) = new string("---"); }
    break;

  case 161: /* function_name: "operator" "<<"  */
                             { (yyval.s) = new string("<<"); }
    break;

  case 162: /* function_name: "operator" ">>"  */
                             { (yyval.s) = new string(">>"); }
    break;

  case 163: /* function_name: "operator" "<<="  */
                             { (yyval.s) = new string("<<="); }
    break;

  case 164: /* function_name: "operator" ">>="  */
                             { (yyval.s) = new string(">>="); }
    break;

  case 165: /* function_name: "operator" "<<<"  */
                             { (yyval.s) = new string("<<<"); }
    break;

  case 166: /* function_name: "operator" ">>>"  */
                             { (yyval.s) = new string(">>>"); }
    break;

  case 167: /* function_name: "operator" "<<<="  */
                             { (yyval.s) = new string("<<<="); }
    break;

  case 168: /* function_name: "operator" ">>>="  */
                             { (yyval.s) = new string(">>>="); }
    break;

  case 169: /* function_name: "operator" '[' ']'  */
                             { (yyval.s) = new string("[]"); }
    break;

  case 170: /* function_name: "operator" "?[" ']'  */
                                { (yyval.s) = new string("?[]"); }
    break;

  case 171: /* function_name: "operator" '.'  */
                             { (yyval.s) = new string("."); }
    break;

  case 172: /* function_name: "operator" "?."  */
                             { (yyval.s) = new string("?."); }
    break;

  case 173: /* function_name: "operator" '.' "name"  */
                                       { (yyval.s) = new string(".`"+*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 174: /* function_name: "operator" '.' "name" ":="  */
                                             { (yyval.s) = new string(".`"+*(yyvsp[-1].s)+"`clone"); delete (yyvsp[-1].s); }
    break;

  case 175: /* function_name: "operator" "?." "name"  */
                                       { (yyval.s) = new string("?.`"+*(yyvsp[0].s)); delete (yyvsp[0].s);}
    break;

  case 176: /* function_name: "operator" ":="  */
                                { (yyval.s) = new string("clone"); }
    break;

  case 177: /* function_name: "operator" "delete"  */
                                { (yyval.s) = new string("finalize"); }
    break;

  case 178: /* function_name: "operator" "??"  */
                           { (yyval.s) = new string("??"); }
    break;

  case 179: /* function_name: "operator" "is"  */
                            { (yyval.s) = new string("`is"); }
    break;

  case 180: /* function_name: "operator" "as"  */
                            { (yyval.s) = new string("`as"); }
    break;

  case 181: /* function_name: "operator" "is" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`is`" + *(yyvsp[0].s); }
    break;

  case 182: /* function_name: "operator" "as" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`as`" + *(yyvsp[0].s); }
    break;

  case 183: /* function_name: "operator" '?' "as"  */
                                { (yyval.s) = new string("?as"); }
    break;

  case 184: /* function_name: "operator" '?' "as" "name"  */
                                           { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "?as`" + *(yyvsp[0].s); }
    break;

  case 185: /* function_name: "bool"  */
                     { (yyval.s) = new string("bool"); }
    break;

  case 186: /* function_name: "string"  */
                     { (yyval.s) = new string("string"); }
    break;

  case 187: /* function_name: "int"  */
                     { (yyval.s) = new string("int"); }
    break;

  case 188: /* function_name: "int2"  */
                     { (yyval.s) = new string("int2"); }
    break;

  case 189: /* function_name: "int3"  */
                     { (yyval.s) = new string("int3"); }
    break;

  case 190: /* function_name: "int4"  */
                     { (yyval.s) = new string("int4"); }
    break;

  case 191: /* function_name: "uint"  */
                     { (yyval.s) = new string("uint"); }
    break;

  case 192: /* function_name: "uint2"  */
                     { (yyval.s) = new string("uint2"); }
    break;

  case 193: /* function_name: "uint3"  */
                     { (yyval.s) = new string("uint3"); }
    break;

  case 194: /* function_name: "uint4"  */
                     { (yyval.s) = new string("uint4"); }
    break;

  case 195: /* function_name: "float"  */
                     { (yyval.s) = new string("float"); }
    break;

  case 196: /* function_name: "float2"  */
                     { (yyval.s) = new string("float2"); }
    break;

  case 197: /* function_name: "float3"  */
                     { (yyval.s) = new string("float3"); }
    break;

  case 198: /* function_name: "float4"  */
                     { (yyval.s) = new string("float4"); }
    break;

  case 199: /* function_name: "range"  */
                     { (yyval.s) = new string("range"); }
    break;

  case 200: /* function_name: "urange"  */
                     { (yyval.s) = new string("urange"); }
    break;

  case 201: /* function_name: "range64"  */
                     { (yyval.s) = new string("range64"); }
    break;

  case 202: /* function_name: "urange64"  */
                     { (yyval.s) = new string("urange64"); }
    break;

  case 203: /* function_name: "int64"  */
                     { (yyval.s) = new string("int64"); }
    break;

  case 204: /* function_name: "uint64"  */
                     { (yyval.s) = new string("uint64"); }
    break;

  case 205: /* function_name: "double"  */
                     { (yyval.s) = new string("double"); }
    break;

  case 206: /* function_name: "int8"  */
                     { (yyval.s) = new string("int8"); }
    break;

  case 207: /* function_name: "uint8"  */
                     { (yyval.s) = new string("uint8"); }
    break;

  case 208: /* function_name: "int16"  */
                     { (yyval.s) = new string("int16"); }
    break;

  case 209: /* function_name: "uint16"  */
                     { (yyval.s) = new string("uint16"); }
    break;

  case 210: /* global_function_declaration: optional_annotation_list "def" function_declaration  */
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, yyextra, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            if ( !yyextra->g_Program->addGeneric((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"generic function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 211: /* optional_public_or_private_function: %empty  */
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 212: /* optional_public_or_private_function: "private"  */
                        { (yyval.b) = false; }
    break;

  case 213: /* optional_public_or_private_function: "public"  */
                        { (yyval.b) = true; }
    break;

  case 214: /* function_declaration_header: function_name optional_function_argument_list optional_function_type  */
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 215: /* $@6: %empty  */
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 216: /* function_declaration: optional_public_or_private_function $@6 function_declaration_header expression_block  */
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 217: /* expression_block: '{' expressions '}'  */
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 218: /* expression_block: '{' expressions '}' "finally" '{' expressions '}'  */
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 219: /* expression_any: ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 220: /* expression_any: expr_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 221: /* expression_any: expr_keyword  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 222: /* expression_any: expr_assign_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 223: /* expression_any: expr_assign ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 224: /* expression_any: expression_delete ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 225: /* expression_any: expression_let  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 226: /* expression_any: expression_while_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 227: /* expression_any: expression_unsafe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 228: /* expression_any: expression_with  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 229: /* expression_any: expression_with_alias  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 230: /* expression_any: expression_for_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 231: /* expression_any: expression_break ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 232: /* expression_any: expression_continue ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 233: /* expression_any: expression_return  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 234: /* expression_any: expression_yield  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 235: /* expression_any: expression_if_then_else  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 236: /* expression_any: expression_try_catch  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 237: /* expression_any: expression_label ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 238: /* expression_any: expression_goto ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 239: /* expression_any: "pass" ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 240: /* expressions: %empty  */
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 241: /* expressions: expressions expression_any  */
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 242: /* expressions: expressions error  */
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 243: /* expr_keyword: "keyword" expr expression_block  */
                                                           {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        auto resT = new TypeDecl(Type::autoinfer);
        auto blk = ast_makeBlock(scanner,0,nullptr,nullptr,nullptr,resT,(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])));
        pCall->arguments.push_back(ExpressionPtr(blk));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 244: /* optional_expr_list: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 245: /* optional_expr_list: expr_list  */
                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 246: /* $@7: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 247: /* $@8: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 248: /* expression_keyword: "keyword" '<' $@7 type_declaration_no_options '>' $@8 expr  */
                                                                                                                                               {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),*(yyvsp[-6].s));
        auto td = new ExprTypeDecl(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCall->arguments.insert(pCall->arguments.begin(), ExpressionPtr(td));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        delete (yyvsp[-6].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 249: /* $@9: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 250: /* $@10: %empty  */
                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 251: /* expression_keyword: "type function" '<' $@9 type_declaration_no_options '>' $@10 '(' optional_expr_list ')'  */
                                                                                                                                                                                    {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),tokAt(scanner,(yylsp[0])),*(yyvsp[-8].s));
        if ( (yyvsp[-1].pExpression) ) {
            pCall->arguments = sequenceToList((yyvsp[-1].pExpression));
        }
        auto td = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-5].pTypeDecl)));
        pCall->arguments.insert(pCall->arguments.begin(), ExpressionPtr(td));
        delete (yyvsp[-8].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 252: /* expr_pipe: expr_assign " <|" expr_block  */
                                                        {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else if ( pipeCall->rtti_isVar() ) {
            // a += b <| c
            auto pVar = (ExprVar *) pipeCall;
            auto pCall = yyextra->g_Program->makeCall(pVar->at,pVar->name);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            if ( !(yyvsp[-2].pExpression)->swap_tail(pVar,pCall) ) {
                delete pVar;
                (yyval.pExpression) = pCall;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        } else if ( pipeCall->rtti_isMakeStruct() ) {
            auto pMS = (ExprMakeStruct *) pipeCall;
            if ( pMS->block ) {
                das_yyerror(scanner,"can't pipe into [[ make structure ]]. it already has where closure",
                    tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
                delete (yyvsp[0].pExpression);
            } else {
                pMS->block = (yyvsp[0].pExpression);
            }
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror(scanner,"can only pipe into function call or [[ make structure ]]",
                tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
            delete (yyvsp[0].pExpression);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
    break;

  case 253: /* expr_pipe: "@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 254: /* expr_pipe: "@@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 255: /* expr_pipe: "$ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 256: /* name_in_namespace: "name"  */
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 257: /* name_in_namespace: "name" "::" "name"  */
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 258: /* name_in_namespace: "::" "name"  */
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 259: /* expression_delete: "delete" expr  */
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 260: /* expression_delete: "delete" "explicit" expr  */
                                                   {
        auto delExpr = new ExprDelete(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
        delExpr->native = true;
        (yyval.pExpression) = delExpr;
    }
    break;

  case 261: /* $@11: %empty  */
           { yyextra->das_arrow_depth ++; }
    break;

  case 262: /* $@12: %empty  */
                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 263: /* new_type_declaration: '<' $@11 type_declaration '>' $@12  */
                                                                                                            {
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 264: /* new_type_declaration: structure_type_declaration  */
                                               {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 265: /* expr_new: "new" new_type_declaration  */
                                                       {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
    break;

  case 266: /* expr_new: "new" new_type_declaration '(' ')'  */
                                                               {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
    break;

  case 267: /* expr_new: "new" new_type_declaration '(' expr_list ')'  */
                                                                                    {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 268: /* expr_new: "new" make_decl  */
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 269: /* expression_break: "break"  */
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 270: /* expression_continue: "continue"  */
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 271: /* expression_return_no_pipe: "return"  */
                        {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[0])),nullptr);
    }
    break;

  case 272: /* expression_return_no_pipe: "return" expr_list  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),sequenceToTuple((yyvsp[0].pExpression)));
    }
    break;

  case 273: /* expression_return_no_pipe: "return" "<-" expr_list  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),sequenceToTuple((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 274: /* expression_return: expression_return_no_pipe ';'  */
                                              {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 275: /* expression_return: "return" expr_pipe  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 276: /* expression_return: "return" "<-" expr_pipe  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 277: /* expression_yield_no_pipe: "yield" expr  */
                                     {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 278: /* expression_yield_no_pipe: "yield" "<-" expr  */
                                            {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 279: /* expression_yield: expression_yield_no_pipe ';'  */
                                             {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 280: /* expression_yield: "yield" expr_pipe  */
                                          {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 281: /* expression_yield: "yield" "<-" expr_pipe  */
                                                 {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 282: /* expression_try_catch: "try" expression_block "recover" expression_block  */
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 283: /* kwd_let: "let"  */
                 { (yyval.b) = true; }
    break;

  case 284: /* kwd_let: "var"  */
                 { (yyval.b) = false; }
    break;

  case 285: /* optional_in_scope: "inscope"  */
                    { (yyval.b) = true; }
    break;

  case 286: /* optional_in_scope: %empty  */
                     { (yyval.b) = false; }
    break;

  case 287: /* tuple_expansion: "name"  */
                    {
        (yyval.pNameList) = new vector<string>();
        (yyval.pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 288: /* tuple_expansion: tuple_expansion ',' "name"  */
                                             {
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
        (yyval.pNameList) = (yyvsp[-2].pNameList);
    }
    break;

  case 289: /* tuple_expansion_variable_declaration: "[[" tuple_expansion ']' ']' ':' type_declaration_no_options copy_or_move_or_clone expr ';'  */
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-7].pNameList),tokAt(scanner,(yylsp[-7])),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 290: /* tuple_expansion_variable_declaration: "[[" tuple_expansion ']' ']' optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-6]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-6].pNameList),tokAt(scanner,(yylsp[-6])),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 291: /* expression_let: kwd_let optional_in_scope let_variable_declaration  */
                                                                 {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 292: /* expression_let: kwd_let optional_in_scope tuple_expansion_variable_declaration  */
                                                                             {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 293: /* $@13: %empty  */
                          { yyextra->das_arrow_depth ++; }
    break;

  case 294: /* $@14: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 295: /* expr_cast: "cast" '<' $@13 type_declaration_no_options '>' $@14 expr  */
                                                                                                                                                {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 296: /* $@15: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 297: /* $@16: %empty  */
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 298: /* expr_cast: "upcast" '<' $@15 type_declaration_no_options '>' $@16 expr  */
                                                                                                                                                  {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 299: /* $@17: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 300: /* $@18: %empty  */
                                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 301: /* expr_cast: "reinterpret" '<' $@17 type_declaration_no_options '>' $@18 expr  */
                                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 302: /* $@19: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 303: /* $@20: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 304: /* expr_type_decl: "type" '<' $@19 type_declaration '>' $@20  */
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 305: /* expr_type_info: "typeinfo" '(' name_in_namespace expr ')'  */
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 306: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" '>' expr ')'  */
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 307: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" ';' "name" '>' expr ')'  */
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 308: /* expr_list: expr  */
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 309: /* expr_list: expr_list ',' expr  */
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 310: /* block_or_simple_block: expression_block  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 311: /* block_or_simple_block: "=>" expr  */
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 312: /* block_or_simple_block: "=>" "<-" expr  */
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 313: /* block_or_lambda: '$'  */
                { (yyval.i) = 0;   /* block */  }
    break;

  case 314: /* block_or_lambda: '@'  */
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 315: /* block_or_lambda: '@' '@'  */
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 316: /* capture_entry: '&' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 317: /* capture_entry: '=' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 318: /* capture_entry: "<-" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 319: /* capture_entry: ":=" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 320: /* capture_list: capture_entry  */
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 321: /* capture_list: capture_list ',' capture_entry  */
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 322: /* optional_capture_list: %empty  */
        { (yyval.pCaptList) = nullptr; }
    break;

  case 323: /* optional_capture_list: "[[" capture_list ']' ']'  */
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 324: /* expr_block: expression_block  */
                                            {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt(scanner,(yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
    break;

  case 325: /* expr_block: block_or_lambda optional_annotation_list optional_capture_list optional_function_argument_list optional_function_type block_or_simple_block  */
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 326: /* expr_numeric_const: "integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 327: /* expr_numeric_const: "unsigned integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 328: /* expr_numeric_const: "long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 329: /* expr_numeric_const: "unsigned long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 330: /* expr_numeric_const: "unsigned int8 constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt8(tokAt(scanner,(yylsp[0])),(uint8_t)(yyvsp[0].ui)); }
    break;

  case 331: /* expr_numeric_const: "floating point constant"  */
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 332: /* expr_numeric_const: "double constant"  */
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 333: /* expr_assign: expr  */
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 334: /* expr_assign: expr '=' expr  */
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 335: /* expr_assign: expr "<-" expr  */
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 336: /* expr_assign: expr ":=" expr  */
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 337: /* expr_assign: expr "&=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 338: /* expr_assign: expr "|=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 339: /* expr_assign: expr "^=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 340: /* expr_assign: expr "&&=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 341: /* expr_assign: expr "||=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 342: /* expr_assign: expr "^^=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 343: /* expr_assign: expr "+=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 344: /* expr_assign: expr "-=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 345: /* expr_assign: expr "*=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 346: /* expr_assign: expr "/=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 347: /* expr_assign: expr "%=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 348: /* expr_assign: expr "<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 349: /* expr_assign: expr ">>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 350: /* expr_assign: expr "<<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 351: /* expr_assign: expr ">>>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 352: /* expr_assign_pipe: expr '=' "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 353: /* expr_assign_pipe: expr '=' "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 354: /* expr_assign_pipe: expr '=' "$ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 355: /* expr_assign_pipe: expr "<-" "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 356: /* expr_assign_pipe: expr "<-" "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 357: /* expr_assign_pipe: expr "<-" "$ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 358: /* expr_named_call: name_in_namespace '(' '[' make_struct_fields ']' ')'  */
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 359: /* expr_named_call: name_in_namespace '(' expr_list ',' '[' make_struct_fields ']' ')'  */
                                                                                                  {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-7])),*(yyvsp[-7].s));
        nc->nonNamedArguments = sequenceToList((yyvsp[-5].pExpression));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-7].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 360: /* expr_method_call: expr "->" "name" '(' ')'  */
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 361: /* expr_method_call: expr "->" "name" '(' expr_list ')'  */
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 362: /* func_addr_name: name_in_namespace  */
                                    {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 363: /* func_addr_name: "$i" '(' expr ')'  */
                                          {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression), expr, "i");
    }
    break;

  case 364: /* func_addr_expr: '@' '@' func_addr_name  */
                                          {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 365: /* $@21: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 366: /* $@22: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 367: /* func_addr_expr: '@' '@' '<' $@21 type_declaration_no_options '>' $@22 func_addr_name  */
                                                                                                                                                       {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 368: /* $@23: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 369: /* $@24: %empty  */
                                                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 370: /* func_addr_expr: '@' '@' '<' $@23 optional_function_argument_list optional_function_type '>' $@24 func_addr_name  */
                                                                                                                                                                                     {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 371: /* expr_field: expr '.' "name"  */
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 372: /* expr_field: expr '.' '.' "name"  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 373: /* expr_field: expr '.' "name" '(' ')'  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        das_yyerror(scanner,"foo.bar() method call syntax is not supported, use foo->bar() instead",
            tokAt(scanner,(yylsp[-3])),CompilationError::syntax_error);
    }
    break;

  case 374: /* expr_field: expr '.' "name" '(' expr_list ')'  */
                                                                       {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-5].pExpression)), *(yyvsp[-3].s));
        delete (yyvsp[-3].s);
        das_yyerror(scanner,"foo.bar(...) method call syntax is not supported, use foo->bar(...) instead",
            tokAt(scanner,(yylsp[-4])),CompilationError::syntax_error);
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 375: /* $@25: %empty  */
                               { yyextra->das_suppress_errors=true; }
    break;

  case 376: /* $@26: %empty  */
                                                                            { yyextra->das_suppress_errors=false; }
    break;

  case 377: /* expr_field: expr '.' $@25 error $@26  */
                                                                                                                    {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 378: /* expr: "null"  */
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 379: /* expr: name_in_namespace  */
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 380: /* expr: expr_numeric_const  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 381: /* expr: expr_reader  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 382: /* expr: string_builder  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 383: /* expr: make_decl  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 384: /* expr: "true"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 385: /* expr: "false"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 386: /* expr: expr_field  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 387: /* expr: expr_mtag  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 388: /* expr: '!' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 389: /* expr: '~' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 390: /* expr: '+' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 391: /* expr: '-' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 392: /* expr: expr "<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 393: /* expr: expr ">>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 394: /* expr: expr "<<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 395: /* expr: expr ">>>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 396: /* expr: expr '+' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 397: /* expr: expr '-' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 398: /* expr: expr '*' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 399: /* expr: expr '/' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 400: /* expr: expr '%' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 401: /* expr: expr '<' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 402: /* expr: expr '>' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 403: /* expr: expr "==" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 404: /* expr: expr "!=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 405: /* expr: expr "<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 406: /* expr: expr ">=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 407: /* expr: expr '&' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 408: /* expr: expr '|' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 409: /* expr: expr '^' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 410: /* expr: expr "&&" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 411: /* expr: expr "||" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 412: /* expr: expr "^^" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 413: /* expr: expr ".." expr  */
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 414: /* expr: "++" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 415: /* expr: "--" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 416: /* expr: expr "++"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 417: /* expr: expr "--"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 418: /* expr: '(' expr ')'  */
                                                 { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 419: /* expr: expr '[' expr ']'  */
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 420: /* expr: expr '.' '[' expr ']'  */
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 421: /* expr: expr "?[" expr ']'  */
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 422: /* expr: expr '.' "?[" expr ']'  */
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 423: /* expr: expr "?." "name"  */
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 424: /* expr: expr '.' "?." "name"  */
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 425: /* expr: func_addr_expr  */
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 426: /* expr: name_in_namespace '(' ')'  */
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
    break;

  case 427: /* expr: name_in_namespace '(' expr_list ')'  */
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
    break;

  case 428: /* expr: basic_type_declaration '(' ')'  */
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 429: /* expr: basic_type_declaration '(' expr_list ')'  */
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 430: /* expr: '*' expr  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 431: /* expr: "deref" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 432: /* expr: "addr" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 433: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' ')'  */
                                                                                                              {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 434: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' expr ')'  */
                                                                                                                            {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 435: /* expr: expr "??" expr  */
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 436: /* expr: expr '?' expr ':' expr  */
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 437: /* $@27: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 438: /* $@28: %empty  */
                                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 439: /* expr: expr "is" "type" '<' $@27 type_declaration_no_options '>' $@28  */
                                                                                                                                                       {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 440: /* expr: expr "is" basic_type_declaration  */
                                                               {
        auto vdecl = new TypeDecl((yyvsp[0].type));
        vdecl->at = tokAt(scanner,(yylsp[0]));
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),vdecl);
    }
    break;

  case 441: /* expr: expr "is" "name"  */
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 442: /* expr: expr "as" "name"  */
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 443: /* $@29: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 444: /* $@30: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 445: /* expr: expr "as" "type" '<' $@29 type_declaration '>' $@30  */
                                                                                                                                            {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 446: /* expr: expr "as" basic_type_declaration  */
                                                               {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 447: /* expr: expr '?' "as" "name"  */
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 448: /* $@31: %empty  */
                                                   { yyextra->das_arrow_depth ++; }
    break;

  case 449: /* $@32: %empty  */
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 450: /* expr: expr '?' "as" "type" '<' $@31 type_declaration '>' $@32  */
                                                                                                                                                {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-8].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 451: /* expr: expr '?' "as" basic_type_declaration  */
                                                                   {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 452: /* expr: expr_type_info  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 453: /* expr: expr_type_decl  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 454: /* expr: expr_cast  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 455: /* expr: expr_new  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 456: /* expr: expr_method_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 457: /* expr: expr_named_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 458: /* expr: expr_block  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 459: /* expr: expr "<|" expr  */
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 460: /* expr: expr "|>" expr  */
                                                { (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 461: /* expr: expr "|>" basic_type_declaration  */
                                                          {
        auto fncall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[0].type)));
        (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),fncall,tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 462: /* expr: name_in_namespace "name"  */
                                                { (yyval.pExpression) = ast_NameName(scanner,(yyvsp[-1].s),(yyvsp[0].s),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0]))); }
    break;

  case 463: /* expr: "unsafe" '(' expr ')'  */
                                         {
        (yyvsp[-1].pExpression)->alwaysSafe = true;
        (yyvsp[-1].pExpression)->userSaidItsSafe = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 464: /* expr: expression_keyword  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 465: /* expr_mtag: "$$" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"e"); }
    break;

  case 466: /* expr_mtag: "$i" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"i"); }
    break;

  case 467: /* expr_mtag: "$v" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"v"); }
    break;

  case 468: /* expr_mtag: "$b" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"b"); }
    break;

  case 469: /* expr_mtag: "$a" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"a"); }
    break;

  case 470: /* expr_mtag: "..."  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[0])),nullptr,"..."); }
    break;

  case 471: /* expr_mtag: "$c" '(' expr ')' '(' ')'  */
                                                            {
            auto ccall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``");
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-5])),(yyvsp[-3].pExpression),ccall,"c");
        }
    break;

  case 472: /* expr_mtag: "$c" '(' expr ')' '(' expr_list ')'  */
                                                                                {
            auto ccall = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``"),(yyvsp[-1].pExpression));
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-6])),(yyvsp[-4].pExpression),ccall,"c");
        }
    break;

  case 473: /* expr_mtag: expr '.' "$f" '(' expr ')'  */
                                                                {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 474: /* expr_mtag: expr "?." "$f" '(' expr ')'  */
                                                                 {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 475: /* expr_mtag: expr '.' '.' "$f" '(' expr ')'  */
                                                                    {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 476: /* expr_mtag: expr '.' "?." "$f" '(' expr ')'  */
                                                                     {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 477: /* expr_mtag: expr "as" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 478: /* expr_mtag: expr '?' "as" "$f" '(' expr ')'  */
                                                                       {
        auto cfield = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-6].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 479: /* expr_mtag: expr "is" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprIsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 480: /* expr_mtag: '@' '@' "$c" '(' expr ')'  */
                                                         {
        auto ccall = new ExprAddr(tokAt(scanner,(yylsp[-4])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pExpression),ccall,"c");
    }
    break;

  case 481: /* optional_field_annotation: %empty  */
                                                        { (yyval.aaList) = nullptr; }
    break;

  case 482: /* optional_field_annotation: "[[" annotation_argument_list ']' ']'  */
                                                        { (yyval.aaList) = (yyvsp[-2].aaList); }
    break;

  case 483: /* optional_override: %empty  */
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 484: /* optional_override: "override"  */
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 485: /* optional_override: "sealed"  */
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 486: /* optional_constant: %empty  */
                        { (yyval.b) = false; }
    break;

  case 487: /* optional_constant: "const"  */
                        { (yyval.b) = true; }
    break;

  case 488: /* optional_public_or_private_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 489: /* optional_public_or_private_member_variable: "public"  */
                        { (yyval.b) = false; }
    break;

  case 490: /* optional_public_or_private_member_variable: "private"  */
                        { (yyval.b) = true; }
    break;

  case 491: /* optional_static_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 492: /* optional_static_member_variable: "static"  */
                        { (yyval.b) = true; }
    break;

  case 493: /* structure_variable_declaration: optional_field_annotation optional_static_member_variable optional_override optional_public_or_private_member_variable variable_declaration  */
                                                                                                                                                                                      {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-4].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyvsp[0].pVarDecl)->isStatic = (yyvsp[-3].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 494: /* struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 495: /* $@33: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 496: /* struct_variable_declaration_list: struct_variable_declaration_list $@33 structure_variable_declaration ';'  */
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 497: /* $@34: %empty  */
                                                                                                                     {
                yyextra->das_force_oxford_comma=true;
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-2]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 498: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable "abstract" optional_constant $@34 function_declaration_header ';'  */
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-3].b), (yyvsp[-1].pFuncDecl));
            }
    break;

  case 499: /* $@35: %empty  */
                                                                                                                                                                         {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 500: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable optional_static_member_variable optional_override optional_constant $@35 function_declaration_header expression_block  */
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-9].pVarDeclList),(yyvsp[-8].faList),(yyvsp[-5].b),(yyvsp[-6].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-7]),(yylsp[0])),tokAt(scanner,(yylsp[-8])));
            }
    break;

  case 501: /* struct_variable_declaration_list: struct_variable_declaration_list '[' annotation_list ']' ';'  */
                                                                                 {
        das_yyerror(scanner,"structure field or class method annotation expected to remain on the same line with the field or the class",
            tokAt(scanner,(yylsp[-2])), CompilationError::syntax_error);
        delete (yyvsp[-2].faList);
        (yyval.pVarDeclList) = (yyvsp[-4].pVarDeclList);
    }
    break;

  case 502: /* function_argument_declaration: optional_field_annotation variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        }
    break;

  case 503: /* function_argument_declaration: optional_field_annotation "var" variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 504: /* function_argument_declaration: "$a" '(' expr ')'  */
                                     {
            auto na = new vector<VariableNameAndPosition>();
            na->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1]))});
            auto decl = new VariableDeclaration(na, new TypeDecl(Type::none), (yyvsp[-1].pExpression));
            decl->pTypeDecl->isTag = true;
            (yyval.pVarDecl) = decl;
        }
    break;

  case 505: /* function_argument_list: function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 506: /* function_argument_list: function_argument_list ';' function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 507: /* tuple_type: type_declaration  */
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 508: /* tuple_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 509: /* tuple_type_list: tuple_type  */
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 510: /* tuple_type_list: tuple_type_list ';' tuple_type  */
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 511: /* tuple_alias_type_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 512: /* tuple_alias_type_list: tuple_alias_type_list ';'  */
                                      {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 513: /* tuple_alias_type_list: tuple_alias_type_list tuple_type ';'  */
                                                         {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        /*
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,@decl);
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *($decl->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
        */
    }
    break;

  case 514: /* variant_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 515: /* variant_type_list: variant_type  */
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 516: /* variant_type_list: variant_type_list ';' variant_type  */
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 517: /* variant_alias_type_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 518: /* variant_alias_type_list: variant_alias_type_list ';'  */
                                        {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 519: /* variant_alias_type_list: variant_alias_type_list variant_type ';'  */
                                                             {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
    }
    break;

  case 520: /* copy_or_move: '='  */
                    { (yyval.b) = false; }
    break;

  case 521: /* copy_or_move: "<-"  */
                    { (yyval.b) = true; }
    break;

  case 522: /* variable_declaration: variable_name_with_pos_list  */
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 523: /* variable_declaration: variable_name_with_pos_list '&'  */
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 524: /* variable_declaration: variable_name_with_pos_list ':' type_declaration  */
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 525: /* variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move expr  */
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 526: /* variable_declaration: variable_name_with_pos_list copy_or_move expr  */
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 527: /* variable_declaration: variable_name_with_pos_list copy_or_move expr_pipe  */
                                                                            {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 528: /* copy_or_move_or_clone: '='  */
                    { (yyval.i) = CorM_COPY; }
    break;

  case 529: /* copy_or_move_or_clone: "<-"  */
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 530: /* copy_or_move_or_clone: ":="  */
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 531: /* optional_ref: %empty  */
            { (yyval.b) = false; }
    break;

  case 532: /* optional_ref: '&'  */
            { (yyval.b) = true; }
    break;

  case 533: /* let_variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 534: /* let_variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-1].pExpression))});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 535: /* let_variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 536: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name"  */
                                                             {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 537: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                                   {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 538: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options ';'  */
                                                                                            {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 539: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr ';'  */
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 540: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr_pipe  */
                                                                                                                                   {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 541: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 542: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr_pipe  */
                                                                                                           {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 543: /* global_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 544: /* $@36: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 545: /* global_variable_declaration_list: global_variable_declaration_list $@36 optional_field_annotation let_variable_declaration  */
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 546: /* optional_shared: %empty  */
                     { (yyval.b) = false; }
    break;

  case 547: /* optional_shared: "shared"  */
                     { (yyval.b) = true; }
    break;

  case 548: /* optional_public_or_private_variable: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 549: /* optional_public_or_private_variable: "private"  */
                     { (yyval.b) = false; }
    break;

  case 550: /* optional_public_or_private_variable: "public"  */
                     { (yyval.b) = true; }
    break;

  case 551: /* global_let: kwd_let optional_shared optional_public_or_private_variable '{' global_variable_declaration_list '}'  */
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 552: /* $@37: %empty  */
                                                                                        {
        yyextra->das_force_oxford_comma=true;
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 553: /* global_let: kwd_let optional_shared optional_public_or_private_variable $@37 optional_field_annotation let_variable_declaration  */
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 554: /* enum_list: %empty  */
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 555: /* enum_list: enum_list ';'  */
                          {
        (yyval.pEnum) = (yyvsp[-1].pEnum);
    }
    break;

  case 556: /* enum_list: enum_list "name" ';'  */
                                     {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s),nullptr,tokAt(scanner,(yylsp[-1]))) ) {
            das_yyerror(scanner,"enumeration already declared " + *(yyvsp[-1].s), tokAt(scanner,(yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[-1].s)->c_str(), tokName);
            }
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 557: /* enum_list: enum_list "name" '=' expr ';'  */
                                                     {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression)),tokAt(scanner,(yylsp[-3]))) ) {
            das_yyerror(scanner,"enumeration value already declared " + *(yyvsp[-3].s), tokAt(scanner,(yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[-3].s)->c_str(), tokName);
            }
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
    break;

  case 558: /* optional_public_or_private_alias: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 559: /* optional_public_or_private_alias: "private"  */
                     { (yyval.b) = false; }
    break;

  case 560: /* optional_public_or_private_alias: "public"  */
                     { (yyval.b) = true; }
    break;

  case 561: /* $@38: %empty  */
                                                         {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 562: /* single_alias: optional_public_or_private_alias "name" $@38 '=' type_declaration  */
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->isPrivateAlias = !(yyvsp[-4].b);
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 566: /* $@39: %empty  */
                    { yyextra->das_force_oxford_comma=true;}
    break;

  case 568: /* optional_public_or_private_enum: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 569: /* optional_public_or_private_enum: "private"  */
                     { (yyval.b) = false; }
    break;

  case 570: /* optional_public_or_private_enum: "public"  */
                     { (yyval.b) = true; }
    break;

  case 571: /* enum_name: "name"  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.pEnum) = ast_addEmptyEnum(scanner, (yyvsp[0].s), tokAt(scanner,(yylsp[0])));
    }
    break;

  case 572: /* $@40: %empty  */
                                                                                                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumerationEntries(tak);
        }
    }
    break;

  case 573: /* $@41: %empty  */
                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumerationEntries(tak);
        }
    }
    break;

  case 574: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name '{' $@40 enum_list $@41 '}'  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-5].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-8].faList),tokAt(scanner,(yylsp[-8])),(yyvsp[-6].b),(yyvsp[-5].pEnum),(yyvsp[-2].pEnum),Type::tInt);
    }
    break;

  case 575: /* $@42: %empty  */
                                                                                                                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumerationEntries(tak);
        }
    }
    break;

  case 576: /* $@43: %empty  */
                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumerationEntries(tak);
        }
    }
    break;

  case 577: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name ':' enum_basic_type_declaration '{' $@42 enum_list $@43 '}'  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-7].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-10].faList),tokAt(scanner,(yylsp[-10])),(yyvsp[-8].b),(yyvsp[-7].pEnum),(yyvsp[-2].pEnum),(yyvsp[-5].type));
    }
    break;

  case 578: /* optional_structure_parent: %empty  */
                                        { (yyval.s) = nullptr; }
    break;

  case 579: /* optional_structure_parent: ':' name_in_namespace  */
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 580: /* optional_sealed: %empty  */
                        { (yyval.b) = false; }
    break;

  case 581: /* optional_sealed: "sealed"  */
                        { (yyval.b) = true; }
    break;

  case 582: /* structure_name: optional_sealed "name" optional_structure_parent  */
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 583: /* class_or_struct: "class"  */
                    { (yyval.b) = true; }
    break;

  case 584: /* class_or_struct: "struct"  */
                    { (yyval.b) = false; }
    break;

  case 585: /* optional_public_or_private_structure: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 586: /* optional_public_or_private_structure: "private"  */
                     { (yyval.b) = false; }
    break;

  case 587: /* optional_public_or_private_structure: "public"  */
                     { (yyval.b) = true; }
    break;

  case 588: /* optional_struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 589: /* optional_struct_variable_declaration_list: '{' struct_variable_declaration_list '}'  */
                                                       {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 590: /* $@44: %empty  */
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 591: /* $@45: %empty  */
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 592: /* structure_declaration: optional_annotation_list class_or_struct optional_public_or_private_structure $@44 structure_name $@45 optional_struct_variable_declaration_list  */
                                                                                                                                                    {
        if ( (yyvsp[-2].pStructure) ) {
            ast_structureDeclaration ( scanner, (yyvsp[-6].faList), tokAt(scanner,(yylsp[-5])), (yyvsp[-2].pStructure), tokAt(scanner,(yylsp[-2])), (yyvsp[0].pVarDeclList) );
            if ( !yyextra->g_CommentReaders.empty() ) {
                auto tak = tokAt(scanner,(yylsp[-5]));
                for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-2].pStructure),tak);
            }
        } else {
            deleteVariableDeclarationList((yyvsp[0].pVarDeclList));
        }
    }
    break;

  case 593: /* variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 594: /* variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression)});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 595: /* variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 596: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name"  */
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 597: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 598: /* basic_type_declaration: "bool"  */
                        { (yyval.type) = Type::tBool; }
    break;

  case 599: /* basic_type_declaration: "string"  */
                        { (yyval.type) = Type::tString; }
    break;

  case 600: /* basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 601: /* basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 602: /* basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 603: /* basic_type_declaration: "int64"  */
                        { (yyval.type) = Type::tInt64; }
    break;

  case 604: /* basic_type_declaration: "int2"  */
                        { (yyval.type) = Type::tInt2; }
    break;

  case 605: /* basic_type_declaration: "int3"  */
                        { (yyval.type) = Type::tInt3; }
    break;

  case 606: /* basic_type_declaration: "int4"  */
                        { (yyval.type) = Type::tInt4; }
    break;

  case 607: /* basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 608: /* basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 609: /* basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 610: /* basic_type_declaration: "uint64"  */
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 611: /* basic_type_declaration: "uint2"  */
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 612: /* basic_type_declaration: "uint3"  */
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 613: /* basic_type_declaration: "uint4"  */
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 614: /* basic_type_declaration: "float"  */
                        { (yyval.type) = Type::tFloat; }
    break;

  case 615: /* basic_type_declaration: "float2"  */
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 616: /* basic_type_declaration: "float3"  */
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 617: /* basic_type_declaration: "float4"  */
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 618: /* basic_type_declaration: "void"  */
                        { (yyval.type) = Type::tVoid; }
    break;

  case 619: /* basic_type_declaration: "range"  */
                        { (yyval.type) = Type::tRange; }
    break;

  case 620: /* basic_type_declaration: "urange"  */
                        { (yyval.type) = Type::tURange; }
    break;

  case 621: /* basic_type_declaration: "range64"  */
                        { (yyval.type) = Type::tRange64; }
    break;

  case 622: /* basic_type_declaration: "urange64"  */
                        { (yyval.type) = Type::tURange64; }
    break;

  case 623: /* basic_type_declaration: "double"  */
                        { (yyval.type) = Type::tDouble; }
    break;

  case 624: /* basic_type_declaration: "bitfield"  */
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 625: /* enum_basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 626: /* enum_basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 627: /* enum_basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 628: /* enum_basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 629: /* enum_basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 630: /* enum_basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 631: /* structure_type_declaration: name_in_namespace  */
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 632: /* auto_type_declaration: "auto"  */
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 633: /* auto_type_declaration: "auto" '(' "name" ')'  */
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 634: /* auto_type_declaration: "$t" '(' expr ')'  */
                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::alias);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = "``MACRO``TAG``";
        (yyval.pTypeDecl)->isTag = true;
        (yyval.pTypeDecl)->firstType = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner, (yylsp[-1]));
        (yyval.pTypeDecl)->firstType->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 635: /* bitfield_bits: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 636: /* bitfield_bits: bitfield_bits ';' "name"  */
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 637: /* bitfield_alias_bits: %empty  */
        {
        auto pSL = new vector<string>();
        (yyval.pNameList) = pSL;

    }
    break;

  case 638: /* bitfield_alias_bits: bitfield_alias_bits ';'  */
                                      {
        (yyval.pNameList) = (yyvsp[-1].pNameList);
    }
    break;

  case 639: /* bitfield_alias_bits: bitfield_alias_bits "name" ';'  */
                                                 {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[-1].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntry((yyvsp[-1].s)->c_str(),atvname);
        }
        delete (yyvsp[-1].s);
    }
    break;

  case 640: /* $@46: %empty  */
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 641: /* $@47: %empty  */
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 642: /* bitfield_type_declaration: "bitfield" '<' $@46 bitfield_bits '>' $@47  */
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 643: /* table_type_pair: type_declaration  */
                                      {
        (yyval.aTypePair).firstType = (yyvsp[0].pTypeDecl);
        (yyval.aTypePair).secondType = new TypeDecl(Type::tVoid);
    }
    break;

  case 644: /* table_type_pair: type_declaration ';' type_declaration  */
                                                                          {
        (yyval.aTypePair).firstType = (yyvsp[-2].pTypeDecl);
        (yyval.aTypePair).secondType = (yyvsp[0].pTypeDecl);
    }
    break;

  case 645: /* type_declaration_no_options: basic_type_declaration  */
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 646: /* type_declaration_no_options: auto_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 647: /* type_declaration_no_options: bitfield_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 648: /* type_declaration_no_options: structure_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 649: /* type_declaration_no_options: type_declaration_no_options '[' expr ']'  */
                                                                    {
        if ( (yyvsp[-3].pTypeDecl)->baseType==Type::typeDecl ) {
            das_yyerror(scanner,"type declaration can`t be used as array base type",tokAt(scanner,(yylsp[-3])),
                CompilationError::invalid_type);
        } else if ( (yyvsp[-3].pTypeDecl)->baseType==Type::typeMacro ) {
            das_yyerror(scanner,"macro can`t be used as array base type",tokAt(scanner,(yylsp[-3])),
                CompilationError::invalid_type);
        }
        int32_t dI = TypeDecl::dimConst;
        if ( (yyvsp[-1].pExpression)->rtti_isConstant() ) {                // note: this shortcut is here so we don`t get extra infer pass on every array
            auto cI = (ExprConst *) (yyvsp[-1].pExpression);
            auto bt = cI->baseType;
            if ( bt==Type::tInt || bt==Type::tUInt ) {
                dI = cast<int32_t>::to(cI->value);
            }
        }
        (yyvsp[-3].pTypeDecl)->dim.push_back(dI);
        (yyvsp[-3].pTypeDecl)->dimExpr.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyvsp[-3].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 650: /* type_declaration_no_options: type_declaration_no_options '[' ']'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 651: /* $@48: %empty  */
                     { yyextra->das_arrow_depth ++; }
    break;

  case 652: /* $@49: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 653: /* type_declaration_no_options: "type" '<' $@48 type_declaration '>' $@49  */
                                                                                                                      {
        (yyvsp[-2].pTypeDecl)->autoToAlias = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 654: /* type_declaration_no_options: "typedecl" '(' expr ')'  */
                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeDecl);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[-1]));
        (yyval.pTypeDecl)->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 655: /* type_declaration_no_options: '$' name_in_namespace '(' optional_expr_list ')'  */
                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeMacro);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]), (yylsp[-1]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-3].s);
        (yyval.pTypeDecl)->dimExpr = sequenceToList((yyvsp[-1].pExpression));
        delete (yyvsp[-3].s);
    }
    break;

  case 656: /* type_declaration_no_options: type_declaration_no_options '-' '[' ']'  */
                                                          {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 657: /* type_declaration_no_options: type_declaration_no_options "explicit"  */
                                                           {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 658: /* type_declaration_no_options: type_declaration_no_options "const"  */
                                                        {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 659: /* type_declaration_no_options: type_declaration_no_options '-' "const"  */
                                                            {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 660: /* type_declaration_no_options: type_declaration_no_options '&'  */
                                                  {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 661: /* type_declaration_no_options: type_declaration_no_options '-' '&'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 662: /* type_declaration_no_options: type_declaration_no_options '#'  */
                                                  {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 663: /* type_declaration_no_options: type_declaration_no_options "implicit"  */
                                                           {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 664: /* type_declaration_no_options: type_declaration_no_options '-' '#'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 665: /* type_declaration_no_options: type_declaration_no_options "==" "const"  */
                                                               {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 666: /* type_declaration_no_options: type_declaration_no_options "==" '&'  */
                                                         {
        (yyvsp[-2].pTypeDecl)->explicitRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 667: /* type_declaration_no_options: type_declaration_no_options '?'  */
                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 668: /* $@50: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 669: /* $@51: %empty  */
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 670: /* type_declaration_no_options: "smart_ptr" '<' $@50 type_declaration '>' $@51  */
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 671: /* type_declaration_no_options: type_declaration_no_options "??"  */
                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 672: /* $@52: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 673: /* $@53: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 674: /* type_declaration_no_options: "array" '<' $@52 type_declaration '>' $@53  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 675: /* $@54: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 676: /* $@55: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 677: /* type_declaration_no_options: "table" '<' $@54 table_type_pair '>' $@55  */
                                                                                                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].aTypePair).firstType);
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].aTypePair).secondType);
    }
    break;

  case 678: /* $@56: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 679: /* $@57: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 680: /* type_declaration_no_options: "iterator" '<' $@56 type_declaration '>' $@57  */
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 681: /* type_declaration_no_options: "block"  */
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 682: /* $@58: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 683: /* $@59: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 684: /* type_declaration_no_options: "block" '<' $@58 type_declaration '>' $@59  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 685: /* $@60: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 686: /* $@61: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 687: /* type_declaration_no_options: "block" '<' $@60 optional_function_argument_list optional_function_type '>' $@61  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 688: /* type_declaration_no_options: "function"  */
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 689: /* $@62: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 690: /* $@63: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 691: /* type_declaration_no_options: "function" '<' $@62 type_declaration '>' $@63  */
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 692: /* $@64: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 693: /* $@65: %empty  */
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 694: /* type_declaration_no_options: "function" '<' $@64 optional_function_argument_list optional_function_type '>' $@65  */
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 695: /* type_declaration_no_options: "lambda"  */
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 696: /* $@66: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 697: /* $@67: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 698: /* type_declaration_no_options: "lambda" '<' $@66 type_declaration '>' $@67  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 699: /* $@68: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 700: /* $@69: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 701: /* type_declaration_no_options: "lambda" '<' $@68 optional_function_argument_list optional_function_type '>' $@69  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 702: /* $@70: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 703: /* $@71: %empty  */
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 704: /* type_declaration_no_options: "tuple" '<' $@70 tuple_type_list '>' $@71  */
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 705: /* $@72: %empty  */
                              { yyextra->das_arrow_depth ++; }
    break;

  case 706: /* $@73: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 707: /* type_declaration_no_options: "variant" '<' $@72 variant_type_list '>' $@73  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 708: /* type_declaration: type_declaration_no_options  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 709: /* type_declaration: type_declaration '|' type_declaration_no_options  */
                                                                     {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        }
    }
    break;

  case 710: /* type_declaration: type_declaration '|' '#'  */
                                             {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)->argTypes.back()));
            (yyvsp[-2].pTypeDecl)->argTypes.back()->temporary ^= true;
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)));
            (yyval.pTypeDecl)->argTypes.back()->temporary ^= true;
        }
    }
    break;

  case 711: /* $@74: %empty  */
                                                          { yyextra->das_need_oxford_comma=false; }
    break;

  case 712: /* $@75: %empty  */
                                                                                                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTuple(atvname);
        }
    }
    break;

  case 713: /* $@76: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTupleEntries(atvname);
        }
    }
    break;

  case 714: /* $@77: %empty  */
                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTupleEntries(atvname);
        }
    }
    break;

  case 715: /* tuple_alias_declaration: "tuple" optional_public_or_private_alias $@74 "name" $@75 '{' $@76 tuple_alias_type_list $@77 '}'  */
          {
        auto vtype = make_smart<TypeDecl>(Type::tTuple);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-8].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTuple((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 716: /* $@78: %empty  */
                                                            { yyextra->das_need_oxford_comma=false; }
    break;

  case 717: /* $@79: %empty  */
                                                                                                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 718: /* $@80: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariantEntries(atvname);
        }

    }
    break;

  case 719: /* $@81: %empty  */
                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariantEntries(atvname);
        }
    }
    break;

  case 720: /* variant_alias_declaration: "variant" optional_public_or_private_alias $@78 "name" $@79 '{' $@80 variant_alias_type_list $@81 '}'  */
          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-8].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 721: /* $@82: %empty  */
                                                             { yyextra->das_need_oxford_comma=false; }
    break;

  case 722: /* $@83: %empty  */
                                                                                                                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfield(atvname);
        }
    }
    break;

  case 723: /* $@84: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfieldEntries(atvname);
        }
    }
    break;

  case 724: /* $@85: %empty  */
                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntries(atvname);
        }
    }
    break;

  case 725: /* bitfield_alias_declaration: "bitfield" optional_public_or_private_alias $@82 "name" $@83 '{' $@84 bitfield_alias_bits $@85 '}'  */
          {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-6].s);
        btype->at = tokAt(scanner,(yylsp[-6]));
        btype->argNames = *(yyvsp[-2].pNameList);
        btype->isPrivateAlias = !(yyvsp[-8].b);
        if ( btype->argNames.size()>32 ) {
            das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-6])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfield((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
        delete (yyvsp[-2].pNameList);
    }
    break;

  case 726: /* make_decl: make_struct_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 727: /* make_decl: make_dim_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 728: /* make_decl: make_table_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 729: /* make_decl: array_comprehension  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 730: /* make_decl: make_tuple_call  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 731: /* make_struct_fields: "name" copy_or_move expr  */
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 732: /* make_struct_fields: "name" ":=" expr  */
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 733: /* make_struct_fields: make_struct_fields ',' "name" copy_or_move expr  */
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 734: /* make_struct_fields: make_struct_fields ',' "name" ":=" expr  */
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 735: /* make_struct_fields: "$f" '(' expr ')' copy_or_move expr  */
                                                                   {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 736: /* make_struct_fields: "$f" '(' expr ')' ":=" expr  */
                                                          {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 737: /* make_struct_fields: make_struct_fields ',' "$f" '(' expr ')' copy_or_move expr  */
                                                                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 738: /* make_struct_fields: make_struct_fields ',' "$f" '(' expr ')' ":=" expr  */
                                                                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 739: /* make_struct_dim: make_struct_fields  */
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 740: /* make_struct_dim: make_struct_dim ';' make_struct_fields  */
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 741: /* optional_block: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 742: /* optional_block: "where" expr_block  */
                                  { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 755: /* make_struct_decl: "[[" type_declaration_no_options make_struct_dim optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 756: /* make_struct_decl: "[[" type_declaration_no_options optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                           {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        msd->block = (yyvsp[-1].pExpression);
        msd->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pExpression) = msd;
    }
    break;

  case 757: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                   {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        msd->useInitializer = true;
        msd->block = (yyvsp[-1].pExpression);
        msd->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pExpression) = msd;
    }
    break;

  case 758: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' make_struct_dim optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 759: /* make_struct_decl: "[{" type_declaration_no_options make_struct_dim optional_block optional_trailing_delim_cur_sqr  */
                                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 760: /* make_struct_decl: "[{" type_declaration_no_options '(' ')' make_struct_dim optional_block optional_trailing_delim_cur_sqr  */
                                                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-6]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 761: /* make_tuple: expr  */
                  {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 762: /* make_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 763: /* make_tuple: make_tuple ',' expr  */
                                      {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 764: /* make_map_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 765: /* make_map_tuple: expr  */
                 {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 766: /* make_tuple_call: "tuple" '(' expr_list ')'  */
                                                     {
        auto mkt = new ExprMakeTuple(tokAt(scanner,(yylsp[-3])));
        mkt->values = sequenceToList((yyvsp[-1].pExpression));
        mkt->makeType = make_smart<TypeDecl>(Type::autoinfer);
        (yyval.pExpression) = mkt;
    }
    break;

  case 767: /* make_dim: make_tuple  */
                        {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 768: /* make_dim: make_dim ';' make_tuple  */
                                          {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 769: /* make_dim_decl: "[[" type_declaration_no_options make_dim optional_trailing_semicolon_sqr_sqr  */
                                                                                                         {
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 770: /* make_dim_decl: "[{" type_declaration_no_options make_dim optional_trailing_semicolon_cur_sqr  */
                                                                                                         {
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 771: /* make_dim_decl: "array" '(' expr_list ')'  */
                                                    {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 772: /* $@86: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 773: /* $@87: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 774: /* make_dim_decl: "array" '<' $@86 type_declaration_no_options '>' $@87 '(' expr_list ')'  */
                                                                                                                                                               {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 775: /* make_dim_decl: "fixed_array" '(' expr_list ')'  */
                                                          {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 776: /* $@88: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 777: /* $@89: %empty  */
                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 778: /* make_dim_decl: "fixed_array" '<' $@88 type_declaration_no_options '>' $@89 '(' expr_list ')'  */
                                                                                                                                                                     {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        if ( !mka->makeType->dim.size() ) mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 779: /* make_table: make_map_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 780: /* make_table: make_table ';' make_map_tuple  */
                                                {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 781: /* expr_map_tuple_list: make_map_tuple  */
                                {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 782: /* expr_map_tuple_list: expr_map_tuple_list ',' make_map_tuple  */
                                                                {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 783: /* make_table_decl: "{{" make_table optional_trailing_semicolon_cur_cur  */
                                                                          {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = mkt;
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-2]));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyval.pExpression) = ttm;
    }
    break;

  case 784: /* make_table_decl: "table" '(' expr_map_tuple_list ')'  */
                                                              {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 785: /* make_table_decl: "table" '<' type_declaration_no_options '>' '(' expr_map_tuple_list ')'  */
                                                                                                        {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-6])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 786: /* make_table_decl: "table" '<' type_declaration_no_options ';' type_declaration_no_options '>' '(' expr_map_tuple_list ')'  */
                                                                                                                                                 {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::tTuple);
        mka->makeType->argTypes.push_back((yyvsp[-6].pTypeDecl));
        mka->makeType->argTypes.push_back((yyvsp[-4].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 787: /* array_comprehension_where: %empty  */
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 788: /* array_comprehension_where: ';' "where" expr  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 789: /* array_comprehension: "[[" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where ']' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),true);
    }
    break;

  case 790: /* array_comprehension: "[{" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where '}' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),false);
    }
    break;



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
  yytoken = yychar == DAS_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= DAS_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == DAS_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner);
          yychar = DAS_YYEMPTY;
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner);
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
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != DAS_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_suppress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li, const struct DAS_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}


