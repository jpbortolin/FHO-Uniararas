#include <stdio.h>
#include <stdlib.h>


/*
    Enquanto o usuário NÃO digitar 0,
    realize a leitura e imprima o valor na tela
*/


int main()
{
    int opcao = 1;

    while (opcao != 0) {
        printf("Informe o valor: \n");
        scanf("%d", &opcao);
        printf("Valor informado: %d", opcao);
    }
    
    

    return 0;
}
