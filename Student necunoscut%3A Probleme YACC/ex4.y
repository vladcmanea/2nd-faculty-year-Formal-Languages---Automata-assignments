%{
#include <stdio.h>
%}
%start s
%token SMB

%left '+'
%left '*'

%%
s : e  {$$=$1; printf("valoarea expresiei:%d \n",$$);}
  ;
e : e '+' e   {$$=$1+$3;}
  | e '*' e   {$$=$1*$3;}
  |'(' e ')' {$$= $2;}
  | SMB {$$=$1;}
  ;
  
%%

int main(){
 yyparse();
}