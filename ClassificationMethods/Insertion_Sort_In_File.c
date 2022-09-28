#include "Insertion_Sort_In_File.h"

void insertion_sort_disco(FILE *arq, int tam) {
    rewind(arq); //posiciona cursor no inicio do arquivo
    int i;
    //faz o insertion sort
    for (int j = 2; j <= tam; j++) {
        //posiciona o arquivo no registro j
        fseek(arq, (j-1) * tamanho_registro(), SEEK_SET);
        TFunc *fj = le_funcionario(arq);
        //printf("\n********* Funcionario atual: %d\n", fj->cod);
        i = j - 1;
        //posiciona o cursor no registro i
        fseek(arq, (i-1) * tamanho_registro(), SEEK_SET);
        do{
            TFunc *fi = le_funcionario(arq);
            if( (fi->cod < fj->cod)){
                break;
            }
            //printf("fi = %d\n", fi->cod);

            //posiciona o cursor no registro i+1
            fseek(arq, i * tamanho_registro(), SEEK_SET);
            //  printf("Salvando funcionario %d na posicao %d\n", fi->cod, i+1);
            salva_funcionario(fi, arq);
            i = i - 1;
            //lê registro i
            fseek(arq, (i-1) * tamanho_registro(), SEEK_SET);
            // fi = le_funcionario(arq);
            //  printf("fi = %d; i = %d\n", fi->cod, i);

            free(fi);
        }while ((i > 0) );

        //posiciona cursor no registro i + 1
        fseek(arq, (i) * tamanho_registro(), SEEK_SET);
        //printf("*** Salvando funcionario %d na posicao %d\n", fj->cod, i+1);
        //salva registro j na posição i
        salva_funcionario(fj, arq);
        free(fj);
    }
    //descarrega o buffer para ter certeza que dados foram gravados
    fflush(arq);
}
