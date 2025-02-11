/*
EXTRA. Crie uma função que calcule e retorne o valor de uma camisa, baseado no tamanho
e no sexo da pessoa compradora. Siga a tabela abaixo:

Tamanho  Sexo   Valor
   P      M     22.25
   M      M     27.15
   G      M     40.00
   P      F     28.75
   M      F     39.99
   G      F     51.00
*/


#include <stdio.h>

float camisa(char s, char t);

int main() {
    
    char tamanho;
    char sexo;
    float valorCamisa = 0;
    
    printf("Compra de Camisa!");
    
    printf("\n\nInforme o sexo do comprador (m/f): ");
    scanf(" %c", &sexo);
    // damos um espaço antes de %c para que ele reconheça que trata-se apenas de UM caractere.
    
    printf("Informe o tamanho desejado (p/m/g): ");
    scanf(" %c", &tamanho);
    
    valorCamisa = camisa(sexo, tamanho);
    
    printf("\nA camisa custa R$%.2f", valorCamisa);
    
    return 0;
}


float camisa(char s, char t) {
    if (s == 'm') {
        if (t == 'p') {
            return 22.25;
        }
        else if (t == 'm') {
            return 27.15;
        }
        else if (t == 'g') {
            return 40.00;
        }
    }
    
    else if (s == 'f') {
        if (t == 'p') {
            return 28.75;
        }
        else if (t == 'm') {
            return 39.99;
        }
        else if (t == 'g') {
            return 51.00;
        }
    }
}