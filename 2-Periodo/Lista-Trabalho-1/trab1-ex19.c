/*
19. Crie um programa para manipular vetores.
- O seu programa deve implementar uma função chamada verificar_pares, que recebe como
parâmetro um vetor V1 que possui 6 números inteiros inserido pelo usuário.

- A função deve retornar e exibir ao usuário o número de elementos pares dentro
deste vetor.
- A função deve obedecer ao seguinte protótipo:
int verificar_pares (int *v);
*/

#include <stdio.h>

int verificar_pares(int *vetor);

int main() {
    
    int V1[6];
    int qtdPares;
    
    printf("Digite seis números inteiros!\n\n");
    
    for (int i = 0; i < 6; i++) {
        printf("%dº número: ", i+1);
        scanf("%d", &V1[i]);
    }

    qtdPares = verificar_pares(V1);
    printf("\nVocê digitou %d números pares.", qtdPares);

    return 0;
}

int verificar_pares(int *vetor) {
    
    int qtd=0;

    for(int i=0; i<6; i++) {
        if (vetor[i] % 2 == 0) {
            qtd++;
        }
    }

    return qtd;
}
