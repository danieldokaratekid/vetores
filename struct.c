#include<stdio.h>
int main(){
struct dados_aluno{
char nome[200];
int idade;
};
struct dados_aluno aluno;
printf("Digite o nome do aluno:");
gets(aluno.nome);
printf("Digite a idade do aluno:");
scanf("%d",&aluno.idade);
return 0;
}