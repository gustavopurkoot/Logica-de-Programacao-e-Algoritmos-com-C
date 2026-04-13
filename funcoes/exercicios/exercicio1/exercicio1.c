#include <stdio.h>

float media(float nota1, float nota2){

    return (nota1 + nota2) / 2;
}

int main() {
float nota1, nota2;
    printf("Digite duas notas: \n");
    scanf("%f %f", &nota1, &nota2);

    printf("A nota media e: %.2f", media(nota1, nota2));


    return 0;
}