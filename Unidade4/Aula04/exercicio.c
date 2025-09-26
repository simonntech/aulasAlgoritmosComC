#include <stdio.h>
#include <math.h>

float calcularRaiz(float n, float raizAnt){
    float raiz = (pow(raizAnt, 2) + n) / (2 * raizAnt);
    if(fabs(raiz - raizAnt)< 0.001)
        return raiz;
    return calcularRaiz(n, raiz);
}

int main(){
    float numero, raiz;
    printf("\n Digite um numero para calcular a raiz: ");
    scanf("%f", &numero);
    raiz = calcularRaiz(numero, numero / 2);
    printf("\n Raiz quadradada: %f", raiz);

    return 0;
}