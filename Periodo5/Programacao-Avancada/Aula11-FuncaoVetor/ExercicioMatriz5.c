#include <stdio.h>
#include <stdlib.h>

void preencherMat(int mat[][5]) {
    printf("Preencha a matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void somaLinha(int mat[5][5], int vet[5]) {
    for (int i = 0; i < 5; i++) {
        vet[i] = 0;
        for (int j = 0; j < 5; j++) {
            vet[i] += mat[i][j];
        }
    }
}

void impVet(int vet[5]) {
    printf("Soma de cada linha da matriz: \n");
    for (int i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i, vet[i]);
    }
}

int main() {
    int matriz[5][5];
    int vetor[5];

    preencherMat(matriz);
    somaLinha(matriz, vetor);
    impVet(vetor);
    
    return 0;
}