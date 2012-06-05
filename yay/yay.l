%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

%}
%%

"@"[^@]*"@" { int i; for (i = 0; i < strlen(yytext); ++i) if (yytext[i] == '\n') yylineno++; }
[ \t\n]+ { int i; for (i = 0; i < strlen(yytext); ++i) if (yytext[i] == '\n') yylineno++; }
"si"(" inca")?|"," { return SI; }
"salut" { return SALUT; }
"papa" { return PAPA; }
"declar"("a")?|"declarari"|"declarare" { return DECLAR; }
"gata" { return GATA; }
"definesc"|"defineste"|"definitii"|"definitie" { return DEFINESC; }
"rezolv"("a")?|"rezolvari"|"rezolvare" { return REZOLV; }
"functi"(e|a) { return FUNCTIA; }

\"[^"]+\" { int i; for (i = 0; i < strlen(yytext); ++i) if (yytext[i] == '\n') yylineno++; return SIR; }
("si ")?("care ")?"primeste"(" parametru"(l)?|" parametri"(i)?)? { return CAREPRIMESTE; }
("si ")?("care ")?"intoarce" { return CAREINTOARCE; }
("si ")?("care ")?"executa" { return CAREEXECUTA; }
("si ")?("care ")?"nu "("primeste"|"are")(" nimic"|" parametri"|" parametrii")? { return CARENUPRIMESTE; }
("si ")?("care ")?"nu "("intoarce"|"returneaza")(" nimic")? { return CARENUINTOARCE; }
("variabila"(" constanta"|" fix"("at")?"a")?)|(([2-9]|[1-9][0-9]*)(" de")?" variabile"(" constante"|" fix"("at")?"e")?) { return VARIABILA; }
("de "|"care are ")?"tip"("ul")? { return DETIPUL; }
("si ")?("care au "|"care are "|"cu "|"de ")?("valoare"("a")?|"valorile") { return CUVALOAREA; }
"numeric"|"numar"|"real" { return NUMERIC; }
"string"|"sir de caractere"|"sir" { return SIRDECARACTERE; }
"binar"|"booleean"|"logic" { return BINAR; }
(("si ")?("care ")?("inseamna"|"contin"("e")?|"includ"("e")?|"are"|"au"))|"cu continut"("ul")? { return CAREINSEAMNA; }

(([1-9][0-9]*)|(0[0-7]*)|(0[xX][0-9A-Fa-f]+)(u|U|l|L|ul|UL)?)|((0|[1-9][0-9]*)(("."[0-9]*)|([eE]?[+-]?[0-9]*))[fFlL]?) { return NR; }

"devine"|"<="|"ia valoarea" { return DEVINE; }
"scrie"|"<<" { return SCRIE; }
"citeste"|">>" { return CITESTE; }
"daca"|"cand" { return DACA; }
"atunci" { return ATUNCI; }
"altfel" { return ALTFEL; }
"cat timp" { return CATTIMP; }
"pana cand" { return PANACAND; }
"["[1-9][0-9]*"]" { return INDICE; }
"=>"|"::" { return REZOLUTIE; }
"FALS"|"ZERO"|"FALSE" { return FALS; }
"ADEVARAT"|"UNU"|"TRUE" { return ADEVARAT; }


. { return yytext[0]; }

%%
