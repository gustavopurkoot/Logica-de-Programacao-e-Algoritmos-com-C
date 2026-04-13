#include <stdio.h>

int main(){
    int minuto;
    int hora = 60; // 1 hora = 60 minutos

    printf("Digite o tempo de jogo em minutos: ");
    scanf("%d", &minuto);

    printf("O tempo de jogo em horas e: %d horas e %d minutos", minuto / hora, minuto % hora);


    return 0;
}