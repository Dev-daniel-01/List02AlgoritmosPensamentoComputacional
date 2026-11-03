/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 16
 * Descricao: Le uma matriz 3x3 e soma os elementos da diagonal principal
 * Data: 27/10/2026
 */

// Exercicio 16: Le uma matriz 3x3 e soma os elementos da diagonal principal

#include <stdio.h>

int main() {
    int m[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // na diagonal principal o indice da linha e igual ao da coluna (i == j)
    for (int i = 0; i < 3; i++) {
        soma += m[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}
