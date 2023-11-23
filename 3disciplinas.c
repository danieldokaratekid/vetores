#include <stdio.h>
int main()
{
    char disciplina[2][200];
    float notas[2][2];
    float media[2];
    int soma = 0;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("Digite uma disciplina:");
        gets(disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite uma nota:");
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        fflush(stdin);
        media[i] += soma / (float)j;
        soma = 0;
        fflush(stdin);
    }
    printf("\nExibindo Resultados:\n");
    printf("disciplina:%s/n", disciplina);
    for (i = 0; i < 3; i++)
    {
        printf("\nNome da disciplina:%s\n", disciplina[i]);
        for (j = 0; j < 2; j++)
        {
            printf("\nnotas:%1.f\n", notas[i][j]);
        }
        printf("\n media:%1.f\n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado\n");
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("Recuperação\n");
        }
        else
        {
            printf("Reprovado");
        }
    }
    return 0;
}
