#include<stdio.h>
#include<stdlib.h>
int main(){
float notas;
float media;
float soma=0;
int i;
float numeros[4];
char resultado[200];
for(i=0;i<4;i++)
{
printf("Digita uma %d nota",i+1);
scanf("%f",&numeros[i]);
soma+=notas;
media=soma/i;
if(media=7){
strcpy(resultado,"Aprovado");
}
else(media=5);
{
    strcpy(resultado,"Recuperação");
}
if(media<5);
{
    strcpy(resultado,"Reprovado");
}
printf("numeros%d,\n",i+1,numeros[i]);
return 0;
}