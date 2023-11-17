// Exercicio:
// crie na tela um algoritmo de 5 numeros inteiros e mostre na tela:
// a quantidade de numeros pares e impares;
// a quantidade de numeros positivos e negativos
// quantidade de numeros inseridos;
// o maior e o menor numero;
// a media de numeros pares;
// a media de todos numeros inseridos;
// a media de todos os numeros na ordem inversa;
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int pares;
    int impares;
    float mediapares = 0;
    float mediaimpares = 0;
    int numero[5];
    int quantidadenumero = 0;
    int maior;
    int menor=9999;
    int somapar = 0;
    int somaimpares = 0;
    float mediatotal=0;
    int negativo;
    int positivo;
    float somatodosnumeros;
    for (i < 0; i < 5; i++)
    {
        printf("digite um numero");
        scanf("%d", &numero[i]);
        quantidadenumero++;
    }
    if (numero[i] % 2 == 0)
    {
        printf("\n%d é par\n", numero[i]);
        pares++;
        somapar = somapar + numero[i];
    }
    else {
        somaimpares += numero[i];
        impares++;

        if(pares>0){
        mediapares=somapar/pares;
        }
        if(impares>0){
        mediaimpares=somaimpares/impares;
        }

    menor = numero[i] < menor ? numero[i] : menor;
    if (numero[i] < maior)
    
    {
        maior = numero[i];
    }
    if(numero<0){
        negativo ++;
    
    }if(numero[i]>0){
    positivo++;
    }
    if(numero[i]<menor){
    menor=numero[i];
    }
    somatodosnumeros=somatodosnumeros/numero[i];

    mediatotal=somatodosnumeros/i;
    printf("%d Exibindo a media total:%d\n");
    for(i<5;i>=0;i--){
    printf("%d Invertendo os valores:%d\n");
    }

    printf("\nExibindo resultados\n");
    printf("\n%d numero:%d\n", i + 1, numero[i]);
    printf("\npares:%d\n",pares);
    printf("\nmenor numero:%d\n", menor);
    printf("\nmaior numero:%d\n", maior);
    printf("\nimpares%d\n",impares);
    printf("\nnegativo:%d\n",negativo);
    printf("\npositivo:%d\n",positivo);
    printf("\nmedia total:%f\n",mediatotal);
    printf("\nmedia pares:%f\n",mediapares);
    printf("\nmedia impares:%f\n",mediaimpares);
    {
    }
    return 0;
}