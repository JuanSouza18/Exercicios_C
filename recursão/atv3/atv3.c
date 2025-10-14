#include <stdio.h>
#include <stdbool.h>

/**
 * FUNÇÃO: eh_primo_recursivo(n, divisor)
 * DESCRIÇÃO: Verifica se um número é primo usando recursão
 * PRINCÍPIO: 
 *   - Verifica divisibilidade por todos os números de 2 até √n
 *   - Se encontrar algum divisor, retorna false
 *   - Se nenhum divisor for encontrado, retorna true
 * COMPLEXIDADE: O(√n) - faz aproximadamente √n chamadas recursivas
 */
bool eh_primo_recursivo(int n, int divisor) {
    // Casos base
    if (n < 2) {
        return false;  // Números menores que 2 não são primos
    }
    if (n == 2) {
        return true;   // 2 é primo
    }
    if (n % divisor == 0) {
        return false;  // Encontrou um divisor, não é primo
    }
    if (divisor * divisor > n) {
        return true;   // Verificou todos os divisores possíveis, é primo
    }
    
    // Caso recursivo: testa o próximo divisor
    return eh_primo_recursivo(n, divisor + 1);
}

// Função wrapper para facilitar o uso
bool eh_primo(int n) {
    return eh_primo_recursivo(n, 2);
}

// Teste da função
int main() {
    int numero = 17;
    bool resultado = eh_primo(numero);
    printf("O número %d é primo? %s\n", numero, resultado ? "Sim" : "Não");
    return 0;
}