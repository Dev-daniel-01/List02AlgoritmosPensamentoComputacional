/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 43
 * Descricao: Usa o ponteiro p para alterar o valor de x para 20
 * Data: 10/11/2026
 */

// Exercicio 43: Usa o ponteiro p para alterar o valor de x para 20

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Antes:  x = %d\n", x);

    *p = 20; // altera o conteudo do endereco apontado, ou seja, o proprio x

    printf("Depois: x = %d\n", x);

    return 0;
}
