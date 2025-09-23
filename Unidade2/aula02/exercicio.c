#include <stdlib.h>

int main() {
    float soma = 0, valor;
    int opcao;

    do {
        printf("\nDigite uma operacao:");
        printf("\n 1.Deposito");
        printf("\n 2.Saque");
        printf("\n 3.Saldo");
        printf("\n 4.Sair");
        printf("\n Escolha opcao:");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n Valor do deposito: R$");
                scanf("%f", &valor);
                soma = soma + valor;
                break;
            case 2:
                printf("\n Valor do Saque: R$");
                scanf("%f", &valor);
                if (valor < soma) 
                    printf("Saldo insuficiente, Saldo Atual: R$ %.2f\n", soma);
                soma = soma - valor;
                break;
            case 3:
                printf("\n Saldo Atual = R$ %.2f\n", soma);
                break;
            default:
                if(opcao != 4) {
                    printf("\n Opcao invalida \n");
                }
        }
    } while (opcao != 4);

    printf("Fim do programa. \n\n");

    return 0;

}