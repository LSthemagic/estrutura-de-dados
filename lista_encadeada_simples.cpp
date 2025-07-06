#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

typedef struct agenda{
	int telefone;
	struct agenda *proximo;
}contatos;

contatos *inserir(contatos *lista_contato){
	int telefone;
	contatos *novo_contato, *aux;
	for(int i=0;i<TAM;i++){
        printf("contato: ");
        scanf("%d", &telefone);
		novo_contato = (contatos *)malloc(sizeof(contatos));
		
		novo_contato->telefone = telefone;
		novo_contato->proximo = NULL;
		
		if(lista_contato==NULL){
			lista_contato=novo_contato;
		}else{
			aux = lista_contato;
			while(aux->proximo!=NULL)
				aux = aux->proximo;
			aux->proximo=novo_contato;
		}
	}
	return lista_contato;	
}

contatos *remover(contatos *lista_contato){
	contatos *aux = lista_contato, *anterior;
	int telefone_apagar = 6;
	while(aux!=NULL){
		if (aux->telefone == telefone_apagar) {
            if (anterior == NULL) {
                // Caso especial: o nó a ser removido é o primeiro da lista
                lista_contato = aux->proximo;
            } else {
                // Remove o nó atual
                anterior->proximo = aux->proximo;
            }
            free(aux);
            break; // Saída do loop após remover o nó
        }
		anterior = aux;
        aux = aux->proximo;
	}
	return lista_contato;
}


void printar_lista(contatos *lista_contato) {
    while (lista_contato != NULL) {
        printf("%d ", lista_contato->telefone);
        lista_contato = lista_contato->proximo;
    }
}


int main(){
	contatos *lista_contato = NULL;
	lista_contato = inserir(lista_contato);
	printar_lista(lista_contato);
	lista_contato = remover(lista_contato);
	printf("\n");
	printar_lista(lista_contato);
}







