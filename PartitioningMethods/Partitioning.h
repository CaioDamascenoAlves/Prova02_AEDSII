//
// Created by caiod on 28/09/2022.
//

#ifndef UNTITLED_PARTITIONING_H
#define UNTITLED_PARTITIONING_H
#include <stdio.h>

#include "../Employees/employee.h"
#include "../List_ED/list.h"

/* Algoritmo de geracao de particoes por Classificacao Interna, recebe como parâmetro
o arquivo de dados de entrada, a lista contendo os nomes dos arquivos de saída das partições,
o númer de elementos M a ser armazenado em cada partição e o número de registro total do arquivo.*/
void classificacao_interna(FILE *arq, Lista *nome_arquivos_saida, int M, int nFunc);

/*Algoritmo a ser implementado no trabalho de geracao de particoes por Selecao Natural recebe como parâmetro
o arquivo de dados de entrada, a lista contendo os nomes dos arquivos de saída das partições,
o númer de elementos M a ser armazenado em cada partição e o número de registro total do arquivo e o tamanho do reservatório.
Fiquem a vontade para modificar a estrutura, foi uma sugestão.*/
void selecao_natural(FILE *arq, Lista *nome_arquivos_saida, int M, int nFunc, int *qtd_particoes);

TFunc *encontra_menor(TFunc **memoria, int M, int *posicao);

void ordena (TFunc **v, int M);

int reservatorio (TFunc *func, int contador, FILE *reservatorio, int M);

void organiza_p(Lista* nome_arq, int qtd, int nFunc);

void exibe (Lista *nome_arq, int qtd, int nFunc);

#endif //UNTITLED_PARTITIONING_H
