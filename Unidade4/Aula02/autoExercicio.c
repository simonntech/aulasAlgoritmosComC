#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int i, j, res;
    printf("Primeiro numero: ");
    scanf("%d", &i);
    printf("Segundo numero: ");
    scanf("%d", &j);
    res = sum(i, j);
    printf("\n Resultado da soma = %d", res);
}