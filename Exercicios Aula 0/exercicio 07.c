/*Crie um programa em C que declare uma variável int e uma variável char. Atribua a eles valores fornecidos pelo usuário. Em seguida, incremente cada um várias vezes (o número de vezes também é fornecido pelo usuário) e imprima os resultados.*/

#include <stdio.h>

int main()
{
    int numero;
    char carectere;
    int incremento;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite um caractere: ");
    scanf(" %c", &carectere);

    printf("Digite quantas vezes deseja incrementar: ");
    scanf("%d", &incremento);

    for (int i = 0; i < incremento; i++)
    {
        numero++;
        carectere++;
        printf("Numero incrementado: %d\n", numero);
    }
}