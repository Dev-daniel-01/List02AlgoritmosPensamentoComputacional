/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 42
 * Descricao: Declara x = 10, um ponteiro p para x e imprime x pelo ponteiro
 * Data: 10/11/2026
 */

// Exercicio 42: Declara x = 10, um ponteiro p para x e imprime x pelo ponteiro

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x; // p guarda o endereco de x

    printf("Valor de x usando o ponteiro: %d\n", *p);

    return 0;
}
