/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 04
 * Descricao: Calculadora com menu que repete ate o usuario escolher Sair (do-while)
 * Data: 20/10/2026
 */

// Exercicio 4: Calculadora com menu que repete ate o usuario escolher Sair (do-while)

#include <stdio.h>

int main() {
    int opcao;
    float a = 0, b = 0;

    do {
        printf("\n--- CALCULADORA ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Resultado: %.2f\n", a / b);
                } else {
                    printf("Erro: divisao por zero\n");
                }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 0); // do-while: o menu aparece pelo menos uma vez

    return 0;
}
