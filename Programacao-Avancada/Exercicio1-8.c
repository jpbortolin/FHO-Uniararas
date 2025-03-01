#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u, p, r;

    printf("Digite a tensão (V): ");
    scanf("%f", &u);

    printf("Digite a potência (W): ");
    scanf("%f", &p);

    if (p == 0)
    {
        printf("Potência inválida! Não é possível calcular a resistência.\n");
    }
    else
    {
        r = (u * u) / p;
        printf("A resistência do equipamento é: %.2f ohms\n", r);
    }

    return 0;
}