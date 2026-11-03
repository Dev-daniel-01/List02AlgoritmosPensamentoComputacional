/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 06
 * Descricao: Pede um numero positivo ate o usuario digitar um valido (while)
 * Data: 20/10/2026
 */

// Exercicio 6: Pede um numero positivo ate o usuario digitar um valido (while)

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%d", &n);
    }

    printf("Numero valido: %d\n", n);

    return 0;
}
