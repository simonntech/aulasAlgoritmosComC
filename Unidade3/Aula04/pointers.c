#include <stdio.h>

struct aluno{
    int mat;
    float nota;
};

int main(){
    struct aluno joao;
    struct aluno *ptr;
    joao.mat = 1000;
    joao.nota= 9.0;
    ptr = &joao;

    printf("%d", ptr->mat);
    printf("%f", ptr->nota);

    return 0;
}