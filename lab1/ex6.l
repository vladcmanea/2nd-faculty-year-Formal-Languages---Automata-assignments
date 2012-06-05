%{
#include <stdio.h>
%}
nr {nr}|[0-9]
%%
{nr} { printf("%s\n", yytext); }
.|\n ;
%%
int main(int argc, char** argv)
{
    yylex();
}
%{
#include <stdio.h>
%}
nr {nr}|[0-9]
%%
{nr} { printf("%s\n", yytext); }
.|\n ;
%%
int main(int argc, char** argv)
{
    yylex();
}
