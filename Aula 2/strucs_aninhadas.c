struct Endereco
{
    char rua[100];
    int numero;
    char cidade[50];
};
struct Pessoa
{
    char nome[50];
    int idade;
    struct Endereco endereco; // Estrutura aninhada
};

int main()
{

    struct Pessoa pessoa1 = {"João Silva", 25, {"Rua Doutor Américo Santa Rosa", 169, "Brasília"}};

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Rua: %s\n", pessoa1.endereco.rua);
    printf("Número: %d\n", pessoa1.endereco.numero);
    printf("Cidade: %s\n", pessoa1.endereco.cidade);

    return 0;
}