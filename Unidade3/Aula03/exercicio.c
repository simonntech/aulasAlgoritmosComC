#include <stdio.h>
#include <string.h>
#define NUM_LIVROS 3

typedef struct{
    char titulo[100];
    char autor[50];
    char ISBN[13];
    int anoPublicacao;
    int estoque;
} Livro;

int main(){
    Livro livros[NUM_LIVROS]= {
        {"Memorias de um Futuro Esquecido", "Martelo de Assis", "8872771622", 1899, 10},
        {"Longas trancas de um Careca", "Osvaldo Pinto", "778377281", 2000, 5},
        {"Poeiras em Alto Mar", "David Baui", "8872631", 1950, 7}
    };

    //busca por autor
    char autorProcurado[50];
    fflush(stdin); //limpa buffer de leitura
    printf("Digite o nome do autor para procurar livros: ");
    fgets(autorProcurado, 50, stdin);
    autorProcurado[strcspn(autorProcurado, "\n")]=0;
    printf("Livros por %s:\n", autorProcurado);
    for (int i = 0; i <NUM_LIVROS; i++){
        if(strcmp(livros[i].autor, autorProcurado) == 0) {
            printf("Titulo: %s\n", livros[i].titulo);
            printf("ISBN: %s\n", livros[i].ISBN);
            printf("Ano publicacao: %d\n", livros[i].anoPublicacao);
            printf("Quantidade em estoque: %d\n", livros[i].estoque);
            printf("\n");
        }
    }

    //verificar disponibilidade do livro
    char ISBNprocurado[13];
    fflush(stdin);
    printf("Digite o ISBN do livro para verificar a disponibilidade: ");
    fgets(ISBNprocurado, 13, stdin);
    ISBNprocurado[strcspn(ISBNprocurado, "\n")] = 0;
    for (int i = 0; i < NUM_LIVROS; i++) {
        if(strcmp(livros[i].ISBN, ISBNprocurado) == 0)
            printf("O livro %s esta disponivel, quantidade: %d\n", livros[i].titulo, livros[i].estoque);
            break;
    }

    return 0;
}