#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b){
    return *a + *b;
}   

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

     printf("Digite o segundo valor: ");
    scanf("%d", &y);
    
    printf("Soma: %d", soma(&x, &y));

    return 0;
}