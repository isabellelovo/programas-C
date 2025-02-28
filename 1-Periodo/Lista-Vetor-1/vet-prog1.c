/*
1. Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores.
*/

#include <stdio.h>

int main(){
	
	int vetor[5];
	int soma = 0;
	int i;
	
	printf("Digite 5 Numeros Inteiros:\n\n");
	
	for (i = 0; i < 5; i++){
		
		scanf("%d", &vetor[i]);
		soma += vetor[i]; 
	}
	
	printf("\nSomatorio dos Numeros = %d", soma);
}