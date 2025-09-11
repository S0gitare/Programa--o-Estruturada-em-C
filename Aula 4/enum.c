// utilização de enum

#include <stdio.h>
#include <stdlib.h>

enum dia_da_semana
{
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main()
{
    enum dia_da_semana hoje;
    hoje = QUARTA;

    if (hoje == QUINTA)
    {
        printf("Hoje e quinta-feira!\n");
    }
    else
    {
        printf("Hoje nao e quinta-feira!\n");
    }
}