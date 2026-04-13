#include <stdio.h>

int main(){
    int gol;

    printf("Digite quantos gols o jogador fez na temporada: ");
    scanf("%d", &gol);

    if (gol >= 10) {

        printf("Excelente temporada!");
    } else if (gol >= 5) {

        printf("Boa temporada!");
    } else {

        printf("Temporada abaixo do esperado.");
    }

    return 0;
}
