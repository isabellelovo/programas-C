/* Alocação de Vetor
3. Desenvolva uma função que recebe como parâmetro o número de
elementos para um novo vetor
(ele deverá ser alocado e retornado pela função)

- O vetor deve ser inicializado com letras minúsculas do alfabeto.

- Segue a função main() ainda incompleta.

int main() {
    int i, tam=10; char *vetor;
    vetor = preencheAlfabeto(tam);
    
    for (i=0; i<tam; i++){
        printf("%c ", vetor[i]);
    }
    .
    ...
*/

#include <stdio.h>
#include <stdlib.h>

char* preencheAlfabeto(int tamanho);

int main() {
    
    int i, tam=10;
	char *vetor;
	vetor = preencheAlfabeto(tam);
	
	for (i=0; i<tam; i++) {
		printf("%c ", vetor[i]);
	}
	
	free(vetor);

	return 0;
}

char* preencheAlfabeto(int tamanho){
    
    char *vet = (char *) malloc(tamanho * sizeof(char));
    if(vet == NULL){
        printf("Erro");
        return NULL;
    }
    
    for(int i = 0; i < tamanho; i++){
        *(vet + i) = 'a' + i;
    }
    
    return vet;
}
