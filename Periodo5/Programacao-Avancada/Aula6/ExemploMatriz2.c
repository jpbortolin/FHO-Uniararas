#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5} };

    //Exibir os elementos da primeira linha
    for (int i = 0; i < 5; i++) {
        //Todos os elementos estão na linha 0, mas em colunas 0, 1, 2, 3, 4
        printf("%d\t", matriz[0][i]);
    }
    
    printf("\n");

    //Exibir os elementos da coluna central
    for (int i = 0; i < 5; i++){
        printf("%d\t", matriz[i][2]);
    }

    printf("\n");

    //Exibir a matriz completa
    for (int i = 0; i < 5; i++){
       
    }
    
    

    return 0;
}