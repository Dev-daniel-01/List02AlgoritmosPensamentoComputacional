/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 10
 * Descricao: Imprime os N primeiros termos de Fibonacci usando while
 * Data: 20/10/2026
 */

// Exercicio 10: Imprime os N primeiros termos de Fibonacci usando while
//
// Comparacao com a versao anterior (lista 01, feita com for):
// - Com FOR, a inicializacao, a condicao e o incremento do contador ficam
//   juntos na mesma linha: for (int i = 1; i <= n; i++).
// - Com WHILE, o contador e declarado antes do laco e incrementado
//   manualmente dentro dele. Se esquecer o i++, o laco nunca termina.
// - O resultado e o mesmo. O for e mais indicado quando ja sabemos quantas
//   repeticoes faremos (N termos); o while, quando a parada depende de uma
//   condicao que muda durante a execucao.

#include <stdio.h>

int main() {
    int n;
    int anterior = 0, atual = 1, proximo;

    printf("Quantos termos? ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d ", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        i++;
    }
    printf("\n");

    return 0;
}
