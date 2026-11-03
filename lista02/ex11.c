/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 11
 * Descricao: Preenche um array de 10 posicoes com numeros aleatorios (rand)
 * Data: 27/10/2026
 */

// Exercicio 11: Preenche um array de 10 posicoes com numeros aleatorios (rand)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[10];

    srand(time(NULL)); // semente diferente a cada execucao

    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100; // valores de 0 a 99
    }

    for (int i = 0; i < 10; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}
