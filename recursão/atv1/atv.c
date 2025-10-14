#include <stdio.h>

/**
 * FUNÇÃO: soma_recursiva(n)
 * DESCRIÇÃO: Calcula a somatória dos números de 1 até N usando recursão
 * PRINCÍPIO: Caso base (n=1) retorna 1, caso recursivo: n + soma(n-1)
 * COMPLEXIDADE: O(n) - faz n chamadas recursivas
 */
int soma_recursiva(int n) {
    // Caso base: quando n é 1, retorna 1
    if (n == 1) {
        return 1;
    }
    // Caso recursivo: n + soma dos números de 1 até n-1
    else {
        return n + soma_recursiva(n - 1);
    }
}

// Teste da função
int main() {
    int numero = 5;
    int resultado = soma_recursiva(numero);
    printf("Somatória de 1 até %d = %d\n", numero, resultado);
    // Exemplo: soma_recursiva(5) = 5 + 4 + 3 + 2 + 1 = 15
    return 0;
}