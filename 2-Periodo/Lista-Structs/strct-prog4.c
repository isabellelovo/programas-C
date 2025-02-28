/*
4. Crie a estrutura aluno com nome e 3 notas, preencha a estrutura através
do usuário e através de uma função obtenha e retorne a maior nota do
aluno. Utilize ponteiros.
*/


#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    float notas[3];
};

typedef struct Aluno aluno;

float buscaMaior (aluno* p);

int main() {
    
    aluno alu;
    float maiorNota;
    
    printf("Digite o nome: ");
    fgets(alu.nome, sizeof(alu.nome), stdin);
    
    for(int i=0; i < 3; i++) {
        printf("Digite a %dº Nota: ", i+1);
        scanf("%f", &alu.notas[i]);
    }
    
    printf("\nNome: %s", alu.nome);
    
    maiorNota = buscaMaior(&alu);
    printf("Maior nota: %.2f", maiorNota);
    
    return 0;
}

float buscaMaior (aluno* p) {
    
    float maior = 0;
    
    for(int i = 0; i < 3; i++) {
        
        if(p->notas[i] > maior) {
            maior = p->notas[i];   
        }
    }
    
    return maior;
}