//quest�o 2:
//Fa�a um programa que leia uma tabela com a tabuada de um numero informado pelo usuario 1 a 10;
#include<stdio.h>
#include<stdlib.h>
void mostrartabuada(int numero){
int i;
for ( i = 1; i < 10; i++)
{
printf("%d x %d =%d\n",numero,i,numero*i);
}
}
int main(){
int numero;
printf("Digite um numero:");
scanf("%d",&numero);
monstrartabuada(numero);
return 0;
}