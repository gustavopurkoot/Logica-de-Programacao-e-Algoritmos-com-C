#include <stdio.h>

int main(){
    int numeros[10];
    int pares[10];
    int j = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
        pares[j] = numeros[i];
        j++;
        }
    }

    printf("==== Numeros Pares ====\n\n");

    for(int i = 0; i < j; i++){
        printf("Numero par %d: %d\n", i+1, pares[i]);

    }

    return 0;
}