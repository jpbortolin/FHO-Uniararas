#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite as coordenadas x: \n");
    scanf("%f", &x);

    printf("Digite as coordenadas y: \n");
    scanf("%f", &y);

    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x == 0)
    {
        printf("Origem no eixo Y\n");
    }
    else if (y == 0)
    {
        printf("Origem no eixo X\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Quadrante 1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Quadrante 2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Quadrante 3\n");
    }
    else
    {
        printf("Quadrante 4\n");
    }

    return 0;
}