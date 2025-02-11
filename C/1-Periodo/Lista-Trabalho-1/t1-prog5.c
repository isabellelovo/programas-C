/*
5. Jogo de Pedra, papel e tesoura: nesse jogo cada jogador faz sua escolha (1 –Tesoura, 2 – Pedra, 3 – Papel), e vence aquele que escolher um objeto que seja capaz de vencer o outro: 
•    Tesoura corta papel
•    Pedra quebra tesoura
•    Papel embrulha a pedra

Faça um programa que leia a opção de objeto do primeiro jogador, a opção de objeto do segundo jogador e informe qual jogador venceu (ou se houve empate).
*/

#include<stdio.h>

int main(){
  int escolha1, escolha2;

  printf("Duas pessoas estao jogando ""Pedra, Papel e Tesoura""!\n\nIndique o que cada uma colocou.\n1- Pedra | 2- Papel | 3- Tesoura\n");

  printf("\nPrimeira pessoa: ");
  scanf("%d",&escolha1);
  printf("Segunda pessoa: ");
  scanf("%d",&escolha2);

  if (escolha1 == 1 && escolha2 == 3){
    printf("\nA primeira pessoa ganhou!");
  }
  else if (escolha2 == 1 && escolha1 == 3){
    printf("\nA segunda pessoa ganhou!");
  }

  else if (escolha1 == 2 && escolha2 == 1){
    printf("\nA primeira pessoa ganhou!");
  }
  else if (escolha2 == 2 && escolha1 == 1){
    printf("\nA segunda pessoa ganhou!");
  }

  else if (escolha1 == 3 && escolha2 == 2){
    printf("\nA primeira pessoa ganhou!");
  }
  else if (escolha2 == 3 && escolha1 == 2){
    printf("\nA segunda pessoa ganhou!");
  }

  else{
    printf("\nAs duas pessoas empataram.");
  }
}