#include <stdio.h>

int main(){
    int cardapio;
    printf("Digite o valor de 1 a 4, onde:\n 1: Hamburguer\n 2: Cachorro-quente\n 3: Pizza\n 4: Sair\n");
    scanf ("%d", &cardapio);

    switch (cardapio){
    case 1: printf("Seu Hamburguer esta sendo feito" ); break;
    case 2: printf("Seu Cachorro-quente esta sendo feito" ); break;
    case 3: printf("Sua Pizza esta sendo feito"); break;
    case 4: printf("Encerrando pedido...");
    return 1; break;
    default: printf("Opção inválida!");
}
    return 0;
}