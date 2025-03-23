#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Formas de inicializar
    /*char nome[] = "João Pedro";
    char sobrenome[] = {'B', 'o', 'r', 't', 'o', 'l', 'i', 'n', '\0'}; // '\0' é o ultimo caractere que coloca, pois é para o software entender onde parar de exibir

    printf("Nome: %s \t Sobrenome: %s \n", nome, sobrenome);*/

    /*
    Realizar a leitura de um nome completo e
    contabilizar quantas letras o nome tem
    */

    printf("Exemplo 1 \n");
    printf("\n");
    
    char nome_completo[100];

    //Realizando a leitura desse nome;
    scanf("%s", nome_completo); // é limitado até o espaço
    printf("O nome completo é: %s \n", nome_completo);

    getchar(); // limpando o buffer do "scanf" para evitar leituras incorretas
    getchar();

    //Como realizar a leitura completa?
    gets(nome_completo);
    printf("O nome completo é: %s", nome_completo);

    return 0;
}