#include <stdio.h>

int main() {

   int Numero;
   int i = 1;

   printf("Digite um numero inteiro: ");
   scanf("%d", &Numero);

   for (i = 1; i <= Numero; i++ ) {
   printf("Numero: %d\n", i);
}

    return 0;
}