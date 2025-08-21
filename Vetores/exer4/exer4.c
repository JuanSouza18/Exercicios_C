#include <stdio.h>

int main()
{
    int num;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &num);

    if (num > 20 || num < 1) {
        printf("O Tamanho do vetor passou do limite de 20 elementos.\n");
        return 1;
    }

    int vetorx[num];
    int vetory[num];

    for (int i = 0; i < num; i++) {
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &vetorx[i]);
    }
    printf("\n");

    num--;
    for (int i = 0; i <= num; i++) {
        vetory[num - i] = vetorx[i];
    }
    
    for (int i = 0; i < num + 1; i++) {
        printf("vetorX[%d] = %d -|- ", i, vetorx[i]);
        printf("vetorY[%d] = %d\n", i, vetory[i]);
    }
    
    return 0;
}