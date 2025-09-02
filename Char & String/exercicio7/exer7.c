#include <stdio.h>
#include <string.h>

int main() {
    char frase[200]; // espaço para a frase
    char *palavra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // remover o \n que o fgets armazena
    frase[strcspn(frase, "\n")] = '\0';

    // separando a string por espaços
    palavra = strtok(frase, " ");
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    return 0;
}



