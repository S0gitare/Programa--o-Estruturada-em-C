/*Crie um programa que declare duas variáveis globais. Uma função deve modificar o valor dessas variáveis. Outra função deve imprimir o valor dessas variáveis.*/

#include <stdio.h>
void modVar(int var1, int var2);
void printVar();
int global_var1 = 10;
int global_var2 = 20;

int main()
{
    printf("Variável global 1: %d\n", global_var1);
    printf("Variável global 2: %d\n", global_var2);

    int var1;
    int var2;

    printf("Digite o valor para a primeira variável: ");
    scanf("%d", &var1);
    printf("Digite o valor para a segunda variável: ");
    scanf("%d", &var2);

    modVar(var1, var2);
    printVar();

    return 0;
}

void modVar(int var1, int var2)
{
    global_var1 = var1;
    global_var2 = var2;
}

void printVar()
{
    printf("Valor da variável global 1: %d\n", global_var1);
    printf("Valor da variável global 2: %d\n", global_var2);
}