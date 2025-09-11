// usabilidade do union

#include <stdio.h>
#include <string.h>

union Numeros
{
    int inteiro;
    float quebrado;
};

int main()
{
    union Numeros N1;
    N1.inteiro = 10;
    printf("Inteiro: %d\n", N1.inteiro);
    N1.quebrado = 3.14;
    printf("Quebrado: %.2f\n", N1.quebrado);

    printf("Endereço do inteiro: %p\n", (void *)&N1.inteiro);
    printf("Endereço do quebrado: %p\n", (void *)&N1.quebrado);
    return 0;
}