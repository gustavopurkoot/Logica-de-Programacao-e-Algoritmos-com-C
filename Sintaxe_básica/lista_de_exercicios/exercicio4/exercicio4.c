#include <stdio.h>

int main() {
int Vitoria, Empate, Derrota, pontos;

printf("Digite o numero de vitorias: ");
scanf("%d", &Vitoria);
printf("Digite o numero de empates: ");
scanf("%d", &Empate);
printf("Digite o numero de derrotas: ");
scanf("%d", &Derrota);

pontos = (Vitoria * 3) + (Empate * 1) + (Derrota * 0);

printf("Total de pontos: %d", pontos);

return 0;
}
