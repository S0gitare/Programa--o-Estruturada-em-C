// Exemplo do uso de recursividade com um algoritmo de fatorial

#include <stdio.h>
#include <stdlib.h>

int fatorial(int *N)
{
    if (*N == 0)
    {
        return 1;
    }
    else
    {
        int temp = *N;
        (*N)--;
        return temp * fatorial(N);
    }
}

int main()
{
    int numero;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    int resultado = fatorial(&numero);
    printf("Fatorial: %d\n", resultado);

    return 0;
}

