/* 9.
- Crie uma estrutura Produto
com campos para nome, preço e quantidade em estoque.

- Crie um programa que permita ao usuário digitar o número de produtos e,
em seguida, aloque dinamicamente um array de Produtos.

- Permita que o usuário insira o nome, o preço e a quantidade em estoque de
cada produto e,
em seguida, calcule e imprima o valor total em estoque.
*/


#include <stdio.h>
#include <stdlib.h>

struct Produto {
    char nome[50];
    float preco;
    int qtdEstoque;
};
typedef struct Produto produto;

int main() {
    
    int num;
    produto *prods;
    float totalEstoque = 0;
    
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &num);
    getchar();
    
    prods = (produto*) malloc(num * sizeof(produto));
 
    if (prods == NULL) {
        printf("Erro! Memória insuficiente.");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        
        printf("\n-> Produto %d\n", i+1);
        
        printf("Nome: ");
        fgets(prods[i].nome, 50, stdin);
        
        printf("Preço: R$");
        scanf("%f", &prods[i].preco);

        printf("Quantidade em Estoque: ");
        scanf("%d", &prods[i].qtdEstoque);
        getchar();
        
        totalEstoque += prods[i].preco * prods[i].qtdEstoque;
    }

    printf("\nValor total em Estoque = R$%.2f", totalEstoque);

    free(prods);

    return 0;
}
