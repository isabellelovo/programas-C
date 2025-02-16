/*
12. Peça ao usuário que entre com um salário e com uma letra informando o nível de
experiência (s - Sênior, p - Pleno ou j - Júnior).

- Crie uma função que receba os dados do usuário e calcule um aumento salarial
de acordo com sua função.
- Exiba o novo salário.

(O aumento é de 5% para sênior, 10% para pleno e 15% para júnior)
*/

#include <stdio.h>

float aumentoSal(float s, char n);

int main() {
    
    float salario;
    float salarioNovo;
    char nivel;
    
    printf("Quanto é o salário?\n");
    scanf("%f", &salario);
    
    printf("\ns - Sênior | p - Pleno | j - Júnior");
    printf("\nQual o nível de experiência? s, p ou j?\n");
    scanf("%s", &nivel);
    
    salarioNovo = aumentoSal(salario, nivel);
    
    printf("\nAumento salarial realizado com sucesso!");
    printf("\nNovo salário = R$%.2f", salarioNovo);
    
    return 0;
}

float aumentoSal(float s, char n) {
    
    if (n == 's') {
        return s * 1.05;
    }
    else if (n == 'p') {
        return s * 1.10;
    }
    else if (n == 'j') {
        return s * 1.15;
    }
}
