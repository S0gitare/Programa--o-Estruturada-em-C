// Ententendo strings em C: Vetores de Caracteres

#include <stdio.h>

int main()
{
    char nome[5] = "Alecs";
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Caracter na posicao %d: %c\n", i, nome[i]);
    }

    return 0;
}