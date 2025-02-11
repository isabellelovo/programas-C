/*
2. Faça um programa que leia a idade de 5 pessoas e ao final exiba a quantidade de pessoas com idade igual ou superior a 18 anos.
*/

#include <stdio.h>

int main(){

  int idade, quantidade = 0;

  for (int contador = 1; contador <= 5; contador++){

    printf("Idade da Pessoa %d: ", contador);
    scanf("%d", &idade);

    if (idade >= 18){
    quantidade++;
    }
  }

  printf("\n%d pessoas tem 18 anos ou mais.", quantidade);


  return 0;
}