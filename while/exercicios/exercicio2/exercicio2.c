#include <stdio.h>

int main() {
    int secreto = 7;
    int chute;
    do { 
        printf("Digite um número de 1 a 10: ");
        scanf("%d", &chute);

        if (chute < 1 || chute > 10) {
            printf("Número inválido! Tente novamente.\n");
            continue;
        }

        printf("Você digitou: %d, tente novamente\n", chute);


    } while (chute != secreto);

    printf("\nVocê Acertou!\n");


    return 0;
}