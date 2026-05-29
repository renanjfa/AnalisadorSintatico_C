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
%token BREAK
%token SWITCH
%token CASE
%token DEFAULT
%token TYPEDEF
%token STRUCT

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%right ASSIGN ADD_ASSIGN MINUS_ASSIGN
%right TERNARY_CONDITIONAL
%left LOGICAL_OR
%left LOGICAL_AND
%left BITWISE_OR
%left BITWISE_XOR
%left BITWISE_AND
%left EQUAL NOT_EQUAL
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left L_SHIFT R_SHIFT
%left PLUS MINUS
%left MULTIPLY DIV REMAINDER
%right INC DEC NOT BITWISE_NOT UNARY_MINUS UNARY_PLUS POINTER_REF

%start Programa


%%

Programa: Declaracoes Programa
        | Funcao Programa
        |
;

Declaracoes: NUMBER_SIGN DEFINE IDENTIFIER Expressao
            | NUMBER_SIGN DEFINE IDENTIFIER error { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
            | DeclaracaoVariaveis
            | DeclaracaoPrototipo
;

Funcao: Tipo Ponteiro IDENTIFIER Parametros L_CURLY_BRACKET ListaDeclaracoes Comandos R_CURLY_BRACKET
      | Tipo Ponteiro IDENTIFIER Parametros error { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

Ponteiro: MULTIPLY Ponteiro
        |
;

ListaDeclaracoes: DeclaracaoVariaveis ListaDeclaracoes
                |
;

DeclaracaoVariaveis: Tipo LoopDeclaracaoVariaveis SEMICOLON
                   | Tipo error SEMICOLON { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

LoopDeclaracaoVariaveis: Ponteiro IDENTIFIER LoopExpressaoColchetes IgualExpressaoAtribuicao LoopVirgulaDeclaracaoVariaveis
;

IgualExpressaoAtribuicao: ASSIGN ExpressaoAtribuicao
                        | 
;

LoopVirgulaDeclaracaoVariaveis: COMMA LoopDeclaracaoVariaveis
                                |
;

DeclaracaoPrototipo: Tipo Ponteiro IDENTIFIER Parametros SEMICOLON
                   | Tipo Ponteiro IDENTIFIER error SEMICOLON { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

Parametros: L_PAREN LoopParametro R_PAREN
          | L_PAREN error R_PAREN { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

LoopParametro: Tipo Ponteiro IDENTIFIER LoopExpressaoColchetes LoopVirgula
             | Tipo error { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

LoopVirgula: COMMA LoopParametro
            | 
;

LoopExpressaoColchetes: L_SQUARE_BRACKET Expressao R_SQUARE_BRACKET LoopExpressaoColchetes
                        | L_SQUARE_BRACKET error R_SQUARE_BRACKET { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
                        |
;

Tipo: INT
    | CHAR
    | VOID
;

Bloco: L_CURLY_BRACKET Comandos R_CURLY_BRACKET
     | L_CURLY_BRACKET error R_CURLY_BRACKET { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

Comandos: ListaComandos Comandos
        |
;

ListaComandos: DO Bloco WHILE L_PAREN Expressao R_PAREN SEMICOLON
            |  IF L_PAREN Expressao R_PAREN Bloco %prec LOWER_THAN_ELSE
            |  IF L_PAREN Expressao R_PAREN Bloco ELSE Bloco
            |  IF L_PAREN error R_PAREN Bloco { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
            |  WHILE L_PAREN Expressao R_PAREN Bloco
            |  WHILE L_PAREN error R_PAREN Bloco { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
            |  FOR L_PAREN ExpressaoOpcional SEMICOLON ExpressaoOpcional SEMICOLON ExpressaoOpcional R_PAREN Bloco
            |  FOR L_PAREN error R_PAREN Bloco { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
            |  PRINTF L_PAREN STRING VirgulaExpressao R_PAREN SEMICOLON
            |  SCANF L_PAREN STRING COMMA BITWISE_AND IDENTIFIER R_PAREN SEMICOLON
            |  EXIT L_PAREN Expressao R_PAREN SEMICOLON
            |  RETURN ExpressaoOpcional SEMICOLON
            |  RETURN error SEMICOLON { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
            |  Expressao SEMICOLON
            |  SEMICOLON
            |  Bloco
            |  error SEMICOLON { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;


VirgulaExpressao: COMMA Expressao
                | 
;

Expressao: ExpressaoAtribuicao
         | Expressao COMMA ExpressaoAtribuicao
;

ExpressaoOpcional: Expressao
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
;

ExpressaoUnaria: ExpressaoPosFixa
                | INC ExpressaoUnaria
                | DEC ExpressaoUnaria
                | OperadoresUnarios ExpressaoCast
;

OperadoresUnarios: BITWISE_AND
                 | MULTIPLY %prec POINTER_REF
                 | PLUS %prec UNARY_PLUS
                 | MINUS %prec UNARY_MINUS
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
                        | L_PAREN error R_PAREN { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
;

VirgulaExpressaoAtribuicao: ExpressaoAtribuicao
                          | VirgulaExpressaoAtribuicao COMMA ExpressaoAtribuicao
; 

ExpressaoPrimaria: IDENTIFIER
                |  Numero
                |  CHARACTER
                |  STRING
                |  L_PAREN Expressao R_PAREN
                |  L_PAREN error R_PAREN { yyerror("FLAMENGO PENTA CAMPEAO LIBERTADORES"); yyerrok; yyclearin;}
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
    if (yyparse() == 0) {
        printf("\nSUCESSFUL COMPILATION.");
    } else {
        printf("\nCOMPILATION FAILED WITH ERRORS.");
    }
    return 0;
}