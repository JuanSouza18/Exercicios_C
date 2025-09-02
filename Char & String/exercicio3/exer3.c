#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    int i, tamanho, eh_palindromo = 1;

    printf("Digite uma palavra: "); 
    scanf("%[^\n]", palavra); 

    tamanho = strlen(palavra);

    for(i = 0; i < tamanho / 2; i++)
    {
        if(palavra[i] != palavra[tamanho - 1 - i])
        {
            eh_palindromo = 0; 
            break;
        }
    }

    if(eh_palindromo)
        printf("É um palíndromo!\n");
    else
        printf("Não é um palíndromo.\n");

    return 0;
}
