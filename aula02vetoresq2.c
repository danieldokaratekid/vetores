#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i;
    float numeros[3];
    int negativos=0;
    float somapositivos=0;
    for (i = 0; i < 3; i++){
        printf("digite um número:");
        scanf("%f", &numeros[i]);
        if (numeros[i] < 0)
        {
            negativos++;
        }
        else
        {
            somapositivos += numeros[i];
        }
    }
            printf("Exibindo informações:\n");
            for (i = 0; i < 3; i++){
            }
            printf("numeros:%.1f\n", numeros[i]);
            printf("\nquantidade dos numeros negativos:%d\n",negativos);
            printf("soma dos numeros positivos:%.1f\n",somapositivos);
            {
            }
            return 0;
        }