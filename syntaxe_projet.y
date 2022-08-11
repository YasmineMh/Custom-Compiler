%{
 
#include "projet.h"
#include <string.h>
#include <glib.h>
bool error_syntaxical=false;
bool error_semantical=false;

/* Notre table de hachage */
GHashTable* table_variable;

/* Notre structure Variable qui a comme membre le type et un pointeur generique vers la valeur */
typedef struct Variable Variable;

struct Variable{
        char* type;
        void* value;
};
 
%}
 
/* L'union dans Bison est utilisee pour typer nos tokens ainsi que nos non terminaux. Ici nous avons declare une union avec deux types : nombre de type int et texte de type pointeur de char (char*) */
 
%union {
        long nombre;
        char* texte;
}
 
/* Nous avons ici les operateurs, ils sont definis par leur ordre de priorite. Si je definis par exemple la multiplication en premier et l'addition apres, le + l'emportera alors sur le * dans le langage. Les parenthese sont prioritaires avec %right */
 
%left                   TOK_PLUS        TOK_MOINS       /* +- */
%left                   TOK_MUL         TOK_DIV_REEL        /* /* */
%left                   TOK_MOD         TOK_DIV         /* mod div */
%left                   TOK_EGAL        TOK_DIFF         /* == <> */
%left                   TOK_INF         TOK_SUP         /* <  > */
%left                   TOK_INF_EGAL         TOK_SUP_EGAL         /* <=  >= */
%left                   TOK_ET         
%left                   TOK_OU          TOK_NON         /* et ou non */
%right                  TOK_PARG        TOK_PARD        /* () */
%right                  TOK_CROG        TOK_CROD        /* {} */

/* Nous avons la liste de nos expressions (les non terminaux). Nous les typons tous en texte (pointeur vers une zone de char). On a legitimement cree un non terminal variable afin d'isoler le token TOK_VAR et avoir une expression qui contiendra uniquement le nom de la variable */

%type<texte>            programmes
%type<texte>            declaration
%type<texte>            declaration_var
%type<texte>            liste_identificateurs
%type<texte>            liste_identificateurs_rec
%type<texte>            declaration_sous_programmes
%type<texte>            declaration_sous_programme
%type<texte>            entete_sous_programme
%type<texte>            arguments
%type<texte>            liste_parametres
%type<texte>            liste_parametres_rec
%type<texte>            parametre
%type<texte>            instruction_composee
%type<texte>            instructions_optionnelles
%type<texte>            liste_instructions
%type<texte>            liste_instructions_rec
%type<texte>            instruction
%type<texte>            variable
%type<texte>            appel_de_procedure
%type<texte>            liste_expressions
%type<texte>            expression
%type<texte>            expression_simple
%type<texte>            terme
%type<texte>            facteur
%type<texte>            signe
%type<texte>            empty
 
/* Nous avons la liste de nos tokens (les terminaux de notre grammaire) */
 
%token<nombre>          TOK_NOMBRE
%token                  TOK_MOT_CLE_PROG       
%token                  TOK_MOT_CLE_VAR   
%token                  TOK_MOT_CLE_INT    
%token                  TOK_MOT_CLE_FUNC    
%token                  TOK_MOT_CLE_RETURN
%token                  TOK_MOT_CLE_PROC  
%token                  TOK_MOT_CLE_IF   
%token                  TOK_MOT_CLE_THEN
%token                  TOK_MOT_CLE_ELSE  
%token                  TOK_MOT_CLE_WHILE  
%token                  TOK_MOT_CLE_DO  
%token                  TOK_EGAL   
%token                  TOK_DIFF  
%token                  TOK_INF  
%token                  TOK_SUP 
%token                  TOK_INF_EGAL     
%token                  TOK_SUP_EGAL   
%token                  TOK_AFFECT      
%token			TOK_PLUS
%token			TOK_MOINS
%token			TOK_MUL
%token			TOK_DIV_REEL
%token			TOK_ET
%token			TOK_OU
%token			TOK_NON
%token			TOK_DIV
%token			TOK_MOD
%token			TOK_PARG
%token			TOK_PARD
%token			TOK_CROG
%token			TOK_CROD
%token                  TOK_DEUX_POINTS
%token                  TOK_VIRGULE
%token                  TOK_FINSTR
%token<texte>           TOK_VAR

%%
 
/* Nous definissons toutes les regles grammaticales de chaque non terminal de notre langage. Par defaut on commence a definir l'axiome, c'est a dire ici le non terminal code. Si nous le definissons pas en premier nous devons le specifier en option dans Bison avec %start */

programmes: 	TOK_MOT_CLE_PROG TOK_VAR TOK_FINSTR declaration instruction_composee
		{
		//printf("Resultat : squelette du programme valide !\n\n");
		}
		|
		error{
			//fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}; 

declaration: 	declaration_var declaration_sous_programmes
		{
		//printf("declaration valide !\n\n");
		}; 

declaration_var: TOK_MOT_CLE_VAR liste_identificateurs TOK_DEUX_POINTS TOK_MOT_CLE_INT TOK_FINSTR declaration_var
		{
		printf("declaration des variables %s \n\n",$2);
		}
		|
		empty{//printf("empty !\n\n");
};

liste_identificateurs:	variable liste_identificateurs_rec
		{
 /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup($1);
                                if(g_hash_table_lookup_extended(table_variable,strdup($1),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",$1);
g_hash_table_insert(table_variable,strdup($1),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
};

liste_identificateurs_rec : TOK_VIRGULE variable liste_identificateurs_rec
		{
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("int");
                                var->value=strdup($2);
                                if(g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tdecaration avec succes de la variable :  %s\n",$2);
g_hash_table_insert(table_variable,strdup($2),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                //error_semantical=true;
                        }
}
		|
		empty{//printf("empty !\n\n");
};

declaration_sous_programmes:	declaration_sous_programme TOK_FINSTR declaration_sous_programmes
		{}
		|
		empty{//printf("empty !\n\n");
};

declaration_sous_programme:	entete_sous_programme declaration instruction_composee
		{//printf("sous_programme !\n\n");
};

entete_sous_programme:	TOK_MOT_CLE_FUNC variable arguments TOK_DEUX_POINTS TOK_MOT_CLE_INT TOK_FINSTR
		{

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("func");
                                var->value=strdup($2);
                                if(g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION FONCTION !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la fonction :  %s\n",$2);
g_hash_table_insert(table_variable,strdup($2),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE FONCTION !\n");
                                //error_semantical=true;
                        }
}
		|
		TOK_MOT_CLE_PROC variable arguments TOK_FINSTR
		{

                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("proc");
                                var->value=strdup($2);
                                if(g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION PROCEDURE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tcreation avec succes de la procedure :  %s\n",$2);
g_hash_table_insert(table_variable,strdup($2),var);}

                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE PROCEDURE !\n");
                                //error_semantical=true;
                        }
};

arguments:	TOK_PARG  liste_parametres TOK_PARD
		{//printf("arguments !\n\n");
}
		|
		empty{//printf("empty !\n\n");
};


liste_parametres:	parametre liste_parametres_rec
		{};

liste_parametres_rec: TOK_FINSTR parametre liste_parametres_rec
		{}
		|
		empty{//printf("empty !\n\n");
};


parametre:	variable TOK_DEUX_POINTS TOK_MOT_CLE_INT
		{ /*  Variable* var=malloc(sizeof(Variable));
                                var->type=strdup("param");
                                var->value=strdup($1);
				g_hash_table_insert(table_variable,strdup($1),var);*/
                               
}
		|
		TOK_MOT_CLE_VAR variable TOK_DEUX_POINTS TOK_MOT_CLE_INT
		{/*Variable* var=malloc(sizeof(Variable));
                                var->type=strdup("param");
                                var->value=strdup($2);
				g_hash_table_insert(table_variable,strdup($2),var);*/
};

instruction_composee:	TOK_CROG instructions_optionnelles TOK_CROD
		{//printf("instruction composee !\n\n");
};

instructions_optionnelles:	liste_instructions
		{//printf("instruction optionnelle !\n\n");
}
		|
		empty{//printf("empty !\n\n");
};

liste_instructions:	instruction liste_instructions_rec
		{//printf("instruction valide !\n\n");
};

liste_instructions_rec:	TOK_FINSTR instruction liste_instructions_rec
		{}
		|
		empty{//printf("empty !\n\n");
};

		

instruction:	variable TOK_AFFECT expression
		{
                        
                                if(!g_hash_table_lookup_extended(table_variable,strdup($1),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME AFFECTATION VARIABLE !\n");
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tAffectation avec succes de la variable %s\n",$1);}

                       
}
		|
		appel_de_procedure
		{

}
		|
		instruction_composee
		{//printf("instruction -> composee !\n\n");
}
		|
		TOK_MOT_CLE_IF expression TOK_MOT_CLE_THEN instruction TOK_MOT_CLE_ELSE instruction
		{printf("instruction -> conditionnelle if else\n\n");$$=strdup("if_else");}
		|
		TOK_MOT_CLE_WHILE expression TOK_MOT_CLE_DO instruction
		{printf("instrction -> boucle while \n\n");$$=strdup("while_do");};

variable:	TOK_VAR
		{ 
                          $$=strdup($1);              };

appel_de_procedure:	variable
		{Variable* var=g_hash_table_lookup(table_variable,$1);

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                $$=strdup($1);
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,$1);
                                error_semantical=true;
                        }
                        
                        }
		|
		variable TOK_PARG  liste_expressions TOK_PARD
		{
                Variable* var=g_hash_table_lookup(table_variable,$1);

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                                $$=strdup($1);
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,$1);
                                error_semantical=true;
                        }
                                      
};

liste_expressions:	expression liste_expressions_rec
		{//printf("expression valide !\n\n");
};

liste_expressions_rec:	TOK_VIRGULE expression liste_expressions_rec
		{}
		|
		empty{//printf("empty !\n\n");
};

expression:	expression_simple
		{//printf("expression simple valide !\n\n");
}
		|
		expression_simple TOK_EGAL expression_simple
		{//printf("egalité !\n\n");
$$=strcat(strcat(strdup($1),strdup("==")),strdup($3));}
		|
		expression_simple TOK_DIFF expression_simple
		{//printf("different !\n\n");
$$=strcat(strcat(strdup($1),strdup("<>")),strdup($3));}
		|
		expression_simple TOK_INF expression_simple
		{//printf("inferieur !\n\n");
$$=strcat(strcat(strdup($1),strdup("<")),strdup($3));}
		|
		expression_simple TOK_SUP expression_simple
		{//printf("superieur !\n\n");
$$=strcat(strcat(strdup($1),strdup(">")),strdup($3));}
		|
		expression_simple TOK_INF_EGAL expression_simple
		{//printf("inferieur ou egal !\n\n");
$$=strcat(strcat(strdup($1),strdup("<=")),strdup($3));}
		|
		expression_simple TOK_SUP_EGAL expression_simple
		{//printf("superieur ou egal !\n\n");
$$=strcat(strcat(strdup($1),strdup(">=")),strdup($3));};

expression_simple:	terme
		{}
		|
		signe terme
		{}
		|
		expression_simple TOK_PLUS terme
		{printf("\t\t\tAddition\n");$$=strcat(strcat(strdup($1),strdup("+")),strdup($3));}
		|
		expression_simple TOK_MOINS terme
		{printf("\t\t\tSoustraction\n");$$=strcat(strcat(strdup($1),strdup("-")),strdup($3));}
		|
		expression_simple TOK_OU terme
		{printf("\t\t\tOU logique\n");$$=strcat(strcat(strdup($1),strdup("or")),strdup($3));};

terme:		facteur
		{}
		|
		terme TOK_MUL facteur
		{printf("\t\t\tMultiplication\n");$$=strcat(strcat(strdup($1),strdup("*")),strdup($3));}
		|
		terme TOK_DIV_REEL facteur
		{printf("\t\t\tDivision\n");$$=strcat(strcat(strdup($1),strdup("/")),strdup($3));}
		|
		terme TOK_DIV facteur
		{printf("\t\t\tDiv\n");$$=strcat(strcat(strdup($1),strdup("div")),strdup($3));}
		|
		terme TOK_MOD facteur
		{printf("\t\t\tMod\n");$$=strcat(strcat(strdup($1),strdup("mod")),strdup($3));}
		|
		terme TOK_ET facteur
		{printf("\t\t\ET logique\n");$$=strcat(strcat(strdup($1),strdup("and")),strdup($3));};

facteur:	variable
		{ }
		|
		variable TOK_PARG  liste_expressions TOK_PARD
		{Variable* var=g_hash_table_lookup(table_variable,$1);

                        if(var!=NULL && strcmp(var->type,"func")==0){
                                $$=strdup($1);
				printf("SUCCES : appel de fonction !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de fonction ayant le nom : %s) !\n",lineno,$1);
                                error_semantical=true;
                        }}
		|
		TOK_NOMBRE
		{printf("\t\t\tNombre : %ld\n",$1);
                /* Comme le token TOK_NOMBRE est de type entier et que on a type 			expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. 			*/
                int length=snprintf(NULL,0,"%ld",$1);
                char* str=malloc(length+1);
                snprintf(str,length+1,"%ld",$1);
                $$=strdup(str);
                free(str);}
		|
		TOK_PARG expression TOK_PARD
		{}
		|
		TOK_NON facteur
		{};

signe:		TOK_PLUS
		{}
		|
		TOK_MOINS
		{};
		
empty : {$$ = NULL;};

 
%%
 
/* Dans la fonction main on appelle bien la routine yyparse() qui sera genere par Bison. Cette routine appellera yylex() de notre analyseur lexical. */
 
int main(void){
            /* Creation de la table de hachage */
        table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,free,free);
        printf("Debut de l'analyse syntaxique :\n");
        yyparse();
        printf("Fin de l'analyse !\n");
        printf("Resultat :\n");
        if(error_lexical){
                printf("\t-- Echec : Certains lexemes ne font pas partie du lexique du langage ! --\n");
                printf("\t-- Echec a l'analyse lexicale --\n");
        }
        else{
                printf("\t-- Succes a l'analyse lexicale ! --\n");
        }
        if(error_syntaxical){
                printf("\t-- Echec : Certaines phrases sont syntaxiquement incorrectes ! --\n");
                printf("\t-- Echec a l'analyse syntaxique --\n");
        }
        else{
                printf("\t-- Succes a l'analyse syntaxique ! --\n");
                if(error_semantical){
                        printf("\t-- Echec : Certaines phrases sont semantiquement incorrectes ! --\n");
                        printf("\t-- Echec a l'analyse semantique --\n");
                }
                else{
                        printf("\t-- Succes a l'analyse semantique ! --\n");
                }
        }
        /* Liberation memoire : suppression de la table */
        g_hash_table_destroy(table_variable);
        return EXIT_SUCCESS;
}
void yyerror(char *s) {
        fprintf(stderr, "Erreur de syntaxe a la ligne %d: %s\n", lineno, s);
}
