#include <stdio.h>

float calcular_salario_bruto(float valor_hora, int qnt_horas){
    float salario_bruto = valor_hora * qnt_horas;
    return salario_bruto;
}

float calcular_desconto(float salario_bruto){
    float desconto = (9 * salario_bruto)/100;
    return desconto;
}

float calcular_salario_liquido(float salario_bruto, float desconto){
    float salario_liquido = salario_bruto - desconto;
    return salario_liquido;
}

int main(){
    float valor_hora, salario_bruto, desconto, salario_liquido;
    int qnt_horas;

    printf("----- Calculo de Salario ------\n\n");
    printf("\nValor da Hora Trabalhada R$ ");
    scanf("%f", &valor_hora);
    printf("\nQuantidade de horas trabalhadas: ");
    scanf("%d", &qnt_horas);

    salario_bruto = calcular_salario_bruto(valor_hora, qnt_horas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("---- RESULTADOS:\n\n");
    printf("Valor da hora trabalhada: R$%.2f\n", valor_hora);
    printf("Horas trabalhadas: %d\n", qnt_horas);
    printf("Salario bruto total: R$%.2f\n", salario_bruto);
    printf("Valor do desconto : R$%.2f\n", desconto);
    printf("Total salario liquido a receber: R$%.2f\n", salario_liquido);

    return 0;
}