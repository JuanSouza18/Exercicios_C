#include <stdio.h>
int main()
{
int num = 1;
int count = 0;
int min = 99999999;
int max = -99999999;

while (num!=0)
{
    printf("Digite um numero : ");
    scanf("%d",&num);
    count++;

    if (num == 0) {
        break;
    }

    if (num >max )
    {
        max = num;
    }
    if (num < min)
    {
        min =num;
    }
}

printf("Voce digitou %d numeros.", count);
printf("\nO maior numero digitado e: %d", max);
printf("\nO menor numero digitado e: %d", min);

return 0;
}
