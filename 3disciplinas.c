#include<stdio.h>
int main(){
char disciplina[200];
float notas[2];
float media[2]=0;
int soma=0;
int i,j;
for ( i = 0; i < 2; i++)
{
printf("Digite o nome da disciplina:");
gets(disciplina);
printf("Digite uma nota:");
gets(notas[i]);
for ( i = 0; i <2; i++)
{
 for (j=0;j<2; j++)
    {
if(media>=7)
printf("Aprovado");
} else {
media[i]=>5 && media[i]<7;
    printf("Recuperação"){
} else {
    media[i]<5;
    printf("Reprovado")
    soma+=notas[i][j];
    media[i]+=soma/j; 

    }
    }   
{
} 
    printf("\ndisciplina %s\n",disciplina);
    printf("\nnotas%1.f\n",notas[i]);
    printf("\n media%1.f\n",media[i]);

}

return 0;
}