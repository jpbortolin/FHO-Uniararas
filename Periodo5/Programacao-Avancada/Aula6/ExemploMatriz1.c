#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de uma matriz
    //int matriz_numerica[3][3];

    /*

    0 1 2
------------
    1 2 3  | 0
    1 2 3  | 1
    1 3 4  | 2

    */

    //Inicializando a matriz
    int matriz_numerica[3][3] = { {1, 2, 3}, 
                              {1, 2, 3}, 
                              {1, 3, 4} };
                              
    //Acessando elementos individualmente
    printf("Imprimir o primeiro elemento da matriz: ");
    printf("%d\n", matriz_numerica[0][0]);

    //Alterando o elemento central da matriz
    printf("Elemento central: %d\n", matriz_numerica[1][1]);
    matriz_numerica[1][1] = 10;
    printf("Elemento central: %d\n", matriz_numerica[1][1]);


    return 0;
}
