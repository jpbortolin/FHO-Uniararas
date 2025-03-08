#include <stdio.h>
#include <stdlib.h>


/*
    Mostre os valores pares
    de uma sequencia de inicio e fim
    definido pelo usuário
*/


int main()
{
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    for (inicio; inicio <= fim; inicio++) {
        if (inicio % 2 == 0) {
            printf("%d\t", inicio);
        }
    }
    

    return 0;
}
