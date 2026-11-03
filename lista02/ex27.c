/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 27
 * Descricao: Le funcionario.csv, processa cada linha e exibe formatado
 * Data: 03/11/2026
 */

// Exercicio 27: Le funcionario.csv, processa cada linha e exibe formatado

#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float salario;
    FILE *arquivo = fopen("funcionario.csv", "r");

    if (arquivo == NULL) {
        printf("Erro: funcionario.csv nao encontrado (rode o exercicio 26 antes)\n");
        return 1;
    }

    printf("%-20s %-6s %10s\n", "Nome", "Idade", "Salario");
    printf("----------------------------------------\n");

    // %99[^,] le tudo ate a virgula (permite nomes com espaco)
    while (fscanf(arquivo, " %99[^,],%d,%f", nome, &idade, &salario) == 3) {
        printf("%-20s %-6d R$ %7.2f\n", nome, idade, salario);
    }

    fclose(arquivo);

    return 0;
}
