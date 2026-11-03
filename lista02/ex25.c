/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 25
 * Descricao: Versao do exercicio 23 que anexa nomes ao final de nomes.txt
 * Data: 03/11/2026
 */

// Exercicio 25: Versao do exercicio 23 que anexa nomes ao final de nomes.txt
//
// A unica mudanca em relacao ao exercicio 23 e o modo de abertura:
// "w" apaga o conteudo anterior, enquanto "a" (append) escreve no final
// do arquivo, mantendo o que ja existia.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    FILE *arquivo = fopen("nomes.txt", "a");

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
    printf("Nomes adicionados ao final de nomes.txt\n");

    return 0;
}
