/*
5. Exiba todos os valores do triângulo superior de uma matriz 3x3 (acima da diagonal
principal.
- Exiba no formato de matriz e se a posição não estiver no triângulo superior
exiba “*” no lugar do número.
*/

#include <stdio.h>

int main() {
    
    int matriz[3][3];
    
    printf("Preencha uma Matriz com valores inteiros!\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Digite o valor (%dx%d): ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\nMatriz preenchida:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d   ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n\nElementos do Triângulo Superior da Matriz:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            if(j > i) {
                printf("%d   ", matriz[i][j]);
            }
            else {
                printf("*   ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}