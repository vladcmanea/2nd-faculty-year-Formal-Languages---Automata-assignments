%{
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void writ(char[], char[]);
void adda(char[]);
void addt(char[]);
void addp(char[]);
int findt(char[]);
void adddv(char []);
void addfv(char []);


int sec = 0;
int dc = 0;
int fc = 0;
int ac = 0;
int tc = 0;
int pc = 0;
char dv[1000][1000], fv[1000][1000], av[1000][1000], am[1000], tv[1000][1000], pv[1000][1000];

/*

const int ((([1-9][0-9]*)|(0[0-7]*)|(0[xX][0-9a-fA-F]+))(u|U|l|L|ul|UL)?)|(0|([1-9][0-9]*))(("."[0-9]*)|([eE]?[+-]?[0-9]*))[fFlL]?)

*/

%}
%s P Q

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
enf long|unsigned|short|signed
typ int|long|float|bool|double|short|long|unsigned|string|void|char|istream|ifstream|ostream|ofstream|signed
spe class|struct
mod private|public|protected
rez asm|if|enum|friend|goto|inline|operator|register|template|union|volatile|else|switch|case|continue|break|default|return|do|extern|static|const|extern|static|public|private|protected|new|delete|while|for|this|try|catch|throw|virtual
vrb [a-zA-Z_][a-zA-Z0-9_]*

cst (([1-9][0-9]*)|(0[0-7]*)|(0[xX][0-9A-Fa-f]+)(u|U|l|L|ul|UL)?)|((0|[1-9][0-9]*)(("."[0-9]*)|([eE]?[+-]?[0-9]*))[fFlL]?)|("'"[^']"'")|"true"|"false"


par "("|")"
pvi ,|;
nap ([^a-zA-Z0-9_&*\n\t ]|"."|"->"|{co2}|{co1}){spc}*
til ":"({spc}*{mod}{spc}+{vrb}{spc}*",")*({spc}*{mod}{spc}+{vrb}{spc}*)

fecl {spc}*("const"{spc}+){0,1}(({vrb}{spc}+)*{vrb})(({spc}*[*&]{spc}*{vrb}{spc}*)|({spc}+{vrb}{spc}*))({spc}*"["{spc}*([+-]{0,1}{cst}{spc}*){0,1}"]"{spc}*)*
decl {spc}*("const"{spc}+){0,1}(({vrb}{spc}+)*{vrb})(({spc}*[*&]{spc}*{vrb}{0,1}{spc}*)|({spc}+{vrb}{0,1}{spc}*)|({spc}*))({spc}*"["{spc}*([+-]{0,1}{cst}{spc}*){0,1}"]"{spc}*)*({spc}*={spc}*(([+-]{0,1}{cst})|{str}){spc}*){0,1}{spc}*

focn (virtual{spc}+){0,1}(static{spc}+){0,1}(const{spc}+){0,1}(({enf}{spc}+)*{typ}|{spe}{spc}+{vrb})(({spc}*"*"{spc}*)|({spc}*"&"{spc}*)|({spc}+))({spc}*{vrb}{spc}*"::"{spc}*){0,1}[~]?{vrb}{spc}*(("("{spc}*")")|("("({fecl},)*{fecl}")"))
docn (virtual{spc}+){0,1}(static{spc}+){0,1}(const{spc}+){0,1}(({enf}{spc}+)*{typ}|{spe}{spc}+{vrb})(({spc}*"*"{spc}*)|({spc}*"&"{spc}*)|({spc}+))({spc}*{vrb}{spc}*"::"{spc}*){0,1}[~]?{vrb}{spc}*(("("{spc}*")")|("("({decl},)*{decl}")"))({spc}*={spc}*0){0,1}{spc}*";"

%%


{nap}/({vrb}{spc}*"::"{spc}*)?{vrb}({spp}+"(")		{ BEGIN P; REJECT; printf("%s\n", yytext); }
{nap}/({vrb}{spc}*"::"{spc}*)?{vrb}"("			{ BEGIN P; REJECT; printf("%s\n", yytext); }

{nap}/({vrb}{spc}*"::"{spc}*)?{rez}({spp}+"(")		{ BEGIN 0; REJECT; }
{nap}/({vrb}{spc}*"::"{spc}*)?{rez}"("			{ BEGIN 0; REJECT; }

{nap}/({vrb}{spc}*"::"{spc}*)?{typ}({spp}+"(")		{ BEGIN 0; REJECT; }
{nap}/({vrb}{spc}*"::"{spc}*)?{typ}"("			{ BEGIN 0; REJECT; }

<P>({vrb}{spc}*"::"{spc}*)?{vrb}/({spp}+"(")		{ adda(yytext); BEGIN 0; REJECT; }
<P>({vrb}{spc}*"::"{spc}*)?{vrb}/"("			{ adda(yytext); BEGIN 0; REJECT; }

{docn}							{ adddv(yytext); REJECT; }
{focn}{spc}*/"{"					{ addfv(yytext); REJECT; }

{co1}							{ writ(yytext, "#060"); }
{co2}							{ writ(yytext, "#060"); }

{pre}							{ writ(yytext, "#f60"); }
{str}							{ writ(yytext, "#090"); }

{spe}{spc}+						{ BEGIN Q; REJECT; }
<Q>{vrb}/{spc}*{til}{spc}*"{"				{ addt(yytext); BEGIN 0; REJECT; }
<Q>{vrb}/{spc}*"{"					{ addt(yytext); BEGIN 0; REJECT; }

\n 							{ writ(yytext, NULL); }
\t 							{ writ(yytext, NULL); }
" " 							{ writ(yytext, NULL); }

{ope}							{ writ(yytext, "#909"); }
{pvi}							{ writ(yytext, "#999"); }
{par}							{ writ(yytext, "#660"); }
{acc}							{ writ(yytext, "#990"); }
{atr}							{ writ(yytext, "#f00"); }
{spa}							{ writ(yytext, NULL); }

{typ}/{spa}						{ writ(yytext, "#009"); addp(yytext); }
{typ}$							{ writ(yytext, "#009"); addp(yytext); }

{spe}/{spa}						{ writ(yytext, "#009"); }
{spe}$							{ writ(yytext, "#009"); }

{rez}/{spa}						{ writ(yytext, "#009"); }
{rez}$							{ writ(yytext, "#009"); }

{rez}/({spp}+"(")					{ writ(yytext, "#009"); }
{rez}/"("						{ writ(yytext, "#009"); }

{vrb}/({spp}+"(")					{ writ(yytext, "#900"); }
{vrb}/"("						{ writ(yytext, "#900"); }

{cst}/{spa}						{ writ(yytext, "#066"); }
{cst}$							{ writ(yytext, "#066"); }

{vrb}/{spa}						{ if (!findt(yytext)) writ(yytext, "#666"); else writ(yytext, "#009"); }
{vrb}$							{ writ(yytext, "#666"); }

%%

void adda(char strg[])
{
    int l1, l2, i;
    if (ac == 0)
    {
	strcpy(av[ac], strg);
	am[ac] = 1;
	ac++;
	//printf("%s\n", av[ac-1]);
    }
    else
    {
	for (i = 0; i < ac; ++i)
	    if (strcmp(strg, av[i]) == 0)
	    {
		am[i]++;
		return;
	    }
	    
	strcpy(av[ac], strg);
	am[ac++] = 1;
        //printf("%s\n", strg);
    }
}

int findt(char strg[])
{
    int i;
    for (i = 0; i < tc; ++i)
	if (strcmp(strg, tv[i]) == 0)
	    return 1;
	    
    return 0;
}


void addt(char strg[])
{
    int l1, l2, i;
    if (tc == 0)
    {
	strcpy(tv[tc], strg);
	tc++;
	//printf("%s\n", tv[tc-1]);
    }
    else
    {
	for (i = 0; i < tc; ++i)
	    if (strcmp(strg, tv[i]) == 0)
		return;
	    
	strcpy(tv[tc], strg);
	tc++;
        //printf("%s\n", strg);
    }
}

void addp(char strg[])
{
    int l1, l2, i;
    if (pc == 0)
    {
	strcpy(pv[pc], strg);
	pc++;
	//printf("%s\n", pv[pc-1]);
    }
    else
    {
	for (i = 0; i < pc; ++i)
	    if (strcmp(strg, pv[i]) == 0)
		return;
	    
	strcpy(pv[pc], strg);
	pc++;
        //printf("%s\n", strg);
    }
}

void adddv(char strg[])
{
    int l1, l2;
    if (dc == 0)
    {
	strcpy(dv[dc], strg);
	dc++;
	//printf("%s\n", dv[dc-1]);
	
    }
    else
    {
	l1 = strlen(dv[dc-1]);
	l2 = strlen(strg);
	
	if (l1 < l2 || l1 >= l2 && strcmp(dv[dc-1]+(l1-l2), strg) != 0)
	{
	    strcpy(dv[dc], strg);
	    dc++;
	    //printf("%s\n", strg);
	}
    }
}

void addfv(char strg[])
{
    int l1, l2;
    if (fc == 0)
    {
	strcpy(fv[fc], strg);
	fc++;
	//printf("%s\n", fv[fc-1]);
	
    }
    else
    {
	l1 = strlen(fv[fc-1]);
	l2 = strlen(strg);
	
	if (l1 < l2 || l1 >= l2 && strcmp(fv[fc-1]+(l1-l2), strg) != 0)
	{
	    strcpy(fv[fc], strg);
	    fc++;
	    //printf("%s\n", strg);
	}
    }
}

void writ(char strg[], char color[])
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
    int i;
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
	        
	        if (dc > 0)
	        {
    	    	    fprintf(yyout, "<hr /><b>Declaratii de functii</b><hr />");
    	    	    for (i = 0; i < dc; ++i)
	    	    {
	    		writ(dv[i], NULL);
	    		writ("\n", NULL);
	    	    }
	    	}
	    	
	        if (fc > 0)
	        {
    	    	    fprintf(yyout, "<hr /><b>Definitii de functii (antet)</b><hr />");
    	    	    for (i = 0; i < fc; ++i)
	    	    {
	    		writ(fv[i], NULL);
	    		writ("\n", NULL);
	    	    }
	    	}
	    	
	        if (ac > 0)
	        {
    	    	    fprintf(yyout, "<hr /><b>Apeluri de functii si de cate ori</b><hr />");
    	    	    for (i = 0; i < ac; ++i)
	    	    {
	    		writ(av[i], NULL);
	    		if (am[i] == 1)
	    		    fprintf(yyout, " o data");
	    		else
	    		    fprintf(yyout, " de %d ori", am[i]);
	    		writ("\n", NULL);
	    	    }
	    	}

	        if (pc > 0)
	        {
    	    	    fprintf(yyout, "<hr /><b>Tipuri predefinite utilizate</b><hr />");
    	    	    for (i = 0; i < pc; ++i)
	    	    {
	    		writ(pv[i], NULL);
	    		writ("\n", NULL);
	    	    }
	    	}
	    	
	        if (tc > 0)
	        {
    	    	    fprintf(yyout, "<hr /><b>Tipuri noi</b><hr />");
    	    	    for (i = 0; i < tc; ++i)
	    	    {
	    		writ(tv[i], NULL);
	    		writ("\n", NULL);
	    	    }
	    	}
	    	
	    	fprintf(yyout, "</body></html>");
	        fclose(yyout);
	    }
	    fclose(yyin);
	}
    }
    
    return 0;
}
