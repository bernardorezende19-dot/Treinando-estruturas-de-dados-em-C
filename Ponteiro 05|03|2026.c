#include <stdio.h>

int main(void) {
    int x = 10;
    int *pont;
    pont = &x;
    printf("valor de x: %d\n" , x);
    printf("Endereço de x: %p\n",&x);
    printf("Conteudo do pont (endereço de x): %p\n" , pont);
    printf("Valor apontado por pont: %d\n", *pont);

    return 0;
}
