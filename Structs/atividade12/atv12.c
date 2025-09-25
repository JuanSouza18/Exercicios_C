#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
} Produto;

typedef struct {
    Produto produtos[100];
    int totalProdutos;
} Loja;

void cadastrarProduto(Loja *loja, Produto produto) {
    if (loja->totalProdutos < 100) {
        loja->produtos[loja->totalProdutos] = produto;
        loja->totalProdutos++;
    } else {
        printf("Loja cheia, não é possível cadastrar mais produtos.\n");
    }
}

Produto* buscarProduto(Loja *loja, int codigo) {
    for (int i = 0; i < loja->totalProdutos; i++) {
        if (loja->produtos[i].codigo == codigo) {
            return &loja->produtos[i];
        }
    }
    return NULL;
}

void atualizarQuantidade(Loja *loja, int codigo, int novaQuantidade) {
    Produto *produto = buscarProduto(loja, codigo);
    if (produto != NULL) {
        produto->quantidade = novaQuantidade;
    } else {
        printf("Produto com código %d não encontrado.\n", codigo);
    }
}

int main() {
    Loja minhaLoja;
    minhaLoja.totalProdutos = 0;

    Produto produto1 = {"Produto A", 101, 29.99, 50};
    Produto produto2 = {"Produto B", 102, 49.99, 30};

    cadastrarProduto(&minhaLoja, produto1);
    cadastrarProduto(&minhaLoja, produto2);

    int codigoBusca = 101;
    Produto *produtoBuscado = buscarProduto(&minhaLoja, codigoBusca);
    if (produtoBuscado != NULL) {
        printf("Produto encontrado: %s, Preço: %.2f, Quantidade: %d\n",
               produtoBuscado->nome, produtoBuscado->preco, produtoBuscado->quantidade);
    } else {
        printf("Produto com código %d não encontrado.\n", codigoBusca);
    }

    atualizarQuantidade(&minhaLoja, 101, 60);
    produtoBuscado = buscarProduto(&minhaLoja, 101);
    if (produtoBuscado != NULL) {
        printf("Quantidade atualizada: %s, Nova Quantidade: %d\n",
               produtoBuscado->nome, produtoBuscado->quantidade);
    }

    return 0;
}
