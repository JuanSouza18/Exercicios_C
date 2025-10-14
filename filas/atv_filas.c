#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do nó da fila
typedef struct Node {
    int id;
    struct Node* next;
} Node;

// Estrutura da fila
typedef struct {
    Node* first;
    Node* last;
} Queue;

// Estrutura do paciente
typedef struct {
    char nome[50];
    int idade;
    int id;
} Paciente;

// Cria novo nó
Node* create_node(int id) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->id = id;
    new_node->next = NULL;
    return new_node;
}

// Insere na fila
Queue* insert_node(Queue* q, int id) {
    Node* new_node = create_node(id);

    if (q->last == NULL) { // fila vazia
        q->first = new_node;
        q->last = new_node;
    } else {
        q->last->next = new_node;
        q->last = new_node;
    }
    return q;
}

// Remove do início da fila
Queue* remove_node(Queue* q, Paciente* pacientes, int num_pacientes) {
    if (q->first == NULL) {
        printf("Fila vazia.\n");
        return q;
    }

    Node* temp = q->first;
    q->first = q->first->next;

    if (q->first == NULL)
        q->last = NULL;

    // Exibe o paciente removido
    for (int i = 0; i < num_pacientes; i++) {
        if (pacientes[i].id == temp->id) {
            printf("Atendendo paciente: %s (ID: %d, Idade: %d)\n",
                   pacientes[i].nome, pacientes[i].id, pacientes[i].idade);
            break;
        }
    }

    free(temp);
    return q;
}

// Exibir fila
void exibir_fila(Queue* q, Paciente* pacientes, int num_pacientes) {
    Node* current = q->first;
    if (current == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    printf("\n--- Fila de pacientes ---\n");
    while (current != NULL) {
        for (int i = 0; i < num_pacientes; i++) {
            if (pacientes[i].id == current->id) {
                printf("ID: %d | Nome: %s | Idade: %d\n",
                       pacientes[i].id, pacientes[i].nome, pacientes[i].idade);
            }
        }
        current = current->next;
    }
    printf("-------------------------\n");
}

// Exibir paciente(s) mais idoso(s)
void exibir_mais_idosos(Paciente* pacientes, int num_pacientes) {
    if (num_pacientes == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }

    int maior = pacientes[0].idade;
    for (int i = 1; i < num_pacientes; i++) {
        if (pacientes[i].idade > maior)
            maior = pacientes[i].idade;
    }

    printf("\nPaciente(s) mais idoso(s):\n");
    for (int i = 0; i < num_pacientes; i++) {
        if (pacientes[i].idade == maior) {
            printf("Nome: %s | Idade: %d | ID: %d\n",
                   pacientes[i].nome, pacientes[i].idade, pacientes[i].id);
        }
    }
}

// Menu
void menu() {
    printf("\n===== MENU =====\n");
    printf("1. Cadastrar paciente\n");
    printf("2. Inserir paciente na fila\n");
    printf("3. Atender próximo paciente\n");
    printf("4. Exibir fila\n");
    printf("5. Exibir paciente(s) mais idoso(s)\n");
    printf("6. Sair\n");
    printf("================\n");
}

int main() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->first = NULL;
    q->last = NULL;

    Paciente pacientes[100];
    int num_pacientes = 0;
    int choice, id;

    do {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &choice);
        getchar(); // limpar o buffer

        switch (choice) {
            case 1:
                if (num_pacientes >= 100) {
                    printf("Limite de pacientes atingido.\n");
                    break;
                }
                printf("Nome do paciente: ");
                fgets(pacientes[num_pacientes].nome, 50, stdin);
                pacientes[num_pacientes].nome[strcspn(pacientes[num_pacientes].nome, "\n")] = 0; // remover \n
                printf("Idade: ");
                scanf("%d", &pacientes[num_pacientes].idade);
                printf("ID (número de chamada): ");
                scanf("%d", &pacientes[num_pacientes].id);
                num_pacientes++;
                printf("Paciente cadastrado com sucesso!\n");
                break;

            case 2:
                printf("Digite o ID do paciente a inserir na fila: ");
                scanf("%d", &id);
                q = insert_node(q, id);
                break;

            case 3:
                q = remove_node(q, pacientes, num_pacientes);
                break;

            case 4:
                exibir_fila(q, pacientes, num_pacientes);
                break;

            case 5:
                exibir_mais_idosos(pacientes, num_pacientes);
                break;

            case 6:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (choice != 6);

    // Libera memória da fila
    while (q->first != NULL)
        q = remove_node(q, pacientes, num_pacientes);

    free(q);
    return 0;
}
