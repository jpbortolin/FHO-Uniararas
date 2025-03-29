#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz_duplicada;
    int tam = 2;
    int matriz[2][2];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("[%d][%d]=", i , j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz_duplicada = matriz[i][j] * 2;
            printf("%d\t", matriz_duplicada);
        }
        printf("\n");
    }
    
    

    return 0;
}