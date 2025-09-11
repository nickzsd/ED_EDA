#include "pilesUtils.h"
#include <string.h>
#include <stdio.h>

/**
 * Inicializa a pilha
 */
void initStack(Stack *stack){
    stack->top = -1;
}

/**
 * Verifica se a pilha esta vazia
 */
int isStackEmpty(Stack *stack){
    return stack->top == -1;
}

/**
 * Verifica se a pilha esta cheia
 */
int isStackFull(Stack *stack){
    return stack->top == 49;
}

/**
 * Adiciona um ticket na pilha
 */
void push(Stack *stack, Ticket ticket){
    if(isStackFull(stack)){
        printf("Pilha ta cheia\n");
        return;
    }

    stack->data[++(stack->top)] = ticket;
}

/**
 * Remove e retorna o ticket no topo da pilha
 */
Ticket pop(Stack *stack){
    Ticket empty = {"",0,{0,0},0.0};

    if(isStackEmpty(stack)){
        printf("Pilha ta vazia\n");
        return empty;
    }

    return stack->data[(stack->top)--];
}

/**
 * Procura um ticket na pilha pelo nome
 */
Ticket findTicketInStack(Stack *stack, char *name){
    for(int i=0;i<=stack->top;i++){
        if(strcmp(stack->data[i].name, name)==0)
            return stack->data[i];        
    }

    Ticket empty = {"",0,{0,0},0.0};
    return empty;
}

/**
 * Preenche a pilha com um ticket repetido
 */
void fillStack(Stack *stack, Ticket ticket, int amount){
    for(int i=0;i<amount && !isStackFull(stack);i++){
        push(stack, ticket);
    }
}

/**
 * Limpa a pilha
 */
void clearStack(Stack *stack){
    stack->top = -1;
}
