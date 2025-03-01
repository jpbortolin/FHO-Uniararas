#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, resultado;

    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    resultado = A % B;

    if (resultado == 0){
        printf("Os números são múltiplos \n");
    }
    else{
        printf("Os números não são múltiplos \n");
    }
    

    return 0;
}