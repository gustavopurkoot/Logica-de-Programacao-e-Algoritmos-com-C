#include <stdio.h>

int funcao(int a,int b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 5;
    int soma = funcao(&a, &b);

    printf("A soma de %d e %d é: %d", a, b, soma);

    return 0;
}