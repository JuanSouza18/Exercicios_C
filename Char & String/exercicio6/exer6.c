#include <stdio.h>
#include <string.h>

int main()
{
 // declaração de variáveis
 char palavra[20];
 int vogais = 0, consoantes = 0, i;

 // entrada de dados
 printf("Digite uma palavra : ");
 scanf("%s", palavra);

    // processo de contagem de vogais e consoantes
    for(i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            vogais++;
        } else if((letra >= 'b' && letra <= 'z') || (letra >= 'B' && letra <= 'Z')) {
            consoantes++;
        }
    }
    // saída de dados
    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);
return 0; 
}