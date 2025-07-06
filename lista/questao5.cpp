#include <stdio.h>
#include <math.h>

void calcula_norma(float vetor[], int tamanho, float *norma) {
    *norma = 0;
    for (int i = 0; i < tamanho; i++) {
        *norma += vetor[i] * vetor[i];
    }
    *norma = sqrt(*norma);
}

void calcula_vetor_soma(float v1[], float v2[], float v3[], float soma[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        soma[i] = v1[i] + v2[i] + v3[i];
    }
}

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    float v1[n], v2[n], v3[n], soma[n];
    float norma1, norma2, norma3;

    printf("Digite os elementos do vetor 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v1[i]);
    }

    printf("Digite os elementos do vetor 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v2[i]);
    }

    printf("Digite os elementos do vetor 3:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v3[i]);
    }

    calcula_norma(v1, n, &norma1);
    calcula_norma(v2, n, &norma2);
    calcula_norma(v3, n, &norma3);

    calcula_vetor_soma(v1, v2, v3, soma, n);

    printf("Norma do vetor 1: %.2f\n", norma1);
    printf("Norma do vetor 2: %.2f\n", norma2);
    printf("Norma do vetor 3: %.2f\n", norma3);

    if (norma1 >= norma2 && norma1 >= norma3) {
        printf("Vetor 1 tem a maior norma.\n");
    } else if (norma2 >= norma1 && norma2 >= norma3) {
        printf("Vetor 2 tem a maior norma.\n");
    } else {
        printf("Vetor 3 tem a maior norma.\n");
    }

    printf("Vetor soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", soma[i]);
    }
    printf("\n");

    return 0;
}

