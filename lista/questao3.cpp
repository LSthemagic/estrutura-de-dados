#include <stdio.h>

// Função para calcular a média dos elementos
float calcular_media(float numeros[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}

// Função para encontrar o maior e menor elemento
void encontrar_maior_menor(float numeros[], int tamanho, float *maior, float *menor) {
    *maior = *menor = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > *maior) *maior = numeros[i];
        if (numeros[i] < *menor) *menor = numeros[i];
    }
}

// Função para contar elementos positivos e negativos
void contar_positivos_negativos(float numeros[], int tamanho, int *positivos, int *negativos) {
    *positivos = *negativos = 0;
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > 0) (*positivos)++;
        else if (numeros[i] < 0) (*negativos)++;
    }
}

int main() {
    float numeros[10];
    float media, maior, menor;
    int positivos, negativos;

    // Leitura dos 10 números reais
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
    }

    // Calculando a média dos elementos
    media = calcular_media(numeros, 10);

    // Encontrando o maior e menor elemento
    encontrar_maior_menor(numeros, 10, &maior, &menor);

    // Contando elementos positivos e negativos
    contar_positivos_negativos(numeros, 10, &positivos, &negativos);

    // Exibindo os resultados
    printf("Média dos elementos: %.2f\n", media);
    printf("Maior elemento: %.2f\n", maior);
    printf("Menor elemento: %.2f\n", menor);
    printf("Quantidade de elementos positivos: %d\n", positivos);
    printf("Quantidade de elementos negativos: %d\n", negativos);

    return 0;
}

