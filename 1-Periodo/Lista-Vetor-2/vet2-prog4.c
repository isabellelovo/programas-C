/*
4. Escreva um programa em C que leia 6 números inteiros e armazene-os em um array. Em seguida, crie um segundo array contendo os elementos do primeiro array ao quadrado e imprima os dois arrays.
*/

#include <stdio.h>

int main() {
  int numeros[6];
  int i, numsquadrado[6];
  
  printf("Digite 6 numeros inteiros:\n");
    for(i = 0; i < 6; i++) {
      printf("Numero %d: ", i + 1);
      scanf("%d", &numeros[i]);

      numsquadrado[i] = numeros[i] * numeros[i];
  }
 
  printf("Array original:\n");
    for(i = 0; i < 6; i++) {
      printf("%d ", numeros[i]);
  }
  
  printf("\nArray elevado ao quadrado:\n");
    for(i = 0; i < 6; i++) {
      printf("%d ", numsquadrado[i]);
  }

  
  return 0;
}