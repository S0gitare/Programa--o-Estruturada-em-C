// Crie uma função que recebe um array de inteiros e seu tamanho e retorna a soma de todos os elementos do array. Use essa função em seu programa principal.

#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    int tamanho = 5;

    for (int i = 0; i < 5; i++)
    {
        soma += array[i];
    }
    printf("A soma dos elementos do array é: %d \n", soma);
    printf("Tamanho do array: %d", tamanho);
    return 0;
}