/*
8. Faça um programa que calcule o volume de uma esfera em função do raio.
Fórmula: V = 4/3 * Pi * R^3. Obs: Pi = 3,14.
*/

#include <stdio.h>

int main() {

  float raio, volume;

  printf("Siga as instruçoes: \n\n");
  printf("1°: Pegue uma esfera.\n");
  printf("2º: Meça o raio dela.\n");
  printf("3°: Digite o valor do raio: ");
  scanf("%f", &raio);

  volume = 4/3 * 3.14 * (raio * raio * raio);

  printf("\nA esfera tem o volume = %.2f", volume);

}