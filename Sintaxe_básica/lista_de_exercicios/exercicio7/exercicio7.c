#include <stdio.h>

int main() {
int idade;

printf("Digite a idade do jogador: ");
scanf("%d", &idade);
if (idade <= 20){

    printf(" ele deve jogar na categoria Sub-20");
}
else {

    printf("ele deve jogar na categoria profissional.");
}


    return 0;
}