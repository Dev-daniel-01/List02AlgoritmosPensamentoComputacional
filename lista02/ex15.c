/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 15
 * Descricao: Le uma matriz 2x3 e guarda a soma de cada linha em um array
 * Data: 27/10/2026
 */

// Exercicio 15: Le uma matriz 2x3 e guarda a soma de cada linha em um array

#include <stdio.h>

int main() {
    int m[2][3];
    int somaLinha[2] = {0, 0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            somaLinha[i] += m[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinha[i]);
    }

    return 0;
}
