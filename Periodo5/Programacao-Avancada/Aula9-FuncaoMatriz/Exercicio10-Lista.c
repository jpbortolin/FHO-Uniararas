#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Criando uma estrutura
typedef struct {
    float x, y;
} Ponto;

void calcularDistancia(float x1, float x2, float y1, float y2) {
    float resultado, termoX, termoY;

    termoX = pow(x2 - x1, 2);
    termoY = pow(y2 - y1, 2);

    resultado = sqrt(termoX + termoY);
    
    printf("Resultado: %f", resultado);
}

// Segunda versão sofisticada (com uso de struct)
float calcularDistancia_v2(Ponto p1, Ponto p2) {
    float resultado;

    resultado = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    
    // printf("Resultado: %f", resultado);
    return resultado; // retorna o valor do resultado
}

int main()
{
    /*
    float pX1, pY1, pX2, pY2;

    printf("Informe as coordenadas dos pontos A (x1 e x2, respectivamente) e B(x2 e y2, respectivamente):\n");
    scanf("%f %f %f %f", &pX1, &pY1, &pX2, &pY2);

    // Chamar a função para cálculo
    calcularDistancia(pX1, pX2, pY1, pY2);
    */

    // Segunda implementação
    Ponto p1, p2;

    float retorno;

    printf("Informe as coordenadas dos pontos A (x1 e y1, respectivamente) e B(x2 e y2, respectivamente):\n");
    scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);

    retorno = calcularDistancia_v2(p1, p2);

    printf("O resultado é %f", retorno);

    return 0;
}