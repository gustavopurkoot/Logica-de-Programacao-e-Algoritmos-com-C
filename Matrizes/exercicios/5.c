#include <stdio.h>

int main(){
    int matriz[4][4];
    int identidade = 1;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)){
                identidade = 0;
            }
        }
    }

    if (identidade){
            printf("\nMatriz identidade? SIM\n\n");
    }else{
        printf("\nMatriz identidade? NÃO\n\n");
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }


    return 0;
}