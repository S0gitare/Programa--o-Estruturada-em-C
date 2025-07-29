/*Crie um programa em C que peça ao usuário que insira um número inteiro e, em seguida, imprima a tabuada desse número de 1 a 10.*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n ", numero, i, numero * i);
    }
    return 0;
}