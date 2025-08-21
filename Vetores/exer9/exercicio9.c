#include <stdio.h>

int main()
{
    int num;
    int contador = 0;
    int vetor[10];

    while (contador < 10)
    {
        printf("Digite um numero inteiro positivo (ou um numero negativo para parar): ");
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        }

        if (num >= 0)
        {
            vetor[contador] = num;
            contador++;
        }
    }

    printf("Valores preenchidos no vetor:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    if (contador < 10)
    {
        printf("Você digitou menos de 10 números.\n");
    }
    else
    {
        printf("Você digitou 10 números.\n");
    }

    return 0;
}