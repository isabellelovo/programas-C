/*
7. Elabore um programa que dado o valor de dois catetos de um triângulo retângulo, calcule a hipotenusa e a área do triângulo.

Fórmulas:
  HIP = Raiz(Cat1^2 + cat2^2);
  P = (Cat1 + Cat2 + HIP)/2;
  Area = Raiz(P * (P - Cat1) * (P - Cat2) * (P - HIP)).
Obs: P = Semiperímetro.
*/

#include <stdio.h>
#include <math.h>>

int main() {

  float cat1, cat2, hip, peri, area;

  printf("Imagine um Trianquilo Retangulo, informe seus catetos:\n\n");
  printf("Valor do 1° cateto: ");
  scanf("%f", &cat1);
  printf("Valor do 2° cateto: ");
  scanf("%f", &cat2);

  hip = sqrt ((cat1 * cat1) + (cat2 * cat2));
  
  peri = (cat1 + cat2 + hip) / 2;
  
  area = sqrt (peri * (peri - cat1));
  area *= (peri - cat2);
  area *= (peri - hip);
  
  printf("\n\nVeja o que calculamos com eles:\n\n");
  printf("Hipotenusa = %.2f\n", hip);
  printf("Area do Triangulo = %.2f cm", area);
  
}