#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da struct Pessoa
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Função para ordenar o vetor de Pessoa por nome
void ordenarPorNome(Pessoa* pessoas, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                Pessoa temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

// Função principal
int main() {
    int n;

    // Solicita o número de pessoas
    printf("Digite o número de pessoas: ");
    scanf("%d", &n);
    getchar();

    // Aloca memória para o vetor de pessoas
    Pessoa* pessoas = (Pessoa*)malloc(n * sizeof(Pessoa));

    // Lê os dados das pessoas
    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0; 
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        getchar(); 
    }

    ordenarPorNome(pessoas, n);

    // Exibe as pessoas ordenadas por nome
    printf("\nPessoas ordenadas por nome:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s, Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    free(pessoas);
    return 0;
}
