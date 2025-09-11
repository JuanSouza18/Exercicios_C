 #include <stdio.h>
#include <stdlib.h>

int main() {
    double variavel1, variavel2, resultado; 
    double *pt1, *pt2;

    // Entrada de dados
    printf("Digite o valor da variavel 1: ");
    scanf("%lf", &variavel1);

    printf("Digite o valor da variavel 2: ");
    scanf("%lf", &variavel2);

    // Ponteiros apontando para as duas variáveis
    pt1 = &variavel1;
    pt2 = &variavel2;

    // Multiplicação dos valores apontados
    resultado = (*pt1) * (*pt2);

    // Agora pt2 aponta para a terceira variável (resultado)
    pt2 = &resultado;

    // Divide o valor de resultado por 2 via ponteiro
    *pt2 = *pt2 / 2;

    // Impressões
    printf("\nValores das variaveis:\n");
    printf("Variavel1 = %.2lf\n", variavel1);
    printf("Variavel2 = %.2lf\n", variavel2);
    printf("Resultado = %.2lf\n", resultado);

    printf("\nValores apontados pelos ponteiros:\n");
    printf("*pt1 = %.2lf\n", *pt1);
    printf("*pt2 = %.2lf\n", *pt2);

    return 0;
}
