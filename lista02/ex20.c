/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 20
 * Descricao: Le N, aloca um array de N inteiros com malloc, preenche e imprime
 * Data: 27/10/2026
 */

// Exercicio 20: Le N, aloca um array de N inteiros com malloc, preenche e imprime

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Tamanho do array: ");
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v); // sempre liberar o que foi alocado

    return 0;
}
