#include <stdio.h>

int main() {
    float salario, inss, ir, sal_liquido;

    printf("Calculo de Salario Liquido Com Desconto do IR e INSS\n\n");
    printf("\nDigite seu salario Bruto\n");
    scanf("%f", &salario);

    // Calcular o INSS

    if (salario <= 1320)  
        inss = salario * 0.075;
    else if (salario >= 1320 && salario <= 2571.29)
        inss = salario * 0.09;
    else if (salario >= 2571.30 && salario <= 3856.94)
        inss = salario * 0.12;
    else if (salario >= 3856.95 && salario <= 7507.49)
        inss = salario * 0.14;
    else
        inss = 1051.04; //máximo de contribuição


    // Calcular o IR
    

}