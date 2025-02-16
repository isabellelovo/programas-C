/*
2. Faça o cálculo a seguir, considerando as matrizes A e B 3x3. Os valores
devem ser perguntados ao usuário.
(3 * Matriz A) – Matriz B
*/

#include <stdio.h>

int main() {
    
    float A[3][3];
    float B[3][3];
    float triploA[3][3];
    float resultado[3][3];
    
    printf("Monte a matriz A!\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            printf("Digite o número %dx%d: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\nMonte a matriz B!\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            printf("Digite o número %dx%d: ", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\nMatriz A:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            printf("%.1f   ", A[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("\n\nMatriz A * 3 =\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            triploA[i][j] = 3 * A[i][j];
            
            printf("%.1f   ", triploA[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n\nMatriz B:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            printf("%.1f   ", B[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n\n(Matriz A * 3) – Matriz B = \n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            resultado[i][j] = triploA[i][j] - B[i][j];
            
            printf("%.1f   ", resultado[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
    
}