/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 17
 * Descricao: Le o nome de 5 cidades em um array de strings e imprime a lista
 * Data: 27/10/2026
 */

// Exercicio 17: Le o nome de 5 cidades em um array de strings e imprime a lista

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];

    for (int i = 0; i < 5; i++) {
        printf("Cidade %d: ", i + 1);
        fgets(nomes[i], 50, stdin);              // fgets aceita nomes com espaco
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // remove o '\n' do final
    }

    printf("\n--- CIDADES ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    return 0;
}
