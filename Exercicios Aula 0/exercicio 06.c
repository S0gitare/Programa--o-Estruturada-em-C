/*Crie um programa em C que peça ao usuário que insira três números inteiros, calcule a média como um número de ponto flutuante e imprima o resultado.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    float media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;
    printf("A média dos números é: %.2f\n", media);
    return 0;
}