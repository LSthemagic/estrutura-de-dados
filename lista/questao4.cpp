#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    float valor_base, valor_reajustado;
    char continuar;

    do {
        printf("Digite o nome do paciente: ");
        scanf(" %[^\n]", nome);
        printf("Digite a idade do paciente: ");
        scanf("%d", &idade);
        printf("Digite o valor base da indenização: ");
        scanf("%f", &valor_base);

        if (idade <= 12) {
            valor_reajustado = valor_base * 1.3;
        } else if (idade <= 49) {
            valor_reajustado = valor_base * 1.1;
        } else if (idade <= 65) {
            valor_reajustado = valor_base * 1.15;
        } else {
            valor_reajustado = valor_base * 1.35;
        }

        printf("Paciente: %s, Idade: %d, Indenização Reajustada: %.2f\n", nome, idade, valor_reajustado);

        printf("Deseja cadastrar outro paciente? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}

