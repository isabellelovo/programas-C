/* 5.
- Crie uma estrutura chamada ContaBancaria
com campos para o número da conta, o nome do titular e o saldo.

- Escreva funções para depositar dinheiro na conta, sacar dinheiro da conta
e imprimir o saldo atual.
*/


#include <stdio.h>

struct ContaBancaria{
  int numConta;
  char nome[50];
  float saldo;
};
typedef struct ContaBancaria contaBancaria;

void depositar(contaBancaria *cnt, float dep);
void sacar(contaBancaria *cnt, float saq);
void printSaldo(contaBancaria *cnt);

int main() {
    
    contaBancaria conta;
    float deposito, saque;
    
    printf("--Conta Bancária--\n\n");
    
    printf("Nº da Conta: ");
    scanf("%d", &conta.numConta);
    getchar();
    
    printf("Titular: ");
    fgets(conta.nome, 50, stdin);
    
    printf("Saldo: ");
    scanf("%f", &conta.saldo);
    
    printf("\nDigite um valor para Depositar:\nR$");
    scanf("%f", &deposito);
    
    depositar(&conta, deposito);
    
    do{
        printf("\nDigite um valor para Sacar:\nR$");
        scanf("%f", &saque);
        
        if (saque > conta.saldo){
            printf("Saldo Insuficiente! Você tem R$%.2f\n", conta.saldo);
        }
        
    } while (saque > conta.saldo);
    
    sacar(&conta, saque);
    
    printSaldo(&conta);
    
    return 0;
}

void depositar(contaBancaria *cnt, float dep){
    cnt->saldo += dep;
}

void sacar(contaBancaria *cnt, float saq){
    (*cnt).saldo -= saq;
}

void printSaldo(contaBancaria *cnt){
    printf("\nSaldo Atual = R$%.2f", cnt->saldo);
}