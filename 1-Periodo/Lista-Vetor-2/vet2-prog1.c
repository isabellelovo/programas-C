/*
1. Escreva um programa em C que leia 10 números inteiros do usuário, armazene-os em um array e depois imprima os números na ordem inversa em que foram digitados.
*/

#include <stdio.h>

int main() {
	
	int num[10];
	int i;
	
	printf("Digite 10 numeros inteiros:\n");
	
	for (i = 0; i < 10; i++){
		scanf("%d", &num[i]);
	}
	
	printf("\nOrdem Inversa:");
	
	for (i = 9; i >= 0; i--){
		printf("\n%d", num[i]);
	}
}