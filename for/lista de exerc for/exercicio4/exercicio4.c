#include <stdio.h>

int main() {
    int n;

    printf("DIgite um numero: ");
    scanf("%d", &n);

    printf("Numeros pares de 1 ate %d:\n", n);

    for(int i = 0; i <= n; i++){

        if(i %2 == 0){

            printf("%d ", i);

        }
    }


    return 0;
}