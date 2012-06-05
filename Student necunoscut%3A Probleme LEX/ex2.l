%{
#include <stdio.h>
%}

%%
[ \t] {fprintf(yyout,"_");}
\n {fprintf(yyout,".\n");}
. ECHO;
%%
int main(int argc, char** argv){
FILE*f, *g;
if(argc>0)
 yyin = fopen(argv[1],"r");

if(!(g = fopen("out.txt","w")))
    fprintf(stderr,"eroare creare fisier!");
else
 yyout=g;
yylex();

}