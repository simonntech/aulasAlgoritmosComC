#include <stdio.h>

int main(){
    char *ptr;
    int i;

    char vet[5] = {'a', 'b', 'c', 'd', 'e'};
    ptr = vet; //aponta para o primeiro elemento do vetor, vet[0]

    for (i=0; i<5; i++){
        printf("\n Vet[%d]=%c", i, vet[i]); // vetor pela variável
        printf("\n ptr= %c", *ptr);
        ptr++;
    }

    return 0;
}