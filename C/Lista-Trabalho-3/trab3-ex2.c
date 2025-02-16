/* 2.
Crie uma estrutura chamada Aluno
com campos para o nome, número de matrícula e notas em três disciplinas.

- Escreva uma função que calcula a média das notas de um aluno e imprime o resultado.*/


#include <stdio.h>

struct Aluno{
    char nome[50];
    int matricula;
    float nota[3];
};

typedef struct Aluno aluno;

void calcMedia(aluno a);

int main() {
    
    aluno alu;
    
    printf("--Dados do Aluno--\n\n");
    
    printf("Nome: ");
    fgets(alu.nome, 50, stdin);
    
    printf("Nº Matrícula: ");
    scanf("%d", &alu.matricula);
    
    for(int i=0; i<3; i++){
        printf("%dº nota: ", i+1);
        scanf("%f", &*(alu.nota + i));
    }
    
    calcMedia(alu);
    
    return 0;
}

void calcMedia(aluno a){
    
    float soma=0;    
    float media;
    
    for(int i=0; i<3; i++){
        soma += a.nota[i];
    }
    
    media = soma/3;
    
    printf("\nMédia das notas: %.2f", media);
}