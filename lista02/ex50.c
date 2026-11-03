/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 50
 * Descricao: Array de ponteiros para funcoes de operacoes matematicas
 * Data: 10/11/2026
 */

// Exercicio 50: Array de ponteiros para funcoes de operacoes matematicas

#include <stdio.h>

float soma(float a, float b) { return a + b; }
float sub(float a, float b)  { return a - b; }
float mult(float a, float b) { return a * b; }
float divi(float a, float b) { return a / b; } // "div" ja existe em stdlib.h

int main() {
    // cada posicao guarda o endereco de uma funcao com a mesma assinatura
    float (*operacoes[4])(float, float) = {soma, sub, mult, divi};
    char *nomes[4] = {"Soma", "Subtracao", "Multiplicacao", "Divisao"};
    int indice;
    float a, b;

    printf("0 - Soma\n1 - Subtracao\n2 - Multiplicacao\n3 - Divisao\n");
    printf("Escolha a operacao: ");
    scanf("%d", &indice);

    if (indice < 0 || indice > 3) {
        printf("Operacao invalida\n");
        return 1;
    }

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    if (indice == 3 && b == 0) {
        printf("Erro: divisao por zero\n");
        return 1;
    }

    // chama a funcao escolhida atraves do ponteiro guardado no array
    printf("%s: %.2f\n", nomes[indice], operacoes[indice](a, b));

    return 0;
}
