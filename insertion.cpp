#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

void insertion_sort(int *lista) {
    int i, j, aux;
    for (i = 1; i < TAM; i++) { 
        aux = lista[i];
        j = i - 1;
        while (j >= 0 && lista[j] > aux) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = aux;
    }
}



int main(){
	int lista[TAM];
	srand(time(0));
	for(int i=0;i<TAM;i++){
		lista[i]=rand()%100+1;
	}
	for(int i=0;i<TAM;i++){
		printf("[ %d ] ",lista[i]);
	}
	printf("\n");
	insertion_sort(lista);
	for(int i=0;i<TAM;i++){
		printf("[ %d ] ",lista[i]);
	}
	return 0;
}
