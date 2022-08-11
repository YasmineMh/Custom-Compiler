#include "simple.h"
 
void debut_code(){
        fprintf(fichier, "/* FICHIER GENERE PAR LE COMPILATEUR PROJET */\n\n");
        fprintf(fichier, "#include<stdlib.h>\n#include<stdbool.h>\n#include<stdio.h>\n\n");
        fprintf(fichier, "int main(void){\n");
}
 
void fin_code(){
        fprintf(fichier, "\treturn EXIT_SUCCESS;\n");
        fprintf(fichier, "}\n");
}
 
void genere_code(GNode* ast){
        if(ast){
                switch((long)ast->data){
                        case PROGRAMME:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case DECLARATION:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case DECLARATION_ID:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case SOUS_PROGRAMMES:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case SOUS_PROGRAMME:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                genere_code(g_node_nth_child(ast,2));
                                break;
                        case FONCTION:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case PROCEDURE:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case ARGUMENTS:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case PARAMETRES:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;

                        case PARAMETRE:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case INSTRUCTIONS:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case INSTRUCTION:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case IF_ELSE:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                genere_code(g_node_nth_child(ast,2));
                                break;
                        case WHILE_DO:
                                genere_code(g_node_nth_child(ast,0));
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case APPEL_PROCEDURE:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case EXPRESSIONS:
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case VARIABLE:
                                fprintf(fichier,"%s",(char*)g_node_nth_child(ast,0)->data);
                                break;
                        case AFFECTATIONE:
                                fprintf(fichier,"\tlong ");
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"=");
                                genere_code(g_node_nth_child(ast,1));
                                fprintf(fichier,";\n");
                                break;
                        case ENTIER:
                                fprintf(fichier,"%s",(char*)g_node_nth_child(ast,0)->data);
                                break;
                        case EGAL:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"==");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case DIFF:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"!=");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case INF:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"<");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case SUP:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,">");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case INF_EGAL:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"<=");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case SUP_EGAL:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,">=");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case MOD:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"%");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case DIV:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"/");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case PLUS:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"+");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case MOINS:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"-");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case MUL:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"*");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case DIV_REEL:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"/");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case ET:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"&&");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case OU:
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,"||");
                                genere_code(g_node_nth_child(ast,1));
                                break;
                        case NON:
                                fprintf(fichier,"!");
                                genere_code(g_node_nth_child(ast,0));
                                break;
                        case EXPR_PAR:
                                fprintf(fichier,"(");
                                genere_code(g_node_nth_child(ast,0));
                                fprintf(fichier,")");
                                break;
                }
        }
}
