%option noyywrap
%option yylineno

%x COMMENT

%{

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "sintatico.tab.h"

int coluna = 1;
int comment_line;
int comment_col;
int comment_level = 0;
int first = 1;

void print_token(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    if (!first) printf("\n");
    vprintf(fmt, args);

    first = 0;
    va_end(args);
}

%}

%%

0[xX][0-9a-fA-F]+           { coluna += yyleng; return NUM_HEXA; }
0[0-7]                      { coluna += yyleng; return NUM_OCTAL; }
[0-9]+                      { coluna += yyleng; return NUM_INTEGER; }
\'([^\\\n]|(\\.))\'         { return CHARACTER; }
\"([^"\\\n]|\\.)*\"         { coluna += yyleng; return STRING; }


void          { coluna += yyleng; return VOID; }
int           { coluna += yyleng; return INT; }
char          { coluna += yyleng; return CHAR; }
return        { coluna += yyleng; return RETURN; }
break         { coluna += yyleng; return BREAK; }
switch        { coluna += yyleng; return SWITCH; }
case          { coluna += yyleng; return CASE; }
default       { coluna += yyleng; return DEFAULT; }
do            { coluna += yyleng; return DO; }
while         { coluna += yyleng; return WHILE; }
for           { coluna += yyleng; return FOR; }
if            { coluna += yyleng; return IF; }
else          { coluna += yyleng; return ELSE; }
typedef       { coluna += yyleng; return TYPEDEF; }
struct        { coluna += yyleng; return STRUCT; }
"++"          { coluna += yyleng; return INC; }
"--"          { coluna += yyleng; return DEC; }
"&&"          { coluna += yyleng; return LOGICAL_AND; }
"||"          { coluna += yyleng; return LOGICAL_OR; }
"=="          { coluna += yyleng; return EQUAL; }
"!="          { coluna += yyleng; return NOT_EQUAL; }
"<="          { coluna += yyleng; return LESS_EQUAL; }
">="          { coluna += yyleng; return GREATER_EQUAL; }
">>"          { coluna += yyleng; return R_SHIFT; }
"<<"          { coluna += yyleng; return L_SHIFT; }
"+="          { coluna += yyleng; return ADD_ASSIGN; }
"-="          { coluna += yyleng; return MINUS_ASSIGN; }
"+"           { coluna += yyleng; return PLUS; }
"-"           { coluna += yyleng; return MINUS; }
"*"           { coluna += yyleng; return MULTIPLY; }
"/"           { coluna += yyleng; return DIV; }
"%"           { coluna += yyleng; return REMAINDER; }
"&"           { coluna += yyleng; return BITWISE_AND; }
"|"           { coluna += yyleng; return BITWISE_OR; }
"~"           { coluna += yyleng; return BITWISE_NOT; }
"^"           { coluna += yyleng; return BITWISE_XOR; }
"!"           { coluna += yyleng; return NOT; }
"<"           { coluna += yyleng; return LESS_THAN; }
">"           { coluna += yyleng; return GREATER_THAN; }
"="           { coluna += yyleng; return ASSIGN; }
";"           { coluna += yyleng; return SEMICOLON; }
","           { coluna += yyleng; return COMMA; }
":"           { coluna += yyleng; return COLON; }
"("           { coluna += yyleng; return L_PAREN; }
")"           { coluna += yyleng; return R_PAREN; }
"{"           { coluna += yyleng; return L_CURLY_BRACKET; }
"}"           { coluna += yyleng; return R_CURLY_BRACKET; }
"["           { coluna += yyleng; return L_SQUARE_BRACKET; }
"]"           { coluna += yyleng; return R_SQUARE_BRACKET; }
"?"           { coluna += yyleng; return TERNARY_CONDITIONAL; }
"#"           { coluna += yyleng; return NUMBER_SIGN; }
"->"          { coluna += yyleng; return POINTER; }
printf        { coluna += yyleng; return PRINTF; }
scanf         { coluna += yyleng; return SCANF; }
define        { coluna += yyleng; return DEFINE; }
exit          { coluna += yyleng; return EXIT; }


[a-zA-Z_][a-zA-Z0-9_]* {
                            int start_col = coluna;
                            coluna += yyleng;

                            if (yyleng > 255) {
                                print_token("error:lexical:%d:%d: identifier too long",
                                    yylineno, coluna - yyleng);
                            } else {
                                return IDENTIFIER;
                            }
}


\n          { coluna = 1;}
\r          { coluna = 1;}
[ \t]+         { coluna += yyleng; }


"//"[^\n]* { coluna += yyleng; }            

"/*"                {
                        comment_line = yylineno;
                        comment_col = coluna;
                        coluna += yyleng;
                        BEGIN(COMMENT);
                    }

<COMMENT>"/*"/[^/] {
    int start_col = coluna;
    coluna += yyleng;
    print_token("warning:%d:%d: '/*' within block comment",
                yylineno, start_col);
}

<COMMENT>"*/" {
    coluna += yyleng;
    BEGIN(INITIAL);
}

<COMMENT>\n { coluna = 1; }

<COMMENT>. { coluna += yyleng; }

<COMMENT><<EOF>> {
    print_token("error:lexical:%d:%d: unterminated comment",
                comment_line, comment_col);
    return 0;
}

. {
    print_token("error:lexical:%d:%d: %s", yylineno, coluna, yytext);
    coluna += yyleng;
}


%%