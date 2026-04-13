#include <stdio.h>

int main(){
    int dias, i, restantes;

    printf("Digite quanto dias de treinamento: ");
    scanf("%d", &dias);

    for ( i = 0; i < dias; i++){

        printf("Dia %d: Ta pago!\n", i + 1);
    }

    if (dias < 30){
        restantes = 30 - dias;
        printf ("\nAinda faltam %d dias de treino restantes\n", restantes);
    }else if (dias == 30){
        printf("\nMes Concluido");
    }else{
        printf("\nT/reino Concluido");
    }



    return 0;
}