/*Crie um programa que declare uma variável global e uma função. A função deve modificar o valor da variável global para o valor informado pelo usuário e o programa principal deve imprimir este valor.*/

#include <stdio.h>

int modVar(int valor);

int globalvar = 10;

int main()
{
    int valor;
    printf("Valor Atual da Variavel Global: %d \n", globalvar);
    printf("Digite um valor para a variável global: ");
    scanf("%d", &valor);
    modVar(valor);
    printf("O valor da variável global é: %d\n", globalvar);
    return 0;
}

int modVar(int valor)
{
    globalvar = valor;
    return valor;
}