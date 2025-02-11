/* 1.
Declare uma estrutura capaz de armazenar um aluno, com os campos
nome, 3 notas (av1, av2 e av3) e média.

- No programa principal, pergunte os dados ao usuário e coloque as
informações nos respectivos campos da estrutura definida
(uma instância da struct).

- Calcule a média e exiba todos os dados do aluno.
*/

#include <stdio.h>

struct dados {
  char nome[50];
  float nota[3];
  float media;
};

int main() {
    
    float soma=0;
    struct dados aluno;
    
    printf("Dados do Aluno:\n\n");
    
    printf("Nome: ");
    fgets(aluno.nome, 50, stdin);
    
    for (int i=0; i<3; i++) {
        printf("AV%d Nota: ", i+1);
        scanf("%f", &aluno.nota[i]);
        
        soma += aluno.nota[i];
    }
    
    printf("\n\nDados de %s\n", aluno.nome);
    
    for (int i=0; i<3; i++) {
        printf("AV%d Nota: %.2f \n", i+1,aluno.nota[i]);
    }
    
    aluno.media = soma/3.0;
    printf("\nMédia de Notas: %.2f", aluno.media);
    
    return 0;
    
}