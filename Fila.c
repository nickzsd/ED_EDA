#include <stdio.h>
#include <stdlib.h>

int fila[256];
int comeco = -1;
int fim = 0;

void push(int x){
    if (fim < 256) {
        fila[fim] = x;
        fim++;
    } else {
        printf("Fila cheia!\n");
    }
}

int pop(void) {
    int temp = fila[comeco];
    comeco++;
    return printf("%d\n", fila[temp]);
}

int main(void) {
    push(1);
    printf("%d\n", fila[0]);
    push(5);
    printf("%d\n", fila[1]);
    push(2);
    printf("%d\n", fila[2]);
    pop();
    pop();

    return 0;
}