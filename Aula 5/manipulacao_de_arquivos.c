// Manipulação de arquivos em C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo! \n");
        exit(1);
    }
    else
    {
        fprintf(arquivo, "Escrevendo no arquivo exemplo.txt \n"); // file print
        fclose(arquivo);
    }

    FILE *anexo;
    anexo = fopen("exemplo.txt", "a");
    if (anexo == NULL)
    {
        printf("Erro ao abrir o arquivo! \n");
        exit(1);
    }
    else
    {
        fprintf(anexo, "Anexando mais uma linha ao arquivo exemplo.txt \n");
        fclose(anexo);
    }

    return 0;
}