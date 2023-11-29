#include<stdio.h>
struct dados_turma
{
char turma[200];
int idade;
char aluno[200];
float notas[2];
float media;  
};
struct dados_professor
{
char professor[200];
char disciplina[200][2];
char turma[200][2];    
};
int main(){
int i,j;
struct dados_turma turma[2];
for ( i = 0; i <2; i++)
{
printf("Digite o numero do turma do aluno:\n");
gets(turma[i].turma);
printf("Digite o nome do aluno:\n");
gets(turma[i].aluno);
printf("Digite o idade do aluno:\n");
gets(turma[i].idade);
for ( j = 0; j< 2; j++)
{
struct dados_professor professor[2];
printf("Digite o nome do professor:\n");
gets(professor[i].professor);
printf("Digite uma disciplina do professor:\n");
gets(professor[i].disciplina);
printf("Digite uma turma do professor:\n");
gets(professor[i].turma);
printf("Exibindo os dados do professor:\n");
}
printf("aluno:%s\n",turma[i].aluno);

return 0;
}