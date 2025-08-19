#include "vars.h"

void initFila(Fila *fila){
    fila->Comeco = 0;
    fila->fim = 0;
}
 
void Enfileirar(int _p, Fila *fila){
    if(fila->fim < 255){
        fila->Vetor[fila->fim] = _p;
        fila->fim++;        
    } else {
        printf("Fila cheia");
    }
}
 
void Desenfileirar(Fila *fila){
    int temp = fila->Vetor[fila->Comeco];
    fila->Comeco++;
    
    printf("Muito obrigado por comprar aqui: %d\n", temp);
}