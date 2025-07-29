/*Crie um programa em C que peça ao usuário que insira a base e a altura de um triângulo (números de ponto flutuante), e depois calcule e imprima a área desse triângulo.*/

#include <stdio.h>

int main()
{
    float base, altura, area;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}