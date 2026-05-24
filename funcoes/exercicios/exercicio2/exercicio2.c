#include <stdio.h>

int vogais(char letra)
{

    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
}

int main()
{
    char palavra[100];
    int contador;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (vogais(palavra[i]))
        {
            contador++;
        }
    }

    printf("A palavra %s tem %d vogais", palavra, contador);

    return 0;
}