#include<stdio.h>
#include<stdlib.h>
int main(){
int numeros[3];
int i;
printf("Digite um n�mero");
scanf("%d",&numeros);
printf("Exibindo n�meros....\n");
for(i=0;i<3;i++){
printf("numeros%d,\n",i+1,numeros[i]);
}
return 0;
}