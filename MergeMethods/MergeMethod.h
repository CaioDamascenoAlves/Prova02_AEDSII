//
// Created by caiod on 28/09/2022.
//

#ifndef UNTITLED_MERGEMETHOD_H
#define UNTITLED_MERGEMETHOD_H
#include <stdio.h>
#include "../Employees/employee.h"
#include "../List_ED/list.h"

/*estrutura para armazenar o vetor de partições*/
typedef struct vetor{
    TFunc *func;
    int aux_p;
    int fim_p;
    FILE *f;
}TVet;

/*Algoritmo de intercalacao de particoes básico, recebe
o nome do arquivo de saída, o número de partições a serem intercaladas
e uma lista com os nomes das partições de entrada a serem lidas.*/
void intercalacao_basico(char *nome_arquivo_saida, int num_p, Lista *nome_particoes);

/* Algoritmo de intercalacao de particoes usando arvore de vencedores a ser implementado no trabalho,
 fiquem a vontade para modificar a estrutura dos parâmetros, somente uma sugestão*/
//void intercalacao_arvore_de_vencedores(TPilha **pilha, int *vetTop, char *nome_arquivo_saida, int num_p);

void intercalacao_arvore_de_vencedores(int qtd_particao, Lista *nomes_p);

void vencedor (TFunc **func, int n, FILE *saida, int *c);
#endif //UNTITLED_MERGEMETHOD_H
