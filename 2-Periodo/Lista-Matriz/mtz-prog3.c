// Matriz Transposta
// Peça ao usuário para preencher matriz 2x4 de números inteiros.
// Exiba a matriz original digitada pelo usuário e a matriz transposta desta matriz.

#include <stdio.h>

int main() {

    int matriz[2][4];
    int transposta[4][2];
    
    printf("Monte uma Matriz:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("Digite o Numero %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            
        // copia o valor na posição de determinada linha e coluna da matriz original
        // para a transposta na posição inversa
            transposta[j][i] = matriz[i][j];
        }
        printf("\n");
    }
    
    
    printf("\nMatriz Montada:\n\n");
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n\nTransposta da Matriz Montada:\n\n");
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            printf("%d  ", transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
