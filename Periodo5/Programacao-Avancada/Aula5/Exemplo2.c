#include <stdio.h>
#include <stdlib.h>

/*
Realizar a leitura de um nome completo e
contabilizar quantas letras o nome tem
*/

int main()
{
    char nome_completo[50];
    int contador = 0;

    printf("Informe o seu nome completo: ");
    gets(nome_completo); // leitura de textos com espaços -> gets

    //Percorrer o vetor (string) e contabilizar letras
    for (int i = 0; nome_completo[i] != '\0'; i++) {
        if (nome_completo[i] != ' ') {
            contador++;
        }
    }
    
    printf("Quantidade de letras %d \n", contador);

    return 0;
}