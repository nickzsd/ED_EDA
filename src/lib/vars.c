#include "vars.h"
#include <stdio.h>

/**
 * Lê a seleção do usuário
 */
int getSelection(){
    int op;
    printf("Escolha uma opcao: ");
    scanf("%d", &op);
    return op;
}
