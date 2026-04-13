#include <stdio.h>

int main(){

char nome[20];
int idade;
int gols;

printf("Digite o seu primeiro nome: ");
scanf("%s", nome);
printf("Digite a sua idade:");
scanf("%d", &idade);
printf("Digite a quantidade de gols que voce ja fez na sua vida:");
scanf("%d", &gols);

printf("Nome do jogador: %s\n", nome);
printf("idade do jogador: %d\n", idade);
printf("Quantidade de gols: %d\n", gols);

return 0;
}