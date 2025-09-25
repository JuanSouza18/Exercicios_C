#include <stdio.h>

void VerificarPessoaMaisVelha(int pessoa1 , int pessoa2){
    if (pessoa1 > pessoa2){
        printf("Pessoa1  e a mais velha\n");
    } else if (pessoa2 > pessoa1){
        printf("Pessoa 2 e a mais velha\n");
    } else {
        printf("As duas pessoas tem a mesma idade\n");
    }
}

int main() {
    int pessoa1, pessoa2;

    printf("Digite o nome da pessoa 1: ");
    scanf("%*s");
    printf("Digite a idade da pessoa 1: ");
    scanf("%d", &pessoa1);

    printf("Digite o nome da pessoa 2: ");
    scanf("%*s");
    printf("Digite a idade da pessoa 2: ");
    scanf("%d", &pessoa2);

    VerificarPessoaMaisVelha(pessoa1, pessoa2);

    return 0;
}