/*Crie um programa que leia uma variável a e crie um ponteiro pa que aponte
para a variável a.

- Leia também uma variável b e crie um ponteiro pb que aponta para a variável b.

- Utilizando os ponteiros (e variável auxiliar),
troque os valores das variáveis.
*/

#include <stdio.h>

int main() {
    
    float a;
    float *pa = &a;
    
    float auxiliar;
    
    float b;
    float *pb = &b;
    
    // Obtendo os Valores de A e B
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    
    // Guardando o valor da Var "a" antes dela trocar seu valor pelo de "b"
    auxiliar = *pa;
    
    // Trocando Valores
    *pa = *pb;
    *pb = auxiliar;   // atribui para "b", o valor original de "a"

    // Imprimindo A e B Trocados
    printf("\n\nValor TROCADO de A = %.2f", a);
    printf("\nValor TROCADO de B = %.2f", b);
    
    
    return 0;
}