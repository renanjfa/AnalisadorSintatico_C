%locations

%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern char* yytext;

extern char linha_buffer[];

void yyerror(const char *s);
%}

%token VOID 
%token INT
%token CHAR
%token RETURN
%token DO
%token WHILE
%token FOR
%token IF
%token ELSE
%token INC
%token DEC
%token LOGICAL_AND
%token LOGICAL_OR
%token EQUAL
%token NOT_EQUAL
%token LESS_EQUAL
%token GREATER_EQUAL
%token R_SHIFT
%token L_SHIFT
%token ADD_ASSIGN
%token MINUS_ASSIGN
%token PLUS
%token MINUS
%token MULTIPLY
%token DIV
%token REMAINDER
%token BITWISE_AND
%token BITWISE_OR
%token BITWISE_NOT
%token BITWISE_XOR
%token NOT
%token LESS_THAN
%token GREATER_THAN
%token ASSIGN
%token SEMICOLON
%token COMMA
%token COLON
%token L_PAREN
%token R_PAREN
%token L_CURLY_BRACKET
%token R_CURLY_BRACKET
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token TERNARY_CONDITIONAL
%token NUMBER_SIGN
%token POINTER
%token PRINTF
%token SCANF
%token DEFINE
%token EXIT
%token IDENTIFIER
%token NUM_HEXA
%token NUM_OCTAL
%token NUM_INTEGER
%token CHARACTER
%token STRING

%start Programa


%%

Programa: Declaracoes Programa
        | Funcao Programa
        |
;

Declaracoes: NUMBER_SIGN DEFINE IDENTIFIER Expressao
            | NUMBER_SIGN DEFINE IDENTIFIER error { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
            | DeclaracaoVariaveis
            | DeclaracaoPrototipo
;

Funcao: Tipo Ponteiro IDENTIFIER Parametros L_CURLY_BRACKET ListaDeclaracoes Comandos R_CURLY_BRACKET
      | Tipo Ponteiro IDENTIFIER Parametros error { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
      | Tipo Ponteiro IDENTIFIER Parametros L_CURLY_BRACKET error R_CURLY_BRACKET { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

Ponteiro: MULTIPLY Ponteiro
        |
;

ListaDeclaracoes: DeclaracaoVariaveis ListaDeclaracoes
                |
;

DeclaracaoVariaveis: Tipo LoopDeclaracaoVariaveis SEMICOLON
                   | Tipo error SEMICOLON { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

LoopDeclaracaoVariaveis: Ponteiro IDENTIFIER LoopExpressaoColchetes IgualExpressaoAtribuicao LoopVirgulaDeclaracaoVariaveis
;

IgualExpressaoAtribuicao: ASSIGN ExpressaoAtribuicao
                        | 
;

LoopVirgulaDeclaracaoVariaveis: COMMA LoopDeclaracaoVariaveis
;

DeclaracaoPrototipo: Tipo Ponteiro IDENTIFIER Parametros SEMICOLON
                   | Tipo Ponteiro IDENTIFIER error SEMICOLON { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

Parametros: L_PAREN LoopParametro R_PAREN
          | L_PAREN error R_PAREN { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

LoopParametro: Tipo Ponteiro IDENTIFIER LoopExpressaoColchetes LoopVirgula
             | Tipo error { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

LoopVirgula: COMMA LoopParametro
            | 
;

LoopExpressaoColchetes: L_SQUARE_BRACKET Expressao R_SQUARE_BRACKET LoopExpressaoColchetes
                        | L_SQUARE_BRACKET error R_SQUARE_BRACKET { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
                        |
;

Tipo: INT
    | CHAR
    | VOID
;

Bloco: L_CURLY_BRACKET Comandos R_CURLY_BRACKET
     | L_CURLY_BRACKET error R_CURLY_BRACKET { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

Comandos: ListaComandos Comandos
        |
;

ListaComandos: DO Bloco WHILE L_PAREN Expressao R_PAREN SEMICOLON
            |  IF L_PAREN Expressao R_PAREN Bloco ElseBloco
            |  IF L_PAREN error R_PAREN Bloco { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
            |  WHILE L_PAREN Expressao R_PAREN Bloco
            |  WHILE L_PAREN error R_PAREN Bloco { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
            |  FOR L_PAREN Expressao SEMICOLON Expressao SEMICOLON Expressao R_PAREN Bloco
            |  FOR L_PAREN error R_PAREN Bloco { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
            |  PRINTF L_PAREN STRING VirgulaExpressao R_PAREN SEMICOLON
            |  SCANF L_PAREN STRING COMMA BITWISE_AND IDENTIFIER R_PAREN SEMICOLON
            |  EXIT L_PAREN Expressao R_PAREN SEMICOLON
            |  RETURN Expressao SEMICOLON
            |  RETURN error SEMICOLON { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
            |  Expressao SEMICOLON
            |  SEMICOLON
            |  Bloco
            |  error SEMICOLON { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

ElseBloco: ELSE Bloco
         | 
;

VirgulaExpressao: COMMA Expressao
                | 
;

Expressao: ExpressaoAtribuicao
         | Expressao COMMA ExpressaoAtribuicao
         | 
;

ExpressaoAtribuicao: ExpressaoCondicional
                    | ExpressaoUnaria OperadoresIgual ExpressaoAtribuicao
;

OperadoresIgual: ASSIGN
                | ADD_ASSIGN
                | MINUS_ASSIGN
;

ExpressaoCondicional: ExpressaoORLogico
                    | ExpressaoORLogico TERNARY_CONDITIONAL Expressao COLON ExpressaoCondicional
;

ExpressaoORLogico: ExpressaoANDLogico
                |  ExpressaoORLogico LOGICAL_OR ExpressaoANDLogico
;

ExpressaoANDLogico: ExpressaoOR 
                  | ExpressaoANDLogico LOGICAL_AND ExpressaoOR
;

ExpressaoOR: ExpressaoXOR
            | ExpressaoOR BITWISE_OR ExpressaoXOR
;

ExpressaoXOR: ExpressaoAND 
            | ExpressaoXOR BITWISE_XOR ExpressaoAND
;

ExpressaoAND: ExpressaoIgualdade
            | ExpressaoAND BITWISE_AND ExpressaoIgualdade
;

ExpressaoIgualdade: ExpressaoRelacional
                  | ExpressaoIgualdade IgualOuDiferente ExpressaoRelacional
;

IgualOuDiferente: NOT_EQUAL
                | EQUAL
;

ExpressaoRelacional: ExpressaoShift
                    | ExpressaoRelacional MaiorMenor ExpressaoShift
;

MaiorMenor: LESS_THAN
          | LESS_EQUAL
          | GREATER_THAN
          | GREATER_EQUAL
;

ExpressaoShift: ExpressaoAditiva
              | ExpressaoShift ShiftEsqDir ExpressaoAditiva
;

ShiftEsqDir: L_SHIFT
            | R_SHIFT
;

ExpressaoAditiva: ExpressaoMultiplicativa
                | ExpressaoAditiva MaisOuMenos ExpressaoMultiplicativa
;

MaisOuMenos: PLUS
            | MINUS
;

ExpressaoMultiplicativa: ExpressaoCast
                        | ExpressaoMultiplicativa DivMultResto ExpressaoCast
;

DivMultResto: MULTIPLY
            | DIV
            | REMAINDER
;

ExpressaoCast: ExpressaoUnaria
             | L_PAREN Tipo Ponteiro R_PAREN ExpressaoCast
             | L_PAREN error R_PAREN ExpressaoCast { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

ExpressaoUnaria: ExpressaoPosFixa
                | INC ExpressaoUnaria
                | DEC ExpressaoUnaria
                | OperadoresUnarios ExpressaoCast
;

OperadoresUnarios: BITWISE_AND
                  | MULTIPLY
                  | PLUS
                  | MINUS
                  | BITWISE_NOT
                  | NOT
;

ExpressaoPosFixa: ExpressaoPrimaria
                | ExpressaoPosFixa DecisaoExpressaoPosFixa
;

DecisaoExpressaoPosFixa: L_SQUARE_BRACKET Expressao R_SQUARE_BRACKET
                        | INC
                        | DEC 
                        | L_PAREN VirgulaExpressaoAtribuicao R_PAREN
                        | L_PAREN error R_PAREN { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

VirgulaExpressaoAtribuicao: ExpressaoAtribuicao COMMA VirgulaExpressaoAtribuicao
                            | 
; 

ExpressaoPrimaria: IDENTIFIER
                |  Numero
                |  CHARACTER
                |  STRING
                |  L_PAREN Expressao R_PAREN
                |  L_PAREN error R_PAREN { report_error("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok;}
;

Numero: NUM_INTEGER
      | NUM_HEXA
      | NUM_OCTAL
;

%%

void report_error(const char* s)
{
    printf(
        "error:syntax:%d:%d: %s near '%s'\n",
        yylloc.first_line,
        yylloc.first_column,
        s,
        yytext
    );

    printf("%s\n", linha_buffer);

    for(int i = 1; i < yylloc.first_column; i++)
        printf(" ");

    printf("^\n");
}

void yyerror(const char *s)
{
    report_error(s);
}

int main(int argc, char** argv)
{
    while (yyparse());
    return 0;
}