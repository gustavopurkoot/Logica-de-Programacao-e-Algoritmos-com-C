#include <stdio.h>

int main(){

    int faltas, presencas, opcao, frequencia;
    float nota;
    
    printf("Escolha opcao 1 para calcular a nota e a frequencia e 2 para sair: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:{
        printf("Digite a nota do aluno de 0 a 10: ");
        scanf("%f", &nota);
        
        printf("Digite o numero de faltas do aluno: ");
        scanf("%d", &faltas);
        
        printf("Digite o numero de presencas do aluno: ");
        scanf("%d", &presencas);

        frequencia = (presencas * 100) / (presencas + faltas);

        if (nota >= 7 && frequencia >=75) {
            printf("aluno aprovado com nota %.2f e frequencia de %d%%", nota, frequencia);
        }else{
        printf("Aluno reprovado");
        }
        break;
        }
        case 2: {
            printf("Saindo do programa...");
            return 0;
        }

    }



    return 0;
}