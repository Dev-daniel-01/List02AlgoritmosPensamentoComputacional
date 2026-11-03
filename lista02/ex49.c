/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 49
 * Descricao: Cria um array de tamanho N com malloc, preenche e libera a memoria
 * Data: 10/11/2026
 */

// Exercicio 49: Cria um array de tamanho N com malloc, preenche e libera a memoria

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Tamanho N: ");
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    // preenche usando aritmetica de ponteiros: quadrados de 1 a N
    for (int i = 0; i < n; i++) {
        *(v + i) = (i + 1) * (i + 1);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");

    free(v);  // devolve a memoria ao sistema
    v = NULL; // evita usar um ponteiro que nao e mais valido

    return 0;
}
