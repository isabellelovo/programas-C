/*
14. Pergunte ao usuário a quantidade de vitórias, empates e derrotas do
time de futebol dele.

- Através de uma função informe ao usuário o número de pontos do time dele
(vitória do time +3 pontos, o empate +1 ponto e a derrota +0 ponto)

- Com os pontos, crie uma função que retorne a média de pontos por jogo do 
time dele.
*/

#include <stdio.h>

int somaPontos(int v, int d, int e);
float mediaPontos(int p, int q);

int main() {
    
    int vitorias, derrotas, empates;
    int qtdJogos, pontuacao;
    float media;
    
    printf("Com base em um Time de Futebol, informe:\n\n");
    
    printf("Quantidade de Vitórias: ");
    scanf("%d", &vitorias);
    
    printf("Quantidade de Derrotas: ");
    scanf("%d", &derrotas);
    
    printf("Quantidade de Empates: ");
    scanf("%d", &empates);
    
    qtdJogos = vitorias + derrotas + empates;
    
    pontuacao = somaPontos(vitorias, derrotas, empates);
    printf("\nO Time fez um total de %d ponto(s)!", pontuacao);
    
    media = mediaPontos(pontuacao, qtdJogos);
    printf("\nMédia de %.0f ponto(s) por jogo.", media);
    
    return 0;
}

int somaPontos(int v, int d, int e) {
    v *= 3;
    d *= 0;
    e *= 1;
    
    return v + d + e;
}

float mediaPontos(int p, int q) {
    return p / q;
}