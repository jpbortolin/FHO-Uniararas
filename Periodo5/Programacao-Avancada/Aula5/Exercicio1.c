#include <stdio.h>
#include <stdlib.h>

/*
Exercicio 1
*/

int main()
{
    char nome[50];

    printf("Informe o nome: \n");
    scanf("%s", nome);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("Nome: %s\n", nome);
    }

    return 0;
}