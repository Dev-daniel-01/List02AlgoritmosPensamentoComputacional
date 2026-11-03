/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 37
 * Descricao: Funcao dobrar(int *x) que dobra o valor da variavel passada
 * Data: 10/11/2026
 */

// Exercicio 37: Funcao dobrar(int *x) que dobra o valor da variavel passada

#include <stdio.h>

// recebe o ENDERECO da variavel, entao consegue alterar o valor original
void dobrar(int *x) {
    *x = *x * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Valor dobrado: %d\n", numero);

    return 0;
}
