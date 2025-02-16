/* 6.
- Crie uma estrutura chamada Carro
com campos para a marca, o modelo e o ano de fabricação.

- Declare um array de 3 carros
e preencha-o com informações de diferentes carros.

- Em seguida, escreva um programa que percorra o array
e imprima as informações de cada carro.
*/


#include <stdio.h>
#include <string.h>

struct Carro{
    char marca[20];
    char modelo[20];
    int ano;
};
typedef struct Carro carro;

int main() {
    
    carro carrin[3];
    
    printf("--Preencha com diferentes Carros--\n");
    
    for(int i=0; i<3; i++){
        printf("\n-> %dº Carro\n", i+1);
        
        printf("Marca: ");
        fgets(carrin[i].marca, 20, stdin);
        carrin[i].marca[strcspn(carrin[i].marca, "\n")] = 0;
        
        printf("Modelo: ");
        fgets(carrin[i].modelo, 20, stdin);
        carrin[i].modelo[strcspn(carrin[i].modelo, "\n")] = 0;
        
        printf("Ano de Fabricação: ");
        scanf("%d", &carrin[i].ano);
        getchar();
    }

    printf("\nCadastro bem-sucedido!");

    for(int i=0; i<3; i++){
        printf("\n\nCarro Nº %d: \n", i+1);
        
        printf("%s %s | %d", carrin[i].marca, carrin[i].modelo, carrin[i].ano);
    }

    return 0;
}