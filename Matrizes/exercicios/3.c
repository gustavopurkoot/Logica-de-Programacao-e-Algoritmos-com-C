#include <stdio.h>

int main() {
    int matriz[4][4], soma = 0;

    for(int i = 0; i < 4; i++){ // linha
        for(int j = 0; j < 4; j++){ // coluna
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            if (i == j){
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d", soma);
    

    return 0;
}