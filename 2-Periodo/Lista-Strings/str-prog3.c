/* Strings
3 - Preencha um vetor de 3 nomes, pedindo estes nomes ao usuário, e informe:

a) A maior quantidade de caracteres.
b) O menor nome.
c) Ao final, caso exista alguma "Ana", informe ao usuário: "Ana foi digitado".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[3][30];

// Declarações
    // a)
    int maior = 0;  // maior qtd de caracteres
    int qtdCaracteres = 0;
    // b)
    int menor = 0;  // menor qtd de caracteres
    char menorNome[30];
    // c)
    int existeAna = 0;
    int comp = 0;
    
// Preenchendo os 3 Nomes do usuário e Trabalhando com eles
    for(int i = 0; i < 3; i++) {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
        
        // Obtendo o tamanho de cada nome
        qtdCaracteres = strlen(nomes[i]);
        
        // a) Verificando qual nome é maior
        if(qtdCaracteres > maior){
            maior = qtdCaracteres;
        }
        
        // b) Verificando qual nome é menor
        if(qtdCaracteres < menor || i == 0){
            menor = qtdCaracteres;
            strcpy(menorNome, nomes[i]);
        }
        
        // Verificando a existência do nome "Ana" nas strings
        comp = strcmp(nomes[i], "Ana");
        if(comp == 0){
            existeAna = 1;
        }
    }
  
    // Imprimindo a) e b)
    printf("\nMaior qtd de caracteres: %d", maior);
    printf("\nMenor nome: %s", menorNome);
    
    // Se existir "Ana", imprime c)
    if(existeAna == 1){
        printf("\nExiste ao menos uma Ana.");
    }

    return 0;
    
}
