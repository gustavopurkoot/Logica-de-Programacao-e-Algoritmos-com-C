#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fezinha(){
    int num;

    for(int i = 0; i <=5; i++){
        num = rand() % 60 + 1;

        printf("%d ", num);
    }
}

int main(){
     srand(time(NULL));

printf("Numeros sorteados:\n");
    fezinha();

    return 0;
}