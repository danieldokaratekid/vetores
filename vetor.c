#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int i;
    int maior = 0;
    int menor = 9999;
    int pares;
    int impares;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d número", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
        {
            printf("\n%d é par\n", numeros[i]);
            pares++;
        }
        else
        {
            printf("\n%d é impar\n", numeros[i]);
            impares++;
        }
    }
        system("clear||cls");
        printf("\nexibindo os numeros...\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d,numeros:%d\n", i + 1, numeros[i]);
            maior = numeros[i] > maior ? numeros[i] : maior;
            menor = numeros[i] < menor ? numeros[i] : menor;
        }
            printf("\n menor numero:%d\n", menor);
            printf("\n maior numero:%d\n", maior);
            printf("\n pares:%d\n", pares);
            printf("\n impar:%d\n", impares);
            return 0;
        }
