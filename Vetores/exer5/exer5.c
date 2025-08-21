#include <stdio.h>

int main() {
    int vetor[20];
    int cont_par = 0;
    int cont_5 = 0;
    
    for (int i = 0; i < 20; i++) {
        printf("vetor[%d] = ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) {
            cont_par++;
        }
        if (vetor[i] % 5 == 0) {
            cont_5++;
        }
    }

    printf("Quantidade de números pares: %d\n", cont_par);
    printf("Quantidade de números multiplos de 5: %d\n", cont_5);

    return 0;
}