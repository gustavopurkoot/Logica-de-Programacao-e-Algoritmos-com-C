#include <stdio.h>

int main(){
    int moeda, rodada = 0, total = 0;

    while (total <=100){

        printf("Digite Quantas moedas foram coletadas na rodada (1 a 10): ");
        scanf("%d", &moeda);

        if (moeda < 1 || moeda > 10){
            printf("Valor invalido! Digite um valor entre 1 e 10.\n");
            continue;
        }
         total += moeda;
        rodada++;

    }

    printf("Total de rodadas para coletar 100 moedas: %d\n", rodada);



    return 0;
}