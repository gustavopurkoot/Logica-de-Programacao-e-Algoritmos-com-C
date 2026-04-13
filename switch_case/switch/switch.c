#include <stdio.h>

int main(){

    int opcao;

    printf("Selecione uma opção: ");
    scanf("%d", &opcao);


    switch (opcao){
        case 1:
            printf("Opção 1 selecionada.\n");
            break;

        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        
        case 3:
            printf("Opção 3 selecionada.\n");
            break;

        case 4:
            printf("Opção 4 selecionada.\n");
            break;

        default:
            printf("Opção inválida.\n");
        

    }


    return 0;
}