//questão 2:
//Faça um programa que leia uma tabela com a tabuada de um numero informado pelo usuario 1 a 10;
#include<stdio.h>
#include<stdlib.h>
void tabuada(int numero){
int i;
for ( i = 1; i < 10; i++)
{
printf("%d x %d =%d\n",numero,i,numero*i);
}
}
int main()
{
int numero;
printf("Digite um numero:");
scanf("%d",&numero);
tabuada(numero);
return 0;
}
