/*
9. Faça uma calculadora que realize operações com 2 números fornecidos pelo
usuário.

- Após obter os números, pergunte ao usuário qual a operação que ele deseja
fazer.
- Crie uma função para cada tipo de operação.
- Mostre o resultado ao usuário.

- Mapeie as operações como um número inteiro.
Ex: 1- Soma, 2- Subtração, 3- Multiplicação, 4- Divisão
*/

#include <stdio.h>

float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);

int main() {
    
    float numero1;
    float numero2;
    int escolha;
    float operacao;
    
    printf("Realize cálculos com dois números!\n\n");
    
    printf("Insira o 1º número: ");
    scanf("%f", &numero1);
    printf("Insira o 2º número: ");
    scanf("%f", &numero2);
    
    printf("\nLista de Operações disponivéis:\n");
    printf("1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão");
    
    printf("\n\nDigite o número da operação: ");
    scanf("%d", &escolha);
    
    switch(escolha) {
        case (1):
            operacao = soma(numero1,numero2);
        break;
        case (2):
            operacao = subtracao(numero1,numero2);
        break;
        case (3):
            operacao = multiplicacao(numero1,numero2);
        break;
        case (4):
            operacao = divisao(numero1,numero2);
        break;
    }
    
    printf("\nResultado = %.2f", operacao);

    return 0;
}

float soma(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    return n1 / n2;
}