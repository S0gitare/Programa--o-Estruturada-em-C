/*Crie uma função que declare uma variável estática. A função deve incrementar o valor da variável estática e imprimir o seu valor. Chame esta função várias vezes no seu programa principal e observe o comportamento da variável estática.*/

#include <stdio.h>
void incrementar();
static int contador = 0;
int main()
{
    incrementar();
    incrementar();
    incrementar();
    incrementar();
    incrementar();
    return 0;
}

void incrementar()
{
    contador++;
    printf("Valor do contador: %d\n", contador);
}