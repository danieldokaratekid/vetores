#include <stdio.h>
struct dados_funcionario
{
    char nome[200][2];
    char admissao[200];
    char matricula[200];
    char endereco[200][2];
};
struct dados_cliente
{
    char nome[200][2];
    char admissao[200];
    char matricula[200];
    char endereco[200][2];
};
int main()
{
    int i, j;
    struct dados_funcionario funcionario[2];

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do funcionario:\n",i+1);
        gets(funcionario[i].nome);
        printf("Digite o ano de admissao do funcionario:\n");
        gets(funcionario[i].admissao);
        printf("Digite a matricula do funcionario:\n");
        gets(funcionario[i].matricula);
        printf("Digite o endereco do funcionario:\n");
        gets(funcionario[i].endereco);
    }

    struct dados_cliente cliente[2];
    for (j = 0; j < 2; j++)
    {
        printf("Exibindo dados do cliente:\n");
        printf("Digite o nome do cliente:\n");
        gets(funcionario[i].nome);
        printf("Digite o ano de admissao do cliente:\n");
        gets(cliente[i].admissao);
        printf("Digite a matricula do cliente:\n");
        gets(cliente[i].matricula);
        printf("Digite o endereco do cliente:\n");
        gets(cliente[i].endereco);
        
    }

    for (i = 0; i < 2; i++)
    {
        printf("Exibindo os dados do %d funcionario:\n",i+1);
        printf("nome:%s\n",&funcionario[i].nome);
        printf("admissao:%d\n", &funcionario[i].admissao);
        printf("endereco:%s\n", &funcionario[i].endereco);
        printf("matricula:%d\n", &funcionario[i].matricula);
    }

    for (j = 0; j < 2; j++)
    {
        printf("Exibindo os dados do %d cliente\n",i+1);
        printf("nome:%s\n", &cliente[i].nome);
        printf("admissao:%d\n",&cliente[i].admissao);
        printf("endereco:%s\n",&cliente[i].endereco);
        printf("matricula:%d\n",&cliente[i].matricula);
    }

    return 0;
}