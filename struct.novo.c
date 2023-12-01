#include <stdio.h>
struct dados_aluno
{
    char turma[200];
    int idade;
    char aluno[200][2];
    int notas[2];
    float media;
    char nome[200];
};
struct dados_professor
{
    char disciplina[200][2];
    char turma[200][2];
    char nome[200];
    int idade;
};
int main()
{
    int i, j;
    float soma;
    struct dados_aluno aluno[2];

    for (i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Digite o nome do aluno:\n", i + 1);
        gets(aluno[i].aluno);
        printf("Digite o numero do turma do aluno:\n");
        gets(aluno[i].turma);
        printf("Digite o idade do aluno:\n");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota do aluno:\n", j + 1);
            scanf("%f", &aluno[i].notas);
            soma += aluno[i].notas[j];
        }
        aluno[i].media = soma / j;
        soma = 0;
        fflush(stdin);
    }

    struct dados_professor professor[2];

    for (j = 0; j < 2; j++)
    {
        fflush(stdin);
        printf("Digite o nome do professor:\n", i + 1);
        gets(professor[j].nome);
        printf("Digite uma disciplina do professor:\n");
        gets(professor[j].disciplina);
        printf("Digite uma turma do professor:\n");
        gets(professor[j].turma);
    }
    for (i = 0; i < 2; i++)
    {
        printf("Exibindo os dados do %d aluno:\n", i + 1);
        printf("aluno:%s\n", aluno[i].aluno);
        printf("idade:%d\n", aluno[i].idade);
        printf("turma:%s\n", aluno[i].turma);
        printf("media:%.2f\n", aluno[i].media);
    }
    for (j = 0; j < 2; j++)
    {
        printf("Exibindo os dados do %d professor:\n", j + 1);
        printf("disciplina:%s\n", professor[j].disciplina);
        printf("turma:%s\n", professor[j].turma);
        printf("idade:%d\n", professor[j].idade);
    }
    return 0;
}
