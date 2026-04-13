#include <stdio.h>

int main() {

    int registro, anoFabricacao, funcionando;    
    char modelo [20];

    printf("Digite o numero de carros que serão registrados: ");
    scanf("%d", &registro);

    for(int i = registro; i >= 1; i--) {

        printf("Qual o modelo do carro? " );
        scanf("%s", &modelo);

        printf("Qual o ano de fabricação do carro? ");
        scanf("%d", &anoFabricacao);  

        printf("O carro está funcionando? (1 para sim, 0 para não): ");
        scanf("%d", &funcionando);

        if (anoFabricacao < 2005 && funcionando == 0) {
            printf("O carro %s precisa de reparos urgentes.\n", modelo);
        }
        else if (anoFabricacao < 2005 && funcionando == 0) {
            printf("O carro %s é antigo, recomenda-se uma revisão!\n", modelo);
        }
        else if (anoFabricacao >= 2005 && funcionando == 1){
            printf("O carro %s precisa de manutenção!\n", modelo);
        }
        else {
            printf("O carro %s está em boas condições!\n", modelo);
        }
    
}

    return 0;
}