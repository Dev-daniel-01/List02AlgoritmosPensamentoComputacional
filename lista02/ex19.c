/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 19
 * Descricao: Le 15 numeros de 0 a 9 e mostra a frequencia de cada um
 * Data: 27/10/2026
 */

// Exercicio 19: Le 15 numeros de 0 a 9 e mostra a frequencia de cada um

#include <stdio.h>

int main() {
    int numeros[15];
    int freq[10] = {0}; // freq[d] guarda quantas vezes o digito d apareceu

    printf("Digite 15 numeros de 0 a 9:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
        while (numeros[i] < 0 || numeros[i] > 9) {
            printf("Valor invalido, digite de 0 a 9: ");
            scanf("%d", &numeros[i]);
        }
    }

    for (int i = 0; i < 15; i++) {
        freq[numeros[i]]++; // o proprio numero serve de indice
    }

    for (int d = 0; d < 10; d++) {
        printf("%d aparece %d vez(es)\n", d, freq[d]);
    }

    return 0;
}
