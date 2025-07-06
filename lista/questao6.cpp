#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cliente {
    char nome[50];
    char rg[20];
    char cpf[20];
    char telefone[15];
    struct Cliente *proximo;
} Cliente;

Cliente *inserir(Cliente *lista) {
    char nome[50], rg[20], cpf[20], telefone[15];
    Cliente *novo, *aux;
    char continuar;

    do {
        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);
        printf("Digite o RG: ");
        scanf(" %[^\n]", rg);
        printf("Digite o CPF: ");
        scanf(" %[^\n]", cpf);
        printf("Digite o telefone: ");
        scanf(" %[^\n]", telefone);

        novo = (Cliente *)malloc(sizeof(Cliente));
        strcpy(novo->nome, nome);
        strcpy(novo->rg, rg);
        strcpy(novo->cpf, cpf);
        strcpy(novo->telefone, telefone);
        novo->proximo = NULL;

        if (lista == NULL) {
            lista = novo;
        } else {
            aux = lista;
            while (aux->proximo != NULL)
                aux = aux->proximo;
            aux->proximo = novo;
        }

        printf("Deseja cadastrar outro cliente? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return lista;
}

void exibir(Cliente *lista) {
    Cliente *aux = lista;
    while (aux != NULL) {
        printf("Nome: %s, RG: %s, CPF: %s, Telefone: %s\n",
               aux->nome, aux->rg, aux->cpf, aux->telefone);
        aux = aux->proximo;
    }
}

void liberar_lista(Cliente *lista) {
    Cliente *aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->proximo;
        free(aux);
    }
}

int main() {
    Cliente *lista = NULL;
    lista = inserir(lista);
    printf("\nLista de Clientes:\n");
    exibir(lista);
    liberar_lista(lista);
    return 0;
}

