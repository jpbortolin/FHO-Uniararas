#include <stdio.h>
#include <stdlib.h>

int main()
{
    float esf1, esf2, esf3, resultado1, resultado2, resultado3;

    printf("Informe o raio da primeira esfera:\n");
    scanf("%f", &esf1);

    printf("Informe o raio da segunda esfera:\n");
    scanf("%f", &esf2);

    printf("Informe o raio da terceira esfera:\n");
    scanf("%f", &esf3);

    resultado1 = 4/3 * 3.14159 * (esf1 * esf1 * esf1);
    resultado2 = 4/3 * 3.14159 * (esf2 * esf2 * esf2);
    resultado3 = 4/3 * 3.14159 * (esf3 * esf3 * esf3);

    printf("O raio da primeira esfera é: %f \n", resultado1);
    printf("O raio da segunda esfera é: %f \n", resultado2);
    printf("O raio da terceira esfera é: %f \n", resultado3);


    return 0;
}