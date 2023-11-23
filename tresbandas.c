#include<stdio.h>
int main(){
//crie um algoritmo que receba:
//o nome de tres bandas musicais
//cinco integrantes para cada banda
//ex:1 integrante:
int i,j;
char banda[200][3];
char integrantes[200][5];
for (i = 0; i < 3; i++)
{
printf("Digite uma banda:\n");
gets(banda);
}
for (i = 0; i < 5; i++)
{
printf("Digite 5 integrantes da banda\n");
gets(integrantes);
}
printf("\nbandas:%s\n",&banda[i]);{
printf("\nintegrantes:%s\n",&integrantes);
}
return 0;
}
