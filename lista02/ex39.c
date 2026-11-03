/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 39
 * Descricao: Funcao ordenar(int arr[], int n) que ordena com Bubble Sort
 * Data: 10/11/2026
 */

// Exercicio 39: Funcao ordenar(int arr[], int n) que ordena com Bubble Sort

#include <stdio.h>

void ordenar(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                trocou = 1;
            }
        }
        if (!trocou) {
            break; // nenhuma troca: o array ja esta ordenado
        }
    }
}

int main() {
    int v[] = {42, 7, 19, 3, 25, 11};
    int n = sizeof(v) / sizeof(v[0]);

    ordenar(v, n); // arrays sao passados por referencia, o original muda

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
