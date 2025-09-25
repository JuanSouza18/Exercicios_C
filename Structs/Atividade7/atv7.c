#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int encontrarPessoa(Pessoa pessoas[], int tamanho, const char* nome) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(pessoas[i].nome, nome) == 0) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    Pessoa pessoas[3] = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };

    const char* nomeProcurado = "Bob";
    int indice = encontrarPessoa(pessoas, 3, nomeProcurado);

    if (indice != -1) {
        printf("Pessoa encontrada no índice: %d\n", indice);
    } else {
        printf("Pessoa não encontrada.\n");
    }

    return 0;
}