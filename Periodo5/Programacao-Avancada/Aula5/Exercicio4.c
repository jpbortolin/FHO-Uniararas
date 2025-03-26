#include <stdio.h>
#include <stdlib.h>

/*
Exercicio 4
*/

int main()
{
    char frase[100];
    int letras = 0;

    printf("Informe a frase: \n");
    fgets(frase, 100, stdin);
    
    for (int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == 'a') {
            frase[i] = 'A';
        }
        else if (frase[i] == 'e') {
            frase[i] = 'E';
        }
        else if (frase[i] == 'i') {
            frase[i] = 'I';
        }
        else if (frase[i] == 'o') {
            frase[i] = 'O';
        }
        else if (frase[i] == 'u') {
            frase[i] = 'U';
        }
    }
    
    printf("A frase com as vogais maiúsculas fica assim: %s\n", frase);

    return 0;
}
