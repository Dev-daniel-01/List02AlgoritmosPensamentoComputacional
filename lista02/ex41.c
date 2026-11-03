/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 41
 * Descricao: O que e um ponteiro e a diferenca entre *p e &variavel
 * Data: 10/11/2026
 */

// Exercicio 41: O que e um ponteiro e a diferenca entre *p e &variavel
//
// PONTEIRO e uma variavel que guarda um ENDERECO de memoria, em vez de
// guardar diretamente um valor. Atraves desse endereco e possivel ler ou
// alterar a variavel para a qual ele "aponta".
//
//   int x = 10;   // x guarda o valor 10
//   int *p;       // p e um ponteiro para int
//   p = &x;       // p passa a guardar o endereco de x
//
// &variavel  -> operador "endereco de". Retorna ONDE a variavel esta na
//               memoria. Ex: &x devolve algo como 0x7ffd5c3a.
//
// *p         -> operador de "desreferencia" (ou indirecao). Acessa o VALOR
//               guardado no endereco que p contem. Ex: *p vale 10, e
//               *p = 20 altera o proprio x para 20.
//
// Observacao: na DECLARACAO (int *p) o asterisco so indica que p e um
// ponteiro; no USO (*p) ele significa "o conteudo apontado por p".
//
// Resumindo: & pega o endereco, * vai ate o endereco e pega o valor.
// Eles sao operacoes inversas: *(&x) e o mesmo que x.

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Valor de x:           %d\n", x);
    printf("Endereco de x (&x):   %p\n", (void *) &x);
    printf("Conteudo de p:        %p\n", (void *) p);
    printf("Valor apontado (*p):  %d\n", *p);

    return 0;
}
