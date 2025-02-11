/* 1.
- Escreva um programa que receba do usuário 5 números inteiros que
estarão em um vetor e o nome do arquivo no qual eles devem ser
armazenados.

- Primeiramente salve os dados no arquivo e feche-o.

- Em seguida, altere o código para que faça a abertura do arquivo,
leia os inteiros e insira-os em um vetor de 5 posições.

- Exiba cada posição do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *p_arq;
    int vet_inserir[5];
    int vet_receber[5];
    
    for(int i=0; i<5; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &*(vet_inserir + i));
    }
    
    p_arq = fopen("arq.txt", "a");
    
    if(p_arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for(int i=0; i<5; i++){
        fprintf(p_arq, "%d\n", *(vet_inserir + i));
    }

    return 0;
}