/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 22
 * Descricao: Le o conteudo de teste.txt e exibe no console
 * Data: 03/11/2026
 */

// Exercicio 22: Le o conteudo de teste.txt e exibe no console

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("teste.txt", "r");
    char linha[256];

    if (arquivo == NULL) {
        printf("Erro: teste.txt nao encontrado (rode o exercicio 21 antes)\n");
        return 1;
    }

    // fgets le uma linha por vez ate o fim do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
