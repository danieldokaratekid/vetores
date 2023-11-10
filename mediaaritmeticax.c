#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[5];
    int menor = 9999;
    int maior = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero:", i + 1);
        scanf("%f", &numero[i]);
        maior = numero[i] > maior ? numero[i] : maior;
        if (numero[i] < menor)
        {
            menor = numero[i];
        }
    }
    printf("\nExibindo resultados \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d numero:%d\n", i + 1, numero[i]);
    }
    printf("menor numero:%d\n", menor);
    printf("maior numero:%d\n", maior);
    return 0;
}