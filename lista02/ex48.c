/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 48
 * Descricao: Ponteiro para ponteiro: imprime x usando q, que aponta para p
 * Data: 10/11/2026
 */

// Exercicio 48: Ponteiro para ponteiro: imprime x usando q, que aponta para p

#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;   // p aponta para x
    int **q = &p;  // q aponta para p (ponteiro para ponteiro)

    // *q e o proprio p; **q e o valor para onde p aponta, ou seja, x
    printf("Valor de x usando q: %d\n", **q);

    return 0;
}
