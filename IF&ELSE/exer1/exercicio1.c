#include <stdio.h>
int main ()
{
    int idade ;
    double peso;

    printf("Digite a sua idade : ");
    scanf("%d", &idade);

    printf("Digite seu peso : ");
    scanf("%lf", &peso);

    if ((idade >= 16 && idade <= 69) && peso >= 50)
    {
            printf("Voc� est� apto para doar sangue!");
    }
    else
    {
        printf("Voc� n�o est� apto para doar sangue!");
    }

    return 0;
}
