#include <stdio.h>
#include <stdlib.h>

void preencherVetores(int vet1[], int vet2[], int tamanho) {
    printf("Digite abaixo a primeira sequência:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite abaixo a segunda sequência:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet2[i]);
    }
}

int intersecao(int v1[], int v2[], int vet3[], int tamanho) {
    int tamResultado = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v1[i] == v2[j]) {
                int repetido = 0;
                for (int k = 0; k < tamResultado; k++) {
                    if (vet3[k] == v1[i]) {
                        repetido = 1;
                    }
                }
                if (repetido == 0) {
                    vet3[tamResultado] = v1[i];
                    tamResultado++;
                }
            }
        }
    }
    return tamResultado;
}

void imprimirVetor(const char* nome, int vetor[], int tam) {
    printf("%s: [", nome);
    for (int i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
        if (i < tam - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int tamanho = 20;

    int v1[20], v2[20], resultado[20];
    int tamResultado;

    preencherVetores(v1, v2, tamanho);
    tamResultado = intersecao(v1, v2, resultado, tamanho);

    imprimirVetor("v1", v1, tamanho);
    imprimirVetor("v2", v2, tamanho);
    imprimirVetor("Resultado", resultado, tamResultado);

    return 0;
}