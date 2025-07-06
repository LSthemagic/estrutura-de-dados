#include<stdio.h>
#include<stdlib.h>
#define TAM 10

/*Escreva um algoritmo que receba uma lista de 10 inteiros, solicite um
número qualquer e informar se o número informado está na lista ou
não. Implemente duas versões, uma com vetores, e outra com listas
simplesmente encadeadas.*/

//funcoes vetor
void inserir_vetor(int vetor[]){
	for(int i=0;i<TAM;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d",&vetor[i]);
	}
}

void printar_vetor(int vetor[]){
	for(int i=0;i<TAM;i++){
		printf("numero na posicao [%d] = %d, ",i, vetor[i]);
	}
}

int buscar_vetor(int vetor[]){
	int number_search;
	printf("Digite um numero: ");
	scanf("%d",&number_search);
	for(int i=0;i<TAM;i++){
		if(number_search == vetor[i])
			return vetor[i];
	}
	return NULL;
}

//funcoes lista encadeada
typedef struct identificadores{
	int uuid;
	struct identificadores *proximo;
}ids;

ids* inserir_lista(ids *lista_ids) {
    int uuid;
    ids *novo, *aux;
    for(int i=0;i<TAM;i++){
        printf("uuid: ");
        scanf("%d", &uuid);

        // Aloca memória para o novo nó
        novo = (ids *)malloc(sizeof(ids));
        novo->uuid = uuid;
        novo->proximo = NULL;

        if (lista_ids == NULL) {   // Caso especial: lista vazia
            lista_ids = novo;
        } else {
            aux = lista_ids;       // Ponteiro auxiliar para percorrer a lista
            while (aux->proximo != NULL)
                aux = aux->proximo;
            aux->proximo = novo;    // Conecta o novo nó ao final
        }
    }
    return lista_ids; // Retorna o novo início da lista
}

ids* buscar_lista(ids *lista_ids){
	ids *id_search = (ids *)malloc(sizeof(ids));
	int search;
	printf("\nQual valor deseja encontrar: ");
	scanf("%d",&search);
	id_search->uuid = search;
	id_search->proximo = NULL;
	while(lista_ids!=NULL){
		if(lista_ids->uuid==id_search->uuid){
			return lista_ids;
		}
		lista_ids = lista_ids->proximo;
	}
	return NULL;
}

void printar_lista(ids *lista_ids) {
    while (lista_ids != NULL) {
        printf("%d ", lista_ids->uuid);
        lista_ids = lista_ids->proximo;
    }
}


int main(){
	ids *lista_ids = NULL, *id_search;
	lista_ids = inserir_lista(lista_ids);
	printar_lista(lista_ids);
	id_search = buscar_lista(lista_ids);
	if(id_search!=NULL)
		printf("\nNUmero encontrado");
	else
		printf("\nNumero inexistente");
	return 0;
}
