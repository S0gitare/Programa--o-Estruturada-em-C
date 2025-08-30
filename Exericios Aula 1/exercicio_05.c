// Crie um programa que peça ao usuário para inserir duas strings. Depois, o programa deve concatenar (juntar) essas duas strings e imprimir o resultado.

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];
    char resultado[200];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    strcat(string1, "");
    strcat(string1, string2);
    strcpy(resultado, string1);
    printf("String concatenada: %s ", resultado);

    return 0;
}