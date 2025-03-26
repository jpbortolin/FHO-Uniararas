#include <stdio.h>
#include <stdlib.h>

/*
Exercicio 3
*/

int main()
{
    char frase[150];
    int contador = 0;

    printf("Informe a frase: \n");
    fgets(frase, 150, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'A' || frase[i] == 'a' || 
            frase[i] == 'E' || frase[i] == 'e' || 
            frase[i] == 'I' || frase[i] == 'i' || 
            frase[i] == 'O' || frase[i] == 'o' || 
            frase[i] == 'U' || frase[i] == 'u' ) 
        {
            contador++;
        }
    }

    printf("A frase possui %d vogais.\n", contador);

    return 0;
}