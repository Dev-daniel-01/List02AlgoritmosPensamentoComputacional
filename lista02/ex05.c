/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 05
 * Descricao: Imprime os numeros de 10 a 1 usando while e depois usando for
 * Data: 20/10/2026
 */

// Exercicio 5: Imprime os numeros de 10 a 1 usando while e depois usando for

#include <stdio.h>

int main() {
    // Versao com while
    printf("Com while: ");
    int i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    // Versao com for
    printf("Com for:   ");
    for (int j = 10; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
