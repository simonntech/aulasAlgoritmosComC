#include <stdio.h>

int main() {
    int valor, soma = 0;
    
    do {
        printf("Digite um valor para soma total, ou 0 para finalizar:");
        scanf("%i", &valor);
        soma = soma + valor;
    } while (valor != 0);

    printf("Total: %i", soma);

    return 0;
}