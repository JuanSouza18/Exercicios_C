#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar os dados do cliente
typedef struct {
    char nome[50];
    long cpf;
    long telefone;
} Cliente;

// Estrutura do nó da lista encadeada
typedef struct {
    Cliente cliente;
    struct Node* next;
} Node;


// função para inserir um novo cliente na lista
Node* inserir(Node* head , Cliente cliente) {
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->cliente = cliente;
     novo->next = head;
    return novo;
}

// função para excluir um cliente pelo cpf 
Node* excluir(Node* head , long cpf ) {
    Node* atual = head;
    Node* anterior = NULL;
    while (atual != NULL && atual->cliente.cpf != cpf) {
        anterior = atual;
        atual = atual->next;
    }
    if (atual == NULL ) {
        printf("Cliente com cpf %ld nao encontrado.\n", cpf);
        return head;
    }
    if (anterior == NULL ) {
        head = atual->next;
    }else {
        anterior->next = atual->next;
    }
    free(atual);
    printf("Cliente com cpf %ld excluido com sucesso.\n", cpf);
    return head;
}

// função para exibir todos os clientes da lista
void exibir_clientes(Node* head) {
    Node* atual = head;
    if (atual ==NULL) {
        printf("Lista vazia.\n");
        return;
    }
 
    while (atual != NULL ) {
        printf("Nome: %s, CPF: %ld, Telefone: %ld\n", atual->cliente.nome, atual->cliente.cpf, atual->cliente.telefone);
        atual = atual->next;
    }
}

// função para consultar um cliente pelo cpf
void consultar_cliente(Node* head , long cpf ) {
    Node* atual = head;
    while (atual != NULL && atual->cliente.cpf != cpf) {
        atual = atual->next;
    }

    if (atual == NULL ) {
        printf("Cliente com cpf %ld nao encontrado.\n", cpf);
    } else {
        printf("Cliente encontrado: Nome: %s, CPF: %ld, Telefone: %ld\n", atual->cliente.nome, atual->cliente.cpf, atual->cliente.telefone);
    }
}

// função para sair do programa 
void sair(Node* head) {
    Node* atual = head;
    while (atual != NULL ) {
        Node* temp = atual;
        atual = atual->next;
        free(temp);
    }
}

// menu  de opções
void menu() {
    printf("1. Inserir cliente\n");
    printf("2. Excluir cliente\n");
    printf("3. Exibir clientes\n");
    printf("4. Consultar cliente\n");
    printf("5. Sair\n");
}

// funçã[o principal
int main() {
    Node* head = NULL;
    int opcao;
    Cliente cliente;
    long cpf;

    do {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome do cliente: ");
                scanf("%s", cliente.nome);
                printf("Digite o CPF do cliente: ");
                scanf("%ld", &cliente.cpf);
                printf("Digite o telefone do cliente: ");
                scanf("%ld", &cliente.telefone);
                head = inserir(head, cliente);
                break;
            case 2:
                printf("Digite o CPF do cliente a ser excluido: ");
                scanf("%ld", &cpf);
                head = excluir(head, cpf);
                break;
            case 3:
                exibir_clientes(head);
                break;
            case 4:
                printf("Digite o CPF do cliente a ser consultado: ");
                scanf("%ld", &cpf);
                consultar_cliente(head, cpf);
                break;
            case 5:
                sair(head);
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
