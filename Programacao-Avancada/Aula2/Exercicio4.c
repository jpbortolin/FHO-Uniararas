#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, tempo2, resultado, resultado2;

    printf("Informe o a quantidade de tempo:\n");
    scanf("%f", &tempo);

    printf("Informe o a quantidade de tempo da segunda fórmula:\n");
    scanf("%f", &tempo2);

    resultado = 20 + 3 * tempo;
    resultado2 = 20 + 3 * tempo2;

    printf("O resultado da primeira fórmula será: %f \n", resultado);
    printf("O resultado da segunda fórmula será: %f \n", resultado2);

    if (resultado == resultado2){
        printf("Os resultados são iguais \n");
    }
    else if (resultado > resultado2){
        printf("O primeiro resultado é maior que o segundo \n");
    }
    else{
        printf("O segundo resultado é maior que o primeiro \n");
    }
    
    return 0;
}