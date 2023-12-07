#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
void cabecalho()
{
  printf("\n\t*********SENAI***********\n");
}
void limpatela()
{
  system("cls || clear");
}
void limpacache()
{
  fflush(stdin);
}
void mostrarDados(char nomeUsuario[], int idadeUsuario) // passsagem de parametros, saber o tipos d dados q precisa receber
{
  printf("Nome: %s \n", nomeUsuario);
  printf("Idade: %d \n", idadeUsuario);
}

int main()
{
  setlocale(LC_ALL, "portuguese");
  char nome[200];
  int idade;

  cabecalho();
  printf("\nDigite o seu Nome: ");
  gets(nome);
  limpatela();

  cabecalho();
  printf("\nDigite a sua Idade: ");
  scanf("%d", &idade);
  limpatela();
  cabecalho();
  mostrarDados(nome, idade); // passsagem de parametros

  return 0;
}