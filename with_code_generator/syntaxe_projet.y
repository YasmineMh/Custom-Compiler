%{
 
#include "projet.h"
bool error_syntaxical=false;
bool error_semantical=false;

/* Notre table de hachage */
GHashTable* table_variable;

/* Notre structure Variable qui a comme membre le type et un pointeur generique vers la valeur */
typedef struct Variable Variable;

struct Variable{
        char* type;
        GNode* value;
};
 
%}
 
/* L'union dans Bison est utilisee pour typer nos tokens ainsi que nos non terminaux. Ici nous avons declare une union avec deux types : nombre de type int et texte de type pointeur de char (char*) */
 
%union {
        long nombre;
        char* texte;
        GNode*  noeud;
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

%type<noeud>            programmes
%type<noeud>            declaration
%type<noeud>            declaration_var
%type<noeud>            liste_identificateurs
%type<noeud>            liste_identificateurs_rec
%type<noeud>            declaration_sous_programmes
%type<noeud>            declaration_sous_programme
%type<noeud>            entete_sous_programme
%type<noeud>            arguments
%type<noeud>            liste_parametres
%type<noeud>            liste_parametres_rec
%type<noeud>            parametre
%type<noeud>            instruction_composee
%type<noeud>            instructions_optionnelles
%type<noeud>            liste_instructions
%type<noeud>            liste_instructions_rec
%type<noeud>            instruction
%type<noeud>            variable
%type<noeud>            appel_de_procedure
%type<noeud>            liste_expressions
%type<noeud>            expression
%type<noeud>            expression_simple
%type<noeud>            terme
%type<noeud>            facteur
%type<noeud>            signe
%type<noeud>            empty
 
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

entree:         programmes{
                        genere_code($1);
                        g_node_destroy($1);
                };

programmes: 	TOK_MOT_CLE_PROG TOK_VAR TOK_FINSTR declaration instruction_composee
		{
		//printf("Resultat : squelette du programme valide !\n\n");
                        $$=g_node_new((gpointer)PROGRAMME);
			g_node_append_data($$,strdup($2));
                        g_node_append($$,$4);
                        g_node_append($$,$5);
		}
		|
		error{
			//fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}; 

declaration: 	declaration_var declaration_sous_programmes
		{
                        $$=g_node_new((gpointer)DECLARATION);
                        g_node_append($$,$1);
                        g_node_append($$,$2);
		}; 

declaration_var: TOK_MOT_CLE_VAR liste_identificateurs TOK_DEUX_POINTS TOK_MOT_CLE_INT TOK_FINSTR declaration_var
		{
                        $$=g_node_new((gpointer)DECLARATION);
                        g_node_append($$,$2);
                        g_node_append($$,$6);
		}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

liste_identificateurs:	variable liste_identificateurs_rec
		{

Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
                        if(var==NULL){
                                /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                                var=malloc(sizeof(Variable));
                                if(var!=NULL){
                                        var->type=strdup("int");
                                        var->value=$1;
                                        if(!g_hash_table_lookup_extended(table_variable,strdup($1),NULL,NULL)){g_hash_table_insert(table_variable,strdup($1),var);
                                                $$=g_node_new((gpointer)DECLARATION_ID);
                                                g_node_append($$,$2);
                                        }else{
                                                fprintf(stderr,"ERREUR - PROBLEME ID !\n");
                                                exit(-1);
                                        }
                                }else{
                                        fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE ID !\n");
                                        exit(-1);
                                }
                        }else{
                                $$=g_node_new((gpointer)DECLARATION_ID);
                                g_node_append_data($$,$1);
                                g_node_append($$,$2);
                        }
};

liste_identificateurs_rec : TOK_VIRGULE variable liste_identificateurs_rec
		{
                        Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
                        if(var==NULL){
                                /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                                var=malloc(sizeof(Variable));
                                if(var!=NULL){
                                        var->type=strdup("int");
                                        var->value=$2;
                                        if(!g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){g_hash_table_insert(table_variable,strdup($2),var);
                                                $$=g_node_new((gpointer)DECLARATION_ID);
                                                g_node_append($$,$3);
                                        }else{
                                                fprintf(stderr,"ERREUR - PROBLEME ID !\n");
                                                exit(-1);
                                        }
                                }else{
                                        fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE ID !\n");
                                        exit(-1);
                                }
                        }else{
                                $$=g_node_new((gpointer)DECLARATION_ID);
                                g_node_append_data($$,$2);
                                g_node_append($$,$3);
                        }
}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

declaration_sous_programmes:	declaration_sous_programme TOK_FINSTR declaration_sous_programmes
		{
		        $$=g_node_new((gpointer)SOUS_PROGRAMMES);
                        g_node_append($$,$1);
                        g_node_append($$,$3);
}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

declaration_sous_programme:	entete_sous_programme declaration instruction_composee
		{	$$=g_node_new((gpointer)SOUS_PROGRAMME);
                        g_node_append($$,$1);
                        g_node_append($$,$2);
                        g_node_append($$,$3);
};

entete_sous_programme:	TOK_MOT_CLE_FUNC variable arguments TOK_DEUX_POINTS TOK_MOT_CLE_INT TOK_FINSTR
		{

Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
                        if(var==NULL){
                                /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                                var=malloc(sizeof(Variable));
                                if(var!=NULL){
                                        var->type=strdup("func");
                                        var->value=$2;
                                        if(!g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){g_hash_table_insert(table_variable,strdup($2),var);
                                                $$=g_node_new((gpointer)FONCTION);
                                                g_node_append($$,$3);
                                        }else{
                                                fprintf(stderr,"ERREUR - PROBLEME FONCTION !\n");
                                                exit(-1);
                                        }
                                }else{
                                        fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE FONCTION !\n");
                                        exit(-1);
                                }
                        }else{
                                $$=g_node_new((gpointer)FONCTION);
                                g_node_append_data($$,$2);
                                g_node_append($$,$3);
                        }
}
		|
		TOK_MOT_CLE_PROC variable arguments TOK_FINSTR
		{
Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
                        if(var==NULL){
                                /* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
                                var=malloc(sizeof(Variable));
                                if(var!=NULL){
                                        var->type=strdup("proc");
                                        var->value=$2;
                                        if(!g_hash_table_lookup_extended(table_variable,strdup($2),NULL,NULL)){g_hash_table_insert(table_variable,strdup($2),var);
                                                $$=g_node_new((gpointer)PROCEDURE);
                                                g_node_append($$,$3);
                                        }else{
                                                fprintf(stderr,"ERREUR - PROBLEME PROCEDURE !\n");
                                                exit(-1);
                                        }
                                }else{
                                        fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE PROCEDURE !\n");
                                        exit(-1);
                                }
                        }else{
                                $$=g_node_new((gpointer)PROCEDURE);
                                g_node_append_data($$,$2);
                                g_node_append($$,$3);
                        }
};

arguments:	TOK_PARG  liste_parametres TOK_PARD
		{$$=g_node_new((gpointer)ARGUMENTS);
                        g_node_append($$,$2);

}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};


liste_parametres:	parametre liste_parametres_rec
		{$$=g_node_new((gpointer)PARAMETRES);
                        g_node_append($$,$1);
                        g_node_append($$,$2);};

liste_parametres_rec: TOK_FINSTR parametre liste_parametres_rec
		{$$=g_node_new((gpointer)PARAMETRES);
                        g_node_append($$,$2);
                        g_node_append($$,$3);}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};


parametre:	variable TOK_DEUX_POINTS TOK_MOT_CLE_INT
		{$$=g_node_new((gpointer)PARAMETRE);
			g_node_append_data($$,strdup($1));
}
		|
		TOK_MOT_CLE_VAR variable TOK_DEUX_POINTS TOK_MOT_CLE_INT
		{$$=g_node_new((gpointer)PARAMETRE);
			g_node_append_data($$,strdup($2));
};

instruction_composee:	TOK_CROG instructions_optionnelles TOK_CROD
		{$$=$2;
};

instructions_optionnelles:	liste_instructions
		{$$=$1;
}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

liste_instructions:	instruction liste_instructions_rec
		{$$=g_node_new((gpointer)INSTRUCTIONS);
                        g_node_append($$,$1);
                        g_node_append($$,$2);
};

liste_instructions_rec:	TOK_FINSTR instruction liste_instructions_rec
		{$$=g_node_new((gpointer)INSTRUCTIONS);
                        g_node_append($$,$2);
                        g_node_append($$,$3);}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

		

instruction:	variable TOK_AFFECT expression
		{
                        
                                if(!g_hash_table_lookup_extended(table_variable,strdup($1),NULL,NULL)){
                                        fprintf(stderr,"ERREUR - PROBLEME AFFECTATION VARIABLE !\n");$$=g_node_new((gpointer)INSTRUCTION);
                                g_node_append_data($$,$1);
                                g_node_append($$,$3);
					error_semantical=true;
                                       
                                }
				else 
				{ printf("\t\tAffectation avec succes de la variable %s\n",$1);
					$$=g_node_new((gpointer)INSTRUCTION);
                                                g_node_append($$,$3);
}

                       
}
		|
		appel_de_procedure
		{
$$=$1;

}
		|
		instruction_composee
		{$$=$1;
}
		|
		TOK_MOT_CLE_IF expression TOK_MOT_CLE_THEN instruction TOK_MOT_CLE_ELSE instruction
		{printf("instruction -> conditionnelle if else\n\n");
			$$=g_node_new((gpointer)IF_ELSE);
                        g_node_append($$,$2);
                        g_node_append($$,$4);
                        g_node_append($$,$6);}
		|
		TOK_MOT_CLE_WHILE expression TOK_MOT_CLE_DO instruction
		{printf("instrction -> boucle while \n\n");
		$$=g_node_new((gpointer)WHILE_DO);
                        g_node_append($$,$2);
                        g_node_append($$,$4);};

variable:	TOK_VAR
		{ 
                               $$=g_node_new((gpointer)VARIABLE);
                                g_node_append_data($$,strdup($1));              };

appel_de_procedure:	variable
		{Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);

                        if(var!=NULL && strcmp(var->type,"proc")==0){
                         $$=g_node_new((gpointer)APPEL_PROCEDURE);
                             g_node_append_data($$,$1);
				printf("SUCCES : appel de procedure !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de procedure ayant le nom : %s) !\n",lineno,$1);
                                error_semantical=true;
                        }
                        


                                      
};

liste_expressions:	expression liste_expressions_rec
		{$$=g_node_new((gpointer)EXPRESSIONS);
                        g_node_append($$,$1);
};

liste_expressions_rec:	TOK_VIRGULE expression liste_expressions_rec
		{$$=g_node_new((gpointer)EXPRESSIONS);
                        g_node_append($$,$2);}
		|
		empty{$$=g_node_new((gpointer)CODE_VIDE);
};

expression:	expression_simple
		{$$=$1;
}
		|
		expression_simple TOK_EGAL expression_simple
		{$$=g_node_new((gpointer)EGAL);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_DIFF expression_simple
		{$$=g_node_new((gpointer)DIFF);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_INF expression_simple
		{$$=g_node_new((gpointer)INF);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_SUP expression_simple
		{$$=g_node_new((gpointer)SUP);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_INF_EGAL expression_simple
		{$$=g_node_new((gpointer)INF_EGAL);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_SUP_EGAL expression_simple
		{$$=g_node_new((gpointer)SUP_EGAL);
                        g_node_append($$,$1);
                        g_node_append($$,$3);};

expression_simple:	terme
		{$$=$1;}
		|
		signe terme
		{$$=g_node_new((gpointer)S_TERME);
                        g_node_append($$,$1);
                        g_node_append($$,$2);}
		|
		expression_simple TOK_PLUS terme
		{$$=g_node_new((gpointer)PLUS);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_MOINS terme
		{$$=g_node_new((gpointer)MOINS);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		expression_simple TOK_OU terme
		{$$=g_node_new((gpointer)OU);
                        g_node_append($$,$1);
                        g_node_append($$,$3);};

terme:		facteur
		{$$=$1;}
		|
		terme TOK_MUL facteur
		{$$=g_node_new((gpointer)MUL);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		terme TOK_DIV_REEL facteur
		{$$=g_node_new((gpointer)DIV_REEL);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		terme TOK_DIV facteur
		{$$=g_node_new((gpointer)DIV);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		terme TOK_MOD facteur
		{$$=g_node_new((gpointer)MOD);
                        g_node_append($$,$1);
                        g_node_append($$,$3);}
		|
		terme TOK_ET facteur
		{$$=g_node_new((gpointer)ET);
                        g_node_append($$,$1);
                        g_node_append($$,$3);};

facteur:	variable
		{$$=$1; }
		|
		variable TOK_PARG  liste_expressions TOK_PARD
		{
Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);

                        if(var!=NULL && strcmp(var->type,"func")==0){
                         $$=g_node_new((gpointer)APPEL_FONCTION);
                             g_node_append_data($$,$1);
			g_node_append($$,$3);
				printf("SUCCES :a ppel de fonction !\n\n");
                        }else{
                                fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Pas de fonction ayant le nom : %s) !\n",lineno,$1);
                                error_semantical=true;
                        }
                        
}
		|
		TOK_NOMBRE
		{printf("\t\t\tNombre : %ld\n",$1);
                    /* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
                                        int length=snprintf(NULL,0,"%ld",$1);
                                        char* str=malloc(length+1);
                                        snprintf(str,length+1,"%ld",$1);
                                        $$=g_node_new((gpointer)ENTIER);
                                        g_node_append_data($$,strdup(str));
                                        free(str);}
		|
		TOK_PARG expression TOK_PARD
		{$$=$2;}
		|
		TOK_NON facteur
		{$$=$2;};

signe:		TOK_PLUS
		{$$=$1;}
		|
		TOK_MOINS
		{$$=$1;};
		
empty : {$$ = NULL;};

 
%%
 
/* Dans la fonction main on appelle bien la routine yyparse() qui sera genere par Bison. Cette routine appellera yylex() de notre analyseur lexical. */
 
int main(void){
                   /* recuperation du nom de fichier d'entree (langage Simple) donne en parametre */
        char* fichier_entree=strdup(argv[1]);
        /* ouverture du fichier en lecture dans le flux d'entree stdin */
        stdin=fopen(fichier_entree,"r");
        /* creation fichier de sortie (langage C) */
        char* fichier_sortie=strdup(argv[1]);
        /* remplace l'extension par .c */
        strcpy(rindex(fichier_sortie, '.'), ".c");
        /* ouvre le fichier cree en ecriture */
        fichier=fopen(fichier_sortie, "w");
        /* Creation de la table de hachage */
        table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,free,free);
        printf("Debut de l'analyse syntaxique :\n");
        debut_code();
        yyparse();
        fin_code();
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
        /* Suppression du fichier genere si erreurs analyse */
        if(error_lexical||error_syntaxical||error_semantical){
                remove(fichier_sortie);
                printf("ECHEC GENERATION CODE !\n");
        }
        else{
                printf("Le fichier \"%s\" a ete genere !\n",fichier_sortie);
        }
        /* Fermeture des flux */
        fclose(fichier);
        fclose(stdin);
        /* Liberation memoire */
        free(fichier_entree);
        free(fichier_sortie);
        g_hash_table_destroy(table_variable);
        return EXIT_SUCCESS;
}
void yyerror(char *s) {
        fprintf(stderr, "Erreur de syntaxe a la ligne %d: %s\n", lineno, s);
}
