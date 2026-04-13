#include <stdio.h>

int main() {
    int matriz[3][2];

    printf("Digite os 6 valores da matriz 3x2(linha por linha): \n\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("matriz original:\n");

     for(int i = 0; i < 3; i++){
        printf("| ");
        for(int j = 0; j < 2; j++){
    printf("%3d ", matriz[i][j]);
        }
        printf("|\n");
    }

     printf("matriz transposta:\n");
      for(int i = 0; i < 2; i++){
        printf("| ");
        for(int j = 0; j < 3; j++){
            
            printf("%3d ", matriz[j][i]);
        }
        printf("|\n");
      }

    return 0;
}