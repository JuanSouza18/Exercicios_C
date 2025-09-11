#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num1 = 10, num2 = 20, num3 = 30;
    int *pt1, *pt2, *pt3; 

    // Fazendo os ponteiros apontarem para as variáveis
    pt1 = &num1;
    pt2 = &num2;
    pt3 = &num3;

    // 1. Mudar o valor apontado por pt1 diretamente (sem usar num1)
    *pt1 = 100;

    // 2. Faz pt1 apontar para o que pt2 aponta e muda o valor hardcoded
    pt1 = pt2;     
    *pt1 = 200;

    // 3. Faz pt1 apontar para o que pt3 aponta e muda o valor hardcoded
    pt1 = pt3;
    *pt1 = 300;

    // Imprime os valores finais
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

    return 0;
}
