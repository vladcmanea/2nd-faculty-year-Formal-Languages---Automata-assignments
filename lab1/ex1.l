%{
#include <stdio.h>
%}

%%
[0-9]+ { printf ("[%s]", yytext); }
info { printf("INFO"); }
.|\n { ECHO; }
%%
int main() { yylex(); }
