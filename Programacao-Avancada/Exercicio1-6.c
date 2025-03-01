#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
int main()
{
    int i;
    float maiorVolume, raio, volume;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o raio da esfera: ");
        scanf("%f", &raio);

        volume = 4.00 / 3.00 * PI * raio * raio * raio;
        
        printf("Volume da esfera: %.2f \n", volume);

        if (volume > maiorVolume)
        {
            maiorVolume = volume;
        }
    }

    printf("\nO maior volume medido foi de %.2f\n", maiorVolume);

    return 0;
}