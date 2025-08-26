#include <string.h>
#include <stdio.h>

// int main()
// {
//     int resultado = strcmp("abc", "ABC");

//     if (resultado == 0)
//     {
//         printf("As strings sao iguais\n");
//     }
//     else if (resultado < 0)
//     {
//         printf("A primeira string e menor que a segunda\n");
//     }
//     else
//     {
//         printf("A primeira string e maior que a segunda\n");
//     }
// }

// int main()
// {
//     char nome[50] = "Alecs";
//     char sobrenome[50] = "Lima";

//     strcat(nome, " ");
//     strcat(nome, sobrenome);
//     printf("Nome completo: %s\n", nome);
// }

// int main()
// {
//     char destino[50] = "Olá,";
//     char origem[50] = "Mundo!";

//     strncpy(destino, origem, 5);
//     printf("Destino: %s\n", destino);
// }

// int main()
// {
//     char nome[50] = "Alecs";

//     char *busca = strrchr(nome, 's');

//     if (busca != NULL)
//     {
//         printf("Caracter encontrado: %c\n", *busca);
//     }
//     else
//     {
//         printf("Caracter nao encontrado\n");
//     }
// }

// int main() {
//     char numerostr[10] = "123";
//     int numero = atoi(numerostr);
//     printf("Numero: %d\n", numero);
// }

int main() {
    char numerostr[10] = "123.45";
    double numero = atof(numerostr);
    printf("Numero: %f\n", numero);
}