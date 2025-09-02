#include <stdio.h>

int main() {
    float precoVenda, valorImposto, valorDesconto, precoFinal;

    const float taxaImposto = 0.1;
    const float descontoPadrao = 0.05;

    printf("Informe o preço da venda do produto: ");
    scanf("%f", &precoVenda);

    // processamento

    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;

    precoFinal = precoVenda + valorImposto - valorDesconto;

    // out

    printf("O preço final do televisor é R$%.2f", precoFinal);

    return 0;
}