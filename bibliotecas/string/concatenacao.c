#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat (nome, sobrenome);
    printf("Nome completo: %s\n", nome);

    printf("Tamanho: %d", strlen(nome));


    return 0;
}