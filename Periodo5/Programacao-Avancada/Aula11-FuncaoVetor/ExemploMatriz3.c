#include <stdio.h>
#include <stdlib.h>

void removedor(int vet1[], int vet2[], int item, int tamVet) {
    int lastPushIndex = 0;
    for (int i = 0; i < vecSize; i++) {
        if (item != vec[i]) {
            newVec[lastPushIndex++] = vec[i];
        }
    }
};

int main() {
    int vecSize = 20;
    int vec[vecSize], newVec[vecSize - 1], n;

    printf("Insira 20 números: \n");
    for (int i = 0; i < vecSize; i++) {
        scanf("%i", &vec[i]);
    }

    printf("Insira um número: \n");
    scanf("%i", &n);

    removeItem(vec, newVec, n, vecSize);

    printf("Vetor novo sem o valor.\n");
    for (int i = 0; i < vecSize - 1; i++) {
        printf("%i\n", newVec[i]);
    }

    return 0;
}