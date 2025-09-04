#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Primeiro número: ");
    scanf("%d", n1);

    printf("Segundo número: ");
    scanf("%d", n2);

    printf("Terceiro número: ");
    scanf("%d", n3);

    float soma1 = n1 + n2 ;
    float soma2 = n2 + n3 ;
    float soma3 = n1 + n3 ;

    float sub1 = n1 - n2;
    float sub2 = n2 - n3;
    float sub3 = n1 - n3;

    float mult1 = n1 * n2;
    float mult2 = n2 * n3;
    float mult3 = n1 * n3;

    float div1 = n1 / n2;
    float div2 = n2 / n3;
    float div3 = n1 / n3;

    if (n1 > n2) {
        printf("O primeiro número: %d é maior que o segundo: %d", n1, n2);
    }

    if (n2 < n3) {
        printf("O segundo número: %d é menor que o terceiro número: $d", n2, n3);
    }

    
    if ((n1 > 0) && (n2 % 2)) {
        printf("Atendeu o requisito do primeiro número ser positivo, e o segundo ser par!");
    }

    return 0;
}