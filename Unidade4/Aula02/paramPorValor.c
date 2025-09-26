#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int res;
    res = sum(20, 30);
    printf("\n Resultado da soma = %d", res);
}