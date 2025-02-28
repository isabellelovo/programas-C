/*
5. Elabore um programa para solicitar o nome de uma equipe de futebol, a
quantidade de derrotas, empates e vitórias obtidas por ela no campeonato.
Calcular e informar o percentual de aproveitamento da equipe (cada vitória vale 3 pontos e cada empate vale um ponto).
*/

#include <stdio.h>

int main() {

  float vitorias, derrotas, empates, pts_ganhos, pts_disputados, P_aproveitamento;

  printf("Pense em um Time de Futebol de Campeonato e responda:\n\n");

  printf("Quantas vitorias ele teve? ");
  scanf("%d",&vitorias);
  printf("Quantas derrotas ele teve? ");
  scanf("%d",&derrotas);
  printf("Quantos empates ele teve? ");
  scanf("%d",&empates);

  pts_ganhos = empates + (3 * vitorias);
  pts_disputados = (3 * (vitorias + derrotas)) + empates;

  P_aproveitamento = pts_ganhos/pts_disputados;
  P_aproveitamento *= 100;

  printf("\nSeu time obteve %.2f%% de aproveitamento!", P_aproveitamento);

}