/*6. Some todos os valores do triângulo inferior da diagonal principal,
incluindo a diagonal principal de uma matriz 4x4.
*/

#include <stdio.h>

int main() {
    
    float matriz[4][4];
    float soma=0;
    
    printf("Criando uma Matriz...\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("Número %dx%d: ", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\nMatriz criada!\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("%.1f    ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("\n\nSoma dos Elementos:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            
            if (j < i || j == i) {
                soma += matriz[i][j];
                printf("%.1f    ", matriz[i][j]);
            }
            else {
                printf("***    ");
            }
        }
        
        printf("\n");
    }
    
    printf("\nTriângulo Inferior + Diagonal Principal = %.2f", soma);


    return 0;
}