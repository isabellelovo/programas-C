/* Alocação Dinâmica de Matriz
2. Crie uma matriz bidimensional de tamanho 3x2 dinamicamente. Aloque a
memória para a matriz e peça ao usuário para preencher com valores
inteiros. Após isto exiba todos os valores digitados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int linhas = 3;
	int colunas = 2;
	int **matriz;
	int maior = 0;
	int menor = 0;

	matriz = (int **) malloc(linhas * sizeof(int*));
	if(matriz == NULL){
	    printf("Erro");
	    return 1;
	}
	
	for(int i = 0; i < linhas; i++){
	    matriz[i] = (int *) malloc (colunas * sizeof(int));
	}

	for(int i = 0; i < linhas; i++){
	    
	    for(int j = 0; j < colunas; j++){
	    
	        printf("Digite o número %dx%d: ", i+1, j+1);
	        scanf("%d", &matriz[i][j]);

	        if(matriz[i][j] > maior){
	            maior = matriz[i][j];
	        }

	        if(matriz[i][j] < menor || (i == 0 && j == 0)){
	            menor = matriz[i][j];
	        }
	    }
	    printf("\n");
	}

	printf("\nMaior: %d", maior);
	printf("\nMenor: %d\n", menor);

	for(int i = 0; i < linhas; i++){
	    for(int j = 0; j < colunas; j++){
	        printf("%d ", matriz[i][j]);
	    }
	    printf("\n");
	}

	for(int i = 0; i < linhas; i++){
	    free(matriz[i]);
	}
	free(matriz);
}
