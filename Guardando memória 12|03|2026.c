#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int tamanho;

    printf("Quantos elementos deseja:");
    scanf("%d" , &tamanho);

    int *v=(int *) malloc(tamanho *sizeof(int));

    if (v== NULL){
        printf("Erro: Memória insuficiente!\n");
        return 1;
    }
    else{
        printf("\nAlocação feita com sucesso");
    }
    printf("\nTamanho:""%d\n", tamanho);
    free(v);

    return 0;
}
