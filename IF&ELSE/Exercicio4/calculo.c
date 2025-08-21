#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    int opcao;

    printf("--- Calculadora em C ---\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");

    printf("Digite qual opção você deseja: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite um numero: ");
            scanf("%f", &numero1);
            printf("Digite outro numero: ");
            scanf("%f", &numero2);
            resultado = numero1 + numero2;
            printf("O resultado final é: %f\n", resultado);
            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%f", &numero1);
            printf("Digite outro numero: ");
            scanf("%f", &numero2);
            resultado = numero1 - numero2;
            printf("O resultado final é: %f\n", resultado);
            break;

        case 3:
            printf("Digite um numero: ");
            scanf("%f", &numero1);
            printf("Digite outro numero: ");
            scanf("%f", &numero2);
            resultado = numero1 * numero2;
            printf("O resultado final é: %f\n", resultado);
            break;

        case 4:
            printf("Digite um numero: ");
            scanf("%f", &numero1);
            printf("Digite outro numero: ");
            scanf("%f", &numero2);
            resultado = numero1 / numero2;
            printf("O resultado final é: %f\n", resultado);
            break;

        case 5:
            printf("Saindo do programa.......\n");
            break;

        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}