
#ifndef FILAUTILS_H
#define FILAUTILS_H

#include "vars.h"

/**
 * Declarações de funções para manipulação de filas de tickets
 */

void initQueue(Queue *queue);
int isQueueFull(Queue *queue);
int isQueueEmpty(Queue *queue);
void enqueue(Queue *queue, Ticket ticket);
Ticket dequeue(Queue *queue);
Ticket findTicketInQueue(Queue *queue, char *name);
void fillQueue(Queue *queue, Ticket ticket, int amount);
void clearQueue(Queue *queue);

#endif