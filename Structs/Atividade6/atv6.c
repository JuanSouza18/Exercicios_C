#include <stdio.h>
#include <string.h>

// Corrigindo a sintaxe da struct
typedef struct {
    char nome[50];
} Pessoa;

// Função que mostra todos os nomes cadastrados
void mostrarNomes(Pessoa vetor[], int tamanho) {
    printf("\nLista de nomes cadastrados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d. %s", i + 1, vetor[i].nome);
    }
}

int main() {
    int quantidade;

    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar(); 
    // Criando o vetor de Pessoa
    Pessoa pessoas[quantidade];

    // Lendo os nomes
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
    }

    // Chamando a função para mostrar os nomes
    mostrarNomes(pessoas, quantidade);

    return 0;
}
