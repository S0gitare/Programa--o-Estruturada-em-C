// Ponteiros de memoria

#include <stdio.h>

int main()
{
    int numero = 10;
    printf("Endereco de memoria da variavel numero: %p\n", &numero);
    printf("Valor da variavel numero: %d\n", numero);

    int *ponteiro_numero = &numero;
    printf("Endereco de memoria armazenado no ponteiro: %p\n", ponteiro_numero);
    printf("Valor da variavel numero via ponteiro: %d\n", *ponteiro_numero);

    return 0;
}
