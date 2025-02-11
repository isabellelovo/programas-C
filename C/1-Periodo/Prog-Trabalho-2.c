/*Faça um programa que use um array para armazenar a temperatura media dos 12 meses do ano. ao final informe: a maior temperatura, a menor temperatura e a temperatura media anual.*/

#include<stdio.h>

int main() {
	
	float temperatura[12], menor, media;
	float maior = 0;
	float total = 0;
	int i = 0; 

	printf("Calculo da Temperatura Anual!\n");
	
	while (i <= 11) {
		printf("\nInforme a temperatura media do %do mes: ", i + 1);
		scanf("%f", &temperatura[i]);
		
		total += temperatura[i];
		
			if (temperatura[i] > maior){
				maior = temperatura[i];
			}
			
		menor = temperatura[0];
		
			if (temperatura[i] < menor){
				menor = temperatura[i];
			}
					
		i++;
	}
	
	media = total / 12;
	
	printf("\n\nA temperatura anual teve a media de %.2f graus!", media);
	printf("\n\nA maior temperatura media registrada em um mes foi: %.2f graus!", maior);
	printf("\nA menor temperatura media registrada em um mes foi: %.2f graus!", menor);
	
	return 0;
}