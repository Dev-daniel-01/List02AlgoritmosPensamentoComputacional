/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 34
 * Descricao: Funcao fatorial implementada de forma recursiva
 * Data: 10/11/2026
 */

// Exercicio 34: Funcao fatorial implementada de forma recursiva
//
// Comparacao com a versao iterativa (exercicio 33):
// - ITERATIVA: usa um laco for e uma variavel acumuladora. Gasta memoria
//   constante e costuma ser mais rapida.
// - RECURSIVA: a funcao chama a si mesma com n - 1 ate chegar no caso base
//   (n <= 1). O codigo fica mais curto e parecido com a definicao
//   matematica (n! = n * (n-1)!), mas cada chamada ocupa espaco na pilha;
//   para N muito grande pode estourar a pilha (stack overflow).

#include <stdio.h>

long long fatorial(int n) {
    if (n <= 1) {
        return 1;              // caso base: para a recursao
    }
    return n * fatorial(n - 1); // passo recursivo
}

int main() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fatorial(n));

    return 0;
}
