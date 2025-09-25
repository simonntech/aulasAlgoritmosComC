#include <stdio.h>
#define QNT_VENDAS 5

int main(){
    int vendas[QNT_VENDAS];
    int vendaTotal=0;

    printf("Dados de vendas\n\n");
    printf("-------------------\n\n");
    for(int i=0; i< QNT_VENDAS; i++){
        int numerador = i+1;
        printf("Quantidade de vendas do %io dia: ", numerador);
        scanf("%i", &vendas[i]);
    };

    printf("-------------------\n\n");
    for(int j=0; j< QNT_VENDAS; j++){
        int numerador = j+1;
        vendaTotal += vendas[j];
        printf("Vendas no %i dia: %i\n", numerador, vendas[j]);
    }

    printf("---------------------\n\n");
    printf("Total de vendas no periodo de %i dias: %i",QNT_VENDAS,vendaTotal );

    return 0;
}