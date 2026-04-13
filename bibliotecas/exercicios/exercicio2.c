#include <stdio.h>
#include <stdlib.h>

int main() {
    char idadeStr[3];

    printf("Digite sua idade: ");
    scanf("%s", idadeStr);

    int idade = atoi(idadeStr);

    if(idade >= 18){
        printf("Você é maior de idade!");
    }

    return 0;
}