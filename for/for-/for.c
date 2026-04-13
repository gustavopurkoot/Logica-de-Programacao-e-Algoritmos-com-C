#include <stdio.h>

int main(){
    printf("Contagem regressiva pra bomba explodir\n");

    for (int i = 10; i >= 1; i--){
    printf("%d... \n", i);
    }

    printf("## BOOM ##");
    return 0;
}