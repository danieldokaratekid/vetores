#include<stdio.h>
#include<stdlib.h>
void calcularmaiormenor(int n1,int n2){
if(n1>n2){
printf("Maior:%d",n1);
printf("Menor:%d",n2);
} else{
printf("Maior:%d\n",n2);
printf("Menor:%d\n",n1);
}
}
int main(){
int numeroum,numerodois;
printf("Digite o primeiro numero:");
scanf("%d",&numeroum);
printf("Digite o segundo numero:");
scanf("%d",&numerodois);
calcularmaiormenor(numeroum,numerodois);
return 0;
}
//int soma=a+b;
//printf("\nsoma: %d\n",soma);
//printf("Maior numero:%d",calcularMaior(primerioNumero,segundoNumero)));
//return n1<n2?n1:n2;
