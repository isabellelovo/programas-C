/* 3.
- Crie uma estrutura Endereco com campos para rua, cidade e estado.

- Em seguida, crie uma estrutura Pessoa com campos para nome e endereço.

- Pergunte ao usuário todas as informações e crie uma função que
recebe uma pessoa como argumento e imprime todas as informações dela,
incluindo o endereço.
*/

#include <stdio.h>

struct endereco {
    char rua[50];
    char cidade[30];
    char estado[30];
};

typedef struct endereco endereco;

struct pessoa {
    char nome[50];
    endereco end;
};

typedef struct pessoa pessoa;

void impressao(pessoa p);

int main() {
    pessoa pess;
    
    printf("Nome: ");
    fgets(pess.nome, 50, stdin);
    
    printf("\n- Endereço Completo\n");
    
    printf("Rua: ");
    fgets(pess.end.rua, 50, stdin);
    
    printf("Cidade: ");
    fgets(pess.end.cidade, 30, stdin);
    
    printf("Estado: ");
    fgets(pess.end.estado, 30, stdin);
    
    impressao(pess);

    return 0;
}

void impressao(pessoa p) {
    
    printf("\n- Imprimindo");
    
    printf("\nNome: %s", p.nome);
    printf("Rua: %s", p.end.rua);
    printf("Cidade: %s", p.end.cidade);
    printf("Estado: %s", p.end.estado);
}