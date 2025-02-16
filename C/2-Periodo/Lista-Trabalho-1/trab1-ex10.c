/*
10. Peça ao usuário que digite um número.
- Crie uma função que receba este número e imprima toda a tabuada de 7
enquanto o valor calculado da tabuada for menor que o número recebido.
*/

#include <stdio.h>

void tabuada7(float n);

int main() {
    
    float num;
    
    printf("Compare um valor com a Tabuada de 7!\n\n");
    
    printf("Digite um número: ");
    scanf("%f", &num);
    
    printf("\nValores da Tabuada de 7 menores que o Número digitado:\n\n");
    tabuada7(num);

    return 0;
}

void tabuada7(float n) {
    
    int r=0;
    int cont=0;

    while(r < n) {
        printf("7x%d = %d \n", cont,r);
        
        cont++;
        r = 7 * cont;
    }
}
