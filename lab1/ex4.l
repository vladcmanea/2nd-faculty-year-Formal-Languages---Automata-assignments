%{
#include <stdio.h>
%}
cuv4k ^[a-z][^c](cccc)+|(cccc)+$
%%
{cuv4k} { printf("%s\n", yytext); }
.|\n ;
%%
int main(int argc, char** argv)
{
    if(argc > 0)
	yyin = fopen(argv[1], "r");

    yylex();
}