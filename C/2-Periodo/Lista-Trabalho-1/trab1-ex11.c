/*
11. Crie uma função que retorne o maior de 3 números reais inseridos pelo usuário.
- Peça ao usuário para inserir os números e exiba a resposta.
*/

#include <stdio.h>

int main() {
    
    float numeros[3];
    float maior = 0;
    
    printf("Comparação entre três números!\n\n");
    
    for(int i=0; i<3; i++) {
        printf("Digite um valor: ");
        scanf("%f", &numeros[i]);
        
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    printf("\nDentre os números digitados, o maior foi %.2f", maior);

    return 0;
}
