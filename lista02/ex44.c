/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 44
 * Descricao: Percorre um array de inteiros com um ponteiro e imprime os elementos
 * Data: 10/11/2026
 */

// Exercicio 44: Percorre um array de inteiros com um ponteiro e imprime os elementos

#include <stdio.h>

int main() {
    int v[] = {3, 6, 9, 12, 15};
    int n = sizeof(v) / sizeof(v[0]);

    // o nome do array ja e o endereco do primeiro elemento
    for (int *p = v; p < v + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
