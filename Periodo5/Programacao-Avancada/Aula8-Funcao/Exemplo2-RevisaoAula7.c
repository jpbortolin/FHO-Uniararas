#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Exercício 3 - Lista Struct

Faça um programa que represente a estrutura de um aluno, contendo o nome, ra, n1, n2 e média.
Depois, preencha as informações – exceto a média – e, utilizando a N1 e N2, calcule a média do
aluno, atualizando o valor da estrutura. Depois, verifique se ele está ou não aprovado e exiba na
tela.

*/


typedef struct {
    char nome[50];
    float n1, n2, media;
} Aluno;

typedef struct {
    char cod[10];
    Aluno alunos[50];
} Classe;

// Está em escopo global!!!
Classe classe; 

void manipulaClasse()
{
    printf("Informe o código da classe: \n");
    scanf("%s", classe.cod);
    getchar();

    char opc = 'q';

    while (opc != 's') {

        printf("Informe I (para inserir) e B (para buscar): \n");
        scanf("%c", &opc);
        getchar();

        if (opc == 'I' || opc == 'i') {
            for (int i = 0; i < 5; i++) {
            
                printf("Informe o nome completo do %dº aluno: \n", i + 1);
                fgets(classe.alunos[i].nome);

                printf("Informe a N1 e a N2 do %dº aluno: \n", i + 1);
                scanf("%f %f", &classe.alunos[i].n1, &classe.alunos[i].n2);
                getchar();

                // Validando a aprovação do aluno
                if (classe.alunos[i].n1 >= 0 && classe.alunos[i].n1 <= 10 && classe.alunos[i].n2 >= 0 && classe.alunos[i].n2 <= 10) {

                    // Atribuindo valor a variável média do aluno
                    classe.alunos[i].media = (classe.alunos[i].n1 + classe.alunos[i].n2 * 2) / 3;

                    if (classe.alunos[i].media >= 5) {
                        printf("Aprovado com média: %f\n", classe.alunos[i].media);        
                    }
                    else if (classe.alunos[i].media >= 3) {
                        printf("Aluno de RE, com média: %f\n", classe.alunos[i].media);
                    }   
                    else {
                        printf("Reprovado com média: %f\n", classe.alunos[i].media);
                    }
                }
                else {
                    printf("Nota inválida, informe novamente \n");
                    i--; // Decrementa o computador para "voltar" ao aluno
                }
            }
        }
        else if (opc == 'B' || opc == 'b') {
            char nomePesquisado[50];
            printf("Informe o nome do aluno: \n");
            fgets(nomePesquisado);

            // Percorrendo o vetor de alunos
            for(int i = 0; i < 5; i++) {
                if(strcmp(nomePesquisado, classe.alunos[i].nome) == 0) {
                    printf("Nome: %s\n Media Final: %f", classe.alunos[i].nome, classe.alunos);
                    break;
                }
            }
        }
    }
}

int main()
{
    manipulaClasse();

    return 0;
}