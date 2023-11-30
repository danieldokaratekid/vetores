#include <stdio.h>
struct dados_aluno
{
    char turma[200];
    int idade;
    char aluno[200][2];
    int notas[2];
    float media;
};
struct dados_professor
{
    char disciplina[200];
    char turma[200];
    char nome[200][2];
    int idade;
    int notas[2];
};
int main()
{
    int i, j;
    int soma;
    struct dados_aluno aluno[2];

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do aluno:\n",i+1);
        gets(aluno[i].aluno);
        printf("Digite o numero do turma do aluno:\n");
        gets(aluno[i].turma);
        printf("Digite o idade do aluno:\n");
        gets(aluno[i].idade);
    }

        for ( j = 0; j< 2; j++)
        {
        printf("Digite a nota do aluno:\n");
        scanf("%d",&aluno[i].notas);
        soma+=aluno[i].notas[j];
    }
        aluno[i].media=soma/j;
        soma=0;
    struct dados_professor professor[2];
    for (j = 0; j < 2; j++)
    {
        printf("Digite o nome do professor:\n");
        gets(professor[j].nome);
        printf("Digite uma disciplina do professor:\n");
        gets(professor[j].disciplina);
        printf("Digite uma turma do professor:\n");
        gets(professor[j].turma);

    }
    for (i = 0; i < 2; i++)
    {
        printf("Exibindo os dados do %d aluno:\n",i+1);
        printf("aluno:%s\n", aluno[i].aluno);
        printf("idade:%d\n", aluno[i].idade);
        printf("turma:%s\n", aluno[i].turma);
    }
    for (j = 0; j < 2; j++)
    {
        printf("Exibindo os dados do %d professor:\n",i+1);
        printf("disciplina:%s\n", professor[j].disciplina);
        printf("turma:%s\n",professor[j].turma);
        printf("idade:%d\n",professor[j].idade);
    }
    return 0;
}
