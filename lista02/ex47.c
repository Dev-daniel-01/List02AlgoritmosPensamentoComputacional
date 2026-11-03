/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 47
 * Descricao: Soma os elementos de um array de 5 inteiros com aritmetica de ponteiros
 * Data: 10/11/2026
 */

// Exercicio 47: Soma os elementos de um array de 5 inteiros com aritmetica de ponteiros

#include <stdio.h>

int main() {
    int v[5] = {4, 8, 15, 16, 23};
    int *p = v;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += *(p + i); // p + i aponta para o elemento de indice i
    }

    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
