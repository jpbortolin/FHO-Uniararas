#include <stdio.h>
#include <stdlib.h>

/*
    Structs (registros)
    é um agrupamento de dados (variáveis)
    representados por um mesmo nome.
*/

typedef struct {
    char nome[20];
    int ra;
    float media;
} Aluno;

int main()
{
    //Criando uma variável do tipo Aluno
    Aluno aluno;
    //Preenchendo os 'atributos' de um aluno
    aluno.media = 10.0;
    aluno.ra = 12345;
    //Preenchendo um vetor de caracteres
    scanf("%s", aluno.nome);
    //Exibindo as informações
    printf("Nome do aluno %s\n", aluno.nome);
    printf("RA: %d\n", aluno.ra);
    printf("Media: %f\n", aluno.media);

    //*Criando uma "sala" de alunos *//
    Aluno alunos[3];

    for(int i = 0; i < 3; i++) {
        printf("Informe o nome:\n");
        scanf("%s", alunos[i].nome);
        printf("Informe o ra:\n");
        scanf("%d", &alunos[i].ra);
        printf("Informe a media:\n");
        scanf("%f", &alunos[i].media);
    }

    //Percorrendo o vetor de alunos e exibindo as infos
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("RA: %d\n", alunos[i].ra);
        printf("Media: %f\n", alunos[i].media);
    }

    return 0;
}