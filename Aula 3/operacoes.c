// Operações Utilizando Ponteiros

#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *n1 = &array[0];
    int *n2 = &array[1];

    printf("Valor de n1: %d\n", *n1);
    printf("Valor de n2: %d\n", *n2);
    printf("Endereço de n1: %p\n", n1);
    printf("Endereço de n2: %p\n", n2);

    int soma = *n1 + *n2;
    printf("Soma de n1 e n2: %d\n", soma);

    return 0;
}

