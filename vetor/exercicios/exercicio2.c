#include <stdio.h>

int main(){
    int ataque[4];

    printf("Digite o dano de 4 ataques:\n\n");

    for (int i = 0; i < 4; i++){
        printf("Ataque %d: ", i + 1);
        scanf("%d", &ataque[i]);
    }

    int maior = ataque[0];

     for (int i = 0; i < 4; i++){
        if(ataque[i] > maior){
            maior = ataque[i];
        }
    }

    printf("Maior dano causado: %d", maior);

    return 0;
}