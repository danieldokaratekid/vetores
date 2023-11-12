#include<stdio.h>
#include<stdlib.h>
int main(){
float notas[3];
float media=0;
float soma=0;
int i;
for(i=0;i<3;i++){
printf("Digite a nota:",i+1);
scanf("%f",&notas[i]);
soma=soma+notas[i];
soma+=notas[i];
}
media=soma/i;
printf("\nExibindo resultados \n");
for(i=0;i<3;i++){
}
printf("media%.1f\n",media);

return 0;
}
