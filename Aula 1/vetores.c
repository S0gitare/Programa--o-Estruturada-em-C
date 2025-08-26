// Vetores

#include <stdio.h>

int main()
{
    int vetor[5]; // Declara um vetor de inteiros com 5 elementos
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Valor na posicao %d: %d\n", i, vetor[i]);
    }
    return 0;
}