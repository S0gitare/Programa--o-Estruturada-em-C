// utilizar ponteiros como parâmetros de funções e tipos de retorno de funções.

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
