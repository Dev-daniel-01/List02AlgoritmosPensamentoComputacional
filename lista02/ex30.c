/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 30
 * Descricao: Menu para inserir e exibir dados de um arquivo (do-while e funcoes)
 * Data: 03/11/2026
 */

// Exercicio 30: Menu para inserir e exibir dados de um arquivo (do-while e funcoes)

#include <stdio.h>
#include <string.h>

#define ARQUIVO "dados.txt"

void inserirDados() {
    char texto[200];
    FILE *arquivo = fopen(ARQUIVO, "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    fprintf(arquivo, "%s\n", texto);
    fclose(arquivo);

    printf("Dado inserido!\n");
}

void exibirDados() {
    char linha[200];
    FILE *arquivo = fopen(ARQUIVO, "r");

    if (arquivo == NULL) {
        printf("Nenhum dado cadastrado ainda\n");
        return;
    }

    printf("\n--- DADOS ---\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
}

int main() {
    int opcao;

    do {
        printf("\n1) Inserir dados no arquivo\n");
        printf("2) Exibir todos os dados\n");
        printf("3) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // descarta o '\n' que o scanf deixou no buffer

        switch (opcao) {
            case 1:
                inserirDados();
                break;
            case 2:
                exibirDados();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 3);

    return 0;
}
