/*
16. Crie um programa para calcular a quantidade de vogais minúsculas de uma string.
- O seu programa deve implementar uma função chamada contar_vogais que receberá
uma string e um número inteiro responsável por exibir o número de caracteres.

- A função deve obedecer ao seguinte protótipo:
void contar_vogais (char *str, int *numCaracteres);

Dica: utilize '\0' para comparar se é um caracter ou não.
*/

#include <stdio.h>

void contar_vogais(char *str, int *numCaracteres);

int main() {
    
    char string[50];
    int totalChar=0;
    
    printf("Contador de Vogais Minúsculas!\n\n");

    printf("Digite uma String (ex.: palavra, frase):\n");
    fgets(string, 50, stdin);

    contar_vogais(string, &totalChar);
    printf("\nTotal de caracteres digitados: %d", totalChar);
    
    return 0;
}

void contar_vogais(char *str, int *numCaracteres) {
    
    int qtd = 0;

    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
            qtd++;
        }
        
        (*numCaracteres)++;
        str++;
    }

    printf("\nTotal de vogais minúsculas: %d", qtd);
}