/*
18. Escreva uma função que determine a média e a situação de um aluno em uma
disciplina.

- A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3),
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e
o ponteiro para uma variável (media).
Conforme o seguinte protótipo:
char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

- Na variável indicada pelo ponteiro média, a função deve armazenar a média do aluno,
calculada como a média aritmética das três provas.

- Além disso, a função deve retornar um caractere indicando a situação do aluno no curso,
definido de acordo com o seguinte critério: *quadro*

- Em seguida, escreva a função principal de um programa que utiliza a função anterior
para determinar a situação de um aluno. O programa deve:

• Ler do teclado três números reais e dois números inteiros, representando as notas
da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente;
• Chamar a função desenvolvida na primeira questão para determinar a média e a
situação do aluno na disciplina;
• Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é,
“APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do
caractere retornado pela função, conforme a tabela acima.

*/

#include <stdio.h>

char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main() {
    
    float notaP1, notaP2, notaP3;
    float media;
    int faltas, aulas;
    char situacao;

    printf("Relatório sobre o Aluno:\n\n");
    
    printf("Informe a Nota P1: ");
    scanf("%f", &notaP1);
    printf("Informe a Nota P2: ");
    scanf("%f", &notaP2);
    printf("Informe a Nota P3: ");
    scanf("%f", &notaP3);
    
    printf("\nNúmero de faltas: ");
    scanf("%d", &faltas);
    printf("Total de aulas: ");
    scanf("%d", &aulas);

    situacao = validarSituacao(notaP1, notaP2, notaP3, faltas, aulas, &media);

    printf("\nMédia de notas = %.2f", media);
    
    switch (situacao) {
        case ('A'):
            printf("\nAluno Aprovado!");
        break;
        case ('R'):
            printf("\nAluno Reprovado!");
        break;
        case ('F'):
            printf("\nAluno Reprovado por Faltas!");
        break;
    }

    return 0;
}

char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media) {
    
    *media = (p1 + p2 + p3) / 3;

    if ( faltas <= (0.25 * aulas) ) {
        if (*media >= 6.0) {
            return 'A';
        }
        else {
            return 'R';
        }
    }
    
    else {
        return 'F';
    }
}