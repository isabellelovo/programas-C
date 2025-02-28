/* Strings
4 - Preencha um vetor de 4 nomes e um vetor de 4 idades, pedindo estas informações ao
usuário. Faça o que é pedido abaixo:

a) A média de idade das 4 pessoas.
b) O nome da pessoa mais velha.
c) Utilizando o nome da pessoa mais velha forme e exiba a mensagem:
Sr(a) + nome da pessoa mais velha.
d) Quantas pessoas possuem a idade par.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char nomes[4][30];
    float idades[4];

// Declarações
    // a)
    float soma = 0;
    float media = 0;
    // b)
    int maiorIdade = 0;
    char maisVelha[30];
    // c)
    char nomeCompleto[30] = "";
    // d)
    int qtdPares = 0;
    
// Preenchendo os 4 Nomes com suas Idades, pelo usuário, e Trabalhando com eles
    for (int i = 0; i < 4; i++) {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
        printf("Digite uma idade: ");
        scanf("%f", &idades[i]);
        
        // a) Somando cada idade
        soma += idades[i];
        
        // b) Encontrando a maior idade (pessoa mais velha)
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            strcpy(maisVelha, nomes[i]); // guardando o nome da idade mais velha
        }
        
        // d) Verificando se a idade é par
        if ((int)idades[i] % 2 == 0) {
            qtdPares++;
        }
    }
    
    // a) Fazendo a média das idades
    media = soma / 4;
    
    // c) Concatenando "Sr(a)" com o nome da pessoa mais velha
    strcpy(nomeCompleto, "Sr(a) ");
    strcat(nomeCompleto, maisVelha);

    // Imprimindo as informações
    printf("\nMédia de idades: %.2f", media);
    printf("\nNome pessoa mais velha: %s", maisVelha);
    printf("\nNome completo: %s", nomeCompleto);
    printf("\nQtd de pares: %d", qtdPares);

    return 0;
}
