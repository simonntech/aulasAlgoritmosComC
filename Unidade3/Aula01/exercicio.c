#include <stdio.h>

int main() {
    char cpf1[15]; //valor do CPF com pontos e traços

    char cpf2[11] = ""; //Vetor CPF sem formatação, iniciando como vazio

    int i =0, n = 0;

    printf("Digite seu CPF com traços e pontos: \n");
    scanf("%s", cpf1);

    for (i = 0; i<14; i++) {
        if (cpf1[i] == '.' || cpf1[i] == '-'){
            continue; //ignora os pontos e traços
        } else {
            // armazena os dígitos em cpf2
            cpf2[n] = cpf1[i];
            n++;
        }
    }

    printf("\n\nCPF formatado = %s", cpf2);

    return 0;
}