#include <stdio.h>

int main() {
    int cartao;

    printf("Digite o numero de cartoes amarelos: ");
    scanf("%d", &cartao);

    if (cartao == 2) {
        printf("O jogador foi expulso do jogo.");
    }
    else {

        printf("o jogador continua em campo.");
    }



    return 0;
}