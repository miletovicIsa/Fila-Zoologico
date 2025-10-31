#include <stdio.h>
#include "fila.h"

int main(void) {
    Fila fila;
    iniciaFila(&fila);

    int op = 0;
    do {
        printf("\n-----FILA DE ATENDIMENTO-----\n");
        printf("1. VISUALIZAR FILA\n2. ADICIONAR PACIENTE\n3. ATENDER\n4. ADICIONAR COM PRIORIDADE\n5. SAIR\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        getchar(); 

        Animal novoAnimal;
        switch (op) {
            case 1:
                exibirFila(&fila);
                break;
            case 2:
                novoAnimal = registrarAnimal();
                inserir(&fila, novoAnimal);
                break;
            case 3: {
                Animal atendido = atender(&fila);
                if (atendido.id[0] != '\0') {
                    printf("Atendido:\n");
                    printf("ID: %s", atendido.id);
                    printf("ESPECIE: %s", atendido.especie);
                    printf("NOME: %s", atendido.nome);
                    printf("IDADE: %.2f\n", atendido.idade);
                }
                break;
            }
            case 4:
                novoAnimal = registrarAnimal();
                inserirPrioridade(&fila, novoAnimal);
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (op != 5);

    return 0;
}
