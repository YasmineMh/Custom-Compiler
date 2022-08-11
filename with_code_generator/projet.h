#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <glib.h>
#include "syntaxe_projet.tab.h"
int yylex(void);
void yyerror(char*);
extern unsigned int lineno;
extern bool error_lexical;

/* Le flux de notre fichier de sortie final */
FILE* fichier;

/* Definition des methodes de generation de code C */
extern void debut_code(void);
extern void genere_code(GNode*);
extern void fin_code(void);

#define PROGRAMME 0
#define DECLARATION 1
#define CODE_VIDE 2
#define DECLARATION_ID 3
#define AFFECTATION 4
#define SOUS_PROGRAMMES 5
#define FONCTION 6
#define PROCEDURE 7
#define ARGUMENTS 8
#define PARAMETRES 9
#define PARAMETRE 10
#define INSTRUCTIONS 11
#define INSTRUCTION 12
#define IF_ELSE 13
#define WHILE_DO 14
#define VARIABLE 15
#define APPEL_PROCEDURE 16
#define EXPRESSIONS 17
#define EGAL 18
#define DIFF 19
#define INF 20
#define SUP 21
#define INF_EGAL 22
#define SUP_EGAL 23
#define S_TERME 24
#define PLUS 25
#define MOINS 26
#define OU 27
#define MUL 28
#define DIV_REEL 29
#define DIV 30
#define MOD 31
#define ET 32
#define APPEL_FONCTION 33
#define ENTIER 34
