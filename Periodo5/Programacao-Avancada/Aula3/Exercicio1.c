#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, soma = 0;

    printf("Informar a n1:\n");
    scanf("%d", &n);

    // Definir a estrutura de repetição
    for (int i = 1 ; i <= n; i++)
    {
        soma += i;
    }

    printf("A soma de todos os números de 1 até o escolhido é %d\t", soma);

    return 0;
}