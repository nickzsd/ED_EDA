#include <stdio.h>
#include <stdlib.h>

void header() {
    printf("\n\n\n=== / Bem vindo ao CineCapi / ===\n");
    printf("o que deseja Realizar?\n");
    printf("[1] - Comprar Ingressos\n"); //Processo de Fila
    printf("[2] - Ingressos Disponiveis\n"); //Ver o tamanho da pilha de ingressos
    printf("[3] - Tamanho da fila\n"); //Ver o tamanho atual da fila

    //Para dev
    printf("[4] - Preencher Fila\n");
    printf("[5] - Zerar Processo\n");
    printf("[0] - Sair\n");
}

int getSelection(){    
    int op;
    printf("Selecione uma Opcao: ");    
    scanf("%d", &op);
    return op;
}

void setPath(int *Running){
    header();   

    switch(getSelection()) {
        case 1:
            printf("Comprar Ingressos selecionado.\n");            
            break;
        case 2:
            printf("Ingressos Disponíveis selecionado.\n");            
            break;
        case 3:
            printf("Tamanho da fila selecionado.\n");            
            break;
        case 4:
            printf("Preencher Fila selecionado.\n");            
            break;
        case 5:
            printf("Zerar Processo selecionado.\n");            
            break;
        case 0:
            printf("Saindo...\n");     
            *Running = 0;  
            break;                 
        default:
            printf("Opcao inválida. Tente novamente.\n");
    }
}