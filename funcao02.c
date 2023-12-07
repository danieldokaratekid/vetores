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
float media(int n1, int n2)
{
  int soma;
  float media;
  soma = n1 + n2;
  media = (float)soma / 2;
  return media;

}

int main()
{
  setlocale(LC_ALL, "portuguese");
  int primeiroNumero;
  int segundoNumero;

  cabecalho();
  printf("\nDigite o primeiro numero: ");
  scanf("%d", &primeiroNumero);
  limpatela();
  cabecalho();

  printf("\nDigite o segundo Numero: ");
  scanf("%d", &segundoNumero);
  limpatela();
  cabecalho();

  printf("primeiro Numero: %d \n", primeiroNumero);
  printf("segundo Numero: %d \n", segundoNumero);
  printf("Media: %.1f \n", media(primeiroNumero, segundoNumero));
 

  return 0;
}