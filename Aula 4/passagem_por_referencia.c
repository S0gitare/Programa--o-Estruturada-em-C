#include <stdio.h>
#include <stdlib.h>

void dobra_valor(int *valor)
{
    *valor = *valor * 2;
}

int main()
{
    int num = 5;
    printf("Antes da funcao: num = %d\n", num);

    dobra_valor(&num);
    printf("Depois da funcao: num = %d\n", num);

    return 0;
}
