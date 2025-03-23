#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Exercicio 2
*/

int main()
{
    char nome[50];
    int tamanho = strlen(nome);

    printf("Informe uma nome: \n");
    scanf("%s", nome);

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c\n", nome[i]);
    }

    return 0;
}