#include<stdio.h>
#include<stdlib.h>
#define TAM 10

/*Escreva um algoritmo que receba uma lista de 10 inteiros, salve
em um vetor e mostre toda a lista em na mesma linha.*/

int main(){
	
	int vet[TAM], number;
	
	for(int i=0;i<TAM;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d",&vet[i]);
	}
	for(int i=0;i<TAM;i++){
		printf("numero na posicao [%d] = %d, ",i, vet[i]);
	}
	
	return 0;
}
