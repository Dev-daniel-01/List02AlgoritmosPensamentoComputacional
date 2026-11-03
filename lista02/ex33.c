/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 33
 * Descricao: Funcao que recebe N e retorna o fatorial de N usando for
 * Data: 10/11/2026
 */

// Exercicio 33: Funcao que recebe N e retorna o fatorial de N usando for

#include <stdio.h>

// long long porque o fatorial cresce muito rapido (13! ja estoura um int)
long long fatorial(int n) {
    long long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fatorial(n));

    return 0;
}
