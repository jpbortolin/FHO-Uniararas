#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Informe o valor de x:\n");
    scanf("%d", &x);

    printf("Informe o valor de y:\n");
    scanf("%d", &y);

    printf("O dobro do primeiro número é: %d \n", x * 2);
    printf("A multiplicação entre o primeiro e o segundo número é: %d \n", x * y);
    printf("O resto da divisão entre o primeiro e o segundo número é: %d \n", x % y);
    printf("A divisão inteira entre o primeiro e o segundo número é: %d \n", x / y);



    return 0;
}