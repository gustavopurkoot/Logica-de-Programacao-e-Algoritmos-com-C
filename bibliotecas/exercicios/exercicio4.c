#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    int contador = 0;

    printf("Digite seu nome de usuário: ");
    scanf("%s", nome);


    for(int i = 0;nome[i] != '\0'; i++){
if (nome[i] == '@' ||  nome[i] == '#' ||  nome[i] == '!' ||  nome[i] == '$' || nome[i] == '%'){
contador++;
    }
    }
    


    if (contador >= 1 ){
        printf("Seu nome tem %d caractere(s) proibido(s)", contador);
    }else{
    printf("O Tamanho do seu nome é: %d", strlen(nome));
    }

    return 0;
}