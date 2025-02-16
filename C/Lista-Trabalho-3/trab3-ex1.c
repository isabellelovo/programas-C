/* 1.
- Crie uma estrutura chamada Livro
com campos para o título, autor e número de páginas.

- Crie uma função que recebe um livro como argumento
e imprime todas as informações do livro.
*/

#include <stdio.h>

struct Livro{
  char titulo[50];
  char autor[50];
  int qtdPag;
};

typedef struct Livro livro;

void printLivro(livro l);

int main() {
    
    livro liv;
    
    printf("Preencha com informações do Livro:\n");
    
    printf("\n\nTítulo: ");
    fgets(liv.titulo, 50, stdin);
    
    printf("Autor: ");
    fgets(liv.autor, 50, stdin);
    
    printf("Número de Páginas: ");
    scanf("%d", &liv.qtdPag);

    printLivro(liv);

    return 0;
}

void printLivro(livro l){
    printf("\nCadastro Realizado!\n\n");
    
    printf("Livro: %s", l.titulo);
    printf("Autor: %s", l.autor);
    printf("Páginas: %d", l.qtdPag);
}