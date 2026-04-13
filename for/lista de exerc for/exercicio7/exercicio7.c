#include <stdio.h>

int main() {

    int n, par = 2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // linha


    for (int j = 1; j <= i; j++){ // coluna

 
            printf("%d ", par);
            par+= 2;
   
    }
        printf("\n");
    }

    return 0;
}