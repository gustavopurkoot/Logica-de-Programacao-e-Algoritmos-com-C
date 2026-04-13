#include <stdio.h>

int main (){

    int gol, partida;
    float media;

    printf("Digite o numero de gols que voce fez: ");
    scanf("%d", &gol);
    printf("Digite o numero de partidas que voce jogou: ");
    scanf("%d", &partida);

    printf("Sua media de gols por partida e: %.1f",(float) gol / partida);


    return 0;
}