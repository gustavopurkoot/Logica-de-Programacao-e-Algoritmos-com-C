#include <stdio.h>
#include <stdlib.h>

void temp (char texto[]){

    float temperatura = atof(texto);

    if(temperatura <= 18.0){
        printf("Está frio");
    }else if(temperatura <= 26.0){
        printf("Está agradavel");
    }else{
        printf("Quente");
    }
}

int main() {
    
    char texto[10];
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%s", texto);

    temp(texto);

return 0;
}