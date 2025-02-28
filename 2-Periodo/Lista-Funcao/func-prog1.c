/*
1. Crie um programa que peça ao usuário dois números reais e que chame uma função
que receba estes dois números reais e apresente o resultado da multiplicação de
ambos.
*/

#include <stdio.h>

float multiplicar(float a, float b);

int main() {
    
    float n1 = 0;
    float n2 = 0;
    float total = 0;
    // float n1 = n2 = total = 0;
   
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
   
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
   
    total = multiplicar(n1, n2);
   
    printf("O total da multiplicação é =  %.2f", total);
   
    return 0;
}

    float multiplicar(float a, float b){
        float t = a * b;
        return t;
    }
    
    return 0;
}
