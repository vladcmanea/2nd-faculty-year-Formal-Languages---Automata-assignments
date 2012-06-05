%{
#include <stdio.h>
%}
%s P
%%

"Popescu" {BEGIN P; printf("%s ", yytext);}
<P>[a-zA-Z]+ {printf("%s\n",yytext); BEGIN 0;}
.|\n ;
%%
int main(int argc, char** argv){

if(argc>0)
 yyin=fopen(argv[1],"r");

yylex();

}
