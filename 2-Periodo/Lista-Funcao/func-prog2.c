/*
2. Faça um programa em que o usuário informará a sua idade e o programa emitirá
uma mensagem dizendo se o usuário é obrigado votar ou não. Use uma função para
a verificação do voto. Para votar o usuário deve possuir entre 18 e 70 anos.
*/

#include <stdio.h>

void obrigacao(int i);

int main() {
    
    int idade = 0;
    
    printf("Saiba se você precisa votar!\n\nInforme a sua idade: ");
    scanf("%d", &idade);
    
    obrigacao(idade);

    return 0;
}

void obrigacao(int i) {
    if (i >= 18 && i <= 70) {
        printf("\nSim, você é obrigado a votar! Boa sorte.");
    }
    else {
        printf("\nNão, você não é obrigado a votar! Descanse.");
    }
}
