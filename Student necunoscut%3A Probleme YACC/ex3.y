%{
#include <stdio.h>
%}
%start s
%token SMB
%%
s : e  {$$=$1; printf("valoarea expresiei:%d\n",$$);}
  ;
e : '('e '+' e ')'  {$$=$2+$4; }
  | '('e '*' e ')'  {$$=$2*$4; }
  | SMB {$$=$1;}
  ;
  
%%

int main(){
 yyparse();
}