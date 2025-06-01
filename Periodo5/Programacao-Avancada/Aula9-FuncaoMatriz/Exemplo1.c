#include <stdio.h>
#include <stdlib.h>

//Exibição de um cabeçalho
void exibirCabecalho() {
    printf("Essa função é básica\n");
    printf("Curso: Eng de Computação\n");
    printf("Dia: Sexta-feira\n");
    printf("***** Exercício de funções ******\n");
}

//Construir uma função para calcular a média que depende de N1 e N2
void calcularExibirMedia(float n1, float n2) {
    float media = (n1 + n2 * 2) / 3;

    printf("A média final é: %f", media);
}

//Função que manipula variáveis
void leituraExibicaoDeDados() {

    exibirCabecalho();
    printf("\n");

    //Essas variáveis só "existem" nesse escopo
    int idade;
    char nome[50];
    char email[50];
    float nota1, nota2;
    
    printf("Informe a idade:\n");
    scanf("%d", &idade);
    printf("Informe o nome:\n");
    scanf("%s", nome);
    printf("Informe a email:\n");
    scanf("%s", email);

    printf("Insira a nota 1:\n");
    scanf("%f", &nota1);
    printf("Insira a nota 2:\n");
    scanf("%f", &nota2);

    //Chamada da função com parâmetros
    calcularExibirMedia(nota1, nota2);
}


int main()
{
    //Chamada das funções
    leituraExibicaoDeDados();
    return 0;
}