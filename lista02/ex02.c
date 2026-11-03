/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 02
 * Descricao: Le a idade de 10 pessoas e calcula a media usando for
 * Data: 20/10/2026
 */

// Exercicio 2: Le a idade de 10 pessoas e calcula a media usando for

#include <stdio.h>

int main() {
    int idade, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma += idade;
    }

    float media = (float) soma / 10; // cast para nao perder as casas decimais
    printf("Media das idades: %.2f\n", media);

    return 0;
}
