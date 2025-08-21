#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 20 || num < 1) {
            printf("Numero invalido. Deve ser maior que zero.\n");
            return 1;
        }

    int vetorx[num];
    
    for (int i = 0; i < num; i++) {
        printf("Digite o valor do vetorX[%d]: ", i);
        scanf("%d", &vetorx[i]);
    }
    
    int num_min = vetorx[0];
    int num_max = vetorx[0];

    for (int i = 1; i < num; i++) {
        if (vetorx[i] < num_min) {
            num_min = vetorx[i];
        }
        if (vetorx[i] > num_max) {
            num_max = vetorx[i];
        }
    }

    printf("\nMenor valor: %d\n", num_min);
    printf("Maior valor: %d\n", num_max);

    return 0;
}