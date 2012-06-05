%{
#include <stdio.h>
%}

%%
[ \t] { fprintf(yyout, "_"); }
\n { fprintf(yyout, ".\n"); }
. { ECHO; }
%%
int main(int argc, char** argv)
{
    FILE *f, *g;
    if(argc > 0)
    {
	if (!(yyin = fopen(argv[1], "r")))
	{
	    fprintf(stderr, "Eroare creare fisier intrare!\n");
	    return 0;
	}
	if(!(g = fopen("out.txt", "w")))
	{
	    fprintf(stderr, "Eroare creare fisier!\n");
	    return 0;
	}
	yyout = g;
    }
    else
    {
	fprintf(stderr, "Eroare citire fisier!\n");
	return 0;
    }

    yylex();

    return 0;
}