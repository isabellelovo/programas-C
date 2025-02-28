/*
3. Faça um programa para solicitar a quantidade de alunos do sexo masculino, a quantidade de alunos do sexo feminino e a quantidade de alunos aprovados de uma determinada turma.
Calcular e informar: a porcentagem de alunos do sexo masculino; a porcentagem de alunos do sexo feminino; a porcentagem de alunos reprovados; o total de alunos da turma.
*/

#include <stdio.h>

int main(){

  float Nmasc, Nfem, Naprov, Ntotal;
  float Pmasc, Pfem, Preprov;

  printf("Dados da Turma");

  printf("\n\nQuantidade de Alunos do sexo Masculino: ");
  scanf("%f", &Nmasc);

  printf("Quantidade de Alunos do sexo Feminino: ");
  scanf("%f", &Nfem);

  printf("Total de alunos Aprovados: ");
  scanf("%f", &Naprov);


  Ntotal = Nmasc + Nfem;

  Pmasc = Nmasc/Ntotal;
  Pmasc *= 100;
  
  Pfem = Nfem/Ntotal;
  Pfem *= 100;
  
  Preprov = (Ntotal - Naprov)/Ntotal;
  Preprov *= 100;


  printf("\n\nRelatorio da Turma\n\n");

  printf("Há um total de %.0f Alunos.\n", Ntotal);
  printf("%.1f%% são do sexo Feminino.\n", Pfem);
  printf("%.1f%% são do sexo Masculino.\n", Pmasc);
  printf("%.1f%% dos alunos estão reprovados...", Preprov);


}