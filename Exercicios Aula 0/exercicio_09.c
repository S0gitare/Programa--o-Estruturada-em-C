/*Crie uma função chamada "parOuImpar" que recebe um número inteiro e imprime se ele é par ou ímpar. Use esta função em seu programa principal.*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    parOuImpar(numero);

    return 0;
}

int parOuImpar(int numero)
{
    if (numero % 2 == 0)
    {
        printf("O numero %d é par.\n", numero);
    }
    else
    {
        printf("O numero %d é ímpar.\n", numero);
    }
}