#include <stdio.h>

int main() {
    int n[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &n[i]);
    }

     for (int i = 0; i < 10; i++){
        if(n[i] % 2 == 0){
            printf("%d ", n[i]);
        }
    }

    return 0;
}