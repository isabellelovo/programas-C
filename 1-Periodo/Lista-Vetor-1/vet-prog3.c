/*
3.Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de
referência inteiro e:
a) imprima os números do vetor que são maiores que o valor referência
b) retorne quantos números armazenados no vetor são menores que o valor de referência
c) retorne quantas vezes o valor de referência aparece no vetor
*/

#include <stdio.h>

int main(){

  int num[10], numref;
  int apareceref = 0, somamenor = 0;
  int i;

  
  printf("Item 1 - Digite 10 numeros inteiros:\n\n");
    for (i = 0; i < 10; i++) {
      scanf("%d", &num[i]);
    }

  
  printf("\nItem 2 - Agora, digite 1 numero inteiro para ser a referência daqueles digitados acima: ");
  scanf("%d", &numref);

  
  printf("\n\nNumero(s) maior(es) que a referência:\n");
    for (i = 0; i < 10; i++) {
      if (num[i] > numref)
        printf("\n%d", num[i]);
    }

  
  for (i = 0; i < 10; i++) {
    if (num[i] < numref)
      somamenor++;
  }
  printf("\n\nQuantidade de numero(s) menor(es) que a referencia: %d", somamenor);

  
  for (i = 0; i < 10; i++) {
    if (num[i] == numref)
      apareceref++;
  }
  printf("\nQuantidade de vezes em que a referencia apareceu entre os numeros: %d", apareceref);

  
  return 0;
  
}