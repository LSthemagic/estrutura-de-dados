#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ano {
    int ano;
    char signo[20];
    struct Ano *proximo;
} Ano;

Ano *inserir_signos() {
    Ano *inicio = NULL, *aux, *novo;
    const char *signos[] = {
        "Macaco", "Galo", "Cachorro", "Porco", "Rato", "Boi",
        "Tigre", "Coelho", "Dragão", "Serpente", "Cavalo", "Cabra"
    };

    for (int i = 0; i < 12; i++) {
        novo = (Ano *)malloc(sizeof(Ano));
        novo->ano = i;
        strcpy(novo->signo, signos[i]);
        novo->proximo = NULL;

        if (inicio == NULL) {
            inicio = novo;
        } else {
            aux = inicio;
            while (aux->proximo != NULL)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    return inicio;
}

const char *buscar_signo(Ano *lista, int ano) {
    int indice = ano % 12;
    Ano *aux = lista;
    while (aux != NULL) {
        if (aux->ano == indice)
            return aux->signo;
        aux = aux->proximo;
    }
    return NULL;
}

void liberar_lista(Ano *lista) {
    Ano *aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->proximo;
        free(aux);
    }
}

int main() {
    Ano *lista = inserir_signos();
    int ano;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    const char *signo = buscar_signo(lista, ano);
    if (signo != NULL)
        printf("Seu signo no Zodíaco Chinês é: %s\n", signo);
    else
        printf("Erro ao determinar o signo.\n");

    liberar_lista(lista);
    return 0;
}

