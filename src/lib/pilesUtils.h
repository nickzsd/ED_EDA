
#ifndef PILESUTILS_H
#define PILESUTILS_H

/** Declarações de funções para manipulação de pilhas de tickets */
#include "vars.h"

/**
 * Inicializa a pilha
 */
void initStack(Stack *stack);
int isStackEmpty(Stack *stack);
int isStackFull(Stack *stack);
void push(Stack *stack, Ticket ticket);
Ticket pop(Stack *stack);
Ticket findTicketInStack(Stack *stack, char *name);
void fillStack(Stack *stack, Ticket ticket, int amount);
void clearStack(Stack *stack);

#endif