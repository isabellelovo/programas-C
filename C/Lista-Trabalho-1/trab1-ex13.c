/*
13. Faça um programa, com uma função que necessite de três argumentos,
e que forneça a soma desses três argumentos através de uma função.

Seu programa também deve fornecer a média dos três números, através de
uma segunda função que chama a primeira.
*/

#include <stdio.h>

float calcSoma(float n1, float n2, float n3);
float calcMedia(float n1, float n2, float n3);

int main() {
    
    float num1, num2, num3;
    float media;
    
    printf("Calcule a média!\n\n");
    
    printf("Informe um número: ");
    scanf("%f", &num1);
    printf("Informe um número: ");
    scanf("%f", &num2);
    printf("Informe um número: ");
    scanf("%f", &num3);
    
    media = calcMedia(num1,num2,num3);
    
    printf("\nMédia dos três valores = %.2f", media);

    return 0;
}

float calcMedia(float n1, float n2, float n3) {
    float soma = calcSoma(n1,n2,n3);
    return soma / 3;
}

float calcSoma(float n1, float n2, float n3) {
    return n1 + n2 + n3;
}