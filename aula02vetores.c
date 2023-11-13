#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idades[5];
    char nome[5][200];
    int i;
    for (i = 0; i < 5; i++)
    {
        gets(nome[i]);
        printf("Digite seu nome:\n");
        scanf("%s", &nome[i]);
        printf("Digite sua idade:\n");
        scanf("%d", &idades[i]);
    }
    printf("Exibindo os resultados:\n");
    for (i = 0; i < 5; i++)
    {
        printf("idades%d\n", idades[i]);
        for (i = 0; i < 5; i++)
        {

            printf("nome:%s\n", nome[i]);
        }
    }

    return 0;
}