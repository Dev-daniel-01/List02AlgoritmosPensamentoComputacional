/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 18
 * Descricao: Copia o conteudo de um array para outro sem funcoes de biblioteca
 * Data: 27/10/2026
 */

// Exercicio 18: Copia o conteudo de um array para outro sem funcoes de biblioteca

#include <stdio.h>

int main() {
    int origem[5] = {10, 20, 30, 40, 50};
    int destino[5];

    // copia elemento por elemento, sem usar memcpy
    for (int i = 0; i < 5; i++) {
        destino[i] = origem[i];
    }

    printf("Destino: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", destino[i]);
    }
    printf("\n");

    return 0;
}
