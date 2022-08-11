%{
 
#include "projet.h"
unsigned int lineno=1;
bool error_lexical=false;
 
%}
%x in_comment

%option noyywrap

chiffre [0-9]
lettre [A-Za-z]
id {lettre}({lettre}|{chiffre})*
chiffres {chiffre}+
comment_debut "/*"
comment_fin "*/"
%%
 
{comment_debut}    {BEGIN(in_comment);}
<in_comment>\n        { lineno++; }
<in_comment>.       { /* ignorer */ }

{chiffres} {
        sscanf(yytext, "%ld", &yylval.nombre);
        return TOK_NOMBRE;
}
 
"prog" 		{return TOK_MOT_CLE_PROG;}

"var"		{return TOK_MOT_CLE_VAR;}

"int"		{return TOK_MOT_CLE_INT;}

"func"		{return TOK_MOT_CLE_FUNC;}

"return"	{return TOK_MOT_CLE_RETURN;}

"proc"		{return TOK_MOT_CLE_PROC;}

"if"		{return TOK_MOT_CLE_IF;}

"then"		{return TOK_MOT_CLE_THEN;}

"else"		{return TOK_MOT_CLE_ELSE;}

"while"		{return TOK_MOT_CLE_WHILE;}

"do"		{return TOK_MOT_CLE_DO;}

"=="             {return TOK_EGAL;}

"<>"             {return TOK_DIFF;}

"<"              {return TOK_INF;}

">"              {return TOK_SUP;}

"<="             {return TOK_INF_EGAL;}

">="             {return TOK_SUP_EGAL;}

"="             {return TOK_AFFECT;}
 
"+"             {return TOK_PLUS;}
 
"-"             {return TOK_MOINS;}
 
"*"             {return TOK_MUL;}
 
"/"             {return TOK_DIV_REEL;}
 
"and"            {return TOK_ET;}
 
"or"            {return TOK_OU;}
 
"not"           {return TOK_NON;}
 
"div"             {return TOK_DIV;}
 
"mod"             {return TOK_MOD;}

"("             {return TOK_PARG;}
 
")"             {return TOK_PARD;}

"{"             {return TOK_CROG;}
 
"}"             {return TOK_CROD;}

":"             {return TOK_DEUX_POINTS;}

","             {return TOK_VIRGULE;}

";"             {return TOK_FINSTR;}
 
"\n"            {lineno++;}

" "|"\t" {}


{id} {
        yylval.texte = yytext;
        return TOK_VAR;
}
<in_comment>{comment_fin}  {BEGIN(INITIAL);}




. {
        fprintf(stderr,"\tERREUR : Lexeme inconnu a la ligne %d. Il s'agit de %s et comporte %d lettre(s)\n",lineno,yytext,yyleng);
        error_lexical=true;
        return yytext[0];
}
 
%%
