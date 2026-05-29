%option noyywrap
%option yylineno

%x COMMENT

%{

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

#include "sintatico.tab.h"

int coluna = 1;
int comment_line;
int comment_col;
int comment_level = 0;
int first = 1;

char linha_buffer[1024];
int pos_buffer = 0;

void add_buffer(const char *txt) {

    if(txt[0] == '\n' || txt[0] == '\r')
        return;

    int len = strlen(txt);

    for(int i = 0; i < len; i++) {
        linha_buffer[pos_buffer++] = txt[i];
    }

    linha_buffer[pos_buffer] = '\0';
}

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

0[xX][0-9a-fA-F]+           { add_buffer(yytext); coluna += yyleng; return NUM_HEXA; }
0[0-7]                      { add_buffer(yytext); coluna += yyleng; return NUM_OCTAL; }
[0-9]+                      { add_buffer(yytext); coluna += yyleng; return NUM_INTEGER; }

\'([^\\\n]|(\\.))\'         { add_buffer(yytext); coluna += yyleng; return CHARACTER; }

\"([^"\\\n]|\\.)*\"         { add_buffer(yytext); coluna += yyleng; return STRING; }


void          { add_buffer(yytext); coluna += yyleng; return VOID; }
int           { add_buffer(yytext); coluna += yyleng; return INT; }
char          { add_buffer(yytext); coluna += yyleng; return CHAR; }
return        { add_buffer(yytext); coluna += yyleng; return RETURN; }
break         { add_buffer(yytext); coluna += yyleng; return BREAK; }
switch        { add_buffer(yytext); coluna += yyleng; return SWITCH; }
case          { add_buffer(yytext); coluna += yyleng; return CASE; }
default       { add_buffer(yytext); coluna += yyleng; return DEFAULT; }
do            { add_buffer(yytext); coluna += yyleng; return DO; }
while         { add_buffer(yytext); coluna += yyleng; return WHILE; }
for           { add_buffer(yytext); coluna += yyleng; return FOR; }
if            { add_buffer(yytext); coluna += yyleng; return IF; }
else          { add_buffer(yytext); coluna += yyleng; return ELSE; }
typedef       { add_buffer(yytext); coluna += yyleng; return TYPEDEF; }
struct        { add_buffer(yytext); coluna += yyleng; return STRUCT; }

"++"          { add_buffer(yytext); coluna += yyleng; return INC; }
"--"          { add_buffer(yytext); coluna += yyleng; return DEC; }
"&&"          { add_buffer(yytext); coluna += yyleng; return LOGICAL_AND; }
"||"          { add_buffer(yytext); coluna += yyleng; return LOGICAL_OR; }
"=="          { add_buffer(yytext); coluna += yyleng; return EQUAL; }
"!="          { add_buffer(yytext); coluna += yyleng; return NOT_EQUAL; }
"<="          { add_buffer(yytext); coluna += yyleng; return LESS_EQUAL; }
">="          { add_buffer(yytext); coluna += yyleng; return GREATER_EQUAL; }
">>"          { add_buffer(yytext); coluna += yyleng; return R_SHIFT; }
"<<"          { add_buffer(yytext); coluna += yyleng; return L_SHIFT; }
"+="          { add_buffer(yytext); coluna += yyleng; return ADD_ASSIGN; }
"-="          { add_buffer(yytext); coluna += yyleng; return MINUS_ASSIGN; }

"+"           { add_buffer(yytext); coluna += yyleng; return PLUS; }
"-"           { add_buffer(yytext); coluna += yyleng; return MINUS; }
"*"           { add_buffer(yytext); coluna += yyleng; return MULTIPLY; }
"/"           { add_buffer(yytext); coluna += yyleng; return DIV; }
"%"           { add_buffer(yytext); coluna += yyleng; return REMAINDER; }
"&"           { add_buffer(yytext); coluna += yyleng; return BITWISE_AND; }
"|"           { add_buffer(yytext); coluna += yyleng; return BITWISE_OR; }
"~"           { add_buffer(yytext); coluna += yyleng; return BITWISE_NOT; }
"^"           { add_buffer(yytext); coluna += yyleng; return BITWISE_XOR; }
"!"           { add_buffer(yytext); coluna += yyleng; return NOT; }
"<"           { add_buffer(yytext); coluna += yyleng; return LESS_THAN; }
">"           { add_buffer(yytext); coluna += yyleng; return GREATER_THAN; }
"="           { add_buffer(yytext); coluna += yyleng; return ASSIGN; }

";"           { add_buffer(yytext); coluna += yyleng; return SEMICOLON; }
","           { add_buffer(yytext); coluna += yyleng; return COMMA; }
":"           { add_buffer(yytext); coluna += yyleng; return COLON; }

"("           { add_buffer(yytext); coluna += yyleng; return L_PAREN; }
")"           { add_buffer(yytext); coluna += yyleng; return R_PAREN; }
"{"           { add_buffer(yytext); coluna += yyleng; return L_CURLY_BRACKET; }
"}"           { add_buffer(yytext); coluna += yyleng; return R_CURLY_BRACKET; }
"["           { add_buffer(yytext); coluna += yyleng; return L_SQUARE_BRACKET; }
"]"           { add_buffer(yytext); coluna += yyleng; return R_SQUARE_BRACKET; }

"?"           { add_buffer(yytext); coluna += yyleng; return TERNARY_CONDITIONAL; }
"#"           { add_buffer(yytext); coluna += yyleng; return NUMBER_SIGN; }
"->"          { add_buffer(yytext); coluna += yyleng; return POINTER; }

printf        { add_buffer(yytext); coluna += yyleng; return PRINTF; }
scanf         { add_buffer(yytext); coluna += yyleng; return SCANF; }
define        { add_buffer(yytext); coluna += yyleng; return DEFINE; }
exit          { add_buffer(yytext); coluna += yyleng; return EXIT; }


[a-zA-Z_][a-zA-Z0-9_]* {

    add_buffer(yytext);

    int start_col = coluna;
    coluna += yyleng;

    if (yyleng > 255) {
        print_token("error:lexical:%d:%d: identifier too long",
            yylineno, coluna - yyleng);
    } else {
        return IDENTIFIER;
    }
}


\n {
    linha_buffer[pos_buffer] = '\0';

    coluna = 1;

    pos_buffer = 0;
    linha_buffer[0] = '\0';
}

\r {
    linha_buffer[pos_buffer] = '\0';

    coluna = 1;

    pos_buffer = 0;
    linha_buffer[0] = '\0';
}

[ \t]+ {
    add_buffer(yytext);
    coluna += yyleng;
}


"//"[^\n]* {
    add_buffer(yytext);
    coluna += yyleng;
}


"/*" {
    add_buffer(yytext);

    comment_line = yylineno;
    comment_col = coluna;
    coluna += yyleng;

    comment_level = 1;
    BEGIN(COMMENT);
}

<COMMENT>"/*"/[^/] {

    add_buffer(yytext);
    int start_col = coluna;
    coluna += yyleng;

    comment_level++;

    print_token(
        "warning:%d:%d: '/*' within block comment",
        yylineno,
        start_col
    );
}

<COMMENT>"*/" {

    add_buffer(yytext);
    coluna += yyleng;

    comment_level--;

        BEGIN(INITIAL); 
}

<COMMENT>\r {
    linha_buffer[pos_buffer] = '\0';
    coluna = 1;
    pos_buffer = 0;
    linha_buffer[0] = '\0';
}

<COMMENT>\n {

    linha_buffer[pos_buffer] = '\0';
    coluna = 1;
    pos_buffer = 0;
    linha_buffer[0] = '\0';
}

<COMMENT>. {

    add_buffer(yytext);
    coluna += yyleng;
}

<COMMENT><<EOF>> {

    print_token(
        "error:lexical:%d:%d: unterminated comment",
        comment_line,
        comment_col
    );

    return 0;
}

. {

    add_buffer(yytext);

    print_token(
        "error:lexical:%d:%d: %s",
        yylineno,
        coluna,
        yytext
    );

    printf("\n%s\n", linha_buffer);

    for(int i = 1; i < coluna; i++)
        printf(" ");

    printf("^\n");

    coluna += yyleng;
}

%%