#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero = rand() % 100; 
     

    printf("Numero Aleatorio: %d\n", numero);


    return 0;
}