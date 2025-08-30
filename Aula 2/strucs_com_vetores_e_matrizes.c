// A mesma lógica serve para matrizes de structs

struct Pessoa
{
    char nome[50];
    int idade;
};

int main()
{
    struct Pessoa pessoas[100];

    pessoas[0].idade = 30;
    strcpy(pessoas[0].nome, "Joao");

    printf("Nome: %s\n", pessoas[0].nome);
    printf("Idade: %d\n", pessoas[0].idade);

    return 0;
}