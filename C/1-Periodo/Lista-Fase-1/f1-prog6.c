/*
6. Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas trabalhadas na semana e o valor da hora.
*/

#include <stdio.h>

int main() {

  float horas, valor, salario;
  printf("Calcule o seu Salario Semanal!\n\n");

  printf("Quantas horas voce trabalhou na Semana? ");
  scanf("%f", &horas);
  printf("Quanto lhe pagam por hora trabalhada? R$");
  scanf("%f", &valor);

  salario = horas * valor;

  printf("\n\nSalario Semanal = R$%.2f", salario);

}