#include<stdio.h>
#include<stdlib.h>
int main(){
int numeros[3];
int i;
printf("Digite um número");
scanf("%d",&numeros);
printf("Exibindo números....\n");
for(i=0;i<3;i++){
printf("numeros%d,\n",i+1,numeros[i]);
}
return 0;
}