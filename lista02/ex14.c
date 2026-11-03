/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 14
 * Descricao: Le 5 numeros, ordena com Bubble Sort e exibe o array
 * Data: 27/10/2026
 */

// Exercicio 14: Le 5 numeros, ordena com Bubble Sort e exibe o array

#include <stdio.h>

int main() {
    int v[5];

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    // Bubble Sort: compara vizinhos e troca se estiverem fora de ordem.
    // A cada passada o maior valor "borbulha" para o final.
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("Array ordenado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
