#include <stdio.h>

float calcular_salario_bruto(float valor_hora, int qnt_horas){
    float salario_bruto = valor_hora * qnt_horas;
    return salario_bruto;
}

float calcular_desconto(float salario_bruto){
    float desconto = salario_bruto - (salario_bruto * 0.09);
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
    scanf("%f", valor_hora);
    printf("\nQuantidade de horas trabalhadas: ");
    scanf("%d", qnt_horas);

    

    return 0;
}