#include <stdio.h>
int main()
{
    struct dados_pessoais
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        int preco;
    };

    struct dados_pessoais dados[2];
    int i;
 
    for (i = 0; i < 2; i++)
    {
        struct dados_pessoais dados[2];
        printf("Digite o nome do livro:\n");
        gets(dados[i].nome);
        printf("Digite o nome do autor:\n");
        scanf("%s", &dados[i].autor);
        printf("Digite a categoria do livro:\n");
        scanf("%s", &dados[i].categoria);
        printf("Digite o preco do livro:\n");
        scanf("%d", &dados[i].preco);
    }

    for (i = 0; i < 2; i++)
    {
        printf("\nExibindo os dados:\n");

        printf("nome:%s\n", dados[i].nome);
        printf("autor:%s\n", dados[i].autor);
        printf("categoria:%s\n", dados[i].categoria);
        printf("preco:%d\n", dados[i].preco);
    }
    return 0;
}