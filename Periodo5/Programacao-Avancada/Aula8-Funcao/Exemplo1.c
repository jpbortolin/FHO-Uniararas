#include <stdio.h>
#include <stdlib.h>

// Função SEM parâmetro e SEM retorno
void primeiraFuncao() 
{
    // Todo bloco de código aqui é de escopo da função!

    printf("Nossa primeira função! \n");
    // Pode conter vários blocos de código;
    char opc;
    scanf("%c", &opc);
    segundaFuncao(); // Chamada da outra função!
}

void segundaFuncao() 
{
    printf("Essa é a segunda função! \n");
}


int main()
{
    // Realizamos a chamada no main!
    primeiraFuncao();

    printf("Terminando a execução... \n");

    return 0;
}