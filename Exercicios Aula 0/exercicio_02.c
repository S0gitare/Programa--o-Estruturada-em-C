/*2.	Crie um programa em C que peça ao usuário que insira um caractere e, em seguida, imprima o código ASCII correspondente ao caractere digitado.*/

#include <stdio.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    printf("O codigo ASCII do caractere '%c' eh: %d\n", caractere, (int)caractere);
    return 0;
}