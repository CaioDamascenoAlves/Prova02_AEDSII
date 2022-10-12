//
// Created by caiod on 28/09/2022.
//

#include <stdlib.h>
#include <stdio.h>

int menu(){
    //setlocale (LC_ALL , "");
    int op;

    printf("\n\n**************MENU************** \n\nBASE DE DADOS\n");

    printf("\nDigite 1 para utilizar a base de dados funcionario de teste.");
    printf("\nDigite 2 se desejar imprimir a base de dados funcionario.");
    printf("\nDigite 3 se desejar imprimir o índice primário da base de funcionarios.");


    printf("\n\nINTERPOLAÇÃO\n");
    printf("\nDigite 4 para utilizar a estrutura de interpolação teste.");
    printf("\nDigite 5, 6  para gerar particões ordenadas utilizando, respectivamente, os métodos: classificação interna ou seleção natural.");
    printf("\nDigite 7 para criar uma pilha com o conteúdo das partições geradas.");
    printf("\nDigite 8, 9 para gerar intercalar as partições ordenadas utilizando, respectivamente, os métodos: intercalação basico, intercalacao arvore de vencedores.");

    printf("\n\nINSERTION SORT E ÁRVORE BINÁRIA, ARVORE B\n");
    printf("\nDigite 10 para criar árvores binárias em memória interna e externa.");
    printf("\nDigite 11 para ordenar a base de dados utilizando o método insertion sort em disco. ");
    printf("\nDigite 12 para criar Árvore B+ de prefixo simples. ");


    printf("\nDigite -1 para sair: \n\nDigite sua opção: ");
    scanf("%d", &op);
    system("cls");
    return op;

}
