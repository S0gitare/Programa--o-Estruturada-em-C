/*Crie um programa em C que peça ao usuário que insira dois números inteiros e imprima a soma, a diferença, o produto e o quociente.*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Soma: %d\n", n1 + n2);
    printf("Diferença: %d\n", n1 - n2);
    printf("Produto: %d\n", n1 * n2);
    printf("Quociente: %.2f \n", (float)n1 / n2);
    return 0;
}