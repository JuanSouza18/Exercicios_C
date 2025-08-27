#include <stdio.h>

int main()
{
    float matrizm[5][5];  
    int i, j;
    float maior;
    int linha, coluna;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite valor para matriz[%d][%d]: ", i, j);
            scanf("%f", &matrizm[i][j]);
        }
    }

    maior = matrizm[0][0];
    linha = 0;
    coluna = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrizm[i][j] > maior)
            {
                maior = matrizm[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMaior valor = %.2f\n", maior);
    printf("Posição: linha %d, coluna %d\n", linha, coluna);

    return 0;
}
