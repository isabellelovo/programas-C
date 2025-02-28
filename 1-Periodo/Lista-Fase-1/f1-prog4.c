/*
4. O camelô Zé da banca vende diariamente, games, calculadoras e canetas. Faça
um programa para solicitar o total de games, o total de calculadoras e o
total de canetas vendidas ao término do dia. O programa deve solicitar também
o preço de cada um dos produtos e ao final calcular e informar o total do
faturamento com cada produto e o faturamento total.
*/

#include <stdio.h>

int main(){

    /*
    N - numero de ... vendidos
    V - valor de ...
    F - faturamento de ...
    */
  int Ngames, Ncalculadoras, Ncanetas;
  float Vgame, Vcalculadora, Vcaneta;
  float Fgames, Fcalculadoras, Fcanetas, Ftotal;

  printf("Vendas do Ze da Banca!\n\n");

  printf("Digite o preco do game: R$");
  scanf("%f", &Vgame);
  printf("Informe quantos vendeu no dia: ");
  scanf("%d", &Ngames);

  printf("\nDigite o preco da Calculadora: R$");
  scanf("%f", &Vcalculadora);
  printf("Informe quantas vendeu no dia: ");
  scanf("%d", &Ncalculadoras);

  printf("\nDigite o preco da Caneta: R$");
  scanf("%f", &Vcaneta);
  printf("Informe quantas vendeu no dia: ");
  scanf("%d", &Ncanetas);

  Fgames = Vgame * Ngames;
  Fcalculadoras = Vcalculadora * Ncalculadoras;
  Fcanetas = Vcaneta * Ncanetas;

  Ftotal = Fgames + Fcalculadoras + Fcanetas;

  printf("\n\nRelatorio Diario das Vendas!\n\n");

  printf("Faturou R$%.2f em games.\n", Fgames);
  printf("Faturou R$%.2f em calculadoras.\n", Fcalculadoras);
  printf("Faturou R$%.2f em canetas.\n\n", Fcanetas);
  printf("Faturamento total de R$%.2f com as vendas!", Ftotal);

}