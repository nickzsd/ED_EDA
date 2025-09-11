
#include "lib/package.h"


/**
 * Uso global
 */
Queue mainQueue;
Stack stacks[4];
Ticket movies[4] = {
    {"VIDA DE INSETO", 1, {14,30}, 25.0},
    {"PIRATAS DO CARIBE", 2, {16,45}, 25.0},
    {"INTERESTELAR", 3, {15,20}, 30.0},
    {"PROCURANDO NEMO", 4, {10,45}, 25.0}
};

/**
 * Funções principais do sistema
 */
void initializeSYS() {
    initQueue(&mainQueue);

    for(int i=0;i<4;i++){
        initStack(&stacks[i]);
        fillStack(&stacks[i], movies[i], 10); // [10] é facil para teste mas da pra usar mais
    }
}

/**
 * Mostra os filmes disponiveis
 */
void showMovies() {
    printf("Filmes disponivel:\n");
    for(int i=0;i<4;i++){
        printf("[%d] - %s\n", i+1, movies[i].name);
    }
}

/**
 * Processo de compra de ingresso
 */
void newTicketPurch() {
    showMovies();

    int op = getSelection();

    if(op < 1 || op > 4){
        printf("Opcao invalida. Tente denovo.\n");
        return;
    }

    if(isStackEmpty(&stacks[op-1])){
        printf("Ingresso esgotado pra esse filme!\n");
        return;
    }

    Ticket ticket = pop(&stacks[op-1]);
    enqueue(&mainQueue, ticket);
    printf("Ingresso comprado e adicionado na fila:\n");
    printTicket(ticket);
}

/**
 * Mostra os ingressos disponiveis por filme
 */
void showAvailableTickets(){
    for(int i=0;i<4;i++){
        printf("Filme: %s | Ingresso: %d\n", movies[i].name, stacks[i].top+1);
    }
}


/**
 * Mostra a fila atual
 */
void showQueue(){
    printf("Fila (%d pessoa(s)):\n", mainQueue.size);
    printQueue(&mainQueue);
}

void fillQueueTest(){
    for(int i=0;i<4;i++){
        if(!isStackEmpty(&stacks[i])){
            enqueue(&mainQueue, pop(&stacks[i]));
        }
    }

    printf("Fila preenchida com uma pessoa de cada filme.\n");
}

/**
 * Zera o processo, limpando a fila e repondo os ingressos
 */
void clearProcess(){
    initQueue(&mainQueue);

    for(int i=0;i<4;i++){
        clearStack(&stacks[i]);
        fillStack(&stacks[i], movies[i], 10);
    }

    printf("Processo zerado.\n");
}

/**
 * Entra no filme, liberando toda a fila com ingressos do filme escolhido
 */
void enterFullMovie(int movieIndex) {
    if(movieIndex < 0 || movieIndex > 3) {
        printf("Filme invalido.\n");
        return;
    }

    initQueue(&mainQueue);
    
    while(!isStackEmpty(&stacks[movieIndex])) {
        enqueue(&mainQueue, pop(&stacks[movieIndex]));
    }

    printf("Fila preenchida com todas as pessoas do filme: %s.\n", movies[movieIndex].name);
}

/**
 * Entra no filme, liberando a primeira pessoa da fila
 */
void enterMovie() {
    if(isQueueEmpty(&mainQueue)) {
        printf("Nao tem pessoa na fila pra entrar no filme!\n");
        return;
    }
    
    Ticket ticket = dequeue(&mainQueue);
    printf("Pessoa entrou no filme: ");
    printTicket(ticket);
    printf("Fila agora tem %d pessoa(s).\n", mainQueue.size);
}