/*
4. Faça o produto entre duas matrizes, sendo a primeira uma matriz 4x2
e a segunda matriz 2x4.
- Os valores devem ser perguntados ao usuário.
- Exiba as 3 matrizes.
*/

#include <stdio.h>

int main() {
    
    float matrizI[4][2];
    float matrizP[2][4];
    float matrizIP[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    
    
    printf("Preencha a Matriz I:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            printf("Insira o elemento %dx%d: ", i+1, j+1);
            scanf("%f", &matrizI[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz I formada:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            printf("%.1f   ", matrizI[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n\nPreencha a Matriz P:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("Insira o elemento %dx%d: ", i+1,j+1);
            scanf("%f", &matrizP[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz P formada:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("%.1f   ", matrizP[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n\nMatriz I  x  Matriz P =\n\n");
    
    for(int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=0; k<2; k++) {
                matrizIP[i][j] += matrizI[i][k] * matrizP[k][j];
            }
            
            printf("%.1f   ", matrizIP[i][j]);
        }
        
        printf("\n");
    }
    
    
    return 0;
    
}