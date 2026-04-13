#include <stdio.h>

int main() {
    int estoque, estoqueMinimo, cadastrados;
    char nome[30];
    
    printf("Digite a quantidade de produtos a serem cadastrados: ");
    scanf("%d", &cadastrados);

        for (int i = cadastrados; i >= 1; i--){

            printf("\nProduto %d:\n", i);
            printf("Digite o nome do produto: ");
            scanf("%s", nome);
            printf("Digite a quantidade em estoque: ");
            scanf("%d", &estoque);
            printf("Digite a quantidade minima em estoque: ");
            scanf("%d", &estoqueMinimo);

            if (estoque < estoqueMinimo){
                printf("\nO produto %s precisa ser reposto! (Estoque: %d, Estoque Mínimo: %d)\n", nome, estoque, estoqueMinimo);
        }else {
                printf("\nO produto %s tem estoque suficiente. (Estoque: %d, Estoque Mínimo: %d)\n", nome, estoque, estoqueMinimo);
        }  
        }

    return 0;
}
