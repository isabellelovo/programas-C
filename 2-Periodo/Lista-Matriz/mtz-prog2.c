/*Matriz Diagonal*/

#include <stdio.h>

int main() {

        // 1. Exiba as diagonais principal e secundária de uma matriz 4x4.
        // 2. Obtenha a média dos valores da diagonal principal da matriz acima.


    float matriz[4][4];


    printf("Monte uma Matriz:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            printf("Digite o número %dx%d: ", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("\nMatriz Montada:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            printf("%.1f  ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    
        // 2.
    float somapri=0;
    float media;
    
    
        // 1.    
    printf("\n\nDiagonal Principal:\n\n");
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            
            if(i==j) {
                printf("%.1f  ", matriz[i][j]);
                
                // 2.
                somapri += matriz[i][j];
            }
            
            else {
                printf("***  ");
            }
        }
        
        printf("\n");
    }
        //
    
    
        // 1.
    printf("\n\nDiagonal Secundária:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            
            if(i+j == 4-1)
                printf("%.1f  ", matriz[i][j]);
            else
                printf("***  ");
        }
        
        printf("\n");
    }
        //
    
    
    // 2.
    media = somapri/4;
    printf("\n\nMedia dos Valores da Diagonal Principal = %.1f", media);
    
    
    
            // 3. Exiba elementos do triângulo superior da diagonal principal.
    
    
    printf("\n\n\nTriangulo Superior da Diagonal Principal:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            
            if(i < j)
                printf("%.1f  ", matriz[i][j]);
            else
                printf("***  ");
        }
        
        printf("\n");
    }
    
    
    
            // 4. Obtenha a soma dos elementos do triângulo inferior à diagonal secundária.

    float somasec=0;

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            
            if(j >= 4-1)
                somasec += matriz[i][j];
        }
    }
    
    printf("\n\nSoma dos Valores do Triangulo Inferior da Diagonal Secundaria = %.1f", somasec);
    
    
    return 0;
}
