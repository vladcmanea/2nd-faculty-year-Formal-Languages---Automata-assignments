%{
#include <stdio.h>
#include <unistd.h>
void writ(char*, char*);
int sec = 0;


/*

    |("sizeof"/{spa}*"(")|("typeid"/{spa}*"(")

*/

%}

pre #.*$
co1 "/*"([^*]|("*"[^/]))*"*/"
co2 "//".*$
str \"([^"]|([\\]\"))*\"
acc "{"|"}"

ope "+"|"++"|"+="|"-"|"-="|"--"|"*"|"*="|"/"|"/="|"%"|"%="|"<"|"<="|">"|">="|"!="|"=="|"!"|"&&"|"||"|"<<"|"<<="|">>"|">>="|"~"|"&"|"&="|"|"|"|="|"^"|"^="|"["|"]"|"->"|"."|".*"|"?"|":"|"::"
atr "="

spa [^a-zA-Z0-9_]
spp [^a-zA-Z0-9_()=]
spc [ \n\t]
typ int|long|float|bool|double|short|long|unsigned|string|struct|void|class
rez if|else|switch|case|continue|break|default|return|do|extern|static|const|extern|static|public|private|new|delete|while|for|this
vrb [a-zA-Z_][a-zA-Z0-9_]*
cst ([0-9]*"."{0,1}[0-9]*)|("'"[^']"'")
par "("|")"
pvi ,|;

docn (virtual{spc}+)?+(static{spc}+)?((const{spc}*"&"{spc}*)|(const{spc}*"*"{spc}*)|(const{spc}+))?{spc}*{type}{spc}*[&*]?{spc}*{vrb}({spc}*"("{spc}*
(
    {spc}*((const{spc}*"&"{spc}*)|(const{spc}*"*"{spc}*)|(const{spc}+))?{spc}*{type}{spc}*[&*]?{spc}*{vrb}?({spc}*={spc}*0{spc}*)?{spc}*","
)*

(
{spc}*((const{spc}*"&"{spc}*)|(const{spc}*"*"{spc}*)|(const{spc}+))?{spc}*{type}{spc}*[&*]?{spc}*{vrb}?({spc}*={spc}*0{spc}*)?{spc}*


)
{spc}*")"|"()")({spc}*={spc}*0)?";"

%%

{co1}							{ writ(yytext, "#090"); printf("%s", yytext); sleep(sec); fflush(stdout); }
{co2}							{ writ(yytext, "#090"); printf("%s", yytext); sleep(sec); fflush(stdout); }

{pre}							{ writ(yytext, "#0ff"); printf("%s", yytext); sleep(sec); fflush(stdout); }
{str}							{ writ(yytext, "#090"); printf("%s", yytext); sleep(sec); fflush(stdout); }

\n 							{ writ(yytext, NULL); printf("%s", yytext); sleep(sec); fflush(stdout); }
\t 							{ writ(yytext, NULL); printf("%s", yytext); sleep(sec); fflush(stdout); }
" " 							{ writ(yytext, NULL); printf("%s", yytext); sleep(sec); fflush(stdout); }

{ope}							{ writ(yytext, "#909"); printf("%s", yytext); sleep(sec); fflush(stdout); }
{pvi}							{ writ(yytext, "#999"); printf("%s", yytext); sleep(sec); fflush(stdout); }
{par}							{ writ(yytext, "#660");  printf("%s", yytext); sleep(sec); fflush(stdout); }
{acc}							{ writ(yytext, "#990");  printf("%s", yytext); sleep(sec); fflush(stdout); }
{atr}							{ writ(yytext, "#f00"); printf("%s", yytext); sleep(sec); fflush(stdout); }
{spa}							{ writ(yytext, NULL); printf("%s", yytext); sleep(sec);  fflush(stdout);}

{typ}/{spa}						{ writ(yytext, "#009"); printf("<6f6>%s</6f6>", yytext); sleep(sec); fflush(stdout); }
{typ}$							{ writ(yytext, "#009"); printf("<6f6>%s</6f6>", yytext); sleep(sec); fflush(stdout); }

{rez}/{spa}						{ writ(yytext, "#009"); printf("<0f0>%s</0f0>", yytext); sleep(sec); fflush(stdout); }
{rez}$							{ writ(yytext, "#009"); printf("<0f0>%s</0f0>", yytext); sleep(sec); fflush(stdout); }

{rez}/({spp}+"(")					{ writ(yytext, "#009"); printf("<0f0>%s</0f0>", yytext); sleep(sec); fflush(stdout); }
{rez}/"("						{ writ(yytext, "#009"); printf("<0f0>%s</0f0>", yytext); sleep(sec); fflush(stdout); }

{vrb}/({spp}+"(")					{ writ(yytext, "#900"); printf("<f90>%s</f90>", yytext); sleep(sec); fflush(stdout); }
{vrb}/"("						{ writ(yytext, "#900"); printf("<f90>%s</f90>", yytext); sleep(sec); fflush(stdout); }

{vrb}/{spa}						{ writ(yytext, "#666"); printf("<ff0>%s</ff0>", yytext); sleep(sec); fflush(stdout); }
{vrb}$							{ writ(yytext, "#666"); printf("<ff0>%s</ff0>", yytext); sleep(sec); fflush(stdout); }

{cst}/{spa}						{ writ(yytext, "#066"); printf("<0ff>%s</0ff>", yytext); sleep(sec); fflush(stdout); }
{cst}$							{ writ(yytext, "#066"); printf("<0ff>%s</0ff>", yytext); sleep(sec); fflush(stdout); }

%%

void writ(char *strg, char *color)
{
    int i;

    if (color)
        fprintf(yyout, "<span style='color: %s'>", color);

    for (i = 0; strg[i]; ++i)
	if (strg[i] == '\n')
	    fprintf(yyout, "<br />");
	else if (strg[i] == ' ')
	    fprintf(yyout, "&nbsp;");
	else if (strg[i] == '\t')
	    fprintf(yyout, "&nbsp;&nbsp;&nbsp;&nbsp;");
	else if (strg[i] == '<')
	    fprintf(yyout, "&lt;");
	else if (strg[i] == '>')
	    fprintf(yyout, "&gt;");
	else
	    fprintf(yyout, "%c", strg[i]);

    if (color)
	fprintf(yyout, "</span>");
}

int main(int argc, char **argv)
{
    if (argc < 3)
	printf("Executa in formatul ./lex <intrare> <iesire>\n");
    else
    {
	if (!(yyin = fopen(argv[1], "r")))
	    printf("Fisierul de intrare %s nu poate fi deschis\n", argv[1]);
	else 
	{
	    if (!(yyout = fopen(argv[2], "w")))
		printf("Fisierul de iesire %s nu poate fi deschis\n", argv[2]);
    	    else
	    {
	        fprintf(yyout, "<html><head><title>LEX</title></head><body style='font-family:\"courier new\"'>");
	        yylex();
	        fprintf(yyout, "</body></html>");
	        fclose(yyout);
	    }
	    fclose(yyin);
	}
    }
    
    return 0;
}
