#include <stdio.h>
#include <string.h>

struct Aluno {
    int numMat;
    char nome[30];
    char sexo;
    int idade;
};

int main(){
    struct Aluno aluno1;

    aluno1.numMat = 1067;
    strcpy(aluno1.nome, "Bruno");
    aluno1.sexo = 'M';
    aluno1.idade = 35;

    printf("Número de matrícula: %d\n", aluno1.numMat);
    printf("Nome: %s\n", aluno1.nome);
    printf("Sexo: %c\n", aluno1.sexo);
    printf("Idade: %d\n", aluno1.idade);

    return 0;
}