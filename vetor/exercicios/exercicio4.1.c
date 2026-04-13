#include <stdio.h>

int main() {
    char nome[5][50];
    char letra;
    int j, encontrou;

    // entrada da letra a ser buscada
    printf("Digite a letra que deseja procura: ");
    scanf("%c", &letra);

    // entrada dos 5 nomes
    for(int i = 0; i < 5; i++){
        printf("digite o %d° nome: ", i + 1);
        scanf("%s", nome[i]);
    }

    printf("\nnomes que contem a letra '%c':\n", letra);

    for(int i = 0; i < 5; i++){ // iteração dos nomes
        encontrou = 0;

        for(int j = 0;nome[i][j] != '\0'; j++){ // iteração do caractere
            if(nome[i][j] == letra){
                encontrou = 1;
                break;
            }
        }
        if (encontrou){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}