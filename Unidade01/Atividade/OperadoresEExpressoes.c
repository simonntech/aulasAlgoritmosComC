#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    printf("Terceiro numero: ");
    scanf("%d", &n3);

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

    printf("Resultado das somas: \n");
    printf("%d + %d = %.f\n", n1, n2, soma1);
    printf("%d + %d = %.f\n", n2, n3, soma2);
    printf("%d + %d = %.f\n\n", n1, n3, soma3);

    if (n1 > n2) {
        printf("O primeiro numero: %d e maior que o segundo: %d\n\n", n1, n2);
    }

    if (n2 < n3) {
        printf("O segundo numero: %d é menor que o terceiro numero: %d\n\n", n2, n3);
    }

    
    if ((n1 > 0) && (n2 % 2 == 0)) {
        printf("Atendeu o requisito do primeiro numero ser positivo, e o segundo ser par!");
    }

    return 0;
}