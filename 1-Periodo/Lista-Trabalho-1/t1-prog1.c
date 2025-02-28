/*1. Escreva um programa que calcule o índice de massa corpórea (IMC) de uma pessoa, sendo o peso e a altura fornecidos pelo teclado. Apresentar na tela o peso, a altura e o IMC calculado.

  Exemplo: Valores fornecidos pelo teclado: Peso = 60kg e Altura = 1.67m

  Cálculo do IMC = 60 / (1,67)² = 60 / 2.78 = 21.5
*/

#include<stdio.h>

int main(){
  float peso, altura, imc;

  printf("Digite o seu peso: ");
  scanf("%f",&peso);
  printf("Digite a sua altura: ");
  scanf("%f",&altura);

  imc = peso/(altura * altura);
  printf("Seu IMC = %.1f",imc);
}