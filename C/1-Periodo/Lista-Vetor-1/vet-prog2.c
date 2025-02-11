/*2. Altere o programa anterior para calcular e apresentar a média dos valores digitados e aqueles que são maiores e menores que a média.*/

#include <stdio.h>

int main(){

  int valor[5];
  float media, soma = 0;
  int i;

  printf("Digite 5 numeros inteiros:\n\n");

  for (i = 0; i < 5; i++) {
    scanf("%d", &valor[i]);
    soma += valor[i]; 
  }

  media = soma/5.0;

  printf("\n\nMedia dos numeros = %.2f", media);
  
  printf("\n\nNumero(s) maior(es) que a media:\n");
  for (int i = 0; i < 5; i++) {
      if(valor[i] > media) {
          printf("\n%d", valor[i]);
      }
  }

  return 0;
  
}