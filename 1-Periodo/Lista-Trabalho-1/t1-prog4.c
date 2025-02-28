/*
4. Elabore um programa para solicitar via teclado a quantidade de derrotas, empates e vitórias obtidas por ela no campeonato. Calcular e informar: a quantidade de pontos ganhos e a quantidade de pontos perdidos. Observação: no futebol cada
vitória vale três pontos e cada empate vale um ponto.
*/

#include<stdio.h>

int main(){
  int vitorias, derrotas, empates, ptsperdidos, ptsganhos;

  printf("Pense em um time de campeonato e responda:\n\nQuantas vitorias ele teve? ");
  scanf("%d",&vitorias);
  printf("Quantas derrotas ele teve? ");
  scanf("%d",&derrotas);
  printf("Quantos empates ele teve? ");
  scanf("%d",&empates);

  ptsganhos = empates + (3 * vitorias);
  ptsperdidos = ptsganhos - (3 * derrotas);

  printf("\nSeu time ganhou %d ponto(s)",ptsganhos);
  printf("\nSeu time perdeu %d ponto(s)",ptsperdidos);
}