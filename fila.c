#include "fila.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void iniciaFila(Fila *fila) {
    fila->inicio = NULL;
}

int filaVazia(Fila *fila) {
    return fila->inicio == NULL;
}

void exibirFila(Fila *fila) {
    if (filaVazia(fila)) {
        printf("FILA VAZIA.\n");
        return;
    }

    printf("=== FILA DE ATENDIMENTO ===\n\n");
    No *atual = fila->inicio;
    while (atual != NULL) {
        printf("ID: %s", atual->animal.id);
        printf("ESPECIE: %s", atual->animal.especie);
        printf("NOME: %s", atual->animal.nome);
        printf("IDADE: %.2f\n", atual->animal.idade);
        printf("------------------------------\n");
        atual = atual->proximo;
    }
}

Animal registrarAnimal() {
    Animal animal;

    printf("ID: ");
    fgets(animal.id, sizeof(animal.id), stdin);

    printf("ESPECIE: ");
    fgets(animal.especie, sizeof(animal.especie), stdin);

    printf("NOME: ");
    fgets(animal.nome, sizeof(animal.nome), stdin);

    printf("IDADE: ");
    scanf("%f", &animal.idade);
    getchar(); // limpa o '\n' pendente

    return animal;
}

void inserir(Fila *fila, Animal animal) {
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->animal = animal;
    novoNo->proximo = NULL;
    
    if (filaVazia(fila)) {
        fila->inicio = novoNo;
    } else {
        No *atual = fila->inicio;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
    }
}

void inserirPrioridade(Fila *fila, Animal animal) {
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->animal = animal;
    novoNo->proximo = fila->inicio;
    fila->inicio = novoNo;
}

Animal atender(Fila *fila) {
    Animal vazio = {"", "", "", 0.0};

    if (filaVazia(fila)) {
        printf("Fila Vazia!\n");
        return vazio;
    }

    No *temp = fila->inicio;
    Animal atendido = temp->animal;
    fila->inicio = temp->proximo;
    free(temp);

    return atendido;
}
