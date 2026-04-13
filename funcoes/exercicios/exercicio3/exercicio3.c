#include <stdio.h>

int maior(int a, int b, int c){

    if (a > b && a > c){
        return a;
    } else if (b > a && b > c){
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;


        printf("Digite um numero: ");
        scanf("%d", &a);
        printf("Digite outro numero: ");
        scanf("%d", &b); 
        printf("Digite outro numero: ");
        scanf("%d", &c);


        printf("O maior numero e: %d",maior(a, b, c));

    return 0;
}