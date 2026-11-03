/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 21
 * Descricao: Escreve "Primeira linha de um arquivo." no arquivo teste.txt
 * Data: 03/11/2026
 */

// Exercicio 21: Escreve "Primeira linha de um arquivo." no arquivo teste.txt

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("teste.txt", "w"); // "w" cria ou sobrescreve

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "Primeira linha de um arquivo.\n");
    fclose(arquivo);

    printf("Arquivo teste.txt gravado com sucesso\n");

    return 0;
}
