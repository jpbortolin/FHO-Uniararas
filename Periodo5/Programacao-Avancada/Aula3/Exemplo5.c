#include <stdio.h>
#include <stdlib.h>


/*
    Enquanto o usuário NÃO digitar 0,
    realize a leitura e imprima o valor na tela
*/


int main()
{
    int opcao = 1;

    do {
        scanf("%d", &opcao);
        printf("Número informado:%d\n", opcao);
    } while (opcao != 0);
    
    return 0;
}