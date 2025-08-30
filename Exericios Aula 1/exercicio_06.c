// Crie um programa que peça ao usuário para inserir uma string e uma letra. O programa deve então contar quantas vezes essa letra aparece na string.

#include <stdio.h>

int main()
{
    char string[100];
    char letra;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == letra)
        {
            printf("A letra '%c' aparece na posicao %d\n", letra, i);
        }
    }

    return 0;
}