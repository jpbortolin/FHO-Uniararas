#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Comparador de 2 palavras
*/

int main()
{
    char palavra1[30];
    char palavra2[30];
    bool igual = true;

    printf("Informe a 1ª palavra: \n");
    scanf("%s", palavra1);
    printf("Informe a 2ª palavra: \n");
    scanf("%s", palavra2);

    for(int i = 0; palavra1[i] != '\0'; i++) {
        if (palavra1[i] != palavra2[i]) {
            igual = false;
            break; // encerra a execução do 'for' forçadamente!
        }
    }

    if (igual) {
        printf("Palavras iguais!\n");
    }
    else {
        printf("Palavras diferentes!\n");
    }
    
    return 0;
}