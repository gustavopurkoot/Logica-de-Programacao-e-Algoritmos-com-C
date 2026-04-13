#include <stdio.h>

int med(int fps[]){

int soma = 0;

for (int i = 0; i < 6; i++){
        printf("Momento %d: ", i + 1);
        scanf("%d", &fps[i]);

    soma += fps[i];
    }

    int media = soma / 6;

    return media;
}

int main() {
    int fps[6], media;

    
media = med(fps);

    printf("Média de fps: %d", media);

    return 0;
}