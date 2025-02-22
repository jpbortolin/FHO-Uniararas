#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, velocmedia, distperc, litros;
    
    printf("Informe o tempo gasto da viagem em horas:\n");
    scanf("%f", &tempo);

    printf("Informe a velocidade média do carro durante a viagem em km/h:\n");
    scanf("%f", &velocmedia);

    distperc = tempo * velocmedia;
    litros = distperc / 13.8;

    printf("A quantidade de necessárias será %.3f litros para fazer sua viagem \n", litros);

    return 0;
}