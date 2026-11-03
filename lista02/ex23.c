/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 23
 * Descricao: Pede 5 nomes ao usuario e grava em nomes.txt, um por linha
 * Data: 03/11/2026
 */

// Exercicio 23: Pede 5 nomes ao usuario e grava em nomes.txt, um por linha

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    FILE *arquivo = fopen("nomes.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        printf("Nome %d: ", i);
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(arquivo, "%s\n", nome);
    }

    fclose(arquivo);
    printf("Nomes gravados em nomes.txt\n");

    return 0;
}
