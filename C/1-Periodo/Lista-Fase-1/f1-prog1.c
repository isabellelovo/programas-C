/*
Crie um programa para ler a matrícula e o salário de dois empregados. Descontar 5% no salário do primeiro e acrescentar 9% no salário do segundo. Informar: o valor do desconto do primeiro; o valor do acréscimo do segundo; o salário final do primeiro; o salário final do segundo.
*/

#include<stdio.h>

int main(){
  
  int matricula1, matricula2;
  float salario1, salario2;
  float desconto, acrescimo;
  float salariofinal1, salariofinal2;

  printf("Digite a matricula do primeiro funcionario: ");
  scanf("%d", &matricula1);
  printf("Digite a matricula do segundo funcionario: ");
  scanf("%d", &matricula2);

  printf("\nDigite o salario do primeiro funcionario: ");
  scanf("%f",&salario1);
  printf("Digite o salario do segundo funcionario: ");
  scanf("%f",&salario2);

  desconto = salario1 * 0.05;
  acrescimo = salario2 * 0.09;
  salariofinal1 = salario1 - desconto;
  salariofinal2 = salario2 + acrescimo;

  printf("\nSalario final do primeiro funcionario: %.2f", salariofinal1);
  printf("\nSalario final do segundo funcionario: %.2f ", salariofinal2);

  return 0;
  
}