/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 38
 * Descricao: Usa as funcoes soma e dobrar de util.c / util.h
 * Data: 10/11/2026
 */

// Exercicio 38: programa principal que usa as funcoes de util.c
//
// Como compilar (os dois .c juntos):
//   gcc main.c util.c -o ex38

#include <stdio.h>
#include "util.h"

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    int resultado = soma(a, b);
    printf("Soma: %d\n", resultado);

    dobrar(&resultado);
    printf("Soma dobrada: %d\n", resultado);

    return 0;
}
