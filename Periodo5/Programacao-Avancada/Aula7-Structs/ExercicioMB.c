#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x, y, z;
} Ponto;

int main()
{
    Ponto pontoA, pontoB;
    
    printf("Digite o valor da coordenada x, y e z (respectivamente), do ponto A: \n");
    scanf("%f %f %f", &pontoA.x, &pontoA.y, &pontoA.z);

    printf("Digite o valor da coordenada x, y e z (respectivamente), do ponto B: \n");
    scanf("%f %f %f", &pontoB.x, &pontoB.y, &pontoB.z);

    float distancia;
    float termoX = pow(pontoB.x - pontoA.x, 2);
    float termoY = pow(pontoB.y - pontoA.y, 2);
    float termoZ = pow(pontoB.z - pontoA.z, 2);

    distancia = sqrt(termoX + termoY + termoZ);

    printf("Distância entre A e B: %f.3f", distancia);

    return 0;
}