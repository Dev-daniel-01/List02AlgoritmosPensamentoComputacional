/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 46
 * Descricao: Struct Pessoa e funcao inicializar que modifica a struct por ponteiro
 * Data: 10/11/2026
 */

// Exercicio 46: Struct Pessoa e funcao inicializar que modifica a struct por ponteiro

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void inicializar(struct Pessoa *p, char nome[], int idade) {
    // o operador -> acessa um campo da struct atraves do ponteiro
    // (equivale a (*p).nome)
    strncpy(p->nome, nome, sizeof(p->nome) - 1);
    p->nome[sizeof(p->nome) - 1] = '\0';
    p->idade = idade;
}

int main() {
    struct Pessoa pessoa;

    inicializar(&pessoa, "Daniel", 20);

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);

    return 0;
}
