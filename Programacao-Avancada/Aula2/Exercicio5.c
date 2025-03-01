#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor, qtdPositivos = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &valor);

        if (valor > 0)
        {
            qtdPositivos++;
        }
    }

    printf("Quantidade de valores positivos: %d\n", qtdPositivos);

    return 0;
}