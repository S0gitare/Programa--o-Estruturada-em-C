/*Crie um programa em C que declare variáveis de cada um dos tipos básicos atribua valores as
variáveis criadas e, em seguida, imprima seus valores. */

#include <stdio.h>

int main()
{
    char caractere = 'A';
    int inteiro = 10;
    float real = 5.5;
    double duplo = 20.99;
    void *nulo = NULL;

    printf("Caractere: %c\n", caractere);
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Duplo: %lf\n", duplo);
    printf("Nulo: %p\n", nulo);

    return 0;
}