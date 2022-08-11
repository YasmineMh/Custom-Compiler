#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "syntaxe_projet.tab.h"
int yylex(void);
void yyerror(char*);
extern unsigned int lineno;
extern bool error_lexical;
