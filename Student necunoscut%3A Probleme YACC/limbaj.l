%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"int"|"float"|"char"|"string" {return TIP;}
"begin" {return BGIN;}
"end" {return END;}
[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
":=" {return ASSIGN;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
