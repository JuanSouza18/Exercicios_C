#include <stdio.h>

void verificarIdade (int idade) {
    if (idade >= 18){
        printf("True\n");
    } else {
        printf("False\n");
    }
}

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    verificarIdade(idade);

    return 0;
}