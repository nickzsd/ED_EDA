#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

typedef struct {
	Pessoa Vetor[256];
	int Comeco;
	int fim;
} Fila;



void initFila(Fila *fila){
    fila->Comeco = 0;
    fila->fim = 0;
}
 
void Enfileirar(Pessoa p, Fila *fila){
    if(fila->fim < 255){
        fila->Vetor[fila->fim] = p;
        fila->fim++;
        printf("%s adicionada a fila\n", p.nome);
    } else {
        printf("Fila cheia");
    }
}
 
void Desenfileirar(Fila *fila){
    Pessoa temp = fila->Vetor[fila->Comeco];
    fila->Comeco++;
    printf("Pessoa que comprou o ingresso: %s, idade: %d\n", temp.nome, temp.idade);
}
 
int main() {
   Fila fl;
   initFila(&fl);
   Pessoa p1 = {"Alice", 30};
   Pessoa p2 = {"Bob", 25};
   Pessoa p3 = {"Charlie", 35};
   Enfileirar(p1, &fl);
   Enfileirar(p2, &fl);
   Enfileirar(p3, &fl);
   Desenfileirar(&fl);
};