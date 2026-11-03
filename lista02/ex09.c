/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 09
 * Descricao: Desenha um triangulo retangulo de asteriscos com a base informada
 * Data: 20/10/2026
 */

// Exercicio 9: Desenha um triangulo retangulo de asteriscos com a base informada

#include <stdio.h>

int main() {
    int base;

    printf("Base do triangulo: ");
    scanf("%d", &base);

    // a linha i tem i asteriscos, ate chegar na base
    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
