#include <stdio.h>
#include <stdlib.h>

#define TAM 10 
int maior_numero(int numeros[], int length_numeros){
    if (length_numeros == 0) return -1;
    if (length_numeros == 1) return numeros[0];
    int maior = maior_numero(numeros, length_numeros-1);
    if (numeros[length_numeros-1] > maior)
        return numeros[length_numeros-1];
    return maior; 
}


int main()
{
    int numeros[TAM];
    srand((int)__TIMESTAMP__);
    for (int i = 0; i < TAM; i++)
    {
        numeros[i] = rand() % 100;
    }
    printf("numeros[");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d, ",numeros[i]);
    }
    printf("]");
    printf("\nO maior numero e: %d", maior_numero(numeros, TAM));

    return 0;
}
