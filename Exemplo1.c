#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Comentario em linha

    /*
        Comentário
        em um bloco
            :)
    */

    //Como exibimos informações na tela
    printf("Hello World!");
    printf("\n"); //pular linhas
    printf("Código de tabulação (tab):\t123456\n");


    //Declarando variáveis
    int numeroInt = 10; //já possui atribuição
    int variavelInt; //não possui atribuição

    float numeroFloat = 6.7; //atribuição de valor float
    float variavelFloat;
    
    char simbolo = 'S'; //atribuiçaõ de um único caracter
    char variavelChar;

    //Exibindo informações da variáveis
    printf("Valor da 1ª variável:%d\n", numeroInt);
    printf("Valor da 2ª variável:%f\n", numeroFloat);
    printf("Valor da 3ª variável:%c\n", simbolo);


    return 0;
}