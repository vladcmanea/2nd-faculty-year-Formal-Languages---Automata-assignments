%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
[0-9]+ { return SMB; }
[a-zA-Z_][a-zA-Z0-9_]* { return ID; }
[ \t\n] ;
. {return yytext[0];}
