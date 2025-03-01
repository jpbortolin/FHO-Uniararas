#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u, p, r;
    float maior, menor;
    int primeiro = 1;

    for (int i = 1; i <= 4; i++)
    {
        printf("Digite a tensão do equipamento %d (V): ", i);
        scanf("%f", &u);
        printf("Digite a potência do equipamento %d (W): ", i);
        scanf("%f", &p);

        if (p == 0)
        {
            printf("Equipamento %d: Potência inválida! Não é possível calcular a resistência.\n\n", i);
            continue;
        }

        r = (u * u) / p;
        printf("Equipamento %d - Resistência: %.2f ohms\n\n", i, r);

        if (primeiro)
        {
            maior = menor = r;
            primeiro = 0;
        }
        else
        {
            if (r > maior)
                maior = r;

            if (r < menor)
                menor = r;
        }
    }

    if (!primeiro)
    {
        printf("\nMaior resistência: %.2f ohms\n", maior);
        printf("Menor resistência: %.2f ohms\n", menor);
    }
    else
    {
        printf("\nNenhum equipamento válido foi inserido.\n");
    }

    return 0;
}