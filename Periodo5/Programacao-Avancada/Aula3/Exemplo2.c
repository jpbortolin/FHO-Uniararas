#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim;
    
    scanf("%d %d", &inicio, &fim);

    //Através da estrutura de repetição FOR
    for (inicio; inicio <= fim; inicio++) {
        printf("%d\t", inicio);
    }

    return 0;
}
