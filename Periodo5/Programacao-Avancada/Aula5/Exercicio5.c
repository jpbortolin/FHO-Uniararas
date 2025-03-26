#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

/*
Exercicio 5
*/

int main() 
{
    char nome[100];  
    int tamanho = 0;  

    printf("Digite seu nome: \n");
    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = 0;

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') { 
            tamanho++;
        }
    }

    printf("O nome tem %d caracteres \n", tamanho);

    return 0;
}
