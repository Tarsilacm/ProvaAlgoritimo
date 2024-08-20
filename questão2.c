#include <stdio.h>

// Função para multiplicar duas matrizes n x n
void multiplicarMatrizes(int A[][100], int B[][100], int C[][100], int n) {
    // Inicializa a matriz resultante C com zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }
    
    // Realiza a multiplicação de matrizes
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n;
    int A[100][100], B[100][100], C[100][100];
    
    // Leitura do tamanho das matrizes
    printf("Digite o tamanho das matrizes: ");
    scanf("%d", &n);
    
    // Verificar se o tamanho está dentro do limite permitido
    if (n <= 0 || n > 100) {
        printf("O tamanho das matrizes deve ser um número positivo e não maior que 100.\n");
        return 1;
    }
    
    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Leitura da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // Multiplicação das matrizes
    multiplicarMatrizes(A, B, C, n);
    
    // Impressão da matriz resultante
    printf("Matriz resultante da multiplicação:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
