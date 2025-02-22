#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, tempo2, resultado, resultado2;

    printf("Informe o a quantidade de tempo:\n");
    scanf("%f", &tempo);

    printf("Informe o a quantidade de tempo da segunda fórmula:\n");
    scanf("%f", &tempo2);

    resultado = 12 + 2.8 * tempo;
    resultado2 = 12 + 2.8 * tempo2;


    printf("O resultado da primeira fórmula será: %f \n", resultado);
    printf("O resultado da segunda fórmula será: %f \n", resultado2);

    return 0;
}