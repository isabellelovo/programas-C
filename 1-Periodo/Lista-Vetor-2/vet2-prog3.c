/*
3. Escreva um programa em C que leia 7 números inteiros do usuário e encontre o maior e o menor número no array.
*/

#include <stdio.h>

int main() {
  
  int numeros[7];
  int i, maior, menor;
    
  printf("Digite 7 numeros inteiros:\n\n");
    for(i = 0; i < 7; i++) {
      printf("Número %d: ", i + 1);
      scanf("%d", &numeros[i]);
  }
  
  maior = menor = numeros[0];
  
  for(i = 1; i < 7; i++) {
    if(numeros[i] > maior)
      maior = numeros[i];
    
    if(numeros[i] < menor)
      menor = numeros[i];
  }
  
  printf("\nMaior numero: %d\n", maior);
  printf("Menor numero: %d", menor);

  
  return 0;
}