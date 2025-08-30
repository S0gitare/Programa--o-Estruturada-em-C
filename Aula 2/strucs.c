
int main()
{
    struct Pessoa
    {
        char nome[50];
        int idade;
    };

    struct Pessoa pessoa1 = {"João Silva", 25};
    struct Pessoa pessoa2 = {"Maria Souza", 30};

    printf("Nome: %s, Idade: %d\n", pessoa1.nome, pessoa1.idade);
    printf("Nome: %s, Idade: %d\n", pessoa2.nome, pessoa2.idade);
}
