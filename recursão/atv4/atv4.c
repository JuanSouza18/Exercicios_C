#include <stdio.h>
#include <stdbool.h>

// Inclui a função de verificação de primo (do arquivo anterior)
bool eh_primo(int n);

/**
 * FUNÇÃO: lista_primos_recursivo(n, atual, primos, index)
 * DESCRIÇÃO: Preenche um array com todos os números primos de 1 até n
 * PRINCÍPIO: 
 *   - Usa a função eh_primo para verificar cada número
 *   - Preenche o array recursivamente
 * COMPLEXIDADE: O(n * √n) - para cada número, verifica se é primo
 */
int lista_primos_recursivo(int n, int atual, int primos[], int index) {
    // Caso base: quando o número atual é maior que n
    if (atual > n) {
        return index; // Retorna o número de primos encontrados
    }
    
    // Se o número atual é primo, adiciona ao array
    if (eh_primo(atual)) {
        primos[index] = atual;
        index++;
    }
    
    // Caso recursivo: processa o próximo número
    return lista_primos_recursivo(n, atual + 1, primos, index);
}

// Função wrapper para facilitar o uso
int lista_primos(int n, int primos[]) {
    return lista_primos_recursivo(n, 1, primos, 0);
}

// Teste da função
int main() {
    int numero = 30;
    int primos[30]; // Array para armazenar os primos
    int quantidade = lista_primos(numero, primos);
    
    printf("Primos de 1 até %d: ", numero);
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", primos[i]);
    }
    printf("\nTotal: %d números primos\n", quantidade);
    return 0;
}

// Implementação da função eh_primo (para compilar tudo em um arquivo)
bool eh_primo_recursivo(int n, int divisor) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % divisor == 0) return false;
    if (divisor * divisor > n) return true;
    return eh_primo_recursivo(n, divisor + 1);
}

bool eh_primo(int n) {
    return eh_primo_recursivo(n, 2);
}