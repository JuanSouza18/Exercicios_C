#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

typedef struct {
    Aluno alunos[30];
    int qtd; 
} Turma;

// Função que retorna vetor com os melhores alunos
Aluno* melhoresAlunos(Turma *turma, int *qtdMelhores) {
    float maiorMedia = -1.0;

    // Descobrir maior média
    for (int i = 0; i < turma->qtd; i++) {
        if (turma->alunos[i].media > maiorMedia) {
            maiorMedia = turma->alunos[i].media;
        }
    }

    // Contar quantos têm essa média
    int cont = 0;
    for (int i = 0; i < turma->qtd; i++) {
        if (turma->alunos[i].media == maiorMedia) {
            cont++;
        }
    }

    // Alocar vetor de melhores alunos
    Aluno *melhores = (Aluno*) malloc(cont * sizeof(Aluno));

    int j = 0;
    for (int i = 0; i < turma->qtd; i++) {
        if (turma->alunos[i].media == maiorMedia) {
            melhores[j++] = turma->alunos[i];
        }
    }

    *qtdMelhores = cont;
    return melhores;
}

int main() {
    Turma t;

    printf("Quantos alunos deseja cadastrar (max 30)? ");
    scanf("%d", &t.qtd);

    if (t.qtd > 30) {
        printf("Quantidade maior que o limite permitido (30)!\n");
        return 1;
    }

    for (int i = 0; i < t.qtd; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", t.alunos[i].nome); 

        printf("Digite a média de %s: ", t.alunos[i].nome);
        scanf("%f", &t.alunos[i].media);
    }

    int qtdMelhores;
    Aluno *melhores = melhoresAlunos(&t, &qtdMelhores);

    printf("\nMelhor(es) aluno(s):\n");
    for (int i = 0; i < qtdMelhores; i++) {
        printf("%s com média %.2f\n", melhores[i].nome, melhores[i].media);
    }

    free(melhores); 
    return 0;
}
