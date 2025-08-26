#include <stdio.h> //Stantard input/output library
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Olá, mundo!\n");
    return 0;
}
