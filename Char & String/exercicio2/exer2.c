#include <stdio.h>
#include <string.h>

int main()
{
    // declaração de variáveis 
    char palavra[10]; 
    int i;

    // entrada de dados
    printf("Digite uma palavra: ");
    scanf(" %[^\n]", palavra); 

 // saída de dados
    printf("A palavra inserida foi: %s\n", palavra);

    printf("A palavra digitada invertida fica: ");
   
    // Inverte e imprime as palavras 
    for (i = strlen(palavra) - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}