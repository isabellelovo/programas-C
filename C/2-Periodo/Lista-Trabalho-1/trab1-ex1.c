/* 1. Faça o cálculo a seguir, considerando a matriz A 2x4. Os valores
devem ser perguntados ao usuário.
2 * Matriz A
*/

#include <stdio.h>

int main() {
    float A[2][4];
    float dobro[2][4];
    
    printf("Monte a matriz A!\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("Informe o número %dx%d: ", i+1,j+1);
            scanf("%f", &A[i][j]);
        }
        
        printf("\n");
    }
    
    printf("Matriz A:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("%.1f   ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDobro da matriz A:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            dobro[i][j] = A[i][j] * 2;
            printf("%.1f   ", dobro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}