/*
 * Aluno: Daniel Ribeiro da Costa
 * Exercicio: 35
 * Descricao: Funcao validarCPF(char cpf[]) que valida apenas o formato do CPF
 * Data: 10/11/2026
 */

// Exercicio 35: Funcao validarCPF(char cpf[]) que valida apenas o formato do CPF
//
// Formatos aceitos:
//   11 digitos seguidos      -> 12345678901
//   com pontos e traco       -> 123.456.789-01
// Os digitos verificadores NAO sao conferidos, so o formato.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarCPF(char cpf[]) {
    int tamanho = strlen(cpf);

    if (tamanho == 11) {
        for (int i = 0; i < 11; i++) {
            if (!isdigit((unsigned char) cpf[i])) {
                return 0;
            }
        }
        return 1;
    }

    if (tamanho == 14) {
        for (int i = 0; i < 14; i++) {
            if (i == 3 || i == 7) {
                if (cpf[i] != '.') return 0;
            } else if (i == 11) {
                if (cpf[i] != '-') return 0;
            } else if (!isdigit((unsigned char) cpf[i])) {
                return 0;
            }
        }
        return 1;
    }

    return 0;
}

int main() {
    char cpf[20];

    printf("Digite o CPF: ");
    scanf("%19s", cpf);

    if (validarCPF(cpf)) {
        printf("Formato de CPF valido\n");
    } else {
        printf("Formato de CPF invalido\n");
    }

    return 0;
}
