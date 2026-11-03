/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 26
 * Descricao: Le nome, idade e salario e grava em funcionario.csv
 * Data: 03/11/2026
 */

// Exercicio 26: Le nome, idade e salario e grava em funcionario.csv

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int idade;
    float salario;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Salario: ");
    scanf("%f", &salario);

    FILE *arquivo = fopen("funcionario.csv", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    // formato: Nome,Idade,Salario
    fprintf(arquivo, "%s,%d,%.2f\n", nome, idade, salario);
    fclose(arquivo);

    printf("Funcionario gravado em funcionario.csv\n");

    return 0;
}
