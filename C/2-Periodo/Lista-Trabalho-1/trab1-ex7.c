/*7. Informe o maior valor acima da diagonal secundária de uma matriz 3x3.
*/

#include <stdio.h>

int main() {
    
    float matriz[3][3];
    float maior=0;
    
    
    printf("Preencha a Matriz:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Valor %dx%d: ", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\nResultado:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%.1f    ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("\n\nTermos acima da Diagonal Secundária:\n\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            
            if((3-1-i) > j) {
                printf("%.1f    ", matriz[i][j]);
                
                if(matriz[i][j] > maior) {
                    maior = matriz[i][j];
                }
            }
            
            else {
                printf("***    ");
            }
        }
        
        printf("\n");
    }
    
    printf("\nDentre estes, o maior termo é o %.1f", maior);


    return 0;
}