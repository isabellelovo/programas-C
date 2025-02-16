/*
17. Crie um programa para calcular a área e o perímetro de um hexágono.

- O seu programa deve implementar uma função chamada calcular_hexagono que
calcule a área e o perímetro de um hexágono regular de lado l.

- Em seguida crie a função principal do programa e utilize a função
calcular_hexagono para calcular a área e o perímetro de um hexágono de lado l
informado pelo usuário e exibe o resultados de cada cálculo.

- A função deve obedecer ao seguinte protótipo:
void calcular_hexagono(float l, float *area, float *perimetro);

- Lembrando que a área e o perímetro de um hexágono regular são dados por:
- Para os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow
da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

void calcular_hexagono(float l, float *a, float *p);

int main() {
    
    float lado, area, perimetro;

    printf("Calculadora de Hexágono!\n");
    printf("Obtenha a medida da Área e do Perímetro.\n\n");
    
    printf("Digite o comprimento dos seus lados: ");
    scanf("%f", &lado);

    calcular_hexagono(lado, &area, &perimetro);

    printf("\nÁrea = %.2f\n", area);
    printf("\nPerímetro = %.2f\n", perimetro);

    return 0;
}

void calcular_hexagono(float l, float *a, float *p) {
    *p = 6 * l;
    *a = (3 * pow(l, 2) * sqrt(3)) / 2;
}