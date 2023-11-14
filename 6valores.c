// questão 4
// crie um programa que leia 6 valores inteiros pares
// e em seguida monstre na tela os valores lidos na ordem inversa
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int valores[6];
    int inverso[6];
    int pares;
    for (i = 0; i < 6; i++)
    {
        printf("Digite um valor:");
        scanf("%d", &valores[i]);
        if (valores[i] % 2 == 0)
        {
            printf("\n%d é par\n", inverso[i]);
            pares++;
        }
            
        }
        for (i = 6; i >=0; i--)
        {
            printf("%.2f", inverso[i]);
            printf("\nexibindo os numeros....\n");

            printf("%d,inverso:%d\n",inverso[i]);
        }
        printf("\n pares:%d\n", pares);
        return 0;
    }
