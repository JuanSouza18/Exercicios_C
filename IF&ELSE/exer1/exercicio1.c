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
            printf("Você está apto para doar sangue!");
    }
    else
    {
        printf("Você não está apto para doar sangue!");
    }

    return 0;
}
