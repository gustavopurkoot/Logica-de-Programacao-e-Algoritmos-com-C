#include <stdio.h>

int main() {
    int senha;

    do  {
        printf("Digite a senha correta (1234): ");
        scanf("%d", &senha);

}   while(senha != 1234);

printf("Senha correta! Acesso permitido.\n");

    return 0;
}