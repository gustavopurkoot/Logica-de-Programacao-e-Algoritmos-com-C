#include <stdio.h>

int main(){

    int notas[3][2];

        for(int i = 0; i < 3; i++){ // linhas
            for(int j = 0; j < 2; j++){ // colunas
                printf("Digite a nota do aluno %d, prova %d: ",i + 1, j + 1);
                scanf("%d", &notas[i][j]);
            }
        }

        printf("\n====NOTAS====\n\n");

        for(int i = 0; i < 3; i++){ // linhas
            printf("Aluno %d: ", i + 1);
            int soma = 0;
            for(int j = 0; j < 2; j++){ // colunas
                printf("A nota da %d° prova foi: %d, ",j + 1, notas[i][j]);
                soma += notas[i][j];
            }
            printf("A media foi de: %d", soma / 2);
            printf("\n");
        }

    return 0;
}