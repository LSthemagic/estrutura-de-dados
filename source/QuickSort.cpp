#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int particionar(int *vetor, int inicio, int fim) {
    int pivo = (vetor[inicio] + vetor[fim] + vetor[(inicio + fim) / 2]) / 3;
    int aux;

    for (; inicio < fim; ) { 
        for (; inicio < fim && vetor[inicio] <= pivo; inicio++); 
        for (; inicio < fim && vetor[fim] > pivo; fim--);
        
        if (inicio < fim) {
            aux = vetor[inicio];
            vetor[inicio] = vetor[fim];
            vetor[fim] = aux;
        }
    }
    return inicio;
}


void quickSort(int *vetor, int inicio, int fim){
    if (inicio < fim){
        int posMeio = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, posMeio - 1);
        quickSort(vetor, posMeio, fim);
    }
}

int imprimir(int *vetor){
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}


int main(int argc, char const *argv[])
{
    int vetor[TAM];
    srand(time(0));
    for (int i=0;i<TAM;i++){
        vetor[i]=rand()%100+1;
    }
    printf("Vetor Original:\n");
    imprimir(vetor);
    quickSort(vetor, 0, TAM-1);
    printf("\nVetor Ordenado:\n");
    imprimir(vetor);
    return 0;
}
