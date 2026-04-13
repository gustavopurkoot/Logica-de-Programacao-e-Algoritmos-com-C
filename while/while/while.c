#include <stdio.h>

int main() {
    int contador;

    printf("Contador: ");
    scanf("%d", &contador);

    while (contador <= 10) {

        printf("Contando: %d\n", contador + 1);
        contador++; // incremento


    }



    return 0;
}