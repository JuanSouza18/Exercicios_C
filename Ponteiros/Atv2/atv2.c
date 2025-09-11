#include <stdio.h>

int main() {
    int valor1, valor2, valor3;   // três variáveis inteiras
    int *pt1, *pt2;               // dois ponteiros

    // inicializando as variáveis
    valor1 = 15;
    valor2 = 40;

    // pt1 aponta para a primeira variável
    pt1 = &valor1;

    // pt2 aponta para a segunda variável
    pt2 = &valor2;

    // soma dos valores apontados por pt1 e pt2 em valor3
    valor3 = *pt1 + *pt2;

    // pt1 passa a apontar para a terceira variável
    pt1 = &valor3;

    // altera o valor da terceira variável via ponteiro
    *pt1 = *pt1 + 10;   // acrescenta 10 ao valor3

    // impressões
    printf("Valor1 = %d\n", valor1);
    printf("Valor2 = %d\n", valor2);
    printf("Valor3 = %d\n", valor3);

    printf("pt1 aponta para valor3 = %d\n", *pt1);
    printf("pt2 aponta para valor2 = %d\n", *pt2);

    return 0;
}
