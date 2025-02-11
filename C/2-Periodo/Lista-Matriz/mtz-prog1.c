/* Revisão de Matriz
3. Preencha uma matriz 2x3 de salários. Informe:
- Quantidade de salários entre 1250 e 1800
- Média salarial
- Quantidade de salários abaixo da média
*/

#include <stdio.h>

int main(){

    float salarios[2][3];
    int qtdEntre = 0;
    float somaSalarial = 0;
    float mediaSalarial = 0;
    int qtdAbaixoMedia = 0;

    // Preenchendo as (j)olunas, ou seja, os elementos, de cada l(i)nha da Matriz
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("Salário?");
            scanf("%f", &salarios[i][j]);   // obtendo os salários, são os elementos
            
            somaSalarial = somaSalarial + salarios[i][j];   // somando cada salário
            // (OU) somaSalarial += salario[i][j]
            
            // Este IF verifica um valor que esteja no intervalo de um valor para outro
            if (salarios[i][j] >= 1250 && salarios[i][j] <= 2000) {
                qtdEntre++;     // conta salário(s) entre 1250 e 1800
            }
        }
    }
    
    mediaSalarial = somaSalarial / 6.0;     // calcula a média dos salários
   
   
    /*
    Após calcular a Média S. (fora do FOR de preenchimento da Matriz)...
    
    Recriamos a seguir, a mesma estrutura desse FOR para ver os salários armazenados,
    mas, alterando a instrução para quantificar aqueles que estiverem abaixo da Média.
    */
    
    // FOR alterado para analisar os salários da Matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (salarios[i][j] < mediaSalarial) {
                qtdAbaixoMedia++;   // conta salário(s) abaixo da média
            }
        }
    }
  
  
    // FOR alterado para imprimir a Matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%.2f ", salarios[i][j]);
        }
        
        // Para visualizar melhor o formato da Matriz
        printf("\n");
        
        /* Toda vez que acabar de exibir as colunas(j) de uma determinada linha(i)
        ao finalizar um FOR-j, imprimir o "\n" vai pular para a próx. linha de exibição
        antes de exibir uma nova linha(i) da repetição seguinte do FOR-i.
        */
        
    }

    return 0;

}