#include <stdio.h>

int fatorial_for(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int fatorial_while(int num) {
    int resultado = 1;
    int i = 1;
    while (i <= num) {
        resultado *= i;
        i++;
    }
    return resultado;
}

int main() {
    int num;

    printf("Digite numeros inteiros (negativo para parar):\n");

    while (1) {
        printf(">>> ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        printf("Fatorial de %d (FOR): %d\n", num, fatorial_for(num));
        printf("Fatorial de %d (WHILE): %d\n", num, fatorial_while(num));
    }

    printf("Programa encerrado.\n");
    return 0;
}
