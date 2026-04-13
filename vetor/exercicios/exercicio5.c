#include <stdio.h>

int main() {
    int score[5], recorde = 5000;

    printf("\n\nDigite os 5 scores:\n\n");

    for (int i = 0; i < 5; i++){

        printf("Score: %d: ", i + 1);
        scanf("%d", &score[i]);

        if(score[i] > recorde){
           recorde = score[i]; 

        printf("Parabens! Score %d superou o recorde!\n", score[i]);
        }
    }

    return 0;
}