#include "package.h"
#include <stdio.h>

/**
 * Funções para imprimir tickets, filas e pilhas
 */
void printTicket(Ticket ticket){
    printf("Filme: %s | Sala: %d | Horario: %02d:%02d | Preco: %.2f\n", ticket.name, ticket.room, ticket.time[0], ticket.time[1], ticket.price);
}

/**
 * Imprime todos os tickets na fila
 */
void printQueue(Queue *queue){
    printf("Fila (%d pessoa):\n", queue->size);
    for(int i=0, idx=queue->start; i<queue->size; i++, idx=(idx+1)%256){
        printTicket(queue->array[idx]);
    }
}

/**
 * Imprime todos os tickets na pilha
 */
void printStack(Stack *stack){
    printf("Pilha (%d ingresso):\n", stack->top+1);
    for(int i=0;i<=stack->top;i++){
        printTicket(stack->data[i]);
    }
}
