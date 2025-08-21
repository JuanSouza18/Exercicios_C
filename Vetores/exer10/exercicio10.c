#include <stdio.h>

int main() {
    int num;
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int cont = 6;

    printf("Digite um valor para colocar na posicao 3: ");
    scanf("%d", &num);
    cont++;

    for (int i = 7; i > 3; i--) {
        vetor[i] = vetor[i-1];
    }
    vetor[3] = num;

    printf("-- Valores do vetor --\n");
    for (int i = 0; i < cont; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("Aperte qualquer tecla para continuar.");
    scanf("%d", &num);

    printf("\nRemovendo um elemento da posicao 2.");

    for (int i = 2; i < 10; i++) {
        vetor[i] = vetor[i+1];
    }
    cont--;

    printf("-- Valores do vetor --\n");
    for (int i = 0; i < cont; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

}