// Crie uma estrutura Pessoa com nome e idade. Leia os dados de duas pessoas e exiba quem é a mais velha, usando funções para comparar e imprimir o resultado.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

int main()
{
    struct Pessoa pessoa1, pessoa2;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite o nome da primeira pessoa: ");
    scanf(" %[^\n]s", pessoa1.nome);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);
    printf("Digite o nome da segunda pessoa: ");
    scanf(" %[^\n]s", pessoa2.nome);

    if (pessoa1.idade > pessoa2.idade)
    {
        printf("A pessoa mais velha é %s", pessoa1.nome);
    }
    else if (pessoa2.idade > pessoa1.idade)
    {
        printf("A pessoa mais velha é %s", pessoa2.nome);
    }
    else
    {
        printf("As duas pessoas tem a mesma idade");
    }

    return 0;
}