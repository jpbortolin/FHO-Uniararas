#include <stdio.h>
#include <stdlib.h>

int main()
{
   float conta[12], soma = 0, media = 0;

   printf("Informe o valor gasto no primeiro ano: ");
   scanf("%f", &conta[0]);

   for (int i = 1; i < 12; i++) {
        if (i%2 == 0) {
            conta[i] = conta[i - 1] * 3;
        }
        else {
            conta[i] = conta[i - 1] * 2;
        }
   }

   printf("O histórico da conta foi:");
   for (int i = 0; i < 12; i++) {
        printf("%.2f \n", conta[i]);
        soma += conta[i];
   }

   media = soma / 12;
   printf("A média geral ao longo dos 12 anos foi: %f\n", media);
   
   
    return 0;
}