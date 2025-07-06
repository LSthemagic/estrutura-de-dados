#include <stdio.h>

void elimina_negativos(int vetor[], int *tamanho) {
    int j = 0;
    for (int i = 0; i < *tamanho; i++) {
        if (vetor[i] > 0) {
            vetor[j++] = vetor[i];
        }
    }
    *tamanho = j;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    elimina_negativos(vetor, &n);

    printf("Vetor após eliminar elementos <= 0:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

