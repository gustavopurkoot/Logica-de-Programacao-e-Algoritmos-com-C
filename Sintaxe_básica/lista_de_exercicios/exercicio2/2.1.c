#include <stdio.h>

int main (){

    int gol, partida;
    float media;

    printf("Digite o numero de gols que voce fez: ");
    scanf("%d", &gol);

    printf("Digite o numero de partidas que voce jogou: ");
    scanf("%d", &partida);

    media = (float)gol / partida;

    printf("A media de gols por partida e: %.2f", media);


    return 0;
}