// Crie um programa que declare um array de 30 caracteres para receber um nome, permita que o usuário digite o seu nome, e então imprima os caracteres na ordem em que foram inseridos e em ordem inversa.

#include <stdio.h>

int main()
{
    char nome[30];
    printf("Digite seu nome: ");
    scanf("%29s", nome); // Limitar a leitura para evitar overflow
    printf("Nome na ordem inserida: %s\n", nome);
    printf("Nome na ordem inversa: ");
    for (int i = 29; i >= 0; i--)
    {
        printf("%c", nome[i]);
    }
}