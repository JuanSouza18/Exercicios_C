#include <stdio.h>

int main()
{
    int lado1 , lado2, lado3 , resultado;

    printf("Digite o valor do lado1 : ");
    scanf("%d", &lado1);

    printf("Digite o valor do lado2 : ");
    scanf("%d", &lado2);


    printf("Digite o valor do lado3 : ");
    scanf("%d", &lado3);

    if ( lado1 + lado2 > lado3)
    {
        printf("Com esses dados pode formar um triangulo");
    }
    else
    {
        printf("Infezlimente nao e possivel formar um triangulo com esses valores...");
    }
return 0;
}