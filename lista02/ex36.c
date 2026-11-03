/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 36
 * Descricao: Struct Aluno e funcao mediaTurma que calcula a media da turma
 * Data: 10/11/2026
 */

// Exercicio 36: Struct Aluno e funcao mediaTurma que calcula a media da turma

#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota;
};

float mediaTurma(struct Aluno alunos[], int n) {
    float soma = 0;

    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
    }

    return soma / n;
}

int main() {
    int n;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    struct Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%49s", alunos[i].nome);
        printf("Nota de %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota);
    }

    printf("Media da turma: %.2f\n", mediaTurma(alunos, n));

    return 0;
}
