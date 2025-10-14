#include <stdio.h>
#include <stdlib.h>

/**
 * FUNÇÃO: merge(esquerda, tamanho_esq, direita, tamanho_dir, resultado)
 * DESCRIÇÃO: Combina dois arrays ordenados em um único array ordenado
 * PRINCÍPIO: Compara os elementos dos dois arrays e os combina em ordem
 */
void merge(int esquerda[], int tamanho_esq, int direita[], int tamanho_dir, int resultado[]) {
    int i = 0, j = 0, k = 0;
    
    // Combina os elementos em ordem crescente
    while (i < tamanho_esq && j < tamanho_dir) {
        if (esquerda[i] <= direita[j]) {
            resultado[k] = esquerda[i];
            i++;
        } else {
            resultado[k] = direita[j];
            j++;
        }
        k++;
    }
    
    // Adiciona os elementos restantes do array esquerdo
    while (i < tamanho_esq) {
        resultado[k] = esquerda[i];
        i++;
        k++;
    }
    
    // Adiciona os elementos restantes do array direito
    while (j < tamanho_dir) {
        resultado[k] = direita[j];
        j++;
        k++;
    }
}

/**
 * FUNÇÃO: merge_sort(vetor, tamanho)
 * DESCRIÇÃO: Ordena um vetor em ordem crescente usando o algoritmo Merge Sort
 * PRINCÍPIO: 
 *   - Divide o vetor pela metade recursivamente
 *   - Combina as partes ordenadas (merge)
 * COMPLEXIDADE: O(n log n) - divide e conquista
 */
void merge_sort(int vetor[], int tamanho) {
    // Caso base: vetor com 0 ou 1 elemento já está ordenado
    if (tamanho <= 1) {
        return;
    }
    
    // Divide o vetor no meio
    int meio = tamanho / 2;
    int *esquerda = (int*)malloc(meio * sizeof(int));
    int *direita = (int*)malloc((tamanho - meio) * sizeof(int));
    
    // Copia os elementos para os arrays esquerdo e direito
    for (int i = 0; i < meio; i++) {
        esquerda[i] = vetor[i];
    }
    for (int i = meio; i < tamanho; i++) {
        direita[i - meio] = vetor[i];
    }
    
    // Ordena recursivamente cada metade
    merge_sort(esquerda, meio);
    merge_sort(direita, tamanho - meio);
    
    // Combina as metades ordenadas
    merge(esquerda, meio, direita, tamanho - meio, vetor);
    
    // Libera a memória alocada
    free(esquerda);
    free(direita);
}

// Função para imprimir um vetor
void imprimir_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Teste da função
int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor original: ");
    imprimir_vetor(vetor, tamanho);
    
    merge_sort(vetor, tamanho);
    
    printf("Vetor ordenado: ");
    imprimir_vetor(vetor, tamanho);
    
    return 0;
}