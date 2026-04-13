#include <stdio.h>

void quadrado(int n, char simbolo) {
        printf("\n");
    for(int i = 0; i <  n; i++){
        for(int j = 0; j <  n; j++){

        printf("%c", simbolo);

        }

        printf("\n");

    }

}

int main() {

    int n;
    char simbolo;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &n);

    printf("Digite o simbolo do quadrado (*, #, $ ...): ");
    scanf(" %c", &simbolo);

    quadrado(n, simbolo);


    return 0;
}