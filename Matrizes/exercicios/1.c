#include <stdio.h>

int main()
{
    int valor[2][3] = {
        {1890, 12000, 7000},
        {976, 123, 80}

    };
    int total = 0;

    for (int i = 0; i < 2; i++){ // linha
        for (int j = 0; j < 3; j++){ // coluna

            printf("Agencia %d, Dia %d: %d\n", i + 1, j + 1, valor[i][j]);

            total += valor[i][j];
        }
    }

    printf("\nTotal arrecadado: R$%d", total);

    return 0;
}