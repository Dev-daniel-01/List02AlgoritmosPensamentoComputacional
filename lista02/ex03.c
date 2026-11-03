/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 03
 * Descricao: Le um numero e verifica se e primo usando for e uma flag
 * Data: 20/10/2026
 */

// Exercicio 3: Le um numero e verifica se e primo usando for e uma flag

#include <stdio.h>

int main() {
    int n;
    int primo = 1; // flag: 1 = primo, 0 = nao primo

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 2) {
        primo = 0; // 0, 1 e negativos nao sao primos
    }

    // basta testar divisores ate a raiz de n (i * i <= n)
    for (int i = 2; i * i <= n && primo; i++) {
        if (n % i == 0) {
            primo = 0; // achou um divisor, abaixa a flag
        }
    }

    if (primo) {
        printf("%d e primo\n", n);
    } else {
        printf("%d nao e primo\n", n);
    }

    return 0;
}
