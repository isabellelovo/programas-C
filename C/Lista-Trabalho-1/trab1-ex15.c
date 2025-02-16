// 15.

#include <stdio.h>

int main() {
    
    int a = 25;
    int *pa = &a;
    
    int b = *pa + a;
    
    
    // a) Qual o resultado da execução do programa?
    // R: A impressão de valores de variáveis, endereços e ponteiros:
    printf("%d %d %d %d %d %d", a, pa, &a, *pa, b, &b);
    
    /*
    b) Qual o significado de cada um dos valores escritos na tela?
        R:
        a = o conteúdo da variável "a".
        pa = o conteúdo do ponteiro "pa", ou seja, o endereço de "a".
        &a = o endereço de "a".
        *pa = o conteúdo de quem o ponteiro "pa" aponta, ou seja, o conteúdo da variável "a".
        b = o conteúdo da variável "b".
        &b = o endereço da variável "b".
    */

    return 0;
}
