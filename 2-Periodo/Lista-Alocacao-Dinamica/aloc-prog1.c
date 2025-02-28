/* Alocação Dinâmica de Vetor
1. Peça ao usuário para inserir o tamanho de um array de inteiros e, em
seguida, aloque dinamicamente memória para o array.
- Depois, peça ao usuário para preencher o array com números e,
finalmente, imprima os números armazenados e a média deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int tam=0;
    int soma=0;
    float media=0;
    int* p;
    
    printf("Crie um Array de Nºs inteiros!\n\n");
    
    printf("Defina o tamanho do array: ");
    scanf("%d", &tam);
    printf("\n");

    p = (int *) malloc(tam * sizeof(int));
    
    if(p == NULL) {
        printf("\nERRO! Memória Insuficiente");
        return 1;
    }
    
    for(int i=0; i < tam; i++) {
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &*(p + i));
        
        soma += *(p + i);
    }
    
    for(int i=0; i < tam; i++) {
        printf("\n%d", *(p + i));
    }
    
    media = soma/tam;
    
    printf("\n\nMédia dos números = %.2f", media);
    
    free(p);
    
    return 0;
}