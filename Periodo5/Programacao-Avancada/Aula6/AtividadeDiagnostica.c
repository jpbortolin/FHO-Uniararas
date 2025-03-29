#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 4;
    float matriz[4][4];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("[%.0f][%.0f]=", i , j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%.0f\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("A diagonal principal é: %.0f, %.0f, %.0f, %.0f \t", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3]);
    printf("\n");
    printf("O dobro da diagonal é: %.0f, %.0f, %.0f, %.0f \t", matriz[0][0] * 2, matriz[1][1] * 2, matriz[2][2] * 2, matriz[3][3] * 2);
    printf("\n");
    printf("A somatória dos valores é: %.0f \t", matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3]);
    printf("\n");
    printf("A média da somatória é: %.2f \t", (matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3]) / 4);

    return 0;
}