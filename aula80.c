#include<stdio.h>
#include<stdlib.h>
int main(){
int numeros[5];
int i;
for(i=0;i<5;i++){
printf("Digite o 1 n�mero:");
scanf("%d",&numeros[i]);
}
printf("Exibindo os n�meros..\n");
for(i=0;i<5;i++){
printf("numero:%d\n",numeros[i]);
}
return 0;
}