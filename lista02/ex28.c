/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 28
 * Descricao: Cria um arquivo com numeros inteiros, le e soma todos eles
 * Data: 03/11/2026
 */

// Exercicio 28: Cria um arquivo com numeros inteiros, le e soma todos eles

#include <stdio.h>

int main() {
    // 1) cria o arquivo numeros.txt com alguns inteiros, um por linha
    FILE *arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo\n");
        return 1;
    }
    int valores[] = {5, 12, 7, 30, 46};
    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", valores[i]);
    }
    fclose(arquivo);

    // 2) le o arquivo e soma os numeros
    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int numero, soma = 0;
    while (fscanf(arquivo, "%d", &numero) == 1) {
        soma += numero;
    }
    fclose(arquivo);

    printf("Soma dos numeros do arquivo: %d\n", soma);

    return 0;
}
