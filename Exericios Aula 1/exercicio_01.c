// Crie um programa que declare um array (vetor) de 5 inteiros, permita que o usuário preencha esse array, e ao final imprima os números na ordem inversa.

#include <stdio.h>

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("DIgite o número na posição %d:", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Número na posição %d: %d\n", i, array[4 - i]);
    }

    return 0;
}