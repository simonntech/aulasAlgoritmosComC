#include <stdio.h>

int calcularPeso(){
    float b, c, h = 0;
    printf("\n Digite o valor da base: ");
    scanf("%f", &b);
    printf("\n Digite o valor da altura:");
    scanf("%f", &h);
    printf("\n Digite o valor do comprimento: ");
    scanf("%f", &c);

    return (int) (b * h * c * 25);

}

int main(){
    float peso;

    peso = calcularPeso();

    if(peso <=500) {
        printf("\n O guintade de modelo G1 deve ser usado");
    } else if(peso > 1500) {
        printf("\n O guindates de modelo G3 deve ser usado");
    } else {
        printf("\n O guindaste de modelo G2 deve ser usado");
    }

    return 0;
}