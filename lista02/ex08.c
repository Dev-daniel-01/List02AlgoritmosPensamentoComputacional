/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 08
 * Descricao: Desenha um retangulo de asteriscos com altura e largura informadas
 * Data: 20/10/2026
 */

// Exercicio 8: Desenha um retangulo de asteriscos com altura e largura informadas

#include <stdio.h>

int main() {
    int altura, largura;

    printf("Altura: ");
    scanf("%d", &altura);
    printf("Largura: ");
    scanf("%d", &largura);

    for (int i = 0; i < altura; i++) {      // laco externo: linhas
        for (int j = 0; j < largura; j++) { // laco interno: colunas
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
