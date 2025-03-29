#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 3;
    int matriz[3][3];

    //Estrutura do for para leitura de dados
    //O índice i = linha
    //O índice j = coluna
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("[%d][%d]=", i , j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    //Exibindo os elementos
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n"); //indica nova linha da matriz
    }
    
    

    return 0;
}