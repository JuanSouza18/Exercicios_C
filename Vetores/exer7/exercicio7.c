#include <stdio.h>
#include <stdbool.h>

int main()
{
    int aux;
    int vetor[20];
    bool swap = false;

    for (int i = 0; i < 20; i++) {
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    do {
        swap = false;
        for (int i = 0; i < 20; i++)
        {
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                swap = true;
            }
        }
    } while (swap == true);

    for (int i = 0; i < 20; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}