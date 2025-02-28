/*
1 - Preencha um vetor de 4 nomes, pedindo estes nomes ao usuário.
- Exiba estes nomes.
*/

#include <stdio.h>

int main() { // fazer comentários

    // Declarando matriz para guardar as 4 strings(nomes)
    char nomes[4][30];

    // Preenchendo as strings com os Nomes dados pelo usuário
    for(int i = 0; i < 4; i++){
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
    }

    // Imprimindo os nomes
    for(int i = 0; i < 4; i++){
        printf("\n%s", nomes[i]);
    }

}
