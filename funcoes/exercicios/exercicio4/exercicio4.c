#include <stdio.h>

float calculo(float nota){

    if (nota >= 6.0){
        printf("Aprovado\n");
    }else if (nota >= 4){
        printf("Recuperação\n");
    }else {
        printf("Reprovado\n");
    }
}


int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    calculo(nota);
    return 0;
}