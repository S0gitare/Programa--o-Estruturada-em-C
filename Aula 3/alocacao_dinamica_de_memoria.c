// Alocação Dinamica de memoria utilizando malloc e calloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o numero inicial de elementos do vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int)); // Aloca memoria para n elementos do tipo int

    if (vetor == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1; // Sai do programa com codigo de erro
    }

    if (n < 10)
    {
        vetor = realloc(vetor, 10 * sizeof(int)); // Realoca memoria para 10 elementos do tipo int
    }

    free(vetor); // Libera a memoria alocada
    return 0;
}
