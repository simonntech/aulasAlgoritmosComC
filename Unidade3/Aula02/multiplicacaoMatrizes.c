#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int soma = 0;

    printf("Digite as dimensoes da primeira matriz (m x n): \n");
    scanf("%d%d", &m, &n);
    printf("Digite as dimensões da segunda matriz (p x q): \n");
    scanf("%d%d", &p, &q);

    if (n!= p) {
        printf("Multiplicacao nao possivel\n");
        return 0;
    }

    int matriz1[m][n], matriz2[p][q], resultado[m][q];

    printf("Elementos da primeira matriz:\n");
    for(i = 0; i < m; i++) {
        for(j =0; j<n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Elementos da segunda matriz:\n");
    for(i=0;i<p; i++){
        for(j=0; j<q; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }


    //produto das matrizes

    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            for(k=0; k <p; k++){
                soma += matriz1[i][k] * matriz2[k][j];
            }
        
            resultado[i][j] = soma;
            soma=0;
        }
    }

    printf("O produto das matrizes e:\n");
    for(i =0; i< m; i++) {
        for (j=0; j<q; j++){
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}