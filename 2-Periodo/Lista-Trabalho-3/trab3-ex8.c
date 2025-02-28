/* 8.
- Crie uma estrutura Cliente
com campos para nome e idade.

- Crie um programa que permita ao usuário digitar o número de clientes e,
em seguida, aloque dinamicamente um array de Clientes.

- Permita que o usuário insira o nome e a idade de cada cliente e,
em seguida, identifique e imprima o cliente mais velho.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    char nome[50];
    int idade;
};
typedef struct Cliente cliente;

int main() {
    
    int qtdCli;
    cliente* cli;
    int idadeVelha = 0;
    char nomeVelho[50];
    
    printf("Número de clientes: ");
    scanf("%d", &qtdCli);
    getchar();
    
    cli = (cliente*) malloc(qtdCli * sizeof(cliente));
    
    printf("\n--Preencha--\n");
    
    for(int i=0; i<qtdCli; i++){
        
        printf("\n-> Cliente %d", i+1);
        
        printf("\nNome: ");
        fgets(cli[i].nome, 50, stdin);
        
        cli[i].nome[strcspn(cli[i].nome, "\n")] = 0;
        
        printf("Idade: ");
        scanf("%d", &cli[i].idade);
        getchar();
        
        if(cli[i].idade > idadeVelha){
            
            idadeVelha = cli[i].idade;
            strcpy(nomeVelho, cli[i].nome);
        }
    }
    
    printf("\n%s é o cliente mais velho! Tem %d anos!", nomeVelho, idadeVelha);
    
    return 0;
}
