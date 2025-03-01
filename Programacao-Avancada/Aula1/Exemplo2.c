#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float n1 = 0, n2 = 0;
    float mediaFinal;

    //Exibindo as informações na tela
    printf("Informe a n1:\n");

    //Leitura das informações
    scanf("%f", &n1);   //para leitura dos dados inteiros
                        //precisamos informar o ENDEREÇO da var
                        //que é obtido pelo &
    
    printf("Informe a n2:\n");
    scanf("%f", &n2);

    //Realizando o calculo
    mediaFinal = (n1 + n2 * 2) / 3;

    printf("A media final é: %f", mediaFinal);





    return 0;
}