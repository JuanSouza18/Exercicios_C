#include <stdio.h>

int main()
{
    // Declarando variáveis 
    int i, j;
    int matriz[5][3];
    int transposta[3][5];
    
    // Inserindo os valores para a matriz 
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor para a matriz [%d][%d]: ", i, j);    
            scanf("%d", &matriz[i][j]);
        }
    }

    // Fazendo a matriz transposta

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    } 

    // Exibindo a matriz original

    printf("\nMatriz original:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    // Exibindo a matriz transposta 

    printf("\nMatriz transposta:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
