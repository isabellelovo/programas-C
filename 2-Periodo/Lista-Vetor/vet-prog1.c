/* Revisão de Vetores
1. Pergunte a 5 usuários a sua altura e coloque-as em um vetor. Informe:
- A soma das alturas
- A média das alturas
- A quantidade de pessoas acima de 1.75 m
*/


#include <stdio.h>

int main(void) {

    float altura[5];
    float media, soma=0;
    int qtd_alto=0;
  
    /*
    - Com exceção da "media", que terá o seu valor calculado/definido, as outras
    variáveis são ACUMULADORES, então devemos zerar estas (variavel = 0) inicialmente.
    
    - Fazemos isso para que elas não acumulem a partir de um valor aleatório.
    */

    for (int i=0; i<5; i++){
        printf("Digite a altura do usuario %d: ", i+1);
        scanf ("%f", &altura[i]);   // obtendo as alturas
        
        soma += altura[i];  // somando cada altura
        
        if (altura[i] > 1.75)   // contando altura(s) acima de 1.75m
            qtd_alto++;
    }

    media = soma/5.0;   // calculando a média das alturas
    
    printf("\nSoma das alturas = %.2f m", soma);
    printf("\nMedia das alturas = %.2f m", media);
    printf("\nQuantidade de pessoas acima de 1.75 m = %d", qtd_alto);

    return 0;
  
}