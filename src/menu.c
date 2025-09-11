#include "mainFunc.h"
#include "menu.h"
#include "mainFunc.h"
#include "lib/package.h"

/**
 * Mostra o cabeçalho do menu (da para chamar sem reptir código)
 */
void header() {
    printf("\n\n\n=== / Bem vindo ao CineCapi / ===\n");
    printf("o que deseja Realizar?\n");
    printf("[1] - Comprar ingresso\n");
    printf("[2] - Ingresso disponivel\n");
    printf("[3] - Tamanho da fila\n");
    printf("[4] - Entrar no filme (libera 1 da fila)\n");

    // Testes
    printf("[5] - Preencher fila\n");
    printf("[6] - Zerar processo\n");
    printf("[7] - Preencher fila com um filme\n");

    //Saida
    printf("[0] - Sair\n");
}

/**
 * Define o caminho baseado na escolha do usuario
 */
void setPath(int *Running){
    header();
    int op = getSelection();

    switch(op) {
        case 1:
            printf("Comprar ingresso selecionado.\n");
            newTicketPurch();
            break;
        case 2:
            printf("Ingresso disponivel selecionado.\n");
            showAvailableTickets();
            break;
        case 3:
            printf("Tamanho da fila selecionado.\n");
            showQueue();
            break;
        case 4:
            printf("Entrar no filme selecionado.\n");
            enterMovie();
            break;        
        case 5:
            printf("Preencher fila selecionado.\n");
            fillQueueTest();
            break;
        case 6:
            printf("Zerar processo selecionado.\n");
            clearProcess();
            break;
        case 7:
            printf("Preencher fila com um filme selecionado.\n");
            printf("Digite o numero do filme (1 a 4): ");
            int idx;
            scanf("%d", &idx);
            enterFullMovie(idx-1);
            break;

        case 0:
            printf("Saindo...\n");
            *Running = 0;
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }
}