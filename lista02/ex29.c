/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 29
 * Descricao: Copia o conteudo de um arquivo de origem para um de destino
 * Data: 03/11/2026
 */

// Exercicio 29: Copia o conteudo de um arquivo de origem para um de destino

#include <stdio.h>

int main() {
    char nomeOrigem[100], nomeDestino[100];

    printf("Arquivo de origem: ");
    scanf("%99s", nomeOrigem);
    printf("Arquivo de destino: ");
    scanf("%99s", nomeDestino);

    FILE *origem = fopen(nomeOrigem, "r");
    if (origem == NULL) {
        printf("Erro ao abrir %s\n", nomeOrigem);
        return 1;
    }

    FILE *destino = fopen(nomeDestino, "w");
    if (destino == NULL) {
        printf("Erro ao criar %s\n", nomeDestino);
        fclose(origem);
        return 1;
    }

    // copia caractere por caractere ate o fim do arquivo (EOF)
    int c;
    while ((c = fgetc(origem)) != EOF) {
        fputc(c, destino);
    }

    fclose(origem);
    fclose(destino);
    printf("Arquivo copiado com sucesso\n");

    return 0;
}
