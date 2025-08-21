#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 20 || num < 1) {
        printf("Numero invalido. Deve ser entre 1 e 20.\n");
        return 1;
    }

    int vetorx [num];
    int vetory [num];
    int vetorz [num];

    for (int i = 0; i < num; i++) {
        printf("Digite o valor do vetorX[%d]: ", i);
        scanf("%d", &vetorx[i]);
    }
    for (int i = 0; i < num; i++) {
        printf("Digite o valor do vetorY[%d]: ", i);
        scanf("%d", &vetory[i]);
    }

    for (int i =0; i < num; i++) {
        vetorz[i] = vetorx[i] * vetory[i];
    }
    
    for (int i = 0; i <num; i++) {
        printf("vetorX[%d] = %d | ", i, vetorx[i]);
        printf("vetorY[%d] = %d | ", i, vetory[i]);
        printf("vetorZ[%d] = %d\n", i, vetorz[i]);
    }

    return 0;
}