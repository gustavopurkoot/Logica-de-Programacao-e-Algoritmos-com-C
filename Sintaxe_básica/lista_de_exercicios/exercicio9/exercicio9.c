#include <stdio.h>

int main() {
    int idade, gol;
    char nome[30];
printf("Digite o primeiro nome do jogador: ");
scanf("%29s", nome);
    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);
    printf("Digite a quantia de gols marcados: "); 
    scanf("%d", &gol);

    if (idade <= 20 && gol >= 10) {

        printf("O jogador %s e um jovem talento promissor!", nome);
    }
    else if (idade <= 20 && gol < 10) {

        printf("O jogador %s e um jovem em desenvolvimento.", nome);
    }
    else if (idade >= 21 && gol >= 15) {

        printf("O jogador %s e um jogador experiente em grande fase!", nome);
    }
    else {
        printf("Estevão.");
    }

    return 0;
}