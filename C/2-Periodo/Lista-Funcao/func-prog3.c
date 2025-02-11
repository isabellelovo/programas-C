/*
3. Faça uma programa que receba os anos, os meses e dias de vida do usuário e,
através de uma função que vai ter estes dados como parâmetros, exiba os dias de
vida dele. Considere cada ano 365 dias e cada mês 30 dias. 
*/


#include <stdio.h>

int vida(int a, int m, int d);

int main() {
    
    int anos = 0;
    int meses = 0;
    int dias = 0;
    // (OU) totalDias = 0;
    
    printf("Descubra o total de dias você já viveu!");
    
    printf("\n\nQuantos anos você tem? ");
    scanf("%d", &anos);
    
    printf("\nQuantos meses? ");
    scanf("%d", &meses);
    
    printf("\nQuantos dias? ");
    scanf("%d", &dias);

    
    printf("\nVocê já viveu por %d dias!", vida(anos, meses, dias));
    /* (OU)
        totalDias = vida(anos, meses, dias);
        printf("%d", totalDias);
    */

    return 0;
}


int vida(int a, int m, int d) {
    a *= 365;
    m *= 30;
    return d += a + m;
}

