/*
3. Faça um programa que leia três números diferentes e informe o maior deles. Se os números digitados não forem diferentes o programa deve gerar a mensagem: “Os valores digitados não são diferentes”.
*/

#include<stdio.h>

int main(){
  float num1, num2, num3;

  printf("Informe 3 numeros diferentes. \nPrimeiro: ");
  scanf("%f",&num1);

  printf("Segundo: ");
  scanf("%f",&num2);

  printf("Terceiro: ");
  scanf("%f",&num3);


  if (num1 > num2 && num3 < num1){
    printf("\nMaior numero: %.2f",num1);
  }
  else if (num2 > num1 && num3 < num2){
    printf("\nMaior valor: %.2f",num2);
  }
  else if (num3 > num1 && num2 < num3){
    printf("\nMaior valor: %.2f",num3);
  }
  else{
    printf("\nPreste atencao! Esses numeros sao iguais!");
  }
}
