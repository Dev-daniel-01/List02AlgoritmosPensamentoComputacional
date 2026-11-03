/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 01
 * Descricao: Le N e calcula a soma de 1 ate N usando for
 * Data: 20/10/2026
 */

// Exercicio 1: Le N e calcula a soma de 1 ate N usando for

#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", n, soma);

    return 0;
}
