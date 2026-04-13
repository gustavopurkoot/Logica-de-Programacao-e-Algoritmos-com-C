#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int megasena[6];
    int fezinha[6] = {3, 12, 23, 55, 10, 42};
    int contador = 0;

     for(int i = 0; i < 6; i++){

        do {
            printf("Digite o %d° numero: ", i + 1);
            scanf("%d", &fezinha[i]);
            if (fezinha[i] == 0) {
                printf("Numero nao pode ser zero. Tente novamente.\n");
            }
        } while (fezinha[i] == 0);
    }

    srand (time(NULL));

    printf("\n=== Numeros da Megasena! ===\n\n");

    for(int i = 0; i < 6; i++){
        megasena[i] = rand() % 60 + 1;
        printf("%d ", megasena[i]);
    }

     printf("\n\n========= Fezinha! =========\n\n");

    for(int i = 0; i < 6; i++){
        printf("%d ", fezinha[i]);
    }
    printf("\n\n========= Resultados =======\n\n");

    for (int i = 0; i < 6; i++){ // fezinha
        for (int j = 0; j < 6; j++){ // mega-sena
            if (megasena[j] == fezinha[i]){
            printf("%d", fezinha[i]);
            contador++;
            }
        }
    }

    printf("\n\nTotal de acertos: %d\n\n", contador);

    return 0;
}