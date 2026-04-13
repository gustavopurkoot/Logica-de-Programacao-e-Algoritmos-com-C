#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoVetor;
    float *vetor, soma = 0.0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    vetor = (float *) malloc (tamanhoVetor * sizeof(float));

    if (vetor == NULL){
        printf("ERRO");
        return 1;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    printf("%.2f", soma / tamanhoVetor);

    free(vetor);
    
    return 0;
}