#include <stdio.h>

int main() {
    char nome[5][50], caractere;

    printf("Digite o caracter: ");
    scanf("%c", &caractere);

    for (int i = 0; i < 5; i++){
        printf("digite o %d° nome: ", i + 1);
        scanf("%s", nome[i]);
        printf("\n");

        for (int j = 0; j < 5; j++){
            if(nome[i][0] == caractere){
                printf("%s\n", nome[i]);
            }
        }
    }



    return 0;
}