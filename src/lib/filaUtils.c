#include "filaUtils.h"
#include <string.h>
#include <stdio.h>


void initQueue(Queue *queue){
    queue->start = 0;
    queue->end = 0;
    queue->size = 0;
}

/**
 * Inicializa a fila
 */
int isQueueFull(Queue *queue){
    return queue->size == 256;
}

/**
 * Verifica se a fila esta vazia
 */
int isQueueEmpty(Queue *queue){
    return queue->size == 0;
}

/**
 * Adiciona um ticket na fila
 */
void enqueue(Queue *queue, Ticket ticket){
    if(isQueueFull(queue)){
        printf("Fila ta cheia\n");
        return;
    }

    queue->array[queue->end] = ticket;
    queue->end = (queue->end + 1) % 256;
    queue->size++;
}

/**
 * Remove e retorna o ticket no inicio da fila
 */
Ticket dequeue(Queue *queue){
    Ticket empty = {"",0,{0,0},0.0};

    if(isQueueEmpty(queue)){
        printf("Fila ta vazia\n");
        return empty;
    }

    Ticket ticket = queue->array[queue->start];

    queue->start = (queue->start + 1) % 256;
    queue->size--;

    return ticket;
}

/**
 * Procura um ticket na fila pelo nome
 */
Ticket findTicketInQueue(Queue *queue, char *name){
    for(int i=0, idx=queue->start; i<queue->size; i++, idx=(idx+1)%256){
        if(strcmp(queue->array[idx].name, name)==0)
            return queue->array[idx];        
    }

    Ticket empty = {"",0,{0,0},0.0};
    return empty;
}

/**
 * Preenche a fila com uma quantidade de tickets iguais
 */
void fillQueue(Queue *queue, Ticket ticket, int amount){
    for(int i=0;i<amount;i++){
        enqueue(queue, ticket);
    }
}

/**
 * Limpa a fila
 */
void clearQueue(Queue *queue){
    queue->start = 0;
    queue->end = 0;
    queue->size = 0;
}
