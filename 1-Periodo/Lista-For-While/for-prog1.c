/*
1. Faça um programa que leia o preço de 5 produtos e ao final exiba a soma dos preços e a média de preço dos produtos.
*/

#include <stdio.h>

int main (){

  float preco, media, soma = 0;

  for (int contador = 1; contador <= 5; contador++){

    printf("Informe o valor do produto %d: ", contador);
    scanf("%f", &preco);

    soma += preco;
  }

  media = soma/5;

  printf("\nSoma dos produtos = %.2f", soma);
  printf("\nMedia dos produtos = %.2f", media);


  return 0;
}