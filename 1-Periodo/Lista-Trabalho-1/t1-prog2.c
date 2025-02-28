/*
2. Tendo como dados de entrada a altura e o sexo de uma pessoa (1 - masculino e 2 - feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*altura)-58 
- para mulheres: (62.1*altura)-44.7
*/

#include<stdio.h>

int main(){
  int sexo;
  float altura, pesoideal1, pesoideal2;

  printf("1- Masculino 2- Feminino \nIndique o seu sexo: ");
  scanf("%d",&sexo);

  printf("Digite a sua altura: ");
  scanf("%f",&altura);

  pesoideal1 = (72.7*altura)-58;
  pesoideal2 = (62.1*altura)-44.7;

  if (sexo == 1){
    printf("Seu peso ideal seria: %.2f",pesoideal1);
  }
  if (sexo == 2){
    printf("Seu peso ideal seria: %.2f",pesoideal2);
  }
}