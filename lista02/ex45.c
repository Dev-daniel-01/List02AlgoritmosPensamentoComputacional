/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 45
 * Descricao: Funcao troca(int *a, int *b) que troca os valores de dois inteiros
 * Data: 10/11/2026
 */

// Exercicio 45: Funcao troca(int *a, int *b) que troca os valores de dois inteiros

#include <stdio.h>

void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Antes:  x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
