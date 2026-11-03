/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 24
 * Descricao: Le nomes.txt e conta quantos nomes tem mais de 5 caracteres
 * Data: 03/11/2026
 */

// Exercicio 24: Le nomes.txt e conta quantos nomes tem mais de 5 caracteres

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int contador = 0;
    FILE *arquivo = fopen("nomes.txt", "r");

    if (arquivo == NULL) {
        printf("Erro: nomes.txt nao encontrado (rode o exercicio 23 antes)\n");
        return 1;
    }

    while (fgets(nome, sizeof(nome), arquivo) != NULL) {
        nome[strcspn(nome, "\n")] = '\0'; // o '\n' nao conta como caractere
        if (strlen(nome) > 5) {
            contador++;
        }
    }

    fclose(arquivo);
    printf("Nomes com mais de 5 caracteres: %d\n", contador);

    return 0;
}
