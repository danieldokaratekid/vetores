#include<stdio.h>
struct dados_aluno
{
char nome[200];
float media;
float nota[2];
};

int main(){
int i;
int j;
int soma;
struct dados_aluno dados[2];
for ( i = 0; i < 2; i++)
{
printf("Digite o nome do aluno:");
scanf("%s",dados[i].nome);
}
for ( j = 0; j < 2; j++)
{
printf("Digite a nota do aluno:");
scanf("%f",&dados[i].nota);
soma+=dados[i].nota[j];
dados[i].media=soma/j;
soma=0;  
}
printf("nota:%1.f\n",dados[i].nota[j]);
printf("media:%1.f\n",dados[i].media);
return 0;
}