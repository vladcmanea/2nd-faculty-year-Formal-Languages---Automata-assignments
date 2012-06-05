%{
#include <stdio.h>
%}
cuv4k ^((([a-z]*[a-bd-z]+(cccc)+)|((cccc)+)))$
nr (1[0-9][0-9])|([2-9][0-9][0-9])|(1[0-9][0-9][0-9])|(2[0-9][0-9][0-9])|(3[0-2][0-9][0-9])|(330[0-9])
%%
{cuv4k} { printf("%s\n", yytext); }
"("({nr},)*{nr}")" { printf("%s\n", yytext); }
.|\n ;
%%
int main(int argc, char** argv)
{
    if(argc > 0)
	yyin = fopen(argv[1], "r");

    yylex();
}
