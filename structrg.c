#include <stdio.h>
    struct dados_usuario
    {
        char nome[200];
        int idade;
        int nota[2];
        float media;
       
    };

int main()
{

    int i,j;
    int soma=0;
    int nota[2];
 struct dados_usuario usuario[2];

    for (i = 0; i < 2; i++)
    {
        struct dados_usuario usuario[2];
        printf("Digite seu nome:\n");
        gets(usuario[i].nome);
        printf("Digite sua idade:\n");
        fflush(stdin);
        gets(usuario[i].idade);
        for ( j = 0; i < 2; j++)
        {
        printf("Digite a sua nota:\n");
        scanf("%d", &usuario[i].nota);
        soma+=usuario[i].nota[j];   
    }
        usuario[i].media=soma/j;
        soma=0;
        fflush(stdin);
        printf("Exibindo Informacoes:");
        } 

    for (i = 0; i < 2; i++)
    {
        printf("nome:%s\n", usuario[i].nome);
        printf("idade:%d\n", usuario[i].idade);
        printf("nota:%d\n", usuario[i].nota[j]);
        printf("media:%2.f\n",usuario[i].media);
    }
    return 0;
}