#include "lib/package.h"

void initializeSYS() {
    /*Ticket Movies[4];
    Movies[0] = (Ticket){"VIDA DE INSETO", 1 , {14, 30}, 25.0};
    Movies[1] = (Ticket){"PIRATAS DO CARIBE", 2 , {16, 45}, 25.0};
    Movies[2] = (Ticket){"INTERESTELAR", 3 , {15, 20}, 30.0};
    Movies[3] = (Ticket){"PROCURANDO NEMO", 4 , {10, 45}, 25.0};*/

    pile *p_1 = malloc(sizeof(pile));
    initialize(p_1);

    pile *p_2 = malloc(sizeof(pile));
    initialize(p_2);

    pile *p_3 = malloc(sizeof(pile));
    initialize(p_3);

    pile *p_4 = malloc(sizeof(pile));
    initialize(p_4);

    Fila *fila = malloc(sizeof(Fila));
    initFila(fila);
}

void showMovies() {
    printf("Filmes Disponíveis:\n");
    printf("[1] - VIDA DE INSETO\n");
    printf("[2] - PIRATAS DO CARIBE\n");
    printf("[3] - INTERESTELAR\n");
    printf("[4] - PROCURANDO NEMO\n");
}

void newTicketPurch() {    
    showMovies();

    int operation = getSelection();

    if(operation <= 0 || operation > 4) {
        printf("Opção inválida. Tente novamente.\n");
        newTicketPurch();
        return;
    }    
}