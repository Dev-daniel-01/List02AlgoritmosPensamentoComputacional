/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 40
 * Descricao: Funcao buscar(int arr[], int n, int chave) que retorna o indice ou -1
 * Data: 10/11/2026
 */

// Exercicio 40: Funcao buscar(int arr[], int n, int chave) que retorna o indice ou -1

#include <stdio.h>

int buscar(int arr[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == chave) {
            return i;
        }
    }
    return -1; // percorreu tudo e nao encontrou
}

int main() {
    int v[] = {8, 15, 23, 4, 42, 16};
    int n = sizeof(v) / sizeof(v[0]);
    int chave;

    printf("Numero a buscar: ");
    scanf("%d", &chave);

    int indice = buscar(v, n, chave);

    if (indice != -1) {
        printf("Encontrado no indice %d\n", indice);
    } else {
        printf("Nao encontrado\n");
    }

    return 0;
}
