
#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
typedef struct {
    char nome[60];
    int idade;
} Pessoa;

// Função para encontrar a pessoa mais velha
Pessoa encontrarMaisVelha(Pessoa pessoas[], int tamanho) {
    Pessoa maisVelha = pessoas[0];
    for (int i = 1; i < tamanho; i++) {
        if (pessoas[i].idade > maisVelha.idade) {
            maisVelha = pessoas[i];
        }
    }
    return maisVelha;
}

// Função principal
int main() {
    Pessoa pessoas[3] = {
        {"Ana", 28},
        {"Bruno", 34},
        {"Carla", 31}
    };

    Pessoa maisVelha = encontrarMaisVelha(pessoas, 3);
    printf("A pessoa mais velha é %s com %d anos.\n", maisVelha.nome, maisVelha.idade);

    return 0;
}