#include <stdio.h>
#include <string.h>

int main() 
{
    char letra;
    char palavra[20];
    int i;
    int contador = 0;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("Digite uma palavra de até 20 caracteres : ");
    scanf("%s", palavra);

     for (i = 0 ; i < strlen(palavra); i++) 
     {
        if (palavra[i] == letra) 
        {
            contador++;
        }
     }
    
     printf("A letra '%c' aparece %d vezes na palavra '%s'.\n", letra, contador, palavra);
    
    
    
    
    
    return 0;
}