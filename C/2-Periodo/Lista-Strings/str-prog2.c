/*
2 - Preencha uma matriz 3x2 de idades e informe quantas idades são maiores ou iguais
a 18 anos e informe cada idade abaixo de 18 anos.
*/

#include <stdio.h>

int main() {

    int idades[3][2];
    int qtdMaiores = 0;

    // Preenchendo a matriz com as Idades do usuário
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite uma idade: ");
            scanf("%d", &idades[i][j]);
            
            // Verificando se é maior ou igual a 18 anos
            if(idades[i][j] >= 18){
                qtdMaiores++;
            }
            // Se não for, imprime que é menor
            else{
                printf("%d é abaixo de 18 anos.\n", idades[i][j]);
            }
        }
    }
    
    // Imprimindo quantas idades são maiores que 18
    printf("Quantidade de maiores de 18 anos = %d", qtdMaiores);
    
    return 0;
    
}