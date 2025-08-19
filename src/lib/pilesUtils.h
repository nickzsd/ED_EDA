#include "vars.h"

void initialize(pile *p) {
    p->front = -1;
    p->rear = -1;
}

int isEmpty(pile *p) {
    return p->rear == -1;
}

int isFull(pile *p) {
    return p->rear == 256 - 1;
}

void push(pile *p, Ticket value) {
    if (isFull(p)) {
        printf("Pilha cheia!\n");
        return;
    }

    p->data[++(p->rear)] = value;

    if (p->front == -1) {
        p->front = 0;
    }    
}

void pop(pile *p) {
    if (isEmpty(p)) {
        printf("Pilha vazia!\n");
        return;
    }    

    if (p->rear < 0) {
        p->front = -1;
    }    
}