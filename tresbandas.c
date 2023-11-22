#include<stdio.h>
int main(){
//crie um algoritmo que receba:
//o nome de tres bandas musicais
//cinco integrantes para cada banda
//ex:1 integrante:
int i,j;
char banda[200][3];
char integrantes[200][5];
printf("Digite uma banda:\n");
gets(banda);
printf("Digite 5 integrantes da banda\n");
gets(integrantes);
return 0;
}