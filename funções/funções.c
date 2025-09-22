#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

//exercicio 1 
bool EhPar(int n) {
    return (n % 2 == 0);
}

//exercicio 2 
float LerNumero() {
    float n;
    printf("Digite um numero real: ");
    scanf("%f", &n);
    return n;
}

float ParteFracionaria(float n) {
    return n - (int)n;
}

//exercicio 3
int Fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++)
        fat *= i;
    return fat;
}

//exercicio 4
void ParesNoIntervalo(int a, int b) {
    if (a > b) { int temp = a; a = b; b = temp; }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }
    printf("\n");
}

//exercicio 5
int TamanhoString(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

//exercicio 6
int ContaCaractere(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(c))
            count++;
    }
    return count;
}

//exercicio 7
void CopiaString(char destino[], char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

//exercicio 8
int EhPalindromo(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++; j--;
    }
    return 1;
}

//exercicio 9
void ParaMaiusculo(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

//exercicio 10
void PrintVector(int sz, int vec[sz]) {
    for (int i = 0; i < sz; i++) {
        printf("%d\n", vec[i]);
    }
}

//exercicio 11
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//exercicio 12
void OrdenarCrescente(int sz, int vec[sz]) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = i + 1; j < sz; j++) {
            if (vec[i] > vec[j]) {
                Swap(&vec[i], &vec[j]);
            }
        }
    }
}

//exercicio 13
void SeparaParImpar(int sz, int vec[sz],
                    int vPar[], int vImpar[],
                    int *szPar, int *szImpar) {
    *szPar = 0;
    *szImpar = 0;
    for (int i = 0; i < sz; i++) {
        if (vec[i] % 2 == 0)
            vPar[(*szPar)++] = vec[i];
        else
            vImpar[(*szImpar)++] = vec[i];
    }
}

//exercicio 14
void PrintMatrix(int nRows, int nCols, int matrix[nRows][nCols]) {
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

//Exercicio 15

bool MultMatrix(int linhasA, int colunasA, int A[linhasA][colunasA],
                int linhasB, int colunasB, int B[linhasB][colunasB],
                int Mult[linhasA][colunasB]) {
    if (colunasA != linhasB) {
        printf("Nao eh possivel multiplicar!\n");
        return false;
    }
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            Mult[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return true;
}

// Função para escolher exercício
void EscolherExercicio() {
    int opcao;
    printf("\n===== MENU DE EXERCICIOS =====\n");
    printf("1) Verificar se numero eh par\n");
    printf("2) Parte fracionaria\n");
    printf("3) Fatorial\n");
    printf("4) Pares no intervalo\n");
    printf("5) Tamanho da string\n");
    printf("6) Contar caractere na string\n");
    printf("7) Copiar string\n");
    printf("8) Verificar palindromo\n");
    printf("9) Converter para maiusculo\n");
    printf("10) Imprimir vetor\n");
    printf("11) Trocar dois inteiros (swap)\n");
    printf("12) Ordenar vetor\n");
    printf("13) Separar par e impar\n");
    printf("14) Imprimir matriz\n");
    printf("15) Multiplicar matrizes\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            int x;
            printf("Digite um numero: ");
            scanf("%d", &x);
            printf("%s\n", EhPar(x) ? "Par" : "Impar");
            break;
        }
        case 2: {
            float n = LerNumero();
            printf("Parte fracionaria = %.2f\n", ParteFracionaria(n));
            break;
        }
        case 3: {
            int n;
            printf("Digite um numero: ");
            scanf("%d", &n);
            printf("Fatorial = %d\n", Fatorial(n));
            break;
        }
        case 4: {
            int a,b;
            printf("Digite dois numeros: ");
            scanf("%d %d", &a, &b);
            ParesNoIntervalo(a,b);
            break;
        }
        case 5: {
            char str[100];
            printf("Digite uma string: ");
            scanf(" %[^\n]", str);
            printf("Tamanho = %d\n", TamanhoString(str));
            break;
        }
        case 6: {
            char str[100], c;
            printf("Digite uma string: ");
            scanf(" %[^\n]", str);
            printf("Digite um caractere: ");
            scanf(" %c", &c);
            printf("Quantidade = %d\n", ContaCaractere(str,c));
            break;
        }
        case 7: {
            char origem[100], destino[100];
            printf("Digite uma string: ");
            scanf(" %[^\n]", origem);
            CopiaString(destino, origem);
            printf("String copiada: %s\n", destino);
            break;
        }
        case 8: {
            char str[100];
            printf("Digite uma string: ");
            scanf(" %[^\n]", str);
            printf("%s\n", EhPalindromo(str) ? "Eh palindromo" : "Nao eh");
            break;
        }
        case 9: {
            char str[100];
            printf("Digite uma string: ");
            scanf(" %[^\n]", str);
            ParaMaiusculo(str);
            printf("Maiusculo: %s\n", str);
            break;
        }
        case 10: {
            int sz;
            printf("Digite o tamanho do vetor: ");
            scanf("%d", &sz);
            int v[sz];
            for (int i=0;i<sz;i++) scanf("%d",&v[i]);
            PrintVector(sz,v);
            break;
        }
        case 11: {
            int a,b;
            printf("Digite dois numeros: ");
            scanf("%d %d",&a,&b);
            Swap(&a,&b);
            printf("Depois do swap: %d %d\n",a,b);
            break;
        }
        case 12: {
            int sz;
            printf("Digite o tamanho do vetor: ");
            scanf("%d", &sz);
            int v[sz];
            for (int i=0;i<sz;i++) scanf("%d",&v[i]);
            OrdenarCrescente(sz,v);
            PrintVector(sz,v);
            break;
        }
        case 13: {
            int sz;
            printf("Digite o tamanho do vetor: ");
            scanf("%d", &sz);
            int v[sz], vPar[sz], vImpar[sz], szPar, szImpar;
            for (int i=0;i<sz;i++) scanf("%d",&v[i]);
            SeparaParImpar(sz,v,vPar,vImpar,&szPar,&szImpar);
            printf("Pares: "); PrintVector(szPar,vPar);
            printf("Impares: "); PrintVector(szImpar,vImpar);
            break;
        }
        case 14: {
            int r,c;
            printf("Digite linhas e colunas: ");
            scanf("%d %d",&r,&c);
            int m[r][c];
            for (int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&m[i][j]);
            PrintMatrix(r,c,m);
            break;
        }
        case 15: {
            int a,b,c,d;
            printf("Digite linhas e colunas da matriz A: ");
            scanf("%d %d",&a,&b);
            int A[a][b];
            for (int i=0;i<a;i++) for(int j=0;j<b;j++) scanf("%d",&A[i][j]);

            printf("Digite linhas e colunas da matriz B: ");
            scanf("%d %d",&c,&d);
            int B[c][d], M[a][d];
            for (int i=0;i<c;i++) for(int j=0;j<d;j++) scanf("%d",&B[i][j]);

            if (MultMatrix(a,b,A,c,d,B,M)) {
                printf("Resultado da multiplicacao:\n");
                PrintMatrix(a,d,M);
            }
            break;
        }
        default:
            printf("Opcao invalida!\n");
    }
}

// Função principal
int main() {
    while (1) {
        EscolherExercicio();
        char cont;
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &cont);
        if (cont == 'n' || cont == 'N') break;
    }
    return 0;
}
