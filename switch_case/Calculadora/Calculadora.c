#include <stdio.h>

int main() {

    char operador;
    float a, b, resultado;

    printf("Digite a operacao: (+, -, *, /)" );
    scanf("%c", &operador);

    if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Operador invalido.");
        return 0;
    }

    printf("Digite os dois valores: \n" );
    scanf("%f %f", &a, &b);

    switch (operador) {

        case '+': printf("%.2f %c %.2f = %.2f", a, operador, b, (a + b)); break;
        case '-': printf("%.2f %c %.2f = %.2f", a, operador, b, (a - b)); break;
        case '*': printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b)); break;
        case '/':
        if (a != 0 && b != 0) {
        printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b));
        }else {
            printf("Erro: Divisao por zero nao e permitida.");
        }
        break;
    }

    return 0;
}