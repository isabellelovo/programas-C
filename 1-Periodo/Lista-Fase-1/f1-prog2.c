/* 2.
Faça um programa que dado o valor da temperatura em graus FARENHEIT, calcular e escrever o valor da temperatura em graus CELSIUS.
Fórmula: C = 5/9 * (F - 32)
*/

#include <stdio.h>

int main(){

    float fahren, celsius;

    printf("Conversao de Temperatura!");
    
    printf("\n\nDigite o valor de uma temperatura em Fahrenheit: ");
    scanf("%f", &fahren);

    celsius = (fahren - 32) * 5/9;

    printf("\nEm graus Celsius = %.2f°C", celsius);

    return 0;
}