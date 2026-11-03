/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 13
 * Descricao: Procura um numero-chave em um array de 10 numeros
 * Data: 27/10/2026
 */

// Exercicio 13: Procura um numero-chave em um array de 10 numeros

#include <stdio.h>

int main() {
    int numeros[10], chave;
    int posicao = -1; // -1 indica que ainda nao foi encontrado

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numero-chave: ");
    scanf("%d", &chave);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == chave) {
            posicao = i;
            break; // para na primeira ocorrencia
        }
    }

    if (posicao != -1) {
        printf("Chave %d encontrada no indice %d\n", chave, posicao);
    } else {
        printf("Chave %d nao encontrada\n", chave);
    }

    return 0;
}
