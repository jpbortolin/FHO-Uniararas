#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto;

typedef struct {
    Ponto pontSupEsq, pontInfDir;
} Retangulo;

double distancia(Ponto p1, Ponto p2) {
    return pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2);
};

Ponto maisProximoOrigem(Ponto p1, Ponto p2) {
    Ponto originario = {0.0, 0.0};
    if (distancia(p1, originario) < distancia(p2, originario)) 
        return p1;
    return p2;
};

int estaContido(Ponto p, Retangulo r) {
    return p.x > r.pontSupEsq.x && p.x < r.pontInfDir.x && p.y > r.pontSupEsq.y && p.y < r.pontInfDir.y ? 1 : 0;
};


int main() {
    Ponto p1, p2;
    Retangulo r;

    printf("Entre com as coordenadas x e y do primeiro ponto: ");
    scanf("%lf,%lf", &p1.x, &p1.y);
    printf("Entre com as coordenadas x e y do segundo ponto: ");
    scanf("%lf,%lf", &p2.x, &p2.y);
    printf("Entre com as coordenadas x e y do ponto da superior esquerda do retângulo: ");
    scanf("%lf,%lf", &r.pontSupEsq.x, &r.pontSupEsq.y);
    printf("Entre com as coordenadas x e y do ponto da inferior direita do retângulo: ");
    scanf("%lf,%lf", &r.pontInfDir.x, &r.pontInfDir.y);

    double dist = distancia(p1, p2);
    Ponto voltaOriginario = maisProximoOrigem(p1, p2);
    int pontoP1 = estaContido(p1, r);
    int pontoP2 = estaContido(p2, r);

    printf("Distância entre os dois pontos: %lf\n", dist);
    printf("Ponto mais próximo da origem: (%lf, %lf)\n", voltaOriginario.x, voltaOriginario.y);

    if (pontoP1) {
        printf("O ponto (%lf, %lf) está contido no retângulo!\n", p1.x, p1.y);
    } else {
        printf("O ponto (%lf, %lf) não está contido no retângulo!\n", p1.x, p1.y);
    }

    if (pontoP2) {
        printf("O ponto (%lf, %lf) está contido no retângulo!\n", p2.x, p2.y);
    } else {
        printf("O ponto (%lf, %lf) não está contido no retângulo!\n", p2.x, p2.y);
    }

    return 0;
}