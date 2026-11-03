/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 12
 * Descricao: Le dois arrays de 5 elementos e gera um terceiro com a soma deles
 * Data: 27/10/2026
 */

// Exercicio 12: Le dois arrays de 5 elementos e gera um terceiro com a soma deles

#include <stdio.h>

int main() {
    int a[5], b[5], soma[5];

    printf("Digite os 5 elementos do primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite os 5 elementos do segundo array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 5; i++) {
        soma[i] = a[i] + b[i];
    }

    printf("Array soma: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}
