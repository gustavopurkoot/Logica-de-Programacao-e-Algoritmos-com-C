#include <stdio.h>

int main() {
int capacidade, torcedores;
float ocupacao;

printf("Digite a capacidade total do estadio: ");
scanf("%d", &capacidade);
printf("Digite o numero de torcedores presentes: ");
scanf("%d", &torcedores);

ocupacao = (float) torcedores / capacidade * 100;

if (ocupacao >= 90)  {
    printf("Lotado!");
}else if(ocupacao >= 70){
    printf("Ótima presença de público!");

}else if(ocupacao >= 50){
    printf("Público razoável.");
}else {
    printf("Morumbis");
}

    return 0;
}