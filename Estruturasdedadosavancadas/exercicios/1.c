#include <stdio.h>

struct pessoa {
    char nome[50];
    int idade;
    float altura;
};


int main() {
    struct pessoa p1;
    struct pessoa p2;
    struct pessoa p3;

            printf("\n\nPessoa 1:\n");
            printf("Digite o nome da pessoa: ");
            scanf("%s", p1.nome);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &p1.idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &p1.altura);

            printf("\n\nPessoa 2:\n");
            printf("Digite o nome da pessoa: ");
            scanf("%s", p2.nome);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &p2.idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &p2.altura);

            printf("\n\nPessoa 3:\n");
            printf("Digite o nome da pessoa: ");
            scanf("%s", p3.nome);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &p3.idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &p3.altura);
        
            if(p1.idade > p2.idade && p1.idade > p3.idade){
                printf("Pessoa mais velha: %s\n", p1.nome);
            }
            else if(p2.idade > p1.idade && p2.idade > p3.nome){
            printf("Pessoa mais velha: %s\n", p2.idade);
            }
            else{
                printf("Pessoa mais velha: %s\n", p3.nome);
            }

    return 0;
}