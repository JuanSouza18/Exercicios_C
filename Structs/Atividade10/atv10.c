#include <stdio.h>
#include <stdlib.h>

// Definição da struct aluno
struct aluno {
    char nome[50];
    float nota1 , nota2 , nota3;
} alunos;

// Lendo Dados  do Aluno
void LerDados() {
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos.nome);
    printf("Digite a nota 1: ");
    scanf("%f", &alunos.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &alunos.nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &alunos.nota3);
}

// Calculando a Média
float CalculoMedia() {
    return (alunos.nota1 + alunos.nota2 + alunos.nota3) / 3;
}
 
// Verificando se o Aluno foi Aprovado ou Reprovado
void VerificarMedia(float media) {
    if (media >= 5.0) {
        printf("Aluno aprovado!\n");
    } 
    else {
        printf("Aluno reprovado!\n");
    }
}

// Função Principal
int main() {
    float media;

    LerDados();
    media = CalculoMedia();
    printf("Média do aluno %s: %.2f\n", alunos.nome, media);
    VerificarMedia(media);

    return 0;
}