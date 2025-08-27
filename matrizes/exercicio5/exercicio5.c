#include <stdio.h>

int main()
{
    // declarando variaveis 
    int linha_A, coluna_A, linha_B, coluna_B;
    int i, j, k;
    int A[10][10], B[10][10], C[10][10];

    // pedindo tamanho das matrizes 
    printf("Digite o tamanho de linhas da matriz A: ");
    scanf("%d", &linha_A);
    printf("Digite o tamanho de colunas da matriz A: ");
    scanf("%d", &coluna_A);
    printf("Digite o tamanho de linhas da matriz B: ");
    scanf("%d", &linha_B);
    printf("Digite o tamanho de colunas da matriz B: ");
    scanf("%d", &coluna_B);

    if (coluna_A != linha_B) // verificação para ver se a matriz pode ser multiplicada
    {
        printf("Multiplicacao impossivel! Colunas de A devem ser iguais as linhas de B.\n");
        return 0;
    }

    // inserindo valor para  a matriz a 
    for (i = 0; i < linha_A; i++)
        for (j = 0; j < coluna_A; j++)
        {
            printf("Digite o valor para a matriz A [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

         // inserindo valor para  a matriz b
    for (i = 0; i < linha_B; i++)
        for (j = 0; j < coluna_B; j++)
        {
            printf("Digite o valor para a matriz B [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

        // realizando a multiplicação 
    for (i = 0; i < linha_A; i++)
        for (j = 0; j < coluna_B; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < coluna_A; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

        // exibindo o resultado !
    printf("\nMatriz C (resultado da multiplicação):\n");
    for (i = 0; i < linha_A; i++)
    {
        for (j = 0; j < coluna_B; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
