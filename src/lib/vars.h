#ifndef VARS_H
#define VARS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Estrutura que representa um ticket
 */
typedef struct {
    char name[100];
    int room;
    int time[2]; //HH-MM
    float price;
} Ticket;

/**
 * Estrutura que representa uma pilha de tickets
 */
typedef struct {
    Ticket data[50];
    int top;
} Stack;

/**
 * Estrutura que representa uma fila de tickets
 */
typedef struct {
    Ticket array[256];
    int start;
    int end;
    int size;
} Queue;

/**
 * Lê a seleção do usuário
 */
int getSelection();

#endif