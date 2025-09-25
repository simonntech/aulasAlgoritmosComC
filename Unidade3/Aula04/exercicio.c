#include <stdio.h>

int main(){
    int vetor[5] = {1,2,3,4,5};
    int *pointer = vetor;

    for(int i=0; i<5; i++){
        *(pointer+1) += 10;
    }

    printf("Elementos do vetor apos adicionar 10:\n");
    for(int i=0; i<5; i++){
        printf("%d\t", vetor[i]);
    }

    printf("\n");

    return 0;
}