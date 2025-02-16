/*
3. Exiba a matriz original e a matriz transposta de uma matriz 5x2.
- Os valores devem ser perguntados ao usuário.
*/

#include <stdio.h>

int main() {
   
   float matriz[5][2];
   float matriz_T[2][5];
   
    printf("Construa uma Matriz:\n\n");
   
    for(int i=0; i<5; i++) {
        for(int j=0; j<2; j++) {
            printf("Digite o elemento %dx%d: ", i+1,j+1);
            scanf("%f", &matriz[i][j]);
           
            matriz_T[j][i] = matriz[i][j];
       }
        
        printf("\n");
   }

    printf("\nMatriz criada:\n\n");
   
    for(int i=0; i<5; i++) {
        for(int j=0; j<2; j++) {
            printf("%.1f   ", matriz[i][j]);
       }
       
       printf("\n");
   }

    printf("\n\nMatriz Transposta:\n\n");
   
    for(int i=0; i<2; i++) {
        for(int j=0; j<5; j++) {
            printf("%.1f   ", matriz_T[i][j]);
       }
       
       printf("\n");
   }

    return 0;
}