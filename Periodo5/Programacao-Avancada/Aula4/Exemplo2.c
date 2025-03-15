#include <stdio.h>
#include <stdlib.h>

/*
    Peça ao usuário para informar 5 números, salve-os
    em um vetor de inteiros e exiba a soma dos elementos.
*/

int main()
{

    int conjunto[5];
    int soma = 0;

    //Esse laço de repetição é a inicialização do vetor
    for (int i = 0; i < 5; i++) {
        printf("Informe o %d elemento \n", i+1);
        scanf("%d", &conjunto[i]);
    }

    //Esse laço de repetição é a MANIPULAÇÃO dos valores
    for (int i = 0; i < 5; i++) {
        soma += conjunto[i];
        // Ou " soma = soma + conjunto[i];
    }
    
    printf("A somatória é: %d\n", soma);

    return 0;
}