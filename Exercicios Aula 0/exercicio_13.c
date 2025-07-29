/*Crie uma função que declare uma variável estática e outra função que declare uma variável automática (não-estática). Ambas as funções devem incrementar o valor das respectivas variáveis e imprimir o seu valor. Chame estas funções várias vezes no seu programa principal e observe o comportamento das variáveis estática e automática.*/

#include <stdio.h>
void incrementar_estatico();
void incrementar_automatica();

int main()
{
    incrementar_estatico();
    incrementar_estatico();
    incrementar_estatico();
    incrementar_automatica();
    incrementar_automatica();
    incrementar_automatica();
    return 0;
}

void incrementar_estatico()
{
    static int contador_estatico = 0;
    contador_estatico++;
    printf("%d\n", contador_estatico);
}
void incrementar_automatica()
{
    int contador_automatica = 0;
    contador_automatica++;
    printf("%d\n", contador_automatica);
}