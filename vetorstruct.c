#include <stdio.h>
int main()
{
    struct dados_livro
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        int preco;
    };

    struct dados_livro livro[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        struct dados_livro livro[2];
        printf("Digite o nome do livro:\n");
        gets(livro[i].nome);
        printf("Digite o nome do autor:\n");
        gets(livro[i].autor);
        printf("Digite a categoria do livro:\n");
        gets(livro[i].categoria);
        printf("Digite o preco do livro:\n");
        scanf("%d", &livro[i].preco);
        printf("\nExibindo os dados:\n");
        printf("nome:%s\n", livro[i].nome);
        printf("autor:%s\n", livro[i].autor);
        printf("categoria:%s\n", livro[i].categoria);
        printf("preco:%d\n", livro[i].preco);
}
    

    
    return 0;
}
