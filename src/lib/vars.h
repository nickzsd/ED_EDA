#ifndef VARS_H
#define VARS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char  Movie_name[100];
    int   room;
    int   time[2]; //HH-MM
    float Price;    
} Ticket;

typedef struct {
    Ticket data[50];
    int front;
    int rear;    
} pile;

typedef struct {
    int Vetor[256];
    int Comeco;
    int fim;
} Fila;

int getSelection(){
    int op;
    printf("Selecione uma Opcao: ");    
    scanf("%d", &op);
    return op;
}

#endif