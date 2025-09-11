// Crie duas estruturas: Endereço (rua, número, cidade) e Pessoa (nome, idade, endereço). Cadastre 3 pessoas e mostre seus dados completos. Use estruturas aninhadas.

struct Endereco
{
    char rua[50];
    int numero;
    char cidade[50];
};

struct Pessoa
{
    char nome[50];
    int idade;
    struct Endereco endereco;
};

int main()
{
    struct Pessoa pessoas[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a rua da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", pessoas[i].endereco.rua);
        printf("Digite o número da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].endereco.numero);
        printf("Digite a cidade da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", pessoas[i].endereco.cidade);
    }

    printf("\nDados das pessoas cadastradas:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Endereço:\n");
        printf("Rua: %s\n", pessoas[i].endereco.rua);
        printf("Número: %d\n", pessoas[i].endereco.numero);
        printf("Cidade: %s\n", pessoas[i].endereco.cidade);
    }

    return 0;
}
