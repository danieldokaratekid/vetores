#include<stdio.h>
void preco(numero){
}
int main(){
int produto;
int precoproduto;
printf("Digite o preco de um produto:\n");
scanf("%d",&preco);
if(preco<100){
precoproduto=produto*0.10;
}else{
precoproduto=produto*0.20;
printf("Exibindo informacoes:");
printf("precoproduto:%d\n",precoproduto);
return 0;
}
}