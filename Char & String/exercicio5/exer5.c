#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis
    char nome_completo[80];
    int i;
    // Entrada de dados
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome_completo); 

    printf("Iniciais: ");

    // Primeira letra sempre é inicial 
    if (nome_completo[0] != ' ') {
        printf("%c", nome_completo[0
]);
    }

    // Percorre a string mpara encontrar espaços e imprimir a letra seguinte
    for (i = 0; nome_completo[i] != '\0'; i++) {
        if (nome_completo[i] == ' ' && nome_completo[i + 1] != '\0' && nome_completo[i + 1] != ' ') {
            printf("%c", nome_completo[i + 1]);
        }
    }

    printf("\n");

    return 0;
}
