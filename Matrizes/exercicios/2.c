#include <stdio.h>

int main() {
    float aluno[3][4], soma;

    for(int i = 0; i < 3; i++){ // alunos
        soma = 0;
        for(int j = 0; j < 4; j++){ // provas
            printf("Aluno %d, Prova %d: ", i + 1 , j + 1);
            scanf("%f", &aluno[i][j]);

        soma += aluno[i][j];

            }
         printf("\n\nMédia do aluno %d: %.2f\n\n", i + 1, soma[i] / 4);
    }


    return 0;
}