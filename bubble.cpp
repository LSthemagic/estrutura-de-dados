#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10
void bubble_sort(int lista[]){
	int aux;
	bool flag = true;
	while(flag){
		flag = false;
		for(int i=0;i<TAM-1;i++){
			if(lista[i]>lista[i+1]){
				aux=lista[i];
				lista[i]=lista[i+1];
				lista[i+1]=aux;
				flag = true;
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
	bubble_sort(lista);
	for(int i=0;i<TAM;i++){
		printf("[ %d ] ",lista[i]);
	}
	return 0;
}
