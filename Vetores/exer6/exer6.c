#include <stdio.h>

int main()
{
    int vetor[20];
    double soma = 0;
    double media;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        soma += vetor[i];
    }

    media = soma / 20;

    printf("A media dos valores do vetor e: %.2f\n", media);
    return 0;
}