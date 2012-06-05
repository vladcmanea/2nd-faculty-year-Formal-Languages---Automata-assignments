%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
%}
%%
[0-9]+ { 
		yylval.intval = atoi(yytext); 
		return EXP;
	}

"==" {
		return EQ;
	}

[a-zA-Z]* { 
		/* aloc memorie */
		char *tmp;

		if ((tmp = malloc(sizeof(char) * (strlen(yytext) + 1))) == 0)
		{
			/* scriu eroare */
			printf("Eroare de alocare\n");
				
			/* termin programul */
			exit(0);
		}
		memset(tmp, 0, sizeof(char) * (strlen(yytext) + 1));

		/* pun sirul */
		strcpy(tmp, yytext);

		/* consider sirul nou */
		yylval.strval = tmp;

		return STR;
	}
[ \t] ;
\n { }
. 	{
		return yytext[0];
	}
