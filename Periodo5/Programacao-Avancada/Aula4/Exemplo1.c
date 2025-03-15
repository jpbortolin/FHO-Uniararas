#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Instanciando um vetor numérico
    int vetor_num[5];

    //Atribuindo Valores ao vetor
    vetor_num[0] = 1;
    vetor_num[1] = 2;
    vetor_num[2] = 3;
    vetor_num[3] = 4;

    printf("Primeiro elemento: %d\n" , vetor_num[0]);
    printf("Segundo elemento: %d\n" , vetor_num[1]);
    printf("Terceiro elemento: %d\n" , vetor_num[2]);

    //Modificar o valor de um elemento
    printf("Terceiro elemento %d\n", vetor_num[2]);
    vetor_num[2] = 10;
    printf("Terceiro elemento: %d\n", vetor_num[2]);


    //Inicializando vetores - alternativas
    float decimais[4] = {1.5, 3.4, 5.6, 10.0};

    printf("O primeiro é o: %f\n", decimais[0]);


    //Inicializando vetores de caracteres
    char nome[2];
    //Atribuindo um caracter na primeira posicao
    nome[0] = 'J';
    nome[1] = 'O';
    nome[2] = 'A';
    nome[3] = 'O';

    printf("O nome inserido é: %s\n", nome);

    char sobrenome[10] = {'B', 'O', 'R', 'T', 'O', 'L', 'I', 'N'};
    char nome_2[10] = "Pedro";
    char nome_completo[] = "João Pedro Bortolin";

    printf("Nome completo: %s\n", nome_completo);

    return 0;
}