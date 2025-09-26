#include <stdio.h>

int x = 10;

int dobrar(){
    return 2 * x;
}

int main(){
    printf("\n Valor de x global= %d", x);
    printf("\n Valor de x global alterado na funcao dobrar() = %d", dobrar());
}