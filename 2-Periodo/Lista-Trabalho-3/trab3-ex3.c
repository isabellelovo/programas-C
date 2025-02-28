/* 3. 
- Crie uma estrutura Data
com campos para dia, mês e ano.

- Em seguida, crie uma estrutura Aluno
com campos para nome, número de matrícula e data de nascimento.

- Crie uma função que recebe um aluno como argumento
e imprime todas as informações dele, incluindo a data de nascimento.
*/


#include <stdio.h>

struct Data{
  int dia, mes, ano;
};
typedef struct Data data;

struct Aluno{
    char nome[50];
    int matricula;
    data dataNasc;
};
typedef struct Aluno aluno;

void printAluno(aluno a);

int main() {
    
    aluno alu;
    
    printf("--Informações do Aluno--\n\n");
    
    printf("Nome: ");
    fgets(alu.nome, 50, stdin);
    
    printf("Nº Matrícula: ");
    scanf("%d", &alu.matricula);
    
    printf("Data de Nascimento (dd/mm/aaaa):\n");
    
    printf("-> dia: ");
    scanf("%d", &alu.dataNasc.dia);
    
    printf("-> mês: %d/", alu.dataNasc.dia);
    scanf("%d", &alu.dataNasc.mes);

    printf("-> ano: %d/%d/", alu.dataNasc.dia, alu.dataNasc.mes);
    scanf("%d", &alu.dataNasc.ano);

    printAluno(alu);

    return 0;
}

void printAluno(aluno a){
    
    printf("\nInformações Recebidas!\n\n");
    
    printf("Aluno: %s", a.nome);
    
    printf("Matrícula: %d", a.matricula);
    
    printf("\nNascimento: %d/%d/%d", a.dataNasc.dia, a.dataNasc.mes, a.dataNasc.ano);
}