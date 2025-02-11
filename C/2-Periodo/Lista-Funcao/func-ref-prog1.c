/* Função com Referência
1. Escreva uma função que receba um array de 4 números inteiros e calcule
o maior e o menor valor no array. Use a passagem por referência para as
variáveis maior e menor.
*/

#include <stdio.h>

void obterMaiorMenor(float *numeros, float *maior, float *menor);

int main() {
    
    float numeros[4];
    float menor = 0;
    float maior = 0;
    
    for(int i = 0; i < 4; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
    }
    
    obterMaiorMenor(numeros, &maior, &menor);
    
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    
    return 0;
}


void obterMaiorMenor(float *numeros, float *maior, float *menor){
    
    for(int i = 0; i < 4; i++){
        
        if(*(numeros + i) > *maior){
            *maior = *(numeros + i);
        }
        
        if(*(numeros + i) < *menor || i == 0){
            *menor = *(numeros + i);
        }
    }
    
}
