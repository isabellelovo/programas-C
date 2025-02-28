/* Função com Referência
2. Escreva uma função que receba um array de 5 números em ponto flutuante e
calcule a média. Use a passagem por referência para a variável "média".
*/

#include <stdio.h>

void obterMedia(float *numeros, float *media);

int main() {
    
    float numeros[5];
    float media = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
    }
    
    obterMedia(numeros, &media);

    printf("\nMédia: %.2f", media);
    
    return 0;
}

void obterMedia(float numeros[], float *media){
    
    float soma = 0;
    
    for(int i = 0; i < 5; i++){
        soma += *(numeros + i);
    }
    
    *media = soma / 5;
}
