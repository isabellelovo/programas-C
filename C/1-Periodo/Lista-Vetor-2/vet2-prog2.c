/*
2. Escreva um programa em C que leia o nome e a idade de 5 pessoas, calcule e imprima o nome da pessoa de maior idade. Considere que pode haver mais de uma pessoa com a maior idade. Nesse caso seus nomes devem ser listados.
*/

#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 5
#define TAM_NOME 50

int main() {

  char nomes[MAX_PESSOAS][TAM_NOME];
  int idades[MAX_PESSOAS];
  int i,maior_idade = 0;
  
    for(i = 0; i < MAX_PESSOAS; i++) {
    printf("Digite o nome da pessoa %d: ", i + 1);
    scanf("%s", nomes[i]);
    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%d", &idades[i]);
 
    if (idades[i] > maior_idade)
      maior_idade = idades[i];
  }

  printf("\nPessoa(s) com a maior idade (%d anos):\n", maior_idade);
  
  for(i = 0; i < MAX_PESSOAS; i++) {
    if (idades[i] == maior_idade)
      printf("%s\n", nomes[i]);
  }

  
  return 0;
}