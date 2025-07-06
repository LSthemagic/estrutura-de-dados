#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

typedef struct conteudo {
    int id;
    struct conteudo *proximo;
    struct conteudo *anterior;
} identificador;

identificador *inserir(identificador *lista) {
    int id;
    identificador *novo_id, *aux;
    for (int i = 0; i < TAM; i++) {
        printf("id: ");
        scanf("%d", &id);
        novo_id = (identificador *)malloc(sizeof(identificador));
        novo_id->id = id;
        novo_id->proximo = NULL;
        if (lista == NULL) {
            novo_id->anterior = NULL;
            lista = novo_id;
        } else {
            aux = lista;
            while (aux->proximo != NULL)
                aux = aux->proximo;
            aux->proximo = novo_id;
            novo_id->anterior = aux;
        }
    }
    return lista;
}

identificador *remover(identificador *lista) {
    int id_remover = 2;
    identificador *aux = lista;
    while (aux != NULL) {
        if (aux->id == id_remover) {
            if (aux->anterior == NULL) {
                lista = aux->proximo;
                if (lista != NULL) {
                    lista->anterior = NULL;
                }
            } else if (aux->proximo == NULL) {
                aux->anterior->proximo = NULL;
            } else {
                aux->anterior->proximo = aux->proximo;
                aux->proximo->anterior = aux->anterior;
            }
            free(aux);
            break;
        }
        aux = aux->proximo;
    }
    return lista;
}

void printar_lista(identificador *lista_ids) {
    while (lista_ids != NULL) {
        printf("%d ", lista_ids->id);
        lista_ids = lista_ids->proximo;
    }
    printf("\n");
}

int main() {
    identificador *lista_ids = NULL;
    lista_ids = inserir(lista_ids);
    printf("Lista original:\n");
    printar_lista(lista_ids);
    lista_ids = remover(lista_ids);
    printf("Lista após remoção:\n");
    printar_lista(lista_ids);
    return 0;
}

