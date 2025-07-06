#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

void selection_sort(int *lista){
	int aux, indice_min;
	for(int i=0;i<TAM;i++){
		indice_min=i;
		for(int j=i+1; j<TAM;j++){
			if(lista[j] < lista[indice_min]){
				aux = lista[j];
				lista[j] = lista[indice_min];
				lista[indice_min]=aux;
			}
		}
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
	selection_sort(lista);
	for(int i=0;i<TAM;i++){
		printf("[ %d ] ",lista[i]);
	}
	return 0;
}
