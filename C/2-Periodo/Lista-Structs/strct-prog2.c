/* 2.
Escreva uma função que receba um número inteiro que representa um
intervalo de tempo medido em minutos e retorne uma estrutura equivalente
de horas e minutos.
- Ex: 131 minutos equivalem a 2 horas e 11 minutos.
*/

#include <stdio.h>

struct tempo {
    int horas;
    int minutos;
};

typedef struct tempo tempo;

tempo converterTempo(int totalMinutos);

int main() {
    
    int mins = 0;
	tempo tempoFinal;

	printf("Digite o total de minutos: ");
	scanf("%d", &mins);

	tempoFinal = converterTempo(mins);

	printf("\nTempo %d:%d h.", tempoFinal.horas, tempoFinal.minutos);

    return 0;
}

tempo converterTempo(int totalMinutos) {
    tempo tmp;

    tmp.horas = totalMinutos / 60;
    tmp.minutos = totalMinutos % 60;

    return tmp;
}
