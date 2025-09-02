#include <stdio.h>
#include <string.h>

int main()
{
    // declaração de variáveis
    char nome[20] , sobrenome[20];

    // entrada de dados
    printf("Digite seu nome:  ");
    scanf("%s", nome);

    printf("Digite seu sobrenome:   ");       
    scanf("%s", sobrenome);

    // saída de dados
    printf("Nome completo: %s %s\n", nome, sobrenome);

    // cálculo do tamanho do nome completo
    int tamanho_geral = strlen(nome) + strlen(sobrenome);
    printf("Tamanho do nome completo: %d\n", tamanho_geral);

    // cálculo da primeira letra do nome e da última letra do sobrenome e exibição
    char primeira_letra = nome[0] , ultima_letra = sobrenome[strlen(sobrenome) - 1];

    printf("Primeira letra do nome: %c\n", primeira_letra);
    printf("Última letra do sobrenome: %c\n", ultima_letra);
    return 0;
} 