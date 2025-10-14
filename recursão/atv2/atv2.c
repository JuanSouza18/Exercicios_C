#include <stdio.h>

/**
 * FUNÇÃO: fatorial_recursivo(n)
 * DESCRIÇÃO: Calcula o fatorial de um número usando recursão
 * PRINCÍPIO: 
 *   - Caso base (n=0 ou n=1) retorna 1
 *   - Caso recursivo: n * fatorial(n-1)
 * COMPLEXIDADE: O(n) - faz n chamadas recursivas
 */
long long fatorial_recursivo(int n) {
    // Casos base: fatorial de 0 e 1 é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: n * fatorial de (n-1)
    else {
        return n * fatorial_recursivo(n - 1);
    }
}

// Teste da função
int main() {
    int numero = 6;
    long long resultado = fatorial_recursivo(numero);
    printf("Fatorial de %d = %lld\n", numero, resultado);
    // Exemplo: fatorial_recursivo(5) = 5 * 4 * 3 * 2 * 1 = 120
    return 0;
}