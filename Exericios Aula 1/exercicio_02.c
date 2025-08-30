// Crie um programa que declare um array de 10 inteiros, preencha o array com números de 1 a 10, e então imprima a soma de todos os elementos.

#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += array[i];
    }

    printf("A soma dos elementos do array é: %d\n", soma);

    return 0;
}