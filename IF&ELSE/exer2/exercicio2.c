#include <stdio.h>
int main()
{
    float nota ;

    printf("Digite uma nota : ");
    scanf("%f", &nota);

    if (nota < 5) {
        printf("Insuficiente.");
    } else if (nota < 7) {
        printf("Regular.");
    } else if (nota < 9) {
        printf("Bom.");
    } else if (nota >= 9) {
        printf("Excelente");
    } else {
        printf("Nota invalida!");
    }
}
