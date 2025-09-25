#include <stdio.h>
#include <stdlib.h>

// Definição da struct
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Criando a função 
Pessoa criarPessoa() {
    Pessoa p;

    printf("Digite seu nome: ");
    scanf("%49s", p.nome); 

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    return p; 
}

// Função Principal 
int main() {
    Pessoa p1 = criarPessoa();

    printf("\nPessoa criada:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);

    return 0;
}
