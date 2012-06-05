%{

#include <stdio.h>

extern FILE* yyin;
extern FILE* yyout;

extern char* yytext;
extern int yylineno;

%}

%token COMENTARIU
%token SALUT PAPA DECLAR GATA DEFINESC REZOLV SI 
%token DEVINE SCRIE CITESTE DACA ATUNCI ALTFEL CATTIMP PANACAND

%token FUNCTIA CAREPRIMESTE CAREINTOARCE CARENUPRIMESTE CARENUINTOARCE CAREEXECUTA
%token VARIABILA DETIPUL CUVALOAREA
%token NUMERIC SIRDECARACTERE BINAR
%token CAREINSEAMNA
%token INDICE REZOLUTIE

%token ADEVARAT FALS NR SIR

%start program

%left '~'
%left '!' 
%left '&' 
%left '|' 
%left '^' 
%left '=' 
%left '>' 
%left '<' 
%left '+' 
%left '-'
%left '*'
%left '/'
%left '%' 

%%

program : SALUT corp PAPA { fprintf(yyout, "program -> salut corp papa\n"); }
        ;

corp : blocdec blocdef blocrez { fprintf(yyout, "corp -> blocdec blocdef blocrez\n"); }
     | blocdef blocrez { fprintf(yyout, "corp -> blocdef blocrez\n"); }
     | blocdec blocrez { fprintf(yyout, "corp -> blocdec blocrez\n"); }
     | blocrez { fprintf(yyout, "corp -> blocrez\n"); }
     ;

blocdec : DECLAR declaratii GATA { fprintf(yyout, "blocdec -> declar declaratii gata\n"); }
        ;

blocdef : DEFINESC definitii GATA { fprintf(yyout, "blocdef -> definesc definitii gata\n"); }
        ;

blocrez : REZOLV rezolvari GATA { fprintf(yyout, "blocrez -> rezolv rezolvari gata\n"); }
        ;

declaratii : declaratii SI declaratie { fprintf(yyout, "declaratii -> declaratii si declaratie\n"); }
	   | declaratie { fprintf(yyout, "declaratii -> declaratie\n"); }
	   ;
  
definitii : definitii SI definitie { fprintf(yyout, "definitii -> definitii si definitie\n"); }
	  | definitie { fprintf(yyout, "definitii -> definitie\n"); }
	  ;

rezolvari : rezolvari SI rezolvare { fprintf(yyout, "rezolvari -> rezolvari si rezolvare\n"); }
          | rezolvare { fprintf(yyout, "rezolvari -> rezolvare\n"); } 
          ;

declaratie : declaratiefunctie { fprintf(yyout, "declaratie -> declaratiefunctie\n"); }
           | declaratievariabila { fprintf(yyout, "declaratie -> declaratievariabila\n"); }
           | declaratietip { fprintf(yyout, "declaratie -> declaratietip\n"); }
           ;

declaratiefunctie : FUNCTIA SIR CAREPRIMESTE declaratiivariabilescurte GATA CAREINTOARCE declaratievariabilascurta { fprintf(yyout, "declaratiefunctie -> functia sir careprimeste declaratiivariabilescurte gata careintoarce declaratievariabilascurta\n"); }
                  | FUNCTIA SIR CAREPRIMESTE declaratiivariabilescurte GATA CARENUINTOARCE { fprintf(yyout, "declaratiefunctie -> functia sir careprimeste declaratiivariabilescurte gata carenuintoarce\n"); }
                  | FUNCTIA SIR CARENUPRIMESTE CAREINTOARCE declaratievariabilascurta { fprintf(yyout, "declaratiefunctie -> functia sir carenuprimeste careintoarce declaratievariabilascurta\n"); }
                  | FUNCTIA SIR CARENUPRIMESTE CARENUINTOARCE { fprintf(yyout, "declaratiefunctie -> carenuprimeste carenuintoarce\n"); }
                  ;

declaratievariabilascurta : declaratievariabila  { fprintf(yyout, "declaratievariabilascurta -> declaratievariabila\n"); }
                          | VARIABILA DETIPUL NUMERIC { fprintf(yyout, "declaratievariabilascurta -> variabila detipul numeric\n"); }
                          | VARIABILA DETIPUL SIRDECARACTERE { fprintf(yyout, "declaratievariabilascurta -> variabil detipul sirdecaractere\n"); }
                          | VARIABILA DETIPUL BINAR { fprintf(yyout, "declaratievariabilascurta -> variaila detipul binar\n"); }
                          | VARIABILA DETIPUL CAREINSEAMNA declaratiivariabilescurte GATA { fprintf(yyout, "declaratievariabilascurta -> variabila detipul sir care inseamna declaratiivariabilescurte gata\n"); }
                          ;

declaratievariabila : VARIABILA SIR DETIPUL NUMERIC { fprintf(yyout, "declaratievariabila -> variabila sir detipul numeric\n"); }
                    | VARIABILA SIR DETIPUL SIRDECARACTERE { fprintf(yyout, "declaratievariabila -> variabila sir detipul sirdecaractere\n"); }
                    | VARIABILA SIR DETIPUL BINAR { fprintf(yyout, "declaratievariabila -> variabila sir detipul binar\n"); }
                    | VARIABILA SIR DETIPUL SIR CAREINSEAMNA declaratiivariabile GATA { fprintf(yyout, "declaratievariabila -> variabila sir detipul sir careinseamna declaratiivariabile gata\n"); }
                    ;

declaratiivariabilescurte : declaratiivariabilescurte SI declaratievariabilascurta { fprintf(yyout, "declaratiivariabilescurte -> declaratiivariabilescurte si declaratievariabilascurta\n"); }
                          | declaratievariabilascurta { fprintf(yyout, "declaratiivariabilescurte -> declaratievariabilascurta\n"); }
                          ;

declaratiivariabile : declaratiivariabile SI declaratievariabila { fprintf(yyout, "declaratiivariabile -> declaratiivariabile si declaratievariabila\n"); }
                    | declaratievariabila { fprintf(yyout, "declaratiivariabile -> declaratievariabila\n"); }
                    ;

declaratietip : DETIPUL SIR CAREINSEAMNA declaratiiintip GATA { fprintf(yyout, "declaratietip -> tipul sir careinseamna declaratiiintip gata\n"); }
              ;

declaratiiintip : declaratiiintip SI declaratievariabilascurta { fprintf(yyout, "declaratiiintip -> declaratiiintip si declaratievariabilascurta\n"); }
                | declaratiiintip SI declaratiefunctie { fprintf(yyout, "declaratiiintip -> declaratiiintip si declaratiefunctie\n"); }
                | declaratievariabilascurta { fprintf(yyout, "declaratiiintip -> declaratievariabilascurta\n"); }
                | declaratiefunctie { fprintf(yyout, "declaratiiintip -> declaratiefunctie\n"); }
                ;

definitie : definitiefunctie { fprintf(yyout, "definitie -> definitiefunctie\n"); }
          | definitievariabila { fprintf(yyout, "definitie -> definitievariabila\n"); }
          | definitietip { fprintf(yyout, "definitie -> definitieintip\n"); }
          ;

definitiefunctie : FUNCTIA SIR CAREPRIMESTE definitiivariabile GATA CAREEXECUTA rezolvari GATA CAREINTOARCE definitievariabila { fprintf(yyout, "definitiefunctie -> functia sir careprimeste declaratiivariabile gata careexecuta rezolvari gata careintoarce definitievariabila\n"); }
                 | FUNCTIA SIR CAREPRIMESTE definitiivariabile GATA CAREEXECUTA rezolvari GATA CARENUINTOARCE { fprintf(yyout, "definitiefunctie -> functia sir careprimeste declaratiivariabile gata careexecuta rezolvari gata carenuintoarce\n"); }
                 | FUNCTIA SIR CARENUPRIMESTE CAREEXECUTA rezolvari GATA CAREINTOARCE definitievariabila { fprintf(yyout, "definitiefunctie -> functia sir carenuprimeste gata careexecuta rezolvari gata careintoarce definitievariabila\n"); }
                 | FUNCTIA SIR CARENUPRIMESTE CAREEXECUTA rezolvari GATA CARENUINTOARCE { fprintf(yyout, "definitiefunctie -> functia sir carenuprimeste declaratiivariabile gata careexecuta rezolvari gata carenuintoarce\n"); }
                 ;

definitiivariabile : definitiivariabile SI definitievariabila { fprintf(yyout, "definitiifunctie -> definitiivariabile si definitievariabila\n"); }
                   | definitievariabila { fprintf(yyout, "definitiivariabile -> definitievariabila\n"); }
                   ;

definitievariabila : VARIABILA SIR DETIPUL NUMERIC CUVALOAREA en { fprintf(yyout, "definitievariabila -> variabila sir detipul numeric cuvaloarea en\n"); }
                   | VARIABILA SIR DETIPUL SIRDECARACTERE CUVALOAREA es { fprintf(yyout, "definitievariabila -> variabila sir detipul sirdecaractere cuvaloarea es\n"); }
                   | VARIABILA SIR DETIPUL BINAR CUVALOAREA eb { fprintf(yyout, "definitievariabila -> variabila sir detipul binar cuvaloarea eb\n"); }
                   | VARIABILA SIR DETIPUL SIR CAREINSEAMNA definitii GATA { fprintf(yyout, "definitievariabila -> variabila sir detipul sir careinseamna definitii gata\n"); }
                   ;

definitietip : DETIPUL SIR CAREINSEAMNA definitiiintip GATA { fprintf(yyout, "definitietip -> tipul sir careinseamna definitiiintip gata\n"); }
             ;

definitiiintip : definitiiintip SI definitievariabila { fprintf(yyout, "definitiiintip -> definitiiintip si definitievariabila\n"); }
               | definitiiintip SI definitiefunctie { fprintf(yyout, "definitiiintip -> definitiiintip si definitiefunctie\n"); }
               | definitievariabila { fprintf(yyout, "definitiiintip -> definitievariabila\n"); }
               | definitiefunctie { fprintf(yyout, "definitiiintip -> definitiefunctie\n"); }
               ;

exp : en { fprintf(yyout, "exp -> en\n"); }
    | es { fprintf(yyout, "exp -> es\n"); }
    | eb { fprintf(yyout, "exp -> eb\n"); }
    | apelintorc { fprintf(yyout, "exp -> apelintorc\n"); }
    | variabila { fprintf(yyout, "exp -> variabila\n"); }
    ;

eb : ADEVARAT { fprintf(yyout, "eb -> adevarat\n"); }
   | FALS { fprintf(yyout, "eb -> fals\n"); } 
   | eb '&' eb { fprintf(yyout, "eb -> eb & eb\n"); }
   | eb '|' eb { fprintf(yyout, "eb -> eb | eb\n"); }
   | eb '^' eb { fprintf(yyout, "eb -> eb ^ eb\n"); }
   | '~' eb { fprintf(yyout, "eb -> ~ eb\n"); }
   | '(' eb ')' { fprintf(yyout, "eb -> ( eb )\n"); }
   | BINAR '(' exp ')' { fprintf(yyout, "eb -> binar ( exp )\n"); }
   | en '=' en { fprintf(yyout, "eb -> en = en\n"); }
   | en '<' en { fprintf(yyout, "eb -> en < en\n"); }
   | en '>' en { fprintf(yyout, "eb -> en > en\n"); }
   | en '<' '=' en { fprintf(yyout, "eb -> en <= en\n"); }
   | en '>' '=' en { fprintf(yyout, "eb -> en >= en\n"); }
   | es '=' es { fprintf(yyout, "eb -> es = es\n"); }
   | es '<' es { fprintf(yyout, "eb -> es < es\n"); }
   | es '>' es { fprintf(yyout, "eb -> es > es\n"); }
   | es '<' '=' es { fprintf(yyout, "eb -> es <= es\n"); }
   | es '>' '=' es { fprintf(yyout, "eb -> es >= es\n"); }
   | eb '=' eb { fprintf(yyout, "eb -> eb = eb\n"); }
   | eb '<' eb { fprintf(yyout, "eb -> eb < eb\n"); }
   | eb '>' eb { fprintf(yyout, "eb -> eb > eb\n"); }
   | eb '<' '=' eb { fprintf(yyout, "eb -> eb <= eb\n"); }
   | eb '>' '=' eb { fprintf(yyout, "eb -> eb >= eb\n"); }
   | eb '&' '&' eb { fprintf(yyout, "eb -> eb && eb\n"); }
   | eb '|' '|' eb { fprintf(yyout, "eb -> eb || eb\n"); }
   | '!' eb { fprintf(yyout, "eb -> ! eb\n"); }
   ; 

en : en '+' en { fprintf(yyout, "en -> en + en\n"); }
   | en '-' en { fprintf(yyout, "en -> en - en\n"); }
   | '+' en { fprintf(yyout, "en -> + en\n"); }
   | '-' en { fprintf(yyout, "en -> - en\n"); }
   | en '*' en { fprintf(yyout, "en -> en * en\n"); }
   | en '/' en { fprintf(yyout, "en -> en /div/ en\n"); }
   | en '%' en { fprintf(yyout, "en -> en /mod/ en\n"); }
   | '(' en ')' { fprintf(yyout, "en -> ( en )\n"); }
   | '|' es '|' { fprintf(yyout, "en -> | es |\n"); }
   | NUMERIC '(' exp ')' { fprintf(yyout, "en -> numeric ( exp )\n"); } 
   | NR { fprintf(yyout, "en -> numar\n"); }
   ;

es : es '+' es { fprintf(yyout, "es -> es + es\n"); }
   | '(' es ')' { fprintf(yyout, "es -> ( es )\n"); }
   | SIRDECARACTERE '(' exp ')' { fprintf(yyout, "es -> ( exp )\n"); }
   | SIR { fprintf(yyout, "en -> sir\n"); }
   ; 

rezolvare : citire { fprintf(yyout, "rezolvare -> citire\n"); }
          | scriere { fprintf(yyout, "rezolvare -> scriere\n"); }
          | test { fprintf(yyout, "rezolvare -> test\n"); }
          | bucla { fprintf(yyout, "rezolvare -> bucla\n"); }
          | apelsimplu { fprintf(yyout, "rezolvare -> apelsimplu\n"); }
          | atribuire { fprintf(yyout, "rezolvare -> atribuire\n"); }
          ;

apelsimplu : FUNCTIA fun CAREPRIMESTE listafunctie GATA CARENUINTOARCE { fprintf(yyout, "apelsimplu -> functia fun careprimeste listafunctie gata carenuintoarce\n"); }
           | FUNCTIA fun CARENUPRIMESTE CARENUINTOARCE { fprintf(yyout, "apelsimplu -> functia fun carenuprimeste carenuintoarce\n"); }
           ;

apelintorc : FUNCTIA fun CAREPRIMESTE listafunctie GATA CAREINTOARCE { fprintf(yyout, "apelintorc -> functia fun careprimeste listafunctie gata careintoarce\n"); }
           | FUNCTIA fun CARENUPRIMESTE CAREINTOARCE { fprintf(yyout, "apelintorc -> functia fun carenuprimeste careintoarce\n"); }
           ;

listafunctie : listafunctie SI elementfunctie { fprintf(yyout, "listafunctie -> listafunctie si elementfunctie\n"); }
             | elementfunctie  { fprintf(yyout, "listafunctie -> elementfunctie\n"); }
             ;

elementfunctie : atribuire { fprintf(yyout, "elementfunctie -> atribuire\n"); }
               | exp { fprintf(yyout, "elementfunctie -> exp\n"); }
               ;

variabila : VARIABILA var { fprintf(yyout, "variabila -> var\n"); }
          ;

atribuire : variabila DEVINE exp { fprintf(yyout, "atribuire -> variabila devine exp\n"); }
          ;

scriere : SCRIE exp { fprintf(yyout, "scriere -> scrie exp\n"); }
        ;

citire : CITESTE variabila { fprintf(yyout, "citire -> citeste variabila\n"); }
       ;

test : DACA eb ATUNCI CAREEXECUTA rezolvari GATA ALTFEL CAREEXECUTA rezolvari GATA { fprintf(yyout, "test -> daca eb atunci careexecuta rezolvari gata altfel careexecuta rezolvari gata \n"); }
     | DACA eb ATUNCI CAREEXECUTA rezolvari GATA { fprintf(yyout, "test -> daca eb atunci careexecuta rezolvari gata\n"); }
     ;

bucla : CATTIMP eb CAREEXECUTA rezolvari GATA { fprintf(yyout, "bucla -> cattimp eb careexecuta rezolvari gata\n"); }
      | CAREEXECUTA rezolvari GATA PANACAND eb { fprintf(yyout, "bucla -> careexecuta rezolvari gata panacand eb\n"); }
      ; 

fun : fun REZOLUTIE SIR { fprintf(yyout, "fun -> fun rezolutie sir\n"); }  
    | SIR { fprintf(yyout, "fun -> sir\n"); }
    ;

var : var REZOLUTIE SIR INDICE { fprintf(yyout, "var -> var rezolutie sir indice\n"); }
    | var REZOLUTIE SIR { fprintf(yyout, "var -> var rezolutie sir\n"); }
    | SIR INDICE { fprintf(yyout, "var -> sir indice\n"); }
    | SIR { fprintf(yyout, "var -> sir\n"); }
    ;

%%

int yyerror(char * s)
{
	fprintf(yyout, "eroarea %s la linia %d\n", s, yylineno);
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
