/* 4.
- Crie uma estrutura Tempo
com campos para hora, minuto e segundo.

- Em seguida, crie uma estrutura DataHora
que inclui uma estrutura Data com campos para dia, mês e ano
e uma estrutura Tempo.

- Aninhe essas estruturas para representar uma data e hora completa.

- Crie funções para imprimir a data e a hora separadamente.
*/


#include <stdio.h>

struct Tempo{
  int hora, minuto, segundo;  
};
typedef struct Tempo tempo;

struct Data{
    int dia, mes, ano;    
};
typedef struct Data data;

struct DataHora{
    data dta;
    tempo tmp;
};
typedef struct DataHora datahora;

void printData(datahora dthr);
void printHora(datahora dthr);

int main() {
    
    datahora dataCompleta;
    
    printf("--Informe a Data---\n\n");
    
    printf("(dd/mm/aaaa)\n");
    
    printf("dia = ");
    scanf("%d", &dataCompleta.dta.dia);
    
    printf("mês = %d/", dataCompleta.dta.dia);
    scanf("%d", &dataCompleta.dta.mes);
    
    printf("ano = %d/%d/", dataCompleta.dta.dia, dataCompleta.dta.mes);
    scanf("%d", &dataCompleta.dta.ano);
    
    printf("\n--Informe o Horário---\n\n");

    printf("(hh:mmm:ss)\n");
    
    printf("hora = ");
    scanf("%d", &dataCompleta.tmp.hora);    

    printf("mês = %d:", dataCompleta.tmp.hora);
    scanf("%d", &dataCompleta.tmp.minuto);
    
    printf("ano = %d:%d:", dataCompleta.tmp.hora, dataCompleta.tmp.minuto);
    scanf("%d", &dataCompleta.tmp.segundo);
    
    printf("\n\n| Informações Coletadas |\n\n");
    
    printData(dataCompleta);
    printHora(dataCompleta);

    return 0;
}

void printData(datahora dthr){
    printf("Data: %d/%d/%d", dthr.dta.dia, dthr.dta.mes, dthr.dta.ano);
}

void printHora(datahora dthr){
    printf("\nHora: %dh %dmin %dseg", dthr.tmp.hora, dthr.tmp.minuto, dthr.tmp.segundo);
}