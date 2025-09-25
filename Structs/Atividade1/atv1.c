#include <stdio.h>

// Definição da struct Pessoa
typedef struct {
    char nome[100];
    int idade;
} Pessoa;

// Função que recebe uma Pessoa por valor e imprime seus dados
void imprimirPessoa(Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() {
    Pessoa pessoa1;

    // Atribuindo valores à struct
    printf("Digite o nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

    

    size_t len = strlen(pessoa1.nome);
    if (len > 0 && pessoa1.nome[len - 1] == '\n') {
        pessoa1.nome[len - 1] = '\0';
    }

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    // Chamando a função para imprimir os dados da pessoa
    imprimirPessoa(pessoa1);

    return 0;
}
