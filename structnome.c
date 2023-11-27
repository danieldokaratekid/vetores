#include<stdio.h>
int main(){
struct dados_pessoais{
char nome[200];
int idade;
float peso;
float altura;
};
struct dados_pessoais dados;
printf("Digite o seu nome:\n");
gets(dados.nome);
printf("Digite a idade:");
scanf("%d",&dados.idade);
printf("Digite o seu peso:");
scanf("%f",&dados.peso);
printf("Digite sua altura:");
scanf("%f",&dados.altura);
printf("\nExibindo informações...\n");
printf("Nome:%s\n",dados.nome);
printf("Idade:%d\n",dados.idade);
printf("Peso:%1f\n",dados.peso);
printf("Altura:%1f\n",dados.altura);
return 0;
}