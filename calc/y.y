%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern FILE* yyin;
extern FILE* yyout;

%}
%union 
{
	int intval;
	char* strval;
}

%token <strval>STR <intval>EXP
%type <intval>exp
%type <strval>str

%nonassoc EQ
%nonassoc '|'
%left '+' '-'
%left '*' '`' '#'

%start start

%%

start: exp { 
			/* scriu la iesire */			
			fprintf(yyout, "start -> exp: %d\n", $<intval>$); 
	}
     | str { 
			/* scriu la iesire */			
			fprintf(yyout, "start -> str: %s\n", $<strval>$); 

			/* eliberez memoria */			
			free($<strval>$);
	}
     ;

str: '(' str ')' { 	
			/* valoarea ramane neschimbata */			
			$$ = $2; 	

			/* scriu la iesire */			
			fprintf(yyout, "str -> (str): %s\n", $$); 
		 }
   | str '+' str { 	
			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * (strlen($1) + strlen($3) + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * (strlen($1) + strlen($3) + 1));

			/* mut continutul */
			strcpy(tmp, $1);
			strcat(tmp, $3);

			/* eliberez memoria */
			free($1);
			free($3);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */			
			fprintf(yyout, "str -> str + str: %s\n", $$);
		}
   | str '-' str { 
			/* declar variabila auxiliara pentru prefix */
			int *L, *U;

			/* aloc memorie */
			if ((L = malloc(sizeof(int) * (strlen($3) + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(L, 0, sizeof(int) * (strlen($3) + 1));

			/* aloc memorie */
			if ((U = malloc(sizeof(int) * (strlen($1) + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(U, 0, sizeof(int) * (strlen($1) + 1));

			/* calculez procedura prefix pentru KMP */
			int p, k, M = strlen($3);
			for (L[1] = 0, p = 2; p <= M; ++p)
			{
				k = L[p - 1];
				while (k > 0 && $3[p - 1] != $3[k])
					k = L[k];
				if ($3[p - 1] == $3[k])
					k++;
				L[p] = k;
			}

			/* calculez algoritmul KMP */
			int i, t, N = strlen($1), f = -1, r = 0;
			for (t = 1, k = 0; t <= N; ++t)
			{
				while (k > 0 && $1[t - 1] != $3[k])
					k = L[k];
				if ($1[t - 1] == $3[k])
					k++;
				if (k == M)
				{
					for (i = (t - k > f + 1? t - k: f + 1); i < t; ++i, ++r)
						U[f = i] = 1;					
					t = N;
				}
			}

			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * (N - r + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * (N - r + 1));

			/* construiesc sirul */
			for (t = f = 0; t < N; ++t)
				if (U[t] == 0)
					tmp[f++] = $1[t];

			/* eliberez memoria */
			free($1);
			free($3);
			free(L);
			free(U);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */			
			fprintf(yyout, "str -> str - str: %s\n", $$);

		 }
   | str '*' exp { 
			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * (strlen($1) * $3 + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * (strlen($1) * $3 + 1));

			/* multiplic sirul */
			while ($3--)
				strcat(tmp, $1);

			/* eliberez memoria */
			free($1);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */
			fprintf(yyout, "str -> str * exp: %s\n", $$); 
		}
   | str '#' exp { 
			if ($3 > strlen($1))
				$3 = strlen($1);

			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * ($3 + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * ($3 + 1));

			/* pun sirul */
			strncpy(tmp, $1 + strlen($1) - $3, $3);

			/* eliberez memoria */
			free($1);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */			
			fprintf(yyout, "str -> str * exp: %s\n", $$); 
		}
   | exp '`' str { 
			if ($1 > strlen($3))
				$1 = strlen($3);

			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * ($1 + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * ($1 + 1));

			/* pun sirul */
			strncpy(tmp, $3, $1);

			/* eliberez memoria */
			free($3);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */			
			fprintf(yyout, "str -> exp ` str: %s\n", $$); 
		}
   | STR 	{ 
			/* aloc memorie */
			char *tmp;
			if ((tmp = malloc(sizeof(char) * (strlen($1) + 1))) == 0)
			{
				/* scriu eroare */
				printf("Eroare de alocare\n");
				
				/* termin programul */
				exit(0);
			}

			/* initializez memoria */			
			memset(tmp, 0, sizeof(char) * (strlen($1) + 1)); 

			/* pun sirul */
			strcpy(tmp, $1);

			/* eliberez memoria */
			free($1);

			/* consider sirul nou */
			$$ = tmp;

			/* scriu la iesire */			
			fprintf(yyout, "str -> STR: %s\n", $$);
		}
   ;

exp: '(' exp ')' { 
			/* consider valoarea precedenta */			
			$$ = $2; 

			/* scriu la iesire */			
			fprintf(yyout, "str -> (str): %d\n", $$); 
		}
   | str EQ str { 
			int i, N = strlen($1);
			
			/* fac test de eliminare rapida */
			if (strlen($1) != strlen($3))
				$$ = 0;
			else
			{
				/* parcurg pana ajung la final */
				for (i = 0; i < N && $1[i] == $3[i]; ++i);
				if (i == N)
					$$ = 1;
				else
					$$ = 0; 
			}

			/* scriu la iesire */			
			fprintf(yyout, "str -> exp ` str: %d\n", $$); 
		}
   | '|' str '|' { 
			/* preiau lungimea sirului */			
			$$ = strlen($2); 

			/* scriu la iesire */			
			fprintf(yyout, "str -> exp ` str: %d\n", $$); 
		}
   | EXP 	{ 
			/* preiau valoarea */
			$$ = $1; 

			/* scriu la iesire */			
			fprintf(yyout, "str -> NR: %d\n", $$); 
		}
   ;
			 
%%

int yyerror(char *s)
{
	fprintf(yyout, "eroarea %s\n", s);
}

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		printf("Comanda corecta: ./yay <fisier.intrare> <fisier.iesire>\n");
		return 0;
	}

	if (!(yyin = fopen(argv[1], "r")))
	{
		printf("Fisierul de intrare <%s> nu a putut fi deschis\n", argv[1]);
		return 0;
	}

	if (!(yyout = fopen(argv[2], "w")))
	{
		printf("Fisierul de iesire <%s> nu a putut fi deschis\n", argv[2]);
		return 0;
	}

	yyparse();

	fclose(yyin);
	fclose(yyout);

	return 0;
} 
