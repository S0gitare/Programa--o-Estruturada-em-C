/*Crie uma função que recebe dois números inteiros e retorna a soma deles. Utilize essa função em seu programa principal.*/

#include <stdio.h>

int soma(int a, int b);

int main()
{
    int n1, n2, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    resultado = soma(n1, n2);
    printf("A soma dos numeros eh: %d\n", resultado);
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}