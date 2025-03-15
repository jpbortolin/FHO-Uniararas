#include <stdio.h>
#include <stdlib.h>

/*
   Exercício 6 da lista
*/

int main()
{
    int a[5], b[5], resultado = 0;

    for (int i = 0; i < 5; i++) {
        printf("A[%d] = ", i+1);
        scanf("%d", &a[i]);

        printf("B[%d] = ", i+1);
        scanf("%d", &b[i]);
    }
    
    //Resolução da somatória do exercício
    for (int i = 0; i <= 4; i++) {
        resultado += a[i] + b[4 - i];
    }

    printf("A somátoria é: %d\n", resultado);

    return 0;
}