#include <stdio.h>
#include <string.h>

int main(void) {

    struct Aluno {
        char nome[50];
        char matricula[10];
        char curso[20];
    };

    struct Aluno a1;

    strcpy(a1.nome, "Albert Einstein");
    strcpy(a1.matricula, "0123456789");
    strcpy(a1.curso, "Fisica");

    printf("Nome: %s\n", a1.nome);
    printf("Matricula: %s\n", a1.matricula);
    printf("Curso: %s\n", a1.curso);

    return 0;
}
