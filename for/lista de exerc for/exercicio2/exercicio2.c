#include <stdio.h>

int main() {
int n, i, soma = 0;

printf("Digite um numero inteiro: ");
scanf("%d", &n);

for(i = 1; i <= n; i++){

    soma += i;

}

    printf("\nA soma de 1 até %d = %d", n, soma );
    return 0;
}