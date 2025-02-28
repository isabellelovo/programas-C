/* 10.
-Faça um programa em C para manipular registros de produtos,
conforme a estrutura a seguir:

struct produto{
int codigo;
char descricao[30];
float preco;
};

- O programa deve:
a) Declarar um vetor que armazene os 10 diferentes produtos com o layout da estrutura;
b) Cadastrar os produtos e exiba todos os produtos.
c) Usuário informará um percentual de aumento de preços. Reajuste o preço de cada produto e
exiba a estrutura após o reajuste.
*/


#include <stdio.h>
#include <string.h>

struct Produto {
    int cod;
    char descricao[30];
    float preco;
};
typedef struct Produto produto;

int main() {
    
    produto prods[10];
    float percentAumento;

    for (int i=0; i<10; i++) {
        
        printf("Cadastro do Produto %d:\n", i + 1);
        
        printf("Digite o código do produto: ");
        scanf("%d", &prods[i].cod);
        getchar();
        
        printf("Descrição: ");
        fgets(prods[i].descricao, 30, stdin);
        
        prods[i].descricao[strcspn(prods[i].descricao, "\n")] = 0;
        
        printf("Preço: R$");
        scanf("%f", &prods[i].preco);
        
        printf("\n");
    }
    
    printf("\nProdutos cadastrados:\n");
    
    for (int i=0; i<10; i++) {
        
        printf("Código: %d | Descrição: %s | Preço: R$%.2f\n", prods[i].cod, prods[i].descricao, prods[i].preco);
    }
    
    printf("\nDigite o percentual de aumento de preço: ");
    scanf("%f", &percentAumento);
    
    for (int i=0; i<10; i++) {
        
        prods[i].preco += prods[i].preco * (percentAumento / 100);
    }

    printf("\nProdutos Pós-Aumento:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Código: %d | Descrição: %s | Preço: R$%.2f\n", prods[i].cod, prods[i].descricao, prods[i].preco);
    }

    return 0;
}
