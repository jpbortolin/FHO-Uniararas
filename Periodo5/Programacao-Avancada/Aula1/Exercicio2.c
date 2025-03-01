#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, dias;

    printf("Informe sua idade:\n");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("A idade de %d corresponde, aproximadamente, %d dias de vida \n", idade, dias);

    return 0;
}