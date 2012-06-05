%{
#include <stdio.h>
%}
%start s
%token SMB
%%
s : e {printf("regula s->e \n");}
  ;
e : '(' e '+' e ')' {printf("regula e->(e+e)\n");}
  ;
e: '(' e '*' e ')' {printf("regula e->(e*e)\n");}
 ;
e : SMB {printf("regula e->SMB\n");}
  ;
%%

int yylex(){
int c;
/* citeste cate un caracter, ignora spatiile */
while((c=getchar())==' ')
 ;
/* marcheaza sfarsit input */
if(c=='\n')
 return 0;

if(c=='a'||c=='b')
 return SMB;

return  c;
}

int main(){
 yyparse();
}