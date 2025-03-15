#include <stdio.h>
#include <stdlib.h>

/*
   Dados dois vetores x e y, ambos com N elementos
   determinar o produto escalar desses vetores.
*/

int main()
{
    int n, escalar = 0;

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    //Como sabemos o valor de N (informado)
    int x[n], y[n], r[n];

    for (int i = 0; i < n; i++) {
        printf("X[%d] = ", i+1);
        scanf("%d", &x[i]);

        printf("Y[%d] = ", i+1);
        scanf("%d", &y[i]);
    }
    
    //Manipular os vetores para realizar os cálculos
    for (int i = 0; i < n; i++) {
        r[i] = x[i] * y[i]; //Calculando o vetor resultante
        escalar += r[i]; //Somando os escalares
    }

    printf("O produto escalar é %d\n", escalar);
    

    return 0;
}