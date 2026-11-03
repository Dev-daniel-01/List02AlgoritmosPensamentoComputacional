/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 07
 * Descricao: Imprime as potencias de 2 menores que 1000 usando for
 * Data: 20/10/2026
 */

// Exercicio 7: Imprime as potencias de 2 menores que 1000 usando for

#include <stdio.h>

int main() {
    int expoente = 0;

    // a cada volta o valor e multiplicado por 2 (2^0, 2^1, 2^2, ...)
    for (int potencia = 1; potencia < 1000; potencia *= 2) {
        printf("2^%d = %d\n", expoente, potencia);
        expoente++;
    }

    return 0;
}
