%{
#include <stdio.h>
extern FILE *yyin;
%}
%start s
%token SMB ID

%left '+'
%left '*'

%%
s : list { printf("input ok\n"); }
  ;
e : e '+' e
  | e '*' e
  |'(' e ')' 
  | SMB
  | ID
  ;

instr : ID '=' e
      ;

list : list instr ';'
     | instr ';'
     ;

%%

int main(){
 yyin = fopen("ex4.in", "r");
 yyparse();
}