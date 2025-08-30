// Crie um programa que declare um array de 5 números de ponto flutuante, permita que o usuário preencha o array, e então imprima o maior e o menor número.

#include <stdio.h>

int main()
{
    float array[5];
    float maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o número:");
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior = array[i];
            menor = array[i];
        }
        else if (array[i] > maior)
        {
            maior = array[i];
        }
        else if (array[i] < menor)
        {
            menor = array[i];
        }
    }

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    return 0;
}