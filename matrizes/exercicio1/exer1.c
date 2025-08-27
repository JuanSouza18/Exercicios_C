#include <stdio.h>

int main()
{
    int nmax;
    int i, j;
    int matriz[20][20];  
    int soma = 0;

    printf("Digite o tamanho da matriz (1 a 20): ");
    scanf("%d", &nmax);

    if (nmax < 1 || nmax > 20)
    {
        printf("Erro: tamanho inválido, digite entre 1 e 20.\n");
        return 1;
    }

    for (i = 0; i < nmax; i++)
    {
        for (j = 0; j < nmax; j++)
        {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < nmax; i++)
    {
        soma += matriz[i][i];
    }

    printf("\nMatriz:\n");
    for (i = 0; i < nmax; i++)
    {
        for (j = 0; j < nmax; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal = %d\n", soma);

    return 0;
}
