/* Revisão de Vetores
2. Preencha um vetor de idades e um vetor de pesos de 4 pessoas. Informe:
- A quantidade de pessoas que tem mais de 20 anos e pesa menos que 70kg
- A idade da pessoa mais velha
- O peso da pessoa com menor peso
- O peso da pessoa mais nova
*/


#include <stdio.h>

int main (){

    int idade[4];
    int qtd_2070=0, maioridade=0, menoridade=0;
    float peso[4], menorpeso=0, novapeso;

    for(int i=0; i<4; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade[i]);     // obtendo as idades
        
        if(idade[i] > maioridade) {   // comparação de maior idade
            maioridade = idade[i];   // guardando a maior
        }
        
        printf("Digite o peso da pessoa %d: ", i+1);
        scanf("%f", &peso[i]);     // obtendo os pesos
        
        
        /* MENOR QUE (<)
        - Encontrar o "menor" dentro de um Vetor não acontece perfeitamente em C,
        porém, o IF de comparação (<) a seguir é a melhor forma de conseguir.
        */
        
    //  SE ("idade[i]" tem um valor menor que "menoridade" |OU| o (i)ndice dessa idade é 0)
        if (idade[i] < menoridade || i == 0) {
            menoridade = idade[i];  // a idade[i] se torna a menor idade do vetor
            novapeso = peso[i];     // guarda o peso dessa pessoa mais nova
        }
        
        /*
        - Como, inicialmente, define-se "menoridade = 0", criamos a condição de "||"
        para que a primeira idade, a idade[0], já seja atribuída à "menoridade".
        
        - Assim, criamos nosso parâmetro para comparar as próximas até que haja (ou não)
        uma menor que a primeira e seja a menor idade do vetor.
        */
        
        
        if (idade[i] > 20 && peso[i] < 70.0) {
            qtd_2070++;    // conta pessoa(s) acima de 20 anos que pesam abaixo de 70kg
        }
        
        if (peso[i] < menorpeso || i == 0) {   // comparação de menor peso
          menorpeso = peso[i];   // guardando o menor
        }
    }
    
    printf("\nQuantia de pessoas que tem mais de 20 anos e pesam abaixo de 70kg: %d", qtd_2070);
    printf("\nA idade da pessoa mais velha: %d", maioridade);
    printf("\nO peso da pessoa com menor peso: %.2f", menorpeso);
    printf("\nO peso da pessoa mais nova: %.2f", novapeso);
    
    return 0;

}