/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 31
 * Descricao: Funcao soma(int a, int b) que retorna a soma de dois numeros
 * Data: 10/11/2026
 */

// Exercicio 31: Funcao soma(int a, int b) que retorna a soma de dois numeros

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Soma: %d\n", soma(x, y));

    return 0;
}
