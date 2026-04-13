#include <stdio.h>

int main() {
    int soma = 0, fps[6], media;

    for (int i = 0; i < 6; i++){
        printf("Momento %d", i + 1);
        scanf("%d", &fps[i]);

    soma += fps[i];
    }

    media = soma / 6;

    printf("Média de fps: %d", media);

    return 0;
}