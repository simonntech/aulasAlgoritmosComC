#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("\n n1 e n2 sao iguais? %d", n1 == n2);
    printf("\n n1 e maior que n2? %d", n1>n2);
    printf("\n n1 e menor ou igual a n2? %d", n1<=n2);

    return 0;
}