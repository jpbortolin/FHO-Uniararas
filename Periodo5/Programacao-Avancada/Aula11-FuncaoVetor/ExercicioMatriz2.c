#include <stdio.h>
#include <stdlib.h>

void vet(int a[10], int b[10]) {
    for (int i = 0; i < 10; i++){
        printf("Digite o %d° valor do vetor a: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void fatorial(int a[10], int b[10]){
    for (int i = 0; i <10; i++){
        b[i] = 1; 
        for (int j = 1; j <= a[i]; j++) {
            b[i] *= j; 
        }

    }
}

void imp(int a[10], int b[10]){
    for(int i = 0; i < 10; i++){
        printf("O valor do vetor A é: %d \n O fatorial, que é o vetor B é: %d\n", a[i], b[i]);
    }
}

int main(){

    int a[10], b[10];

    vet(a, b);
    fatorial(a, b);
    imp(a, b);

    return 0;
}