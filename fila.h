#ifndef FILA_H
#define FILA_H

typedef struct {
    char id[10];
    char especie[50];
    char nome[50];
    float idade;
} Animal;

typedef struct No {
    Animal animal;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
} Fila;

void iniciaFila(Fila *fila);
int filaVazia(Fila *fila);
Animal registrarAnimal();
void inserir(Fila *fila, Animal animal);
void inserirPrioridade(Fila *fila, Animal animal);
Animal atender(Fila *fila);
void exibirFila(Fila *fila);

#endif
