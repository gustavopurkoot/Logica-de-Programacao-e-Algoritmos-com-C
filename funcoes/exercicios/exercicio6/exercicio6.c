#include <stdio.h>

float calculoMedia(float a, float b, float c){

    return (a + b + c) / 3;
}

void classificar (float media){
    if(media >= 9){
        printf("Excelente Média\n");
    }else if(media >= 7){
        printf("Bom\n");
    }else if(media >= 5){
        printf("Regular\n");
    }else{
        printf("Ruim\n");
    }
   
}

int main(){
    float a, b, c, media;
    int n;

    printf("Quer calcular a media de quantos jogadores? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Jogador %d\n", i);
        printf("Digite as 3 notas:\n");
        scanf("%f %f %f", &a, &b, &c);
        
        media = calculoMedia(a, b , c);
        printf("A media e de: %.2f - ", media);
        classificar(media);
        printf("\n==================================\n");
        
        
        }

    printf("\nEncerrando...\n");

    return 0;
}