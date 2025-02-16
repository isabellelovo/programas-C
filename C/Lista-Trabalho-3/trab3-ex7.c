/* 7.
- Crie uma estrutura Funcionario
com campos para nome e salário.

- Crie um programa que permita ao usuário digitar o número de funcionários e,
em seguida, aloque dinamicamente um array de Funcionarios.

- Permita que o usuário insira o nome e o salário de cada funcionário e,
em seguida, calcule e imprima o salário médio dos funcionários.
*/


#include <stdio.h>
#include <stdlib.h>

struct Funcionario{
    char nome[50];
    float salario;
};
typedef struct Funcionario funcionario;

int main() {
    
    funcionario *funcs;
    int qtdFunc;
    float somaSal=0;
    float mediaSal;
    
    printf("Quantos funcionários deseja cadastrar? ");
    scanf("%d", &qtdFunc);
    getchar();
    
    funcs = (funcionario*) malloc(qtdFunc * sizeof(funcionario));
    
    printf("\n--Cadastro--\n");
    
    for(int i=0; i<qtdFunc; i++){
        printf("\n-> %dº Funcionário", i+1);
        
        printf("\nNome: ");
        fgets(funcs[i].nome, 50, stdin);
        
        printf("Salário: R$");
        scanf("%f", &funcs[i].salario);
        getchar();
    }
    
    printf("\n\nCadastro realizado!");
    
    for(int i=0; i<qtdFunc; i++){
        printf("\n\nFuncionário(a): %s", funcs[i].nome);
        printf("Salário: R$%.2f", funcs[i].salario);
        
        somaSal += funcs[i].salario;
    }
    
    mediaSal = somaSal/qtdFunc;
    
    printf("\n\n-> Média salarial = R$%.2f", mediaSal);

    return 0;
}